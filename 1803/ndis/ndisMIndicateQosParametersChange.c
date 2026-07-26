/*
 * XREFs of ndisMIndicateQosParametersChange @ 0x1C0060398
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C0017E84 (ndisIndicateStatusInternal.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00197A4 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     memcmp @ 0x1C0025D20 (memcmp.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     WPP_SF_d @ 0x1C00419DC (WPP_SF_d.c)
 *     WPP_SF_qDqL @ 0x1C0042180 (WPP_SF_qDqL.c)
 *     ndisValidateQosParameters @ 0x1C0048E9C (ndisValidateQosParameters.c)
 *     WPP_SF_dd @ 0x1C00496DC (WPP_SF_dd_ea_1C00496DC.c)
 *     WPP_SF_LLLLLLLL @ 0x1C005F234 (WPP_SF_LLLLLLLL.c)
 *     ?NdisTraceLoggingQosOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0079B34 (-NdisTraceLoggingQosOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

char __fastcall ndisMIndicateQosParametersChange(
        struct _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        unsigned __int8 *a3,
        unsigned int a4)
{
  int v6; // esi
  unsigned __int16 v8; // cx
  unsigned __int16 v9; // ax
  int v10; // eax
  unsigned int v11; // r14d
  __int64 v12; // r12
  __int64 v13; // r15
  PVOID PoolWithTag; // r13
  void *v15; // rcx
  unsigned __int16 v16; // r12
  _WORD *v18; // rcx

  v6 = a2;
  if ( (unsigned __int8)byte_1C009961F >= 5u )
    WPP_SF_qDqL(0xA8u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, (__int64)a1, a2);
  if ( !a1->QosHwCapabilities )
  {
    if ( (unsigned __int8)byte_1C009961F >= 5u )
    {
      v8 = 169;
LABEL_40:
      WPP_SF_(v8, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids);
      return 0;
    }
    return 0;
  }
  if ( a4 < 0x34 )
  {
    if ( (unsigned __int8)byte_1C009961F >= 5u )
      WPP_SF_d(0xAAu, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a4);
LABEL_38:
    if ( (unsigned __int8)byte_1C009961F >= 2u )
    {
      v8 = 172;
      goto LABEL_40;
    }
    return 0;
  }
  if ( *a3 != 0xB6 || (v9 = *((_WORD *)a3 + 1), v9 < 0x34u) || a3[1] != 1 || a4 < v9 )
  {
    if ( (unsigned __int8)byte_1C009961F >= 5u )
    {
      LOBYTE(a2) = *a3;
      WPP_SF_LLLLLLLL(*((unsigned __int16 *)a3 + 1), a2, *a3);
    }
    goto LABEL_38;
  }
  LOBYTE(a2) = v6 == 1073873056;
  v10 = ndisValidateQosParameters((__int64)a1, a2, a3, v9, 0LL);
  if ( v10 )
  {
    if ( (unsigned __int8)byte_1C009961F >= 2u )
      WPP_SF_d(0xADu, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, v10);
    return 0;
  }
  v11 = *((unsigned __int16 *)a3 + 1);
  v12 = 4960LL;
  if ( v6 != 1073873056 )
    v12 = 4976LL;
  v13 = 4952LL;
  if ( v6 != 1073873056 )
    v13 = 4968LL;
  if ( v11 <= *(_DWORD *)((char *)&a1->Header + v12) )
  {
    v18 = *(_WORD **)(&a1->Header.Type + v13);
    v16 = *((_WORD *)a3 + 1);
    if ( v18[1] == (_WORD)v11 && !memcmp(v18, a3, *((unsigned __int16 *)a3 + 1)) )
    {
      if ( (unsigned __int8)byte_1C009961F >= 4u )
        WPP_SF_d(0xAFu, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, v6);
      return 0;
    }
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, *((unsigned __int16 *)a3 + 1), 0x7371444Eu);
    if ( !PoolWithTag )
    {
      if ( (unsigned __int8)byte_1C009961F >= 2u )
        WPP_SF_dd(0xAEu, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, v11, v6);
      return 0;
    }
    v15 = *(void **)(&a1->Header.Type + v13);
    if ( v15 )
      ExFreePoolWithTag(v15, 0);
    *(_QWORD *)(&a1->Header.Type + v13) = PoolWithTag;
    *(_NDIS_OBJECT_HEADER *)((char *)&a1->Header + v12) = (_NDIS_OBJECT_HEADER)v11;
    v16 = *((_WORD *)a3 + 1);
  }
  memmove(*(void **)(&a1->Header.Type + v13), a3, v16);
  if ( v6 == 1073873056 )
    NdisTraceLoggingQosOperationalStatus(a1);
  if ( (unsigned __int8)byte_1C009961F >= 5u )
    WPP_SF_qDqL(0xB0u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, (__int64)a1, v6);
  return 1;
}
