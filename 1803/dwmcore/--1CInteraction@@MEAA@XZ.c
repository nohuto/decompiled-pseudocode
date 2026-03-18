/*
 * XREFs of ??1CInteraction@@MEAA@XZ @ 0x1800285B0
 * Callers:
 *     ??_GCInteraction@@MEAAPEAXI@Z @ 0x1800286B8 (--_GCInteraction@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x1800282F0 (-UpdateInputSink@CInteraction@@QEAAJPEAX@Z.c)
 *     ??1CInteractionProcessor@@QEAA@XZ @ 0x180028CB0 (--1CInteractionProcessor@@QEAA@XZ.c)
 *     ??$ReleaseInterface@V?$CWeakReference@VCVisual@@@@@@YAXAEAPEAV?$CWeakReference@VCVisual@@@@@Z @ 0x180034E00 (--$ReleaseInterface@V-$CWeakReference@VCVisual@@@@@@YAXAEAPEAV-$CWeakReference@VCVisual@@@@@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0p @ 0x18016CFBC (McTemplateU0p.c)
 */

void __fastcall CInteraction::~CInteraction(CInteraction *this)
{
  CResource *v1; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v1 = (CInteraction *)((char *)this + 8);
  *(_QWORD *)this = &CInteraction::`vftable'{for `IInteractionResource'};
  *((_QWORD *)this + 1) = &CInteraction::`vftable'{for `CResource'};
  AcquireSRWLockExclusive(&CInteraction::s_InteractionHandleTableLock);
  memset_0((char *)qword_1802D4368 + (unsigned int)(*((_DWORD *)this + 424) * Size), 0, (unsigned int)Size);
  *((_DWORD *)this + 424) = 0;
  ReleaseSRWLockExclusive(&CInteraction::s_InteractionHandleTableLock);
  ReleaseInterface<CWeakReference<CVisual>>((char *)this + 104);
  CInteraction::UpdateInputSink(this, 0LL);
  if ( *((char *)this + 184) < 0 )
    _InterlockedDecrement((volatile signed __int32 *)&CCommonRegistryData::m_cForceDisableInteractionOutputPrediction);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0p(v3, &INTERACTION_DESTROYED, v1);
  v4 = *((_QWORD *)this + 216);
  if ( v4 )
  {
    *((_QWORD *)this + 216) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  CInteractionProcessor::~CInteractionProcessor((CInteraction *)((char *)this + 344));
  v5 = *((_QWORD *)this + 34);
  if ( v5 )
  {
    *((_QWORD *)this + 34) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v5 + 8) + 16LL))(v5 + 8);
  }
  v6 = *((_QWORD *)this + 33);
  if ( v6 )
  {
    *((_QWORD *)this + 33) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 24);
  if ( v7 )
  {
    *((_QWORD *)this + 24) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  }
  CResource::~CResource(v1);
}
