/*
 * XREFs of ?HampSystemGenerateLegacyHangReport@@YAJPEAKKW4_HAM_TERMINATE_REASON@@@Z @ 0x180041624
 * Callers:
 *     ?HampSystemReportActivationHang@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAKKW4_HAM_TERMINATE_REASON@@@Z @ 0x180041C2C (-HampSystemReportActivationHang@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAKKW4_HAM_TERMINATE_REASON@@@Z.c)
 *     ?HampSystemReportQuiesceHang@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAKKW4_HAM_TERMINATE_REASON@@@Z @ 0x180041C5C (-HampSystemReportQuiesceHang@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAKKW4_HAM_TERMINATE_REASON@@@Z.c)
 * Callees:
 *     ?RmpSystemOpenProcess@@YAJPEAPEAXKK@Z @ 0x180011CC8 (-RmpSystemOpenProcess@@YAJPEAPEAXKK@Z.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032300 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     CempHeapFree @ 0x180033D80 (CempHeapFree.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?HampSystemPopulateLegacyHangReportParameters@@YAJPEAX0W4_HAM_TERMINATE_REASON@@@Z @ 0x1800418D8 (-HampSystemPopulateLegacyHangReportParameters@@YAJPEAX0W4_HAM_TERMINATE_REASON@@@Z.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 *     ?RmpSystemCloseHandle@@YAXPEAX@Z @ 0x180061608 (-RmpSystemCloseHandle@@YAXPEAX@Z.c)
 */

__int64 __fastcall HampSystemGenerateLegacyHangReport(unsigned int *a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // rsi
  SIZE_T v6; // rbx
  HANDLE *Heap; // rax
  HANDLE *v8; // rdi
  int v9; // ebx
  __int64 i; // r14
  HRESULT v11; // ebx
  HANDLE *v12; // rbx
  __int64 v13; // r14
  HANDLE *v14; // r14
  HREPORT phReportHandle; // [rsp+40h] [rbp-C0h] BYREF
  struct _WER_EXCEPTION_INFORMATION pExceptionParam; // [rsp+48h] [rbp-B8h] BYREF
  _WER_SUBMIT_RESULT pSubmitResult; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v19[2]; // [rsp+60h] [rbp-A0h] BYREF
  _WER_REPORT_INFORMATION pReportInformation; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v21[40]; // [rsp+910h] [rbp+810h] BYREF
  struct _WER_DUMP_CUSTOM_OPTIONS pDumpCustomOptions; // [rsp+9B0h] [rbp+8B0h] BYREF

  phReportHandle = 0LL;
  v5 = a2;
  v6 = 8 * a2;
  Heap = (HANDLE *)HampAllocateHeap(v6);
  v8 = Heap;
  if ( !Heap )
  {
    v9 = -1073741801;
    goto LABEL_25;
  }
  memset_0(Heap, 0, v6);
  for ( i = 0LL; (unsigned int)i < (unsigned int)v5; ++a1 )
  {
    v9 = RmpSystemOpenProcess(&v8[i], 0x450u, *a1);
    if ( v9 == -1073741790 )
      v9 = RmpSystemOpenProcess(&v8[i], 0x1040u, *a1);
    if ( v9 < 0 && !(_DWORD)i )
      goto LABEL_19;
    i = (unsigned int)(i + 1);
  }
  memset_0(&pReportInformation, 0, sizeof(pReportInformation));
  pReportInformation.dwSize = 2208;
  pReportInformation.hProcess = *v8;
  v11 = WerReportCreate(L"WindowsPhone8ExecManService", WerReportCritical, &pReportInformation, &phReportHandle);
  if ( v11 >= 0 )
  {
    v9 = HampSystemPopulateLegacyHangReportParameters(phReportHandle, *v8, a3);
    if ( v9 < 0 )
      goto LABEL_19;
    memset_0(&pDumpCustomOptions, 0, sizeof(pDumpCustomOptions));
    pDumpCustomOptions.dwSize = 552;
    memset_0(v21, 0, 0x98uLL);
    v21[0] = -1073741420;
    *(&pExceptionParam.bClientPointers + 1) = 0;
    pExceptionParam.bClientPointers = 0;
    v19[1] = 0LL;
    v19[0] = v21;
    pExceptionParam.pExceptionPointers = (PEXCEPTION_POINTERS)v19;
    if ( (_DWORD)v5 )
    {
      v12 = v8;
      v13 = v5;
      do
      {
        if ( *v12 )
          WerReportAddDump(phReportHandle, *v12, 0LL, WerDumpTypeTriageDump, &pExceptionParam, &pDumpCustomOptions, 0);
        ++v12;
        --v13;
      }
      while ( v13 );
    }
    v11 = WerReportSubmit(phReportHandle, WerConsentNotAsked, 4u, &pSubmitResult);
    if ( v11 >= 0 )
    {
      v9 = 0;
      goto LABEL_19;
    }
  }
  v9 = v11 | 0xC0000000;
LABEL_19:
  if ( (_DWORD)v5 )
  {
    v14 = v8;
    do
    {
      if ( *v14 )
        RmpSystemCloseHandle(*v14);
      ++v14;
      --v5;
    }
    while ( v5 );
  }
  CempHeapFree(v8);
LABEL_25:
  if ( phReportHandle )
    WerReportCloseHandle(phReportHandle);
  return (unsigned int)v9;
}
