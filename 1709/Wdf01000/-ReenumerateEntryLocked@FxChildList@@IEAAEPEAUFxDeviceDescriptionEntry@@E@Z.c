/*
 * XREFs of ?ReenumerateEntryLocked@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C006FD2C
 * Callers:
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C002DA20 (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?ReenumerateEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@@Z @ 0x1C006FCA0 (-ReenumerateEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C00140BC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qqDd @ 0x1C00666C4 (WPP_IFR_SF_qqDd.c)
 */

char __fastcall FxChildList::ReenumerateEntryLocked(
        FxChildList *this,
        FxDeviceDescriptionEntry *Entry,
        unsigned __int8 FromQDR)
{
  _LIST_ENTRY *p_m_ModificationLink; // r9
  char v4; // di
  FxDeviceDescriptionEntry *Flink; // rsi
  _LIST_ENTRY *Blink; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxDevice *m_Pdo; // r8
  const void *_a1; // rdx
  _FX_DRIVER_GLOBALS *v10; // rcx
  FxDevice *v11; // r10
  const void *v12; // rdx
  BOOL _a4; // [rsp+40h] [rbp-18h]

  p_m_ModificationLink = &Entry->m_ModificationLink;
  v4 = 1;
  Flink = (FxDeviceDescriptionEntry *)Entry->m_ModificationLink.Flink;
  if ( Flink == (FxDeviceDescriptionEntry *)&Entry->m_ModificationLink
    && (unsigned int)(Entry->m_DescriptionState - 1) <= 1 )
  {
    if ( !FromQDR )
    {
      Entry->m_ModificationState = ModificationClone;
      Blink = this->m_ModificationListHead.Blink;
      if ( Blink->Flink != &this->m_ModificationListHead )
        __fastfail(3u);
      p_m_ModificationLink->Flink = &this->m_ModificationListHead;
      Entry->m_ModificationLink.Blink = Blink;
      Blink->Flink = p_m_ModificationLink;
      this->m_ModificationListHead.Blink = p_m_ModificationLink;
    }
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      m_Pdo = Entry->m_Pdo;
      _a1 = (const void *)((unsigned __int64)m_Pdo ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_Pdo->m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_qq(
        m_Globals,
        5u,
        0xCu,
        0x14u,
        WPP_FxChildList_cpp_Traceguids,
        _a1,
        m_Pdo->m_DeviceObject.m_DeviceObject);
    }
  }
  else
  {
    v10 = this->m_Globals;
    if ( v10->FxVerboseOn )
    {
      v11 = Entry->m_Pdo;
      _a4 = (unsigned int)(Entry->m_DescriptionState - 1) <= 1;
      v12 = (const void *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v11->m_ObjectSize )
        v12 = 0LL;
      WPP_IFR_SF_qqDd(
        v10,
        5u,
        0xCu,
        0x15u,
        WPP_FxChildList_cpp_Traceguids,
        v12,
        v11->m_DeviceObject.m_DeviceObject,
        Flink == (FxDeviceDescriptionEntry *)p_m_ModificationLink,
        _a4);
    }
    return 0;
  }
  return v4;
}
