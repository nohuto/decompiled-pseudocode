/*
 * XREFs of ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C002DA20
 * Callers:
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C002B380 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0002270 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qq @ 0x1C00140BC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_ @ 0x1C0015D18 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C0027E80 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x1C002DD64 (-CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     memmove @ 0x1C003D680 (memmove.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 *     WPP_IFR_SF_dd @ 0x1C0065BD8 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qid @ 0x1C0066834 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qqq @ 0x1C00689B0 (WPP_IFR_SF_qqq.c)
 *     ?CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C006F180 (-CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z.c)
 *     ?ReenumerateEntryLocked@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C006FD2C (-ReenumerateEntryLocked@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@E@Z.c)
 */

__int64 __fastcall FxChildList::ProcessBusRelations(FxChildList *this, _DEVICE_RELATIONS **DeviceRelations)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int64 *p_m_ListLock; // rsi
  unsigned __int8 v5; // bp
  char v6; // r13
  KIRQL v7; // al
  int v8; // r15d
  _LIST_ENTRY *p_m_DescriptionListHead; // r14
  _LIST_ENTRY *Flink; // rdi
  KIRQL v11; // r12
  _DEVICE_RELATIONS **v12; // r12
  _DEVICE_RELATIONS *v13; // rax
  _FX_DRIVER_GLOBALS *v14; // r14
  int v15; // r15d
  KIRQL v16; // al
  KIRQL v17; // di
  unsigned __int8 v18; // r8
  _LIST_ENTRY *v19; // rdi
  int v21; // eax
  size_t v22; // rax
  PVOID PoolWithTag; // rax
  void *v24; // rdi
  _LIST_ENTRY *v25; // rdi
  _DWORD *v26; // r12
  _FX_DRIVER_GLOBALS *v27; // rsi
  _LIST_ENTRY *v28; // rbp
  _LIST_ENTRY *v29; // rdi
  void *v30; // rbx
  _DEVICE_RELATIONS *v31; // rbx
  _LIST_ENTRY *v32; // rax
  _LIST_ENTRY *_a2; // rcx
  const void *_a1; // rax
  unsigned __int8 CurrentIrql; // al
  _LIST_ENTRY *v36; // rdx
  const void *v37; // rcx
  _LIST_ENTRY *v38; // r15
  _FX_DRIVER_GLOBALS *v39; // rdi
  _LIST_ENTRY *v40; // r13
  _LIST_ENTRY *v41; // rdx
  const void *v42; // rcx
  const void *v43; // rcx
  _FX_DRIVER_GLOBALS *v44; // rdi
  bool v45; // cc
  const void *v46; // rcx
  const void *v47; // rcx
  void *_a3; // r12
  _LIST_ENTRY *v49; // r15
  int v50; // eax
  _LIST_ENTRY *v51; // rdx
  const void *v52; // rcx
  _LIST_ENTRY *v53; // rdx
  const void *v54; // rcx
  _LIST_ENTRY *v55; // rdx
  const void *v56; // rcx
  _LIST_ENTRY *v57; // rdx
  const void *v58; // rcx
  const void *v59; // rcx
  size_t v60; // r8
  _LIST_ENTRY *v61; // rdx
  const void *v62; // rcx
  _LIST_ENTRY *v63; // rdx
  const void *v64; // rcx
  _LIST_ENTRY *v65; // rax
  _LIST_ENTRY *Blink; // rcx
  void (__fastcall *m_EvtAddressDescriptionCleanup)(WDFCHILDLIST__ *, _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *); // rax
  _LIST_ENTRY *v68; // rsi
  unsigned __int64 v69; // rcx
  void (__fastcall *m_EvtIdentificationDescriptionCleanup)(WDFCHILDLIST__ *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *); // rax
  unsigned __int64 v71; // rcx
  unsigned int v72; // edi
  unsigned __int8 invalidateRelations[8]; // [rsp+40h] [rbp-88h] BYREF
  size_t Size; // [rsp+48h] [rbp-80h]
  _FX_DRIVER_GLOBALS *globals; // [rsp+50h] [rbp-78h]
  void *Src; // [rsp+58h] [rbp-70h]
  PVOID P; // [rsp+60h] [rbp-68h]
  _LIST_ENTRY *v78; // [rsp+68h] [rbp-60h]
  _LIST_ENTRY freeHead; // [rsp+70h] [rbp-58h] BYREF
  char v80; // [rsp+D0h] [rbp+8h]
  KIRQL v81; // [rsp+D0h] [rbp+8h]
  char v83; // [rsp+E8h] [rbp+20h]

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      FxVerifierDbgBreakPoint(m_Globals);
    }
  }
  P = 0LL;
  freeHead.Blink = &freeHead;
  p_m_ListLock = &this->m_ListLock;
  v5 = 0;
  freeHead.Flink = &freeHead;
  v6 = 1;
  globals = this->m_Globals;
  v83 = 0;
  invalidateRelations[0] = 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  v8 = 0;
  this->m_State = ListLockedForEnum;
  p_m_DescriptionListHead = &this->m_DescriptionListHead;
  v80 = 0;
  Flink = this->m_DescriptionListHead.Flink;
  v11 = v7;
  if ( Flink != &this->m_DescriptionListHead )
  {
    v5 = 0;
    do
    {
      v21 = (int)Flink[1].Flink;
      if ( v21 > 0 )
      {
        if ( v21 > 2 )
        {
          if ( v21 == 4 )
          {
            if ( globals->FxVerboseOn )
            {
              v36 = Flink[4].Flink;
              v37 = (const void *)((unsigned __int64)v36 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !WORD1(v36->Blink) )
                v37 = 0LL;
              WPP_IFR_SF_qq(globals, 5u, 0xCu, 0x22u, WPP_FxChildList_cpp_Traceguids, v37, v36[9].Flink);
            }
            v80 = 1;
          }
        }
        else
        {
          ++v8;
        }
      }
      Flink = Flink->Flink;
    }
    while ( Flink != p_m_DescriptionListHead );
    p_m_ListLock = &this->m_ListLock;
    v6 = 1;
  }
  KeReleaseSpinLock(p_m_ListLock, v11);
  v12 = DeviceRelations;
  v13 = *DeviceRelations;
  Src = *DeviceRelations;
  if ( v8 )
  {
    if ( v13 )
      v8 += v13->Count;
  }
  else
  {
    if ( !v80 )
    {
      v14 = globals;
      if ( globals->FxVerboseOn )
      {
        v43 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v43 = 0LL;
        WPP_IFR_SF_q(globals, 5u, 0xCu, 0x24u, WPP_FxChildList_cpp_Traceguids, v43);
      }
LABEL_6:
      v6 = 0;
      v15 = -1073741637;
      goto $Done_20;
    }
    if ( v13 )
    {
      v38 = p_m_DescriptionListHead->Flink;
      if ( p_m_DescriptionListHead->Flink == p_m_DescriptionListHead )
      {
        v14 = globals;
      }
      else
      {
        v39 = globals;
        do
        {
          v40 = v38->Flink;
          if ( LODWORD(v38[1].Flink) == 4 )
          {
            v41 = v38[4].Flink;
            v42 = (const void *)((unsigned __int64)v41 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !WORD1(v41->Blink) )
              v42 = 0LL;
            WPP_IFR_SF_qq(v39, 4u, 0xCu, 0x23u, WPP_FxChildList_cpp_Traceguids, v42, v41[9].Flink);
            LODWORD(v38[1].Flink) = 3;
            BYTE3(v38[5].Flink) = 1;
          }
          v38 = v40;
        }
        while ( v40 != p_m_DescriptionListHead );
        v12 = DeviceRelations;
        p_m_ListLock = &this->m_ListLock;
        v14 = v39;
      }
      goto LABEL_6;
    }
  }
  if ( v8 )
    v22 = 8LL * (unsigned int)(v8 - 1) + 16;
  else
    v22 = 4LL;
  Size = v22;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v22, globals->Tag);
  P = PoolWithTag;
  v24 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, Size);
    if ( Src && *(_DWORD *)Src )
    {
      if ( globals->FxVerboseOn )
      {
        v59 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v59 = 0LL;
        WPP_IFR_SF_qid(globals, 5u, 0xCu, 0x2Cu, WPP_FxChildList_cpp_Traceguids, v59, (__int64)Src, *(_DWORD *)Src);
      }
      if ( *(_DWORD *)Src )
        v60 = 8LL * (unsigned int)(*(_DWORD *)Src - 1) + 16;
      else
        v60 = 4LL;
      memmove(v24, Src, v60);
    }
    v25 = p_m_DescriptionListHead->Flink;
    v15 = 0;
    if ( p_m_DescriptionListHead->Flink != p_m_DescriptionListHead )
    {
      v26 = P;
      v27 = globals;
      while ( 1 )
      {
        v28 = v25->Flink;
        if ( LODWORD(v25[1].Flink) == 1 )
        {
          if ( v27->FxVerboseOn )
            WPP_IFR_SF_(v27, 5u, 0xCu, 0x2Du, WPP_FxChildList_cpp_Traceguids);
          if ( !FxChildList::CreateDevice(this, (FxDeviceDescriptionEntry *)v25, invalidateRelations) )
            goto LABEL_32;
          v32 = v25[4].Flink;
          _a2 = v32[9].Flink;
          if ( WORD1(v32->Blink) )
            _a1 = (const void *)((unsigned __int64)v32 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            _a1 = 0LL;
          WPP_IFR_SF_qq(v27, 4u, 0xCu, 0x2Eu, WPP_FxChildList_cpp_Traceguids, _a1, _a2);
        }
        else if ( LODWORD(v25[1].Flink) != 2 )
        {
          if ( LODWORD(v25[1].Flink) == 4 )
          {
            v61 = v25[4].Flink;
            v62 = (const void *)((unsigned __int64)v61 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !WORD1(v61->Blink) )
              v62 = 0LL;
            WPP_IFR_SF_qq(v27, 4u, 0xCu, 0x30u, WPP_FxChildList_cpp_Traceguids, v62, v61[9].Flink);
            LODWORD(v25[1].Flink) = 3;
            BYTE3(v25[5].Flink) = 1;
          }
          goto LABEL_32;
        }
        if ( v27->FxVerboseOn )
        {
          v63 = v25[4].Flink;
          v64 = (const void *)((unsigned __int64)v63 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !WORD1(v63->Blink) )
            v64 = 0LL;
          WPP_IFR_SF_qq(v27, 5u, 0xCu, 0x2Fu, WPP_FxChildList_cpp_Traceguids, v64, v63[9].Flink);
        }
        v29 = v25[4].Flink[9].Flink;
        ObfReferenceObject(v29);
        *(_QWORD *)&v26[2 * (*v26)++ + 2] = v29;
LABEL_32:
        v25 = v28;
        if ( v28 == p_m_DescriptionListHead )
        {
          v5 = invalidateRelations[0];
          p_m_ListLock = &this->m_ListLock;
          v6 = 1;
          v12 = DeviceRelations;
          break;
        }
      }
    }
    v14 = globals;
  }
  else
  {
    v44 = globals;
    WPP_IFR_SF_d(globals, 2u, 0xCu, 0x25u, WPP_FxChildList_cpp_Traceguids, v8);
    ++this->m_EnumRetries;
    v6 = 0;
    v45 = this->m_EnumRetries <= 3u;
    v15 = -1073741637;
    LODWORD(Size) = -1073741637;
    if ( v45 )
    {
      v5 = 1;
      v83 = 1;
    }
    else
    {
      if ( v80 )
      {
        v46 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v46 = 0LL;
        WPP_IFR_SF_q(v44, 2u, 0xCu, 0x26u, WPP_FxChildList_cpp_Traceguids, v46);
      }
      v47 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v47 = 0LL;
      WPP_IFR_SF_qd(v44, 2u, 0xCu, 0x27u, WPP_FxChildList_cpp_Traceguids, v47, 3);
    }
    if ( Src )
    {
      if ( p_m_DescriptionListHead->Flink != p_m_DescriptionListHead )
      {
        _a3 = Src;
        v49 = p_m_DescriptionListHead->Flink;
        v6 = 0;
        do
        {
          v78 = v49->Flink;
          v50 = (int)v49[1].Flink;
          if ( v50 == 2 )
          {
            v53 = v49[4].Flink;
            v54 = (const void *)((unsigned __int64)v53 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !WORD1(v53->Blink) )
              v54 = 0LL;
            WPP_IFR_SF_qqq(v44, 4u, 0xCu, 0x28u, WPP_FxChildList_cpp_Traceguids, v54, v53[9].Flink, _a3);
            v81 = KeAcquireSpinLockRaiseToDpc(p_m_ListLock);
            if ( this->m_StaticList )
            {
              v57 = v49[4].Flink;
              v58 = (const void *)((unsigned __int64)v57 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !WORD1(v57->Blink) )
                v58 = 0LL;
              WPP_IFR_SF_qq(v44, 3u, 0xCu, 0x2Au, WPP_FxChildList_cpp_Traceguids, v58, v57[9].Flink);
            }
            else if ( FxChildList::ReenumerateEntryLocked(this, (FxDeviceDescriptionEntry *)v49, 1u) )
            {
              v55 = v49[4].Flink;
              v56 = (const void *)((unsigned __int64)v55 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !WORD1(v55->Blink) )
                v56 = 0LL;
              WPP_IFR_SF_qq(v44, 4u, 0xCu, 0x29u, WPP_FxChildList_cpp_Traceguids, v56, v55[9].Flink);
              FxChildList::CloneEntryLocked(this, &freeHead, (FxDeviceDescriptionEntry *)v49, 1u);
            }
            LODWORD(v49[1].Flink) = 3;
            BYTE3(v49[5].Flink) = 1;
            KeReleaseSpinLock(p_m_ListLock, v81);
          }
          else if ( v50 == 4 )
          {
            v51 = v49[4].Flink;
            v52 = (const void *)((unsigned __int64)v51 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !WORD1(v51->Blink) )
              v52 = 0LL;
            WPP_IFR_SF_qq(v44, 4u, 0xCu, 0x2Bu, WPP_FxChildList_cpp_Traceguids, v52, v51[9].Flink);
            LODWORD(v49[1].Flink) = 3;
            BYTE3(v49[5].Flink) = 1;
          }
          v49 = v78;
        }
        while ( v78 != p_m_DescriptionListHead );
        v5 = v83;
        v15 = Size;
        v12 = DeviceRelations;
      }
      v14 = v44;
    }
    else
    {
      v15 = -1073741670;
      v14 = v44;
    }
  }
