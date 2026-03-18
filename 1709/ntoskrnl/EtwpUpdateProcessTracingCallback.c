/*
 * XREFs of EtwpUpdateProcessTracingCallback @ 0x1407440E0
 * Callers:
 *     EtwpUpdatePerProcessTracing @ 0x140743FB4 (EtwpUpdatePerProcessTracing.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpUpdateProcessTracingCallback(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  __int64 v4; // rsi
  struct _EX_RUNDOWN_REF *v5; // rbx
  char v6; // r9
  unsigned int v7; // edx
  __int64 v8; // rax
  __int64 *v9; // rcx
  __int16 v10; // r8
  $709EDFC2F9E0D4565D6AA3C4377BC643 v12; // [rsp+28h] [rbp-50h] BYREF

  v4 = *(_QWORD *)(BugCheckParameter1 + 1016);
  if ( v4 )
  {
    v5 = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 760);
    if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760)) )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v12);
      v6 = *(_BYTE *)(a2 + 4);
      v7 = *(_DWORD *)a2;
      if ( v6 )
        _interlockedbittestandset((volatile signed __int32 *)(v4 + 888), v7);
      else
        _interlockedbittestandreset((volatile signed __int32 *)(v4 + 888), v7);
      v8 = 0LL;
      v9 = *(__int64 **)(BugCheckParameter1 + 1064);
      if ( v9 )
      {
        v10 = *((_WORD *)v9 + 4);
        if ( v10 == 332 || v10 == 452 )
          v8 = *v9;
      }
      if ( v8 )
      {
        if ( v6 )
          _interlockedbittestandset((volatile signed __int32 *)(v8 + 576), v7);
        else
          _interlockedbittestandreset((volatile signed __int32 *)(v8 + 576), v7);
      }
      KiUnstackDetachProcess(&v12, 0LL);
      ExReleaseRundownProtection_0(v5);
    }
  }
  return 0LL;
}
