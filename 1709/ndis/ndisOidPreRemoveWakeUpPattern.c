/*
 * XREFs of ndisOidPreRemoveWakeUpPattern @ 0x1C00E0270
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     ndisMiniportPreRemoveWOLPattern @ 0x1C00ABFF4 (ndisMiniportPreRemoveWOLPattern.c)
 *     ndisPreRemoveMiniportWakeUpPattern @ 0x1C00E0844 (ndisPreRemoveMiniportWakeUpPattern.c)
 *     ndisPreRemoveOpenWakeUpPattern @ 0x1C00E09C4 (ndisPreRemoveOpenWakeUpPattern.c)
 *     ndisSetRemoveWakeUpPattern @ 0x1C00E1D14 (ndisSetRemoveWakeUpPattern.c)
 *     ndisXlateRemovePacketPatternToWolPatternOid @ 0x1C00E2794 (ndisXlateRemovePacketPatternToWolPatternOid.c)
 */

char __fastcall ndisOidPreRemoveWakeUpPattern(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // r14
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned __int8 v7; // al
  char v8; // di
  int v9; // eax
  unsigned __int8 v10; // al
  int v11; // eax
  int v12; // eax
  char v14; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)a1;
  v14 = 0;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0x1Fu, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, v4, v1);
  v5 = *(_QWORD *)(a1 + 24);
  if ( v5 && ((v6 = *(_QWORD *)(v5 + 24), v7 = *(_BYTE *)(v6 + 56), v7 > 6u) || v7 == 6 && *(_BYTE *)(v6 + 57) >= 0x14u)
    || *(_DWORD *)(v1 + 4) != 1 )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
LABEL_8:
    v8 = 1;
    goto LABEL_21;
  }
  v9 = ndisSetRemoveWakeUpPattern(v1, &v14);
  v8 = v14;
  *(_DWORD *)(a1 + 40) = v9;
  if ( v8 != 1 )
  {
    if ( *(_QWORD *)(a1 + 24) && !(unsigned __int8)ndisPreRemoveOpenWakeUpPattern(v3, v1) )
    {
      *(_DWORD *)(a1 + 40) = -1073741811;
      goto LABEL_8;
    }
    if ( *(_QWORD *)a1 )
    {
      v10 = *(_BYTE *)(v4 + 32);
      if ( v10 > 6u || v10 == 6 && *(_BYTE *)(v4 + 33) >= 0x14u )
      {
        v11 = ndisXlateRemovePacketPatternToWolPatternOid(v1, &v14);
        v8 = v14;
        *(_DWORD *)(a1 + 40) = v11;
        if ( v8 != 1 )
        {
          v12 = ndisMiniportPreRemoveWOLPattern(v4, v1);
          v8 = v14;
          *(_DWORD *)(a1 + 40) = v12;
        }
      }
      else
      {
        *(_DWORD *)(a1 + 40) = 0;
        v8 = ndisPreRemoveMiniportWakeUpPattern(v4, v1);
      }
    }
  }
LABEL_21:
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qD(0x20u, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, *(_QWORD *)a1, *(_DWORD *)(a1 + 40));
  return v8;
}
