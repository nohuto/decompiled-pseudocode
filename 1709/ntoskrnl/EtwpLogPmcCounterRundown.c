/*
 * XREFs of EtwpLogPmcCounterRundown @ 0x14074D464
 * Callers:
 *     EtwpStopLoggerInstance @ 0x1404F0374 (EtwpStopLoggerInstance.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x14074CCA4 (EtwpCheckLoggerAccessAndDoRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x14000F4E0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

void __fastcall EtwpLogPmcCounterRundown(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned int v4; // ebx
  unsigned int v5; // r9d
  _DWORD *v6; // r8
  const WCHAR *v7; // rdx
  __int64 v8; // rax
  int v9; // ecx
  __int64 v10; // rax
  unsigned int v11; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v12[3]; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int *v13; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v14[41]; // [rsp+48h] [rbp-B8h] BYREF

  v2 = *(_QWORD *)(a1 + 2152);
  if ( *(_DWORD *)(v2 + 44) )
  {
    v4 = 0;
    v11 = *(_DWORD *)(v2 + 44);
    v5 = v11;
    v13 = &v11;
    v14[0] = 4LL;
    if ( v11 )
    {
      do
      {
        v12[0] = 0;
        v6 = &v14[3 * v4 + 17];
        *v6 = *(_DWORD *)(v2 + 4LL * v4);
        if ( ((int (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *))off_140354F48[0])(1LL, 24LL, v6, v12) < 0 )
          v7 = L"Unknown";
        else
          v7 = (const WCHAR *)v14[3 * v4 + 19];
        v8 = -1LL;
        do
          ++v8;
        while ( v7[v8] );
        v5 = v11;
        v9 = 2 * v8 + 2;
        v10 = 2LL * ++v4;
        v14[v10 - 1] = v7;
        LODWORD(v14[v10]) = v9;
        HIDWORD(v14[v10]) = 0;
      }
      while ( v4 < v5 );
    }
    EtwpLogKernelEvent((__int64)&v13, EtwpHostSiloState, a2, v5 + 1, 0xF30u, 0x401802u);
  }
}
