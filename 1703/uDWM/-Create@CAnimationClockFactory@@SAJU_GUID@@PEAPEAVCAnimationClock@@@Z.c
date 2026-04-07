/*
 * XREFs of ?Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x1800032C0
 * Callers:
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x180003EC4 (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 * Callees:
 *     ??0CAnimationClock@@QEAA@XZ @ 0x180003D8C (--0CAnimationClock@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationClockFactory::Create(struct _GUID *a1, struct CAnimationClock **a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rax
  CAnimationClock *v5; // rax

  v2 = 0;
  *a2 = 0LL;
  v4 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&GUID_NULL.Data1;
  if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_NULL.Data1 )
    v4 = *(_QWORD *)a1->Data4 - *(_QWORD *)GUID_NULL.Data4;
  if ( v4 )
  {
    v5 = (CAnimationClock *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL))(
                              WPF::g_pProcessHeap,
                              144LL);
    if ( v5 )
      v5 = CAnimationClock::CAnimationClock(v5);
    *a2 = v5;
    if ( !v5 )
    {
      v2 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x27Au);
      if ( *a2 )
      {
        CBaseObject::Release(*a2);
        *a2 = 0LL;
      }
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v2;
}
