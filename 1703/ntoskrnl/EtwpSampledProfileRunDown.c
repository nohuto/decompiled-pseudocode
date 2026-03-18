/*
 * XREFs of EtwpSampledProfileRunDown @ 0x140711320
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140434EC0 (EtwpKernelTraceRundown.c)
 * Callees:
 *     KeReleaseMutex @ 0x1400DDCF0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     EtwpLogKernelEvent @ 0x1400F22E0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

void __fastcall EtwpSampledProfileRunDown(unsigned int a1, char a2, char a3)
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
  int v15; // [rsp+38h] [rbp-29h] BYREF
  _DWORD v16[4]; // [rsp+40h] [rbp-21h] BYREF
  const WCHAR *v17; // [rsp+50h] [rbp-11h]
  _DWORD v18[4]; // [rsp+58h] [rbp-9h] BYREF
  _QWORD v19[3]; // [rsp+68h] [rbp+7h] BYREF
  int v20; // [rsp+80h] [rbp+1Fh]
  int v21; // [rsp+84h] [rbp+23h]

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
    v6 = (char *)qword_140345208;
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
    v15 = 0;
    v16[0] = v10;
    if ( ((int (__fastcall *)(__int64, __int64, _DWORD *, int *))off_14033C718[0])(1LL, 24LL, v16, &v15) < 0 )
    {
      v11 = 0;
      v12 = L"Unknown";
    }
    else
    {
      v11 = v16[2];
      v12 = v17;
    }
    v18[1] = v11;
    v13 = L"Unknown";
    v18[2] = v11;
    v18[0] = v10;
    if ( v12 )
      v13 = v12;
    v19[0] = v18;
    v14 = -1LL;
    v19[1] = 12LL;
    do
      ++v14;
    while ( v13[v14] );
    v19[2] = v13;
    v20 = 2 * v14 + 2;
    v21 = 0;
    EtwpLogKernelEvent((__int64)v19, EtwpHostSiloState, a1, 2u, v5, 0x401903u);
    v8 += 124;
    --v9;
  }
  while ( v9 );
  if ( !a3 )
    goto LABEL_14;
}
