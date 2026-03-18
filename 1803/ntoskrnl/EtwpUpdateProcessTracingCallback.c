/*
 * XREFs of EtwpUpdateProcessTracingCallback @ 0x1407A5DC0
 * Callers:
 *     EtwpUpdatePerProcessTracing @ 0x1407A5C94 (EtwpUpdatePerProcessTracing.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpUpdateProcessTracingCallback(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  __int64 v4; // rdi
  struct _EX_RUNDOWN_REF *v5; // rbx
  char v6; // r9
  unsigned int v7; // edx
  __int64 v8; // rax
  __int64 *v9; // rcx
  __int16 v10; // r8
  _BYTE v12[48]; // [rsp+28h] [rbp-50h] BYREF

  v4 = *(_QWORD *)(BugCheckParameter1 + 1016);
  if ( v4 )
  {
    v5 = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 760);
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760)) )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v12);
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
      KiUnstackDetachProcess((__int64)v12, 0LL);
      ExReleaseRundownProtection(v5);
    }
  }
  return 0LL;
}
