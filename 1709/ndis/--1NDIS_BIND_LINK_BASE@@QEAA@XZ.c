/*
 * XREFs of ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C00ABCE8
 * Callers:
 *     ??_G?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@QEAAPEAXI@Z @ 0x1C0039340 (--_G-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wist.c)
 *     ??1?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@QEAA@XZ @ 0x1C00393A0 (--1-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@w.c)
 *     ??_G?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@QEAAPEAXI@Z @ 0x1C00393F0 (--_G-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@.c)
 *     ?UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00B07D8 (-UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$unique_ptr@UND.c)
 *     KRegKey::QueryValueMultisz__lambda_7dba7dab9bc3060b810d705c95db8e00___lambda_ec8793c82e0ed6bcee09c56382ecb370___ @ 0x1C00B154C (KRegKey--QueryValueMultisz__lambda_7dba7dab9bc3060b810d705c95db8e00___lambda_ec8793c82e0ed6bcee0.c)
 *     ?reset@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@AEAAXXZ @ 0x1C00B3DAC (-reset@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_LI.c)
 *     ?reserve@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x1C00B3E94 (-reserve@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_.c)
 *     ?moveElements@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@AEAAXKKK@Z @ 0x1C00B3F7C (-moveElements@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROT.c)
 *     ?reset@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@AEAAXXZ @ 0x1C00BC080 (-reset@-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK@@.c)
 *     ??$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Z @ 0x1C00BE674 (--$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEA.c)
 *     _lambda_9de55ca7b1f0fe2b3bf40ef5b9f15f31_::operator() @ 0x1C00BEC94 (_lambda_9de55ca7b1f0fe2b3bf40ef5b9f15f31_--operator().c)
 *     ??$AddBindingToSet@UNDIS_BIND_PROTOCOL_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x1C00F9C94 (--$AddBindingToSet@UNDIS_BIND_PROTOCOL_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@A.c)
 *     _lambda_ac55aedf94f20521cfbcaaf74fbc728b_::operator() @ 0x1C00FABA4 (_lambda_ac55aedf94f20521cfbcaaf74fbc728b_--operator().c)
 *     ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x1C00FAC90 (-CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV-$KRef@UNDIS_BIND_PRO.c)
 * Callees:
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BDCB4 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BDCE8 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(NDIS_BIND_LINK_BASE *this)
{
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx
  void **p; // rcx
  KLockHolder v5; // [rsp+20h] [rbp-28h] BYREF

  v5.m_State = Unlocked;
  v5.m_Region.m_Entered = 0;
  v5.m_Lock = (KPushLockBase *)(qword_1C0098800 + 8);
  KLockHolder::AcquireExclusive(&v5);
  Flink = this->DriverLinkage.Flink;
  if ( Flink->Blink != &this->DriverLinkage || (Blink = this->DriverLinkage.Blink, Blink->Flink != &this->DriverLinkage) )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  KLockHolder::~KLockHolder(&v5);
  p = this->BindState.m_bindContext._p;
  if ( p )
  {
    ExFreePoolWithTag(p, 0x7272414Bu);
    this->BindState.m_bindContext._p = 0LL;
    this->BindState.m_bindContext.m_numElements = 0;
    this->BindState.m_bindContext.m_bufferSize = 0;
  }
}
