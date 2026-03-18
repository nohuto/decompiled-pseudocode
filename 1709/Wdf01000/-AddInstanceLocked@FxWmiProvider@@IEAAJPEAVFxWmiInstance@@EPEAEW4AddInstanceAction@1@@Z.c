/*
 * XREFs of ?AddInstanceLocked@FxWmiProvider@@IEAAJPEAVFxWmiInstance@@EPEAEW4AddInstanceAction@1@@Z @ 0x1C0030EEC
 * Callers:
 *     ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C00308C0 (-AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmi.c)
 *     ?AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z @ 0x1C003105C (-AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 */

__int64 __fastcall FxWmiProvider::AddInstanceLocked(
        FxWmiProvider *this,
        unsigned __int64 Instance,
        unsigned __int8 NoErrorIfPresent,
        unsigned __int8 *Update,
        FxWmiProvider::AddInstanceAction Action)
{
  _LIST_ENTRY *v5; // r10
  _LIST_ENTRY *p_m_InstanceListHead; // rax
  _LIST_ENTRY *Flink; // rcx
  unsigned __int16 v10; // ax
  const void *_a1; // rdx
  unsigned int v12; // ebx
  unsigned __int16 v13; // ax
  const void *v14; // rdx
  _LIST_ENTRY *Blink; // rcx

  v5 = (_LIST_ENTRY *)(Instance + 120);
  *Update = 0;
  if ( v5->Flink == v5 )
  {
    if ( this->m_Parent->m_RegisteredState == WmiRegistered )
    {
      *Update = 1;
    }
    else if ( this->m_Parent->m_RegisteredState == WmiCleanedUp )
    {
      v13 = *(_WORD *)(Instance + 10);
      v14 = (const void *)(Instance ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v13 )
        v14 = 0LL;
      v12 = -1073741436;
      WPP_IFR_SF_qd(this->m_Globals, 4u, 0x12u, 0x11u, WPP_FxWmiProvider_cpp_Traceguids, v14, -1073741436);
      return v12;
    }
    p_m_InstanceListHead = &this->m_InstanceListHead;
    if ( Action )
    {
      Flink = p_m_InstanceListHead->Flink;
      if ( p_m_InstanceListHead->Flink->Blink != p_m_InstanceListHead )
        __fastfail(3u);
      v5->Flink = Flink;
      *(_QWORD *)(Instance + 128) = p_m_InstanceListHead;
      Flink->Blink = v5;
      p_m_InstanceListHead->Flink = v5;
    }
    else
    {
      Blink = this->m_InstanceListHead.Blink;
      if ( Blink->Flink != p_m_InstanceListHead )
        __fastfail(3u);
      v5->Flink = p_m_InstanceListHead;
      *(_QWORD *)(Instance + 128) = Blink;
      Blink->Flink = v5;
      this->m_InstanceListHead.Blink = v5;
    }
    ++this->m_NumInstances;
    this->m_RemoveGuid = 0;
    return 0LL;
  }
  if ( NoErrorIfPresent )
    return 0LL;
  v10 = *(_WORD *)(Instance + 10);
  _a1 = (const void *)(Instance ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v10 )
    _a1 = 0LL;
  v12 = -1073741808;
  WPP_IFR_SF_qd(this->m_Globals, 2u, 0x12u, 0x10u, WPP_FxWmiProvider_cpp_Traceguids, _a1, -1073741808);
  return v12;
}
