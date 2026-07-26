/*
 * XREFs of ?ndisIfDeleteCompartment@@YAJI@Z @ 0x1C0040B10
 * Callers:
 *     ?ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C0042B30 (-ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ndisIfDereferenceCompartmentForUser @ 0x1C0044DE4 (ndisIfDereferenceCompartmentForUser.c)
 * Callees:
 *     ndisIfFindCompartmentBlock @ 0x1C000CFB0 (ndisIfFindCompartmentBlock.c)
 *     COMPARTMENTBLOCK_DECREMENT_REF @ 0x1C000D334 (COMPARTMENTBLOCK_DECREMENT_REF.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_d @ 0x1C0043BDC (WPP_SF_d.c)
 *     WPP_SF_Ll @ 0x1C0043E00 (WPP_SF_Ll.c)
 *     WPP_SF_dd @ 0x1C004A87C (WPP_SF_dd_ea_1C004A87C.c)
 *     ?ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@Z @ 0x1C00A8A50 (-ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@.c)
 *     NdisIfFreeNetLuidIndex @ 0x1C00BF2D0 (NdisIfFreeNetLuidIndex.c)
 *     NdisIfDeregisterInterface @ 0x1C00BF3B0 (NdisIfDeregisterInterface.c)
 */

__int64 __fastcall ndisIfDeleteCompartment(unsigned int a1)
{
  int v1; // ebx
  char v3; // di
  KIRQL v4; // r15
  _LIST_ENTRY *CompartmentBlock; // rax
  _LIST_ENTRY *v6; // rsi
  int Blink; // eax
  __int64 Flink_low; // r9
  _LIST_ENTRY *v9; // rcx
  _LIST_ENTRY *v10; // r8
  _LIST_ENTRY *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  _LIST_ENTRY *v14; // rax
  NET_IFTYPE v15; // bx
  __int64 v16; // rdi
  KIRQL v17; // di
  _LIST_ENTRY *Flink; // r8
  void **p_Flink; // rdx
  _LIST_ENTRY *v20; // rcx
  _QWORD v22[10]; // [rsp+38h] [rbp-D0h] BYREF
  struct _KEVENT Event; // [rsp+88h] [rbp-80h] BYREF
  _DWORD v24[132]; // [rsp+A8h] [rbp-60h] BYREF

  v1 = 0;
  v3 = 0;
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_d(158LL, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, a1);
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  CompartmentBlock = ndisIfFindCompartmentBlock(a1);
  v6 = CompartmentBlock;
  if ( !CompartmentBlock )
  {
    v1 = -1073741072;
    goto LABEL_20;
  }
  if ( LODWORD(CompartmentBlock[1].Flink) == 1 || (Blink = (int)CompartmentBlock[2].Blink, (Blink & 1) != 0) )
  {
LABEL_32:
    v1 = -1073741811;
    goto LABEL_20;
  }
  if ( (Blink & 2) == 0 )
  {
    v3 = 1;
    LODWORD(v6[2].Blink) = Blink | 2;
  }
  Flink_low = LODWORD(v6[3].Flink);
  if ( (int)Flink_low <= 0 )
  {
    v9 = v6[1].Blink;
    if ( v9 == (_LIST_ENTRY *)&v6[1].Blink )
    {
LABEL_16:
      v10 = v6[3].Blink;
      v11 = v10[3].Blink;
      if ( v11 == (_LIST_ENTRY *)&v10[3].Blink )
      {
LABEL_19:
        LODWORD(v6[2].Blink) |= 1u;
        LODWORD(v10[4].Blink) |= 2u;
        goto LABEL_20;
      }
      while ( &v11[-79] == v6[106].Blink )
      {
        v11 = v11->Flink;
        if ( v11 == (_LIST_ENTRY *)&v10[3].Blink )
          goto LABEL_19;
      }
    }
    else
    {
      while ( &v9[-1] == v6[3].Blink )
      {
        v9 = v9->Flink;
        if ( v9 == (_LIST_ENTRY *)&v6[1].Blink )
          goto LABEL_16;
      }
    }
    goto LABEL_32;
  }
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_dd(159LL, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, a1, Flink_low);
  v1 = -1073740024;
LABEL_20:
  KeReleaseSpinLock(&ndisIfListLock, v4);
  if ( v3 )
    ndisNsiNotifyClientCompartmentChange(v6, 2LL);
  if ( v1 >= 0 )
  {
    v14 = v6[106].Blink;
    v15 = WORD2(v14[32].Blink);
    v16 = ((unsigned __int64)v14[82].Flink >> 24) & 0xFFFFFF;
    NdisIfDeregisterInterface(HIDWORD(v14->Flink));
    NdisIfFreeNetLuidIndex(v15, v16);
    memset(v22, 0, 0x48uLL);
    v22[0] = 0LL;
    LODWORD(v22[1]) = 0;
    v22[2] = &NPI_MS_NDIS_MODULEID;
    LODWORD(v22[3]) = 6;
    v22[5] = v6 + 5;
    v22[4] = 0x300000002LL;
    LODWORD(v22[6]) = 16;
    memset(v24, 0, sizeof(v24));
    v24[0] = 34603436;
    v22[7] = v24;
    LODWORD(v22[8]) = 528;
    v1 = NsiSetAllParametersEx(v22);
    if ( v1 >= 0 )
    {
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v17 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      v6[107].Flink = (_LIST_ENTRY *)&Event;
      Flink = v6->Flink;
      p_Flink = (void **)&v6->Blink->Flink;
      if ( v6->Flink->Blink != v6 || *p_Flink != v6 )
        __fastfail(3u);
      *p_Flink = Flink;
      Flink->Blink = (_LIST_ENTRY *)p_Flink;
      _InterlockedDecrement((volatile signed __int32 *)&ndisIfCompartmentCount);
      COMPARTMENTBLOCK_DECREMENT_REF((__int64)v6);
      KeReleaseSpinLock(&ndisIfListLock, v17);
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v20 = v6[107].Blink;
      v6[107].Flink = 0LL;
      if ( v20 )
      {
        ObfDereferenceObject(v20);
        v6[107].Blink = 0LL;
      }
      ExFreePoolWithTag(v6, 0);
    }
  }
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_Ll(v13, v12, (unsigned int)v1, a1);
  return (unsigned int)v1;
}
