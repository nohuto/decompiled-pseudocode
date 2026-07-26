/*
 * XREFs of ?LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z @ 0x1C00B26AC
 * Callers:
 *     ??$AddBindingToSet@UNDIS_BIND_PROTOCOL_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x1C00B1634 (--$AddBindingToSet@UNDIS_BIND_PROTOCOL_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@A.c)
 *     ??$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Z @ 0x1C00B9058 (--$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEA.c)
 *     ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x1C00F17A4 (-CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV-$KRef@UNDIS_BIND_PRO.c)
 * Callees:
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00B5090 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall NDIS_BIND_LINK_BASE::LinkToDriver(NDIS_BIND_LINK_BASE *this, struct NDIS_BIND_DRIVER_BASE *a2)
{
  __int64 v3; // rbx
  _LIST_ENTRY *p_BindLinks; // rsi
  _LIST_ENTRY *p_DriverLinkage; // rdi
  _LIST_ENTRY *Flink; // rax
  KLockHolder v8; // [rsp+20h] [rbp-28h] BYREF

  v3 = qword_1C00926E0 + 8;
  v8.m_Lock = (KPushLockBase *)(qword_1C00926E0 + 8);
  KeEnterCriticalRegion();
  v8.m_Region.m_Entered = 1;
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  p_BindLinks = &a2->BindLinks;
  v8.m_State = Exclusive;
  p_DriverLinkage = &this->DriverLinkage;
  Flink = p_BindLinks->Flink;
  if ( p_BindLinks->Flink->Blink != p_BindLinks )
    __fastfail(3u);
  p_DriverLinkage->Flink = Flink;
  p_DriverLinkage->Blink = p_BindLinks;
  Flink->Blink = p_DriverLinkage;
  p_BindLinks->Flink = p_DriverLinkage;
  KLockHolder::~KLockHolder(&v8);
}
