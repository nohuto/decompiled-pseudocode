/*
 * XREFs of ?ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@Z @ 0x1C00C89E0
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C00213FC (-ndisInitializeNsiHelper@@YAJXZ.c)
 *     ?ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C003D288 (-ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLO.c)
 *     ?ndisIfDeleteCompartment@@YAJI@Z @ 0x1C003D630 (-ndisIfDeleteCompartment@@YAJI@Z.c)
 * Callees:
 *     ?ndisIsCompartmentEnumerable@@YAEPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C0004688 (-ndisIsCompartmentEnumerable@@YAEPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 */

void __fastcall ndisNsiNotifyClientCompartmentChange(struct _NDIS_IF_COMPARTMENT_BLOCK *a1, int a2)
{
  _QWORD v4[8]; // [rsp+20h] [rbp-40h] BYREF

  if ( ndisIsCompartmentEnumerable(a1) )
  {
    if ( (unsigned __int8)byte_1C009875D >= 4u )
      WPP_SF_qD(0x96u, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, (__int64)a1, a2);
    memset(v4, 0, sizeof(v4));
    v4[0] = ndisNsiSavedClientNpi;
    LOWORD(v4[1]) = 7;
    v4[2] = &a1->CompartmentId;
    HIDWORD(v4[1]) = a2;
    LODWORD(v4[3]) = 4;
    if ( (unsigned int)(a2 - 1) > 1 )
    {
      v4[5] = 0LL;
    }
    else
    {
      LODWORD(v4[4]) = 0;
      v4[5] = &a1->LoopbackInfo.CompartmentGuid;
      v4[6] = 0x43800000010LL;
    }
    (*(void (__fastcall **)(_QWORD *))(qword_1C00980E8 + 8))(v4);
    if ( (unsigned __int8)byte_1C009875D >= 4u )
      WPP_SF_qD(0x97u, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, (__int64)a1, a2);
  }
}
