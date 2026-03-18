/*
 * XREFs of ?EndScan@FxChildList@@QEAAXPEAK@Z @ 0x1C0002420
 * Callers:
 *     ?EndIteration@FxChildList@@QEAAXPEAU_WDF_CHILD_LIST_ITERATOR@@@Z @ 0x1C0002588 (-EndIteration@FxChildList@@QEAAXPEAU_WDF_CHILD_LIST_ITERATOR@@@Z.c)
 *     imp_WdfChildListEndScan @ 0x1C003A2C0 (imp_WdfChildListEndScan.c)
 * Callees:
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0002220 (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0002270 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qq @ 0x1C00140BC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C001D59C (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     ?MarkDescriptionNotPresentWorker@FxChildList@@IEAAXPEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C006F7DC (-MarkDescriptionNotPresentWorker@FxChildList@@IEAAXPEAUFxDeviceDescriptionEntry@@E@Z.c)
 *     ?MarkModificationNotPresentWorker@FxChildList@@IEAAXPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@@Z @ 0x1C006F830 (-MarkModificationNotPresentWorker@FxChildList@@IEAAXPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntr.c)
 *     WPP_IFR_SF_qll @ 0x1C0070314 (WPP_IFR_SF_qll.c)
 */

void __fastcall FxChildList::EndScan(FxChildList *this, unsigned int *ScanTag)
{
  unsigned __int64 *p_m_ListLock; // r14
  KIRQL v4; // al
  unsigned __int8 v5; // dl
  unsigned __int16 v6; // r9
  KIRQL v7; // r15
  unsigned int _a2; // r8d
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxChildList *Flink; // rdi
  _LIST_ENTRY *i; // rdi
  unsigned __int8 v12; // r8
  FxChildList *v13; // rbp
  unsigned int *p_m_ScanCount; // rdi
  _FX_DRIVER_GLOBALS *v15; // rcx
  _LIST_ENTRY *v16; // rax
  const void *_a1; // rdx
  _FX_DRIVER_GLOBALS *v18; // rcx
  __int64 v19; // r8
  const void *v20; // rdx
  _QWORD *v21; // rdi
  __int64 v22; // rcx
  _QWORD *v23; // rax
  _LIST_ENTRY *v24; // rcx
  _LIST_ENTRY **p_Blink; // rdx
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v27; // r8
  _FX_DRIVER_GLOBALS *v28; // rcx
  const void *v29; // rdx
  _FX_DRIVER_GLOBALS *v30; // rcx
  _DEVICE_OBJECT *SafePhysicalDevice; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-58h]
  _LIST_ENTRY freeHead; // [rsp+40h] [rbp-38h] BYREF

  freeHead.Blink = &freeHead;
  p_m_ListLock = &this->m_ListLock;
  freeHead.Flink = &freeHead;
  v4 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  --this->m_ScanCount;
  v7 = v4;
  _a2 = this->m_ScanCount;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 5u, 0xCu, 0xCu, WPP_FxChildList_cpp_Traceguids, _a1, _a2);
  }
  if ( !this->m_ScanCount )
  {
    Flink = (FxChildList *)this->m_ModificationListHead.Flink;
    if ( Flink != (FxChildList *)&this->m_ModificationListHead )
    {
      do
      {
        v13 = (FxChildList *)Flink->__vftable;
        p_m_ScanCount = &Flink[-1].m_ScanCount;
        v15 = this->m_Globals;
        if ( v15->FxVerboseOn )
          WPP_IFR_SF_qll(v15, v5, _a2, v6, traceGuid, p_m_ScanCount, p_m_ScanCount[14], p_m_ScanCount[4]);
        if ( !*((_BYTE *)p_m_ScanCount + 80) )
        {
          if ( p_m_ScanCount[14] == 1 )
          {
            FxChildList::MarkModificationNotPresentWorker(this, &freeHead, (FxDeviceDescriptionEntry *)p_m_ScanCount);
          }
          else if ( p_m_ScanCount[14] == 4 )
          {
            v18 = this->m_Globals;
            if ( v18->FxVerboseOn )
            {
              v19 = *((_QWORD *)p_m_ScanCount + 8);
              v20 = (const void *)(v19 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !*(_WORD *)(v19 + 10) )
                v20 = 0LL;
              WPP_IFR_SF_qq(v18, 5u, 0xCu, 0xEu, WPP_FxChildList_cpp_Traceguids, v20, *(const void **)(v19 + 144));
            }
            p_m_ScanCount[14] = 3;
            v21 = p_m_ScanCount + 10;
            v22 = *v21;
            if ( *(_QWORD **)(*v21 + 8LL) != v21 || (v23 = (_QWORD *)v21[1], (_QWORD *)*v23 != v21) )
              __fastfail(3u);
            *v23 = v22;
            *(_QWORD *)(v22 + 8) = v23;
            v21[1] = v21;
            *v21 = v21;
          }
        }
        Flink = v13;
      }
      while ( v13 != (FxChildList *)&this->m_ModificationListHead );
    }
    for ( i = this->m_DescriptionListHead.Flink; i != &this->m_DescriptionListHead; i = i->Flink )
    {
      v16 = i;
      if ( BYTE2(i[5].Flink) )
      {
        v24 = i->Flink;
        p_Blink = &i->Blink;
        i = i->Blink;
        if ( v16->Flink->Blink != v16 || i->Flink != v16 )
          __fastfail(3u);
        i->Flink = v24;
        v24->Blink = i;
        Blink = freeHead.Blink;
        if ( freeHead.Blink->Flink != &freeHead )
          __fastfail(3u);
        *p_Blink = freeHead.Blink;
        v16->Flink = &freeHead;
        Blink->Flink = v16;
        freeHead.Blink = v16;
      }
      else if ( (unsigned int)(LODWORD(i[1].Flink) - 1) <= 1 && !LOBYTE(i[5].Flink) )
      {
        v27 = i[4].Flink;
        if ( v27 )
        {
          v28 = this->m_Globals;
          if ( v28->FxVerboseOn )
          {
            v29 = (const void *)((unsigned __int64)v27 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !WORD1(v27->Blink) )
              v29 = 0LL;
            WPP_IFR_SF_qq(v28, 5u, 0xCu, 0xFu, WPP_FxChildList_cpp_Traceguids, v29, v27[9].Flink);
          }
        }
        else
        {
          v30 = this->m_Globals;
          if ( v30->FxVerboseOn )
            WPP_IFR_SF_q(v30, 5u, 0xCu, 0x10u, WPP_FxChildList_cpp_Traceguids, i);
        }
        FxChildList::MarkDescriptionNotPresentWorker(this, (FxDeviceDescriptionEntry *)i, 1u);
      }
    }
    FxChildList::ProcessModificationsLocked(this, &freeHead);
    if ( this->m_InvalidationNeeded )
    {
      SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(this->m_Device);
      if ( SafePhysicalDevice )
      {
        this->m_InvalidationNeeded = 0;
        IoInvalidateDeviceRelations(SafePhysicalDevice, BusRelations);
      }
    }
    KeSetEvent(&this->m_ScanEvent.m_Event, 0, 0);
  }
  KeReleaseSpinLock(p_m_ListLock, v7);
  FxChildList::DrainFreeListHead(this, &freeHead, v12);
}
