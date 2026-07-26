/*
 * XREFs of ?ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@Z @ 0x1C00A8A50
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C0012D10 (-ndisInitializeNsiHelper@@YAJXZ.c)
 *     ?ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C0040768 (-ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLO.c)
 *     ?ndisIfDeleteCompartment@@YAJI@Z @ 0x1C0040B10 (-ndisIfDeleteCompartment@@YAJI@Z.c)
 * Callees:
 *     ?ndisIsCompartmentEnumerable@@YAEPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C001B9E0 (-ndisIsCompartmentEnumerable@@YAEPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 */

void __fastcall ndisNsiNotifyClientCompartmentChange(struct _NDIS_IF_COMPARTMENT_BLOCK *a1, int a2)
{
  _QWORD v4[8]; // [rsp+20h] [rbp-40h] BYREF

  if ( ndisIsCompartmentEnumerable(a1) )
  {
    if ( (unsigned __int8)byte_1C009261D >= 4u )
      WPP_SF_qD(0x96u, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, (__int64)a1, a2);
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
    (*(void (__fastcall **)(_QWORD *))(qword_1C0091DC8 + 8))(v4);
    if ( (unsigned __int8)byte_1C009261D >= 4u )
      WPP_SF_qD(0x97u, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, (__int64)a1, a2);
  }
}
