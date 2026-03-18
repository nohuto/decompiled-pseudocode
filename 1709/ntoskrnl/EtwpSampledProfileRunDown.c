/*
 * XREFs of EtwpSampledProfileRunDown @ 0x14074E9E4
 * Callers:
 *     EtwpKernelTraceRundown @ 0x14074CFD4 (EtwpKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x14000F4E0 (EtwpLogKernelEvent.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1400760B0 (KeReleaseMutex.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

void __fastcall EtwpSampledProfileRunDown(__int64 a1, char a2, char a3)
{
  unsigned __int16 v5; // di
  char *v6; // rcx
  unsigned int v7; // eax
  __int16 *v8; // rsi
  __int64 v9; // r15
  int v10; // r14d
  int v11; // eax
  const WCHAR *v12; // rcx
  const WCHAR *v13; // rdx
  __int64 v14; // rax
  unsigned int v15; // r8d
  __int64 v16; // rdx
  int v17; // [rsp+38h] [rbp-29h] BYREF
  _DWORD v18[4]; // [rsp+40h] [rbp-21h] BYREF
  const WCHAR *v19; // [rsp+50h] [rbp-11h]
  _DWORD v20[4]; // [rsp+58h] [rbp-9h] BYREF
  _QWORD v21[3]; // [rsp+68h] [rbp+7h] BYREF
  int v22; // [rsp+80h] [rbp+1Fh]
  int v23; // [rsp+84h] [rbp+23h]

  v5 = 3914 - (a2 != 0);
  if ( a3 )
  {
    v6 = (char *)&EtwpProfileObject;
    v7 = 1;
  }
  else
  {
    KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
    v7 = EtwpPmcProfile;
    v6 = (char *)qword_14035EC28;
    if ( !EtwpPmcProfile )
    {
LABEL_14:
      KeReleaseMutex(&EtwpGroupMaskMutex, 0);
      return;
    }
  }
  v8 = (__int16 *)(v6 + 240);
  v9 = v7;
  do
  {
    v10 = *v8;
    v17 = 0;
    v18[0] = v10;
    if ( ((int (__fastcall *)(__int64, __int64, _DWORD *, int *))off_140354F48[0])(1LL, 24LL, v18, &v17) < 0 )
    {
      v11 = 0;
      v12 = L"Unknown";
    }
    else
    {
      v11 = v18[2];
      v12 = v19;
    }
    v20[1] = v11;
    v13 = L"Unknown";
    v20[2] = v11;
    v20[0] = v10;
    if ( v12 )
      v13 = v12;
    v21[0] = v20;
    v14 = -1LL;
    v21[1] = 12LL;
    do
      ++v14;
    while ( v13[v14] );
    v15 = *(_DWORD *)a1;
    v21[2] = v13;
    v16 = *(_QWORD *)(a1 + 2256);
    v22 = 2 * v14 + 2;
    v23 = 0;
    EtwpLogKernelEvent((__int64)v21, v16, v15, 2u, v5, 0x401903u);
    v8 += 124;
    --v9;
  }
  while ( v9 );
  if ( !a3 )
    goto LABEL_14;
}
