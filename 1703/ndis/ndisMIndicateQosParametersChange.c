/*
 * XREFs of ndisMIndicateQosParametersChange @ 0x1C005FA8C
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001741C (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisIndicateStatusInternal @ 0x1C00185E4 (ndisIndicateStatusInternal.c)
 * Callees:
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 *     memcmp @ 0x1C0028680 (memcmp.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     WPP_SF_d @ 0x1C0043BDC (WPP_SF_d.c)
 *     ndisValidateQosParameters @ 0x1C004A3FC (ndisValidateQosParameters.c)
 *     WPP_SF_dd @ 0x1C004A87C (WPP_SF_dd_ea_1C004A87C.c)
 *     ?NdisTraceLoggingQosOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0077560 (-NdisTraceLoggingQosOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

char __fastcall ndisMIndicateQosParametersChange(struct _NDIS_MINIPORT_BLOCK *a1, int a2, __int64 a3, unsigned int a4)
{
  unsigned __int16 v7; // ax
  int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // r15
  unsigned int v11; // ebp
  PVOID PoolWithTag; // r12
  void *v13; // rcx
  _WORD *v15; // rcx

  if ( !a1->QosHwCapabilities )
    return 0;
  if ( a4 < 0x34 || *(_BYTE *)a3 != 0xB6 || (v7 = *(_WORD *)(a3 + 2), v7 < 0x34u) || *(_BYTE *)(a3 + 1) != 1 || a4 < v7 )
  {
    if ( (unsigned __int8)byte_1C009261F >= 2u )
      WPP_SF_(0x9Eu, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids);
    return 0;
  }
  v8 = ndisValidateQosParameters((__int64)a1, a2 == 1073873056, (_DWORD *)a3, v7, 0LL);
  if ( v8 )
  {
    if ( (unsigned __int8)byte_1C009261F >= 2u )
      WPP_SF_d(0x9Fu, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, v8);
    return 0;
  }
  if ( a2 == 1073873056 )
  {
    v9 = 4952LL;
    v10 = 4960LL;
  }
  else
  {
    v9 = 4968LL;
    v10 = 4976LL;
  }
  v11 = *(unsigned __int16 *)(a3 + 2);
  if ( v11 <= *(_DWORD *)((char *)&a1->Header + v10) )
  {
    v15 = *(_WORD **)(&a1->Header.Type + v9);
    if ( v15[1] == (_WORD)v11 && !memcmp(v15, (const void *)a3, *(unsigned __int16 *)(a3 + 2)) )
    {
      if ( (unsigned __int8)byte_1C009261F >= 4u )
        WPP_SF_d(0xA1u, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a2);
      return 0;
    }
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, *(unsigned __int16 *)(a3 + 2), 0x7371444Eu);
    if ( !PoolWithTag )
    {
      if ( (unsigned __int8)byte_1C009261F >= 2u )
        WPP_SF_dd(0xA0u, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, v11, a2);
      return 0;
    }
    v13 = *(void **)(&a1->Header.Type + v9);
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
    *(_QWORD *)(&a1->Header.Type + v9) = PoolWithTag;
    *(_NDIS_OBJECT_HEADER *)((char *)&a1->Header + v10) = (_NDIS_OBJECT_HEADER)v11;
  }
  memmove(*(void **)(&a1->Header.Type + v9), (const void *)a3, *(unsigned __int16 *)(a3 + 2));
  if ( a2 == 1073873056 )
    NdisTraceLoggingQosOperationalStatus(a1);
  return 1;
}
