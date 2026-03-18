/*
 * XREFs of ?NotifyChannelSuspended@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C01E5358
 * Callers:
 *     ProcessChannelSuspended @ 0x1C01E58D0 (ProcessChannelSuspended.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGVMBUSCHANNEL::NotifyChannelSuspended(struct _EX_RUNDOWN_REF *this)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  struct _EX_RUNDOWN_REF *Count; // rbx
  ULONG_PTR v4; // rcx
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  ExWaitForRundownProtectionRelease(this + 6);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v5, (struct DXGFASTMUTEX *const)&this[7], 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v5);
  v2 = this + 4;
  Count = (struct _EX_RUNDOWN_REF *)this[4].Count;
  while ( Count != v2 )
  {
    v4 = Count[14].Count;
    Count = (struct _EX_RUNDOWN_REF *)Count->Count;
    (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)v4 + 32LL))(v4);
  }
  if ( v5[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v5);
}
