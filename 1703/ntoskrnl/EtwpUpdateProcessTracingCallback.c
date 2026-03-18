/*
 * XREFs of EtwpUpdateProcessTracingCallback @ 0x140709ED0
 * Callers:
 *     EtwpUpdatePerProcessTracing @ 0x140709DA0 (EtwpUpdatePerProcessTracing.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpUpdateProcessTracingCallback(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  __int64 v4; // rdi
  char v5; // r9
  unsigned int v6; // edx
  __int64 v7; // rax
  __int64 *v8; // rcx
  __int16 v9; // r8
  $5BC46E0569261879018906DEC3127961 v11; // [rsp+28h] [rbp-40h] BYREF

  v4 = *(_QWORD *)(BugCheckParameter1 + 1016);
  if ( v4 && ExAcquireRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760)) )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v11);
    v5 = *(_BYTE *)(a2 + 4);
    v6 = *(_DWORD *)a2;
    if ( v5 )
      _interlockedbittestandset((volatile signed __int32 *)(v4 + 888), v6);
    else
      _interlockedbittestandreset((volatile signed __int32 *)(v4 + 888), v6);
    v7 = 0LL;
    v8 = *(__int64 **)(BugCheckParameter1 + 1064);
    if ( v8 )
    {
      v9 = *((_WORD *)v8 + 4);
      if ( v9 == 332 || v9 == 452 )
        v7 = *v8;
    }
    if ( v7 )
    {
      if ( v5 )
        _interlockedbittestandset((volatile signed __int32 *)(v7 + 576), v6);
      else
        _interlockedbittestandreset((volatile signed __int32 *)(v7 + 576), v6);
    }
    KiUnstackDetachProcess(&v11, 0LL);
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760));
  }
  return 0LL;
}
