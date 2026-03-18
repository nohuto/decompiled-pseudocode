/*
 * XREFs of ?NotifyChannelStarted@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C01E52D8
 * Callers:
 *     ProcessChannelStarted @ 0x1C01E58A0 (ProcessChannelStarted.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGVMBUSCHANNEL::NotifyChannelStarted(struct _EX_RUNDOWN_REF *this)
{
  struct _EX_RUNDOWN_REF *Count; // rdi
  ULONG_PTR v3; // rcx
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v4, (struct DXGFASTMUTEX *const)&this[7], 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v4);
  Count = (struct _EX_RUNDOWN_REF *)this[4].Count;
  while ( Count != &this[4] )
  {
    v3 = Count[14].Count;
    Count = (struct _EX_RUNDOWN_REF *)Count->Count;
    (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)v3 + 40LL))(v3);
  }
  ExReInitializeRundownProtection(this + 6);
  if ( v4[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v4);
}
