/*
 * XREFs of ?AllocateEnumInfo@FxPkgPnp@@QEAAJXZ @ 0x1C0029418
 * Callers:
 *     ?Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C00227C0 (-Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?AllocateEnumInfo@FxDevice@@UEAAJXZ @ 0x1C007D550 (-AllocateEnumInfo@FxDevice@@UEAAJXZ.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003CA08 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003CBC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

__int64 __fastcall FxPkgPnp::AllocateEnumInfo(FxPkgPnp *this, __int64 a2, unsigned __int8 a3)
{
  unsigned __int8 v4; // bp
  unsigned __int8 v5; // r8
  _KEVENT *v6; // rax
  _KEVENT *v7; // rsi
  unsigned int v8; // ebx
  FxVerifierLock *v10; // rcx
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *v13; // rcx
  FxVerifierLock *v14; // rcx
  void *Caller; // [rsp+58h] [rbp+0h]
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  if ( this->m_EnumInfo )
    return 0LL;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v10 = (FxVerifierLock *)this[-1].m_DeviceSurpriseRemoval.__vftable) != 0LL )
  {
    FxVerifierLock::Lock(v10, &irql, a3);
    v4 = irql;
  }
  else
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  if ( !this->m_EnumInfo )
  {
    v6 = (_KEVENT *)FxPoolAllocator(
                      this->m_Globals,
                      &this->m_Globals->FxPoolFrameworks,
                      ExDefaultNonPagedPoolType,
                      0x88uLL,
                      this->m_Globals->Tag,
                      Caller);
    v7 = v6;
    if ( v6 )
    {
      v6[1].Header.Type = 0;
      KeInitializeEvent(v6, SynchronizationEvent, 1u);
      v7[1].Header.Type = 1;
      v7[1].Header.WaitListHead.Flink = 0LL;
      LODWORD(v7[3].Header.WaitListHead.Blink) = 0;
      WORD2(v7[3].Header.WaitListHead.Blink) = 0;
      BYTE6(v7[3].Header.WaitListHead.Blink) = 0;
      v7[3].Header.WaitListHead.Flink = 0LL;
      v7[2].Header.WaitListHead.Flink = (_LIST_ENTRY *)&v7[2];
      *(_QWORD *)&v7[2].Header.Lock = v7 + 2;
      *(_QWORD *)&v7[3].Header.Lock = (char *)v7 + 64;
      v7[2].Header.WaitListHead.Blink = (_LIST_ENTRY *)&v7[2].Header.WaitListHead.Blink;
      v7[1].Header.WaitListHead.Blink = (_LIST_ENTRY *)&FxObject::`vftable'.WdfVerifierAllocateFailCount;
      v7[5].Header.Type = 0;
      KeInitializeEvent(v7 + 4, SynchronizationEvent, 1u);
      v7[5].Header.Type = 1;
      v7[5].Header.WaitListHead.Flink = 0LL;
    }
    else
    {
      v7 = 0LL;
    }
    this->m_EnumInfo = (FxEnumerationInfo *)v7;
    if ( !v7 )
    {
      v8 = -1073741670;
      m_DeviceBase = this->m_DeviceBase;
      m_ObjectSize = m_DeviceBase->m_ObjectSize;
      v13 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        v13 = 0LL;
      WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0x49u, WPP_FxPkgPnp_cpp_Traceguids, v13, -1073741670);
      goto LABEL_10;
    }
    KeInitializeEvent(v7, SynchronizationEvent, 1u);
    v7[1].Header.Type = 1;
    KeInitializeEvent(v7 + 4, SynchronizationEvent, 1u);
    v7[5].Header.Type = 1;
  }
  v8 = 0;
LABEL_10:
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v14 = (FxVerifierLock *)this[-1].m_DeviceSurpriseRemoval.__vftable) != 0LL )
    FxVerifierLock::Unlock(v14, v4, v5);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, v4);
  return v8;
}
