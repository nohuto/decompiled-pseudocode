/*
 * XREFs of ??1CInteraction@@MEAA@XZ @ 0x18004B464
 * Callers:
 *     ??_GCInteraction@@MEAAPEAXI@Z @ 0x18004B53C (--_GCInteraction@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x18004B300 (-UpdateInputSink@CInteraction@@QEAAJPEAX@Z.c)
 *     ?UnRegisterNotifiers@CInteraction@@UEAAXXZ @ 0x18004B390 (-UnRegisterNotifiers@CInteraction@@UEAAXXZ.c)
 *     ??1CInteractionProcessor@@QEAA@XZ @ 0x1800B2968 (--1CInteractionProcessor@@QEAA@XZ.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_x @ 0x18013BE18 (Template_x.c)
 */

void __fastcall CInteraction::~CInteraction(CInteraction *this)
{
  struct CResource **v1; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  v1 = (struct CResource **)((char *)this + 8);
  *(_QWORD *)this = &CInteraction::`vftable'{for `IInteractionResource'};
  *((_QWORD *)this + 1) = &CInteraction::`vftable'{for `CResource'};
  AcquireSRWLockExclusive(&CInteraction::s_InteractionHandleTableLock);
  memset_0((char *)qword_18023D788 + (unsigned int)(*((_DWORD *)this + 328) * Size), 0, (unsigned int)Size);
  *((_DWORD *)this + 328) = 0;
  ReleaseSRWLockExclusive(&CInteraction::s_InteractionHandleTableLock);
  CInteraction::UnRegisterNotifiers(v1);
  CInteraction::UpdateInputSink(this, 0LL);
  if ( (*((_BYTE *)this + 201) & 1) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)&CCommonRegistryData::m_cForceDisableInteractionOutputPrediction);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_x(v3, &INTERACTION_DESTROYED, v1);
  v4 = *((_QWORD *)this + 168);
  if ( v4 )
  {
    *((_QWORD *)this + 168) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  CInteractionProcessor::~CInteractionProcessor((CInteraction *)((char *)this + 360));
  v5 = *((_QWORD *)this + 26);
  if ( v5 )
  {
    *((_QWORD *)this + 26) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  }
  CResource::~CResource((CResource *)v1);
}
