/*
 * XREFs of ndisXlateAddWolPatternToPacketPatternOid @ 0x1C00D81C8
 * Callers:
 *     ndisOidPrePMAddWOLPattern @ 0x1C00BAB50 (ndisOidPrePMAddWOLPattern.c)
 * Callees:
 *     memmove @ 0x1C0028840 (memmove.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     ??$?8U_NDIS_PM_WOL_PATTERN@@U?$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@wistd@@YA_NAEBV?$unique_ptr@U_NDIS_PM_WOL_PATTERN@@U?$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@0@$$T@Z @ 0x1C004A630 (--$-8U_NDIS_PM_WOL_PATTERN@@U-$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@wistd@@YA_NAEBV-$unique_ptr@U.c)
 *     ??$MakeExtendedPoolPtr@U_NDIS_PM_PACKET_PATTERN@@@@YA?AV?$unique_ptr@U_NDIS_PM_PACKET_PATTERN@@U?$KFreePool@U_NDIS_PM_PACKET_PATTERN@@@@@wistd@@KKPEAK@Z @ 0x1C00D4528 (--$MakeExtendedPoolPtr@U_NDIS_PM_PACKET_PATTERN@@@@YA-AV-$unique_ptr@U_NDIS_PM_PACKET_PATTERN@@U.c)
 */

__int64 __fastcall ndisXlateAddWolPatternToPacketPatternOid(__int64 a1, _BYTE *a2)
{
  _DWORD *v2; // r14
  unsigned int v3; // esi
  int v6; // r9d
  _DWORD *PoolWithTag; // rax
  _DWORD *v8; // rdi
  __int64 v9; // rdx
  unsigned int v10; // ecx
  PVOID v12; // rcx
  _DWORD *v13; // rbx
  int v14; // eax
  unsigned int v16; // [rsp+40h] [rbp+8h] BYREF
  PVOID P; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_DWORD **)(a1 + 40);
  v3 = 0;
  v16 = 0;
  *a2 = 0;
  v6 = v2[3];
  if ( v6 != 1 )
  {
    if ( (unsigned __int8)byte_1C0092612 >= 4u )
      WPP_SF_qD(0x6Fu, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, a1, v6);
    *a2 = 1;
    return (unsigned int)-1073741637;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x7877444Eu);
  v8 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, 0x20uLL);
  P = v8;
  if ( !wistd::operator==<_NDIS_PM_WOL_PATTERN,KFreePool<_NDIS_PM_WOL_PATTERN>>(&P) )
  {
    *v8 = *(_DWORD *)(a1 + 32);
    *((_QWORD *)v8 + 1) = *(_QWORD *)(a1 + 40);
    v8[4] = *(_DWORD *)(a1 + 48);
    v9 = (unsigned int)v2[41];
    v10 = v9 + v2[43];
    if ( v10 < (unsigned int)v9 )
    {
      if ( (unsigned __int8)byte_1C0092612 >= 4u )
        WPP_SF_q(0x71u, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, a1);
      v3 = -1073741811;
      *a2 = 1;
    }
    else
    {
      MakeExtendedPoolPtr<_NDIS_PM_PACKET_PATTERN>(&P, v9, v10, &v16);
      if ( !wistd::operator==<_NDIS_PM_WOL_PATTERN,KFreePool<_NDIS_PM_WOL_PATTERN>>(&P) )
      {
        v13 = P;
        *((_DWORD *)P + 1) = v2[37];
        *v13 = v2[2];
        v14 = v2[41];
        v13[2] = v14;
        v13[3] = v14 + 24;
        v13[4] = v2[43];
        memmove(v13 + 6, (char *)v2 + (unsigned int)v2[40], (unsigned int)v13[2]);
        memmove((char *)v13 + (unsigned int)v13[3], (char *)v2 + (unsigned int)v2[42], (unsigned int)v13[4]);
        *(_DWORD *)(a1 + 48) = v16;
        *(_DWORD *)(a1 + 32) = -50265853;
        *(_QWORD *)(a1 + 40) = v13;
        *((_QWORD *)v8 + 3) = v13;
        *(_QWORD *)(a1 + 144) = v8;
        return v3;
      }
      if ( (unsigned __int8)byte_1C0092612 >= 4u )
        WPP_SF_q(0x72u, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, a1);
      v12 = P;
      v3 = -1073741670;
      *a2 = 1;
      if ( v12 )
        ExFreePoolWithTag(v12, 0);
    }
    goto LABEL_11;
  }
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_q(0x70u, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, a1);
  *a2 = 1;
  v3 = -1073741670;
  if ( v8 )
LABEL_11:
    ExFreePoolWithTag(v8, 0);
  return v3;
}
