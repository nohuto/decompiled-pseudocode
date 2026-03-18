/*
 * XREFs of MmPerfLogSessionRundown @ 0x1406B66B8
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140434EC0 (EtwpKernelTraceRundown.c)
 * Callees:
 *     MmGetNextSession @ 0x140071180 (MmGetNextSession.c)
 *     EtwpLogKernelEvent @ 0x1400F22E0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

__int64 __fastcall MmPerfLogSessionRundown(unsigned int a1, int a2)
{
  unsigned __int16 v3; // bx
  void *i; // rcx
  __int64 v5; // rdx
  __int64 NextSession; // rax
  void *v7; // rdi
  __int64 *v9; // [rsp+30h] [rbp-38h] BYREF
  int v10; // [rsp+38h] [rbp-30h]
  int v11; // [rsp+3Ch] [rbp-2Ch]
  __int64 v12; // [rsp+40h] [rbp-28h] BYREF
  int v13; // [rsp+48h] [rbp-20h]

  v9 = &v12;
  v10 = 12;
  v11 = 0;
  v3 = (a2 != 0) + 588;
  for ( i = 0LL; ; i = v7 )
  {
    NextSession = MmGetNextSession(i);
    v7 = (void *)NextSession;
    if ( !NextSession )
      break;
    v5 = *(_QWORD *)(NextSession + 1024);
    v13 = *(_DWORD *)(v5 + 8);
    v12 = v5;
    EtwpLogKernelEvent((__int64)&v9, EtwpHostSiloState, a1, 1u, v3, 0x401803u);
  }
  return 0LL;
}
