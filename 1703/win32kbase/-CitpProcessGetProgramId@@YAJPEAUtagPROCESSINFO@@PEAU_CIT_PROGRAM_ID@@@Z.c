/*
 * XREFs of ?CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z @ 0x1C00539D4
 * Callers:
 *     ?CitpProcessEnsureContext@@YAJPEAUtagPROCESSINFO@@@Z @ 0x1C00534C8 (-CitpProcessEnsureContext@@YAJPEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?CitpFileNameFromPath@@YAPEBGPEBG_K@Z @ 0x1C00539AC (-CitpFileNameFromPath@@YAPEBGPEBG_K@Z.c)
 *     ?CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z @ 0x1C0086CF4 (-CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z.c)
 *     ?CitpProgramIdCalculateHash@@YA_KPEBU_CIT_PROGRAM_ID@@@Z @ 0x1C008B84C (-CitpProgramIdCalculateHash@@YA_KPEBU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpParametersCheckHostingProcess@@YAEPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x1C008DA10 (-CitpParametersCheckHostingProcess@@YAEPEAU_CIT_PARAMETERS@@PEBG@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     _wcsupr @ 0x1C009DC88 (_wcsupr.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C0154590 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpProcessGetProgramId(struct tagPROCESSINFO *a1, struct _CIT_PROGRAM_ID *a2)
{
  wchar_t *v3; // rsi
  unsigned __int16 *v4; // r14
  PACCESS_TOKEN v5; // r12
  int v6; // ebx
  const char *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  void *ProcessSectionBaseAddress; // r13
  unsigned int v11; // r8d
  int v12; // ecx
  int v13; // eax
  const char *v14; // rdx
  unsigned __int16 *v15; // rax
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  const unsigned __int16 *v18; // rax
  __int64 ProcessPeb; // rdx
  __int64 v20; // r8
  CTouchProcessor *v21; // rcx
  int v22; // eax
  const unsigned __int16 *v23; // rdx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r8
  PIMAGE_NT_HEADERS v26; // rax
  DWORD TimeDateStamp; // ebx
  DWORD CheckSum; // r13d
  struct _CIT_PROGRAM_ID *v29; // rcx
  unsigned __int64 v30; // rax
  char v32; // [rsp+30h] [rbp-248h]
  wchar_t *String; // [rsp+38h] [rbp-240h] BYREF
  unsigned __int16 *v34; // [rsp+40h] [rbp-238h] BYREF
  int v35; // [rsp+48h] [rbp-230h]
  PUNICODE_STRING pImageFileName; // [rsp+50h] [rbp-228h] BYREF
  int v37; // [rsp+58h] [rbp-220h]
  DWORD v38; // [rsp+5Ch] [rbp-21Ch]
  DWORD v39; // [rsp+60h] [rbp-218h]
  size_t Size; // [rsp+68h] [rbp-210h] BYREF
  size_t v41; // [rsp+70h] [rbp-208h] BYREF
  PACCESS_TOKEN v42; // [rsp+78h] [rbp-200h]
  struct _CIT_PROGRAM_ID *v43; // [rsp+80h] [rbp-1F8h]
  int v44; // [rsp+98h] [rbp-1E0h]
  const unsigned __int16 *v45; // [rsp+A0h] [rbp-1D8h]
  _BYTE v46[144]; // [rsp+B0h] [rbp-1C8h] BYREF
  _BYTE Src[256]; // [rsp+140h] [rbp-138h] BYREF

  v43 = a2;
  v32 = 0;
  pImageFileName = 0LL;
  v3 = 0LL;
  String = 0LL;
  v4 = 0LL;
  v34 = 0LL;
  v5 = 0LL;
  v42 = 0LL;
  v38 = 0;
  v39 = 0;
  if ( (*((_DWORD *)a1 + 3) & 0x1000) != 0 )
  {
    v6 = -1073741431;
    goto LABEL_47;
  }
  ProcessSectionBaseAddress = (void *)PsGetProcessSectionBaseAddress(*(_QWORD *)a1);
  if ( !ProcessSectionBaseAddress )
  {
    v6 = -1073741637;
    v11 = 3360;
LABEL_5:
    v12 = v6;
LABEL_6:
    CitpLogFailureWorker(v12, v7, v11);
    goto LABEL_47;
  }
  if ( a1 != (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(v8, v7, v9) )
  {
    KeAttachProcess(*(PRKPROCESS *)a1);
    v32 = 1;
  }
  if ( (*((_DWORD *)a1 + 192) & 0x30) == 0x10 )
  {
    v5 = PsReferencePrimaryToken(*(PEPROCESS *)a1);
    v42 = v5;
    Size = 256LL;
    v41 = 130LL;
    v13 = RtlQueryPackageIdentity(v5, Src, &Size, v46, &v41, 0LL);
    if ( v13 < 0 )
    {
      CitpLogFailureWorker(v13, v14, 0xD55u);
    }
    else
    {
      v3 = (wchar_t *)Win32AllocPool(Size, 0x49637355u);
      String = v3;
      v15 = (unsigned __int16 *)Win32AllocPool(v41, 0x49637355u);
      v4 = v15;
      v34 = v15;
      if ( !v3 || !v15 )
      {
        v6 = -1073741670;
        v11 = 3402;
        goto LABEL_5;
      }
      memmove(v3, Src, Size);
      wcsupr(v3);
      memmove(v4, v46, v41);
    }
  }
  if ( v3 )
  {
LABEL_44:
    v26 = RtlImageNtHeader(ProcessSectionBaseAddress);
    TimeDateStamp = v26->FileHeader.TimeDateStamp;
    v38 = TimeDateStamp;
    CheckSum = v26->OptionalHeader.CheckSum;
    v39 = CheckSum;
    if ( v4 )
      wcsupr(v4);
    v29 = v43;
    *(_QWORD *)v43 = v3;
    v3 = 0LL;
    *((_QWORD *)v29 + 1) = v4;
    v4 = 0LL;
    *((_DWORD *)v29 + 6) = TimeDateStamp;
    *((_DWORD *)v29 + 7) = CheckSum;
    *((_DWORD *)v29 + 8) = (*((_DWORD *)a1 + 192) >> 4) & 3;
    v30 = CitpProgramIdCalculateHash(v29);
    *((_QWORD *)v43 + 2) = v30;
    v6 = 0;
    goto LABEL_47;
  }
  v16 = SeLocateProcessImageName(*(PEPROCESS *)a1, &pImageFileName);
  v6 = v16;
  if ( v16 < 0 )
  {
    pImageFileName = 0LL;
    v11 = 3426;
    v12 = v16;
    goto LABEL_6;
  }
  if ( !pImageFileName->Length )
  {
    v6 = -1073741637;
    goto LABEL_47;
  }
  v6 = CitpStringDuplicate(&String, pImageFileName->Buffer, (unsigned __int64)pImageFileName->Length >> 1);
  v35 = v6;
  v3 = String;
  if ( v6 >= 0 )
  {
    wcsupr(String);
    v17 = -1LL;
    do
      ++v17;
    while ( v3[v17] );
    v18 = CitpFileNameFromPath(v3, v17);
    if ( CitpParametersCheckHostingProcess((struct _CIT_PARAMETERS *)&unk_1C018E858, v18) )
    {
      ProcessPeb = PsGetProcessPeb(*(_QWORD *)a1);
      if ( (ProcessPeb & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v20 = *(_QWORD *)(ProcessPeb + 32);
      if ( (v20 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v21 = (CTouchProcessor *)(v20 + 112);
      if ( v20 + 112 >= (unsigned __int64)W32UserProbeAddress )
        v21 = W32UserProbeAddress;
      v22 = *(_DWORD *)v21;
      v37 = v22;
      v44 = v22;
      v23 = (const unsigned __int16 *)*((_QWORD *)v21 + 1);
      v45 = v23;
      if ( ((unsigned __int8)v23 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v24 = (unsigned __int64)v23 + (unsigned __int16)v22 + 2;
      if ( v24 >= (unsigned __int64)W32UserProbeAddress
        || (unsigned __int16)v22 > HIWORD(v37)
        || (v22 & 1) != 0
        || v24 <= (unsigned __int64)v23 )
      {
        *(_BYTE *)W32UserProbeAddress = 0;
      }
      if ( (v22 & 0xFFFEu) <= 0x208 )
        v25 = (unsigned __int64)(unsigned __int16)v22 >> 1;
      else
        v25 = 260LL;
      v6 = CitpStringDuplicate(&v34, v23, v25);
      v35 = v6;
      if ( v6 < 0 )
      {
        v3 = String;
        v4 = v34;
        goto LABEL_47;
      }
      v3 = String;
      v4 = v34;
    }
    goto LABEL_44;
  }
LABEL_47:
  if ( v5 )
    PsDereferencePrimaryToken(v5);
  if ( pImageFileName )
    ExFreePoolWithTag(pImageFileName, 0);
  if ( v3 )
    Win32FreePool((__int64)v3);
  if ( v4 )
    Win32FreePool((__int64)v4);
  if ( v32 )
    KeDetachProcess();
  return (unsigned int)v6;
}