$Done_20:
  v16 = KeAcquireSpinLockRaiseToDpc(p_m_ListLock);
  this->m_State = ListUnlocked;
  v17 = v16;
  FxChildList::ProcessModificationsLocked(this, &freeHead);
  if ( v15 >= 0 )
    this->m_EnumRetries = 0;
  KeReleaseSpinLock(p_m_ListLock, v17);
  if ( v5 )
    IoInvalidateDeviceRelations(this->m_DeviceBase->m_PhysicalDevice.m_DeviceObject, BusRelations);
  while ( 1 )
  {
    v19 = freeHead.Flink;
    if ( freeHead.Flink == &freeHead )
      break;
    if ( freeHead.Flink->Blink != &freeHead
      || (v65 = freeHead.Flink->Flink, freeHead.Flink->Flink->Blink != freeHead.Flink) )
    {
      __fastfail(3u);
    }
    freeHead.Flink = freeHead.Flink->Flink;
    v65->Blink = &freeHead;
    v19->Blink = v19;
    v19->Flink = v19;
    if ( this->m_StaticList && (LODWORD(v19[1].Flink) == 1 || LODWORD(v19[3].Blink) == 5) )
    {
      Blink = v19[1].Blink->Blink;
      if ( LODWORD(v19[3].Blink) == 5 )
        LODWORD(v19[3].Blink) = 0;
      LODWORD(v19[1].Flink) = 3;
      FxPkgPnp::PnpProcessEvent((FxPkgPnp *)Blink[40].Blink, PnpEventRemove, v18);
    }
    else
    {
      m_EvtAddressDescriptionCleanup = this->m_EvtAddressDescriptionCleanup;
      v68 = v19[1].Blink;
      if ( m_EvtAddressDescriptionCleanup && v19[2].Flink )
      {
        v69 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !this->m_ObjectSize )
          v69 = 0LL;
        ((void (__fastcall *)(unsigned __int64))m_EvtAddressDescriptionCleanup)(v69);
      }
      m_EvtIdentificationDescriptionCleanup = this->m_EvtIdentificationDescriptionCleanup;
      if ( m_EvtIdentificationDescriptionCleanup && v68 )
      {
        v71 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !this->m_ObjectSize )
          v71 = 0LL;
        m_EvtIdentificationDescriptionCleanup(
          (WDFCHILDLIST__ *)v71,
          (_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *)v68);
      }
      ((void (__fastcall *)(_LIST_ENTRY *, _LIST_ENTRY *, __int64, const char *))v19[4].Blink->Flink[1].Flink)(
        v19[4].Blink,
        v19,
        77LL,
        "minkernel\\wdf\\framework\\kmdf\\src\\core\\fxchildlist.cpp");
      FxPoolFree(v19);
    }
  }
  if ( v6 )
  {
    v30 = Src;
    if ( Src )
    {
      if ( v14->FxVerboseOn )
        WPP_IFR_SF_q(v14, 5u, 0xCu, 0x31u, WPP_FxChildList_cpp_Traceguids, Src);
      ExFreePoolWithTag(v30, 0);
    }
    v31 = (_DEVICE_RELATIONS *)P;
    if ( v15 < 0 && P )
    {
      v72 = 0;
      if ( *(_DWORD *)P )
      {
        do
          ObfDereferenceObject(v31->Objects[v72++]);
        while ( v72 < v31->Count );
      }
      ExFreePoolWithTag(v31, 0);
      v31 = 0LL;
    }
    *v12 = v31;
  }
  return (unsigned int)v15;
}
