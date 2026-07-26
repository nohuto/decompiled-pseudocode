/*
 * XREFs of ndisXlateAddPacketPatternToWolPatternOid @ 0x1C00E2334
 * Callers:
 *     ndisOidPreAddWakeUpPattern @ 0x1C00DF880 (ndisOidPreAddWakeUpPattern.c)
 * Callees:
 *     NdisConvertNtStatusToNdisStatus @ 0x1C0002AA0 (NdisConvertNtStatusToNdisStatus.c)
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     ??$?8U_NDIS_PM_WOL_PATTERN@@U?$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@wistd@@YA_NAEBV?$unique_ptr@U_NDIS_PM_WOL_PATTERN@@U?$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@0@$$T@Z @ 0x1C0048070 (--$-8U_NDIS_PM_WOL_PATTERN@@U-$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@wistd@@YA_NAEBV-$unique_ptr@U.c)
 *     ??$MakeExtendedPoolPtr@U_NDIS_PM_WOL_PATTERN@@@@YA?AV?$unique_ptr@U_NDIS_PM_WOL_PATTERN@@U?$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@wistd@@KKPEAK@Z @ 0x1C00DEDC0 (--$MakeExtendedPoolPtr@U_NDIS_PM_WOL_PATTERN@@@@YA-AV-$unique_ptr@U_NDIS_PM_WOL_PATTERN@@U-$KFre.c)
 */

__int64 __fastcall ndisXlateAddPacketPatternToWolPatternOid(__int64 a1, _BYTE *a2)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rdi
  unsigned int v6; // esi
  unsigned int v7; // r15d
  unsigned int v8; // ebx
  _DWORD *v9; // r14
  unsigned int v10; // esi
  unsigned int v11; // ecx
  int v12; // r13d
  unsigned int v13; // ebx
  __int64 v14; // rdx
  _DWORD *v15; // rbx
  int v16; // ecx
  _QWORD *v18; // [rsp+60h] [rbp+8h] BYREF
  PVOID P; // [rsp+68h] [rbp+10h] BYREF

  *a2 = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x7877444Eu);
  v5 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, 0x20uLL);
  v18 = v5;
  if ( wistd::operator==<_NDIS_PM_WOL_PATTERN,KFreePool<_NDIS_PM_WOL_PATTERN>>(&v18) )
  {
    if ( (unsigned __int8)byte_1C0098752 >= 4u )
      WPP_SF_q(0x6Du, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, a1);
    v6 = -1073741670;
    if ( !v5 )
      goto LABEL_27;
    goto LABEL_26;
  }
  v7 = -1;
  *(_DWORD *)v5 = *(_DWORD *)(a1 + 32);
  v8 = -1;
  v5[1] = *(_QWORD *)(a1 + 40);
  *((_DWORD *)v5 + 4) = *(_DWORD *)(a1 + 48);
  v9 = *(_DWORD **)(a1 + 40);
  v10 = v9[2];
  if ( v10 < 0xFFFFFFE8 )
    v8 = v10 + 24;
  if ( !(unsigned int)NdisConvertNtStatusToNdisStatus(v10 >= 0xFFFFFFE8 ? 0xC0000095 : 0) )
  {
    v11 = v9[3];
    if ( v11 >= v8 )
    {
      v12 = v9[4];
      v13 = -1;
      if ( v11 + v12 >= v11 )
        v13 = v11 + v12;
      if ( !(unsigned int)NdisConvertNtStatusToNdisStatus(v11 + v12 < v11 ? 0xC0000095 : 0) )
      {
        if ( *(_DWORD *)(a1 + 48) >= v13 )
        {
          if ( v10 + v12 >= v10 )
            v7 = v10 + v12;
          v6 = NdisConvertNtStatusToNdisStatus(v10 + v12 < v10 ? 0xC0000095 : 0);
          if ( !v6 )
          {
            MakeExtendedPoolPtr<_NDIS_PM_WOL_PATTERN>(&P, v14, v7, (unsigned int *)&v18);
            if ( !wistd::operator==<_NDIS_PM_WOL_PATTERN,KFreePool<_NDIS_PM_WOL_PATTERN>>(&P) )
            {
              v15 = P;
              *(_DWORD *)P = 12845440;
              v15[37] = v9[1];
              v15[2] = *v9;
              v15[3] = 1;
              v15[40] = 196;
              v16 = v9[2];
              v15[41] = v16;
              v15[42] = v15[40] + v16;
              v15[43] = v9[4];
              memmove((char *)v15 + (unsigned int)v15[40], v9 + 6, (unsigned int)v9[2]);
              memmove((char *)v15 + (unsigned int)v15[42], (char *)v9 + (unsigned int)v9[3], (unsigned int)v9[4]);
              *(_DWORD *)(a1 + 48) = (_DWORD)v18;
              *(_DWORD *)(a1 + 32) = -50265846;
              *(_QWORD *)(a1 + 40) = v15;
              v5[3] = v15;
              *(_QWORD *)(a1 + 144) = v5;
              return v6;
            }
            if ( (unsigned __int8)byte_1C0098752 >= 4u )
              WPP_SF_q(0x6Eu, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, a1);
            v6 = -1073741670;
            if ( P )
              ExFreePoolWithTag(P, 0);
            goto LABEL_26;
          }
        }
        else
        {
          *(_DWORD *)(a1 + 56) = v13;
        }
      }
    }
  }
  v6 = -1073676267;
LABEL_26:
  ExFreePoolWithTag(v5, 0);
LABEL_27:
  *a2 = 1;
  return v6;
}
