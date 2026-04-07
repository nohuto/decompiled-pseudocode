/*
 * XREFs of ?Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x1800026B8
 * Callers:
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x180003228 (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 * Callees:
 *     ??0CAnimationClock@@QEAA@XZ @ 0x1800030F0 (--0CAnimationClock@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationClockFactory::Create(struct _GUID *a1, struct CAnimationClock **a2)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  CAnimationClock *v5; // rax

  *a2 = 0LL;
  v3 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&GUID_NULL.Data1;
  if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_NULL.Data1 )
    v3 = *(_QWORD *)a1->Data4 - *(_QWORD *)GUID_NULL.Data4;
  v4 = v3 == 0 ? 0x80070057 : 0;
  if ( !v3 )
    goto LABEL_7;
  v5 = (CAnimationClock *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL))(
                            WPF::g_pProcessHeap,
                            144LL);
  if ( v5 )
    v5 = CAnimationClock::CAnimationClock(v5);
  *a2 = v5;
  if ( !v5 )
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x27Au);
  }
  else
  {
LABEL_7:
    if ( (v4 & 0x80000000) == 0 )
      return v4;
  }
  if ( *a2 )
  {
    CBaseObject::Release(*a2);
    *a2 = 0LL;
  }
  return v4;
}
