/*
 * XREFs of ndisPreTaskOffloadSet @ 0x1C00DD518
 * Callers:
 *     ndisOidPreTaskOffload @ 0x1C00DCE40 (ndisOidPreTaskOffload.c)
 * Callees:
 *     ?ndisOidPreMiniportSetEncapsulation@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C001C09C (-ndisOidPreMiniportSetEncapsulation@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ndisOidPreOpenSetEncapsulation @ 0x1C001C280 (ndisOidPreOpenSetEncapsulation.c)
 *     WPP_SF_qdD @ 0x1C00394CC (WPP_SF_qdD.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     ndisSetTaskOffloadValidate @ 0x1C00DDB70 (ndisSetTaskOffloadValidate.c)
 */

unsigned __int8 __fastcall ndisPreTaskOffloadSet(__int64 a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // r14
  __int64 v3; // rsi
  __int64 v4; // rbp
  int *v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r8
  int v8; // ecx
  _DWORD *v9; // rdx
  __int64 v10; // rax
  unsigned __int8 v11; // bp
  int v13; // [rsp+20h] [rbp-28h]

  v1 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 24);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0xE8u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v1, v3);
  if ( (*(_DWORD *)(v3 + 88) & 0x20) == 0 )
    goto LABEL_17;
  if ( *(_DWORD *)(v3 + 48) < 0x1Cu || (unsigned int)ndisSetTaskOffloadValidate(*(_QWORD *)(a1 + 16), v1, v3) )
  {
    v5 = (int *)(a1 + 40);
    *(_DWORD *)(a1 + 40) = -1073676267;
    *(_DWORD *)(v3 + 56) = 28;
LABEL_19:
    v11 = 1;
    goto LABEL_20;
  }
  v6 = *(_QWORD *)(v4 + 792);
  v7 = *(_DWORD **)(v3 + 40);
  *(_QWORD *)(v6 + 32) = 0LL;
  *(_QWORD *)(v6 + 40) = 0LL;
  *(_QWORD *)(v6 + 48) = 0LL;
  *(_DWORD *)(v6 + 56) = 0;
  v8 = -1073676267;
  *(_BYTE *)(*(_QWORD *)(v4 + 792) + 33LL) = 1;
  *(_BYTE *)(*(_QWORD *)(v4 + 792) + 32LL) = -88;
  *(_WORD *)(*(_QWORD *)(v4 + 792) + 34LL) = 28;
  v9 = *(_DWORD **)(v4 + 792);
  if ( *(_DWORD *)(v3 + 48) < v7[3] )
  {
LABEL_18:
    v5 = (int *)(a1 + 40);
    *(_DWORD *)(a1 + 40) = v8;
    goto LABEL_19;
  }
  if ( v7[4] != 2 || (v7[5] & 1) == 0 || v7[6] != 14 )
  {
LABEL_17:
    v8 = -1073741637;
    goto LABEL_18;
  }
  v9[8] = 1835432;
  if ( v7[3] )
  {
    v9[9] = 1;
    v9[10] = 2;
    v9[11] = 14;
    v9[12] = 1;
    v9[13] = 2;
    v9[14] = 14;
  }
  else
  {
    v9[9] = 2;
    v9[12] = 2;
  }
  v5 = (int *)(a1 + 40);
  *(_DWORD *)(*(_QWORD *)(v4 + 792) + 88LL) = *(_DWORD *)(v3 + 32);
  *(_QWORD *)(*(_QWORD *)(v4 + 792) + 96LL) = *(_QWORD *)(v3 + 40);
  *(_DWORD *)(*(_QWORD *)(v4 + 792) + 104LL) = *(_DWORD *)(v3 + 48);
  *(_DWORD *)(v3 + 32) = 16843018;
  v10 = *(_QWORD *)(v4 + 792) + 32LL;
  *(_DWORD *)(v3 + 48) = 28;
  *(_QWORD *)(v3 + 40) = v10;
  v11 = ndisOidPreOpenSetEncapsulation(v4, v3, (_DWORD *)(a1 + 40));
  if ( v11 != 1 && *(_QWORD *)a1 )
    v11 = ndisOidPreMiniportSetEncapsulation(
            *(struct _NDIS_MINIPORT_BLOCK **)a1,
            (struct _NDIS_OID_REQUEST *)v3,
            (int *)(a1 + 40));
LABEL_20:
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
  {
    v13 = v11;
    WPP_SF_qdD(0xE9u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, (__int64)v1, *v5, v13);
  }
  return v11;
}
