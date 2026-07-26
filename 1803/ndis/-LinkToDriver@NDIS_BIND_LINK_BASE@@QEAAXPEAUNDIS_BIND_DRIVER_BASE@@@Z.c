/*
 * XREFs of ?LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z @ 0x1C00C2AE0
 * Callers:
 *     ??$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Z @ 0x1C00C2950 (--$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEA.c)
 *     ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x1C00FD7B4 (-CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV-$KRef@UNDIS_BIND_PRO.c)
 * Callees:
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BEE50 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BEEB4 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall NDIS_BIND_LINK_BASE::LinkToDriver(NDIS_BIND_LINK_BASE *this, struct NDIS_BIND_DRIVER_BASE *a2)
{
  _LIST_ENTRY *p_BindLinks; // rdi
  _LIST_ENTRY *p_DriverLinkage; // rbx
  _LIST_ENTRY *Flink; // rax
  KLockHolder v7; // [rsp+20h] [rbp-28h] BYREF

  v7.m_State = Unlocked;
  v7.m_Region.m_Entered = 0;
  v7.m_Lock = (KPushLockBase *)(qword_1C00996D8 + 8);
  KLockHolder::AcquireExclusive(&v7);
  p_BindLinks = &a2->BindLinks;
  p_DriverLinkage = &this->DriverLinkage;
  Flink = p_BindLinks->Flink;
  if ( p_BindLinks->Flink->Blink != p_BindLinks )
    __fastfail(3u);
  p_DriverLinkage->Flink = Flink;
  p_DriverLinkage->Blink = p_BindLinks;
  Flink->Blink = p_DriverLinkage;
  p_BindLinks->Flink = p_DriverLinkage;
  KLockHolder::~KLockHolder(&v7);
}
