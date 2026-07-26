/*
 * XREFs of ndisOidPrePMRemoveWOLPattern @ 0x1C00ABEA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     ndisMiniportPreRemoveWOLPattern @ 0x1C00ABFF4 (ndisMiniportPreRemoveWOLPattern.c)
 *     ndisFindPatternEntry @ 0x1C00AC08C (ndisFindPatternEntry.c)
 *     ndisPreRemoveMiniportWakeUpPattern @ 0x1C00E0844 (ndisPreRemoveMiniportWakeUpPattern.c)
 *     ndisXlateRemoveWolPatternToPacketPatternOid @ 0x1C00E285C (ndisXlateRemoveWolPatternToPacketPatternOid.c)
 */

char __fastcall ndisOidPrePMRemoveWOLPattern(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  char v5; // di
  __int64 v6; // r14
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // r10d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // rcx
  unsigned __int8 v16; // al
  unsigned __int8 v17; // al
  int v18; // eax
  __int64 v19; // rdx
  unsigned __int8 v20; // al
  int v21; // eax
  char v22; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 32);
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 24);
  v8 = *(_QWORD *)a1;
  v22 = 0;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0x58u, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, v8, v4);
  v9 = *(_QWORD *)(a1 + 24);
  LOBYTE(a3) = 6;
  LOBYTE(a4) = 20;
  if ( v9
    && (v15 = *(_QWORD *)(v9 + 24), v16 = *(_BYTE *)(v15 + 56), v16 <= 6u)
    && (v16 != 6 || *(_BYTE *)(v15 + 57) < 0x14u)
    || (v10 = *(_QWORD *)(a1 + 8), v11 = 0x4000, v10)
    && (*(_DWORD *)(v4 + 88) & 0x4000) == 0
    && (v19 = *(_QWORD *)(v10 + 16), v20 = *(_BYTE *)(v19 + 100), v20 <= 6u)
    && (v20 != 6 || *(_BYTE *)(v19 + 101) < 0x14u)
    || *(_DWORD *)(v4 + 4) != 1 )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
LABEL_28:
    v5 = 1;
    goto LABEL_14;
  }
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v4 + 48) < 4u )
  {
    *(_DWORD *)(v4 + 56) = 4;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( *(_DWORD *)(a1 + 40) )
    goto LABEL_28;
  *(_DWORD *)(v4 + 56) = 0;
  v12 = **(unsigned int **)(v4 + 40);
  *(_DWORD *)(v4 + 152) = v12;
  if ( *(_QWORD *)(a1 + 24) && !ndisFindPatternEntry(v6 + 504, v12, a3, a4)
    || (v13 = *(_QWORD *)(a1 + 8)) != 0
    && (*(_DWORD *)(v4 + 88) & v11) == 0
    && !ndisFindPatternEntry(v13 + 864, v12, a3, a4) )
  {
    *(_DWORD *)(a1 + 40) = -1073676261;
    goto LABEL_28;
  }
  if ( *(_QWORD *)a1 )
  {
    v17 = *(_BYTE *)(v8 + 32);
    if ( v17 > (unsigned __int8)a3 || v17 == (_BYTE)a3 && *(_BYTE *)(v8 + 33) >= (unsigned __int8)a4 )
    {
      v18 = ndisMiniportPreRemoveWOLPattern(v8, v4, &v22, a4);
      v5 = v22;
      *(_DWORD *)(a1 + 40) = v18;
    }
    else
    {
      v21 = ndisXlateRemoveWolPatternToPacketPatternOid(v8, v4, &v22, a4);
      v5 = v22;
      *(_DWORD *)(a1 + 40) = v21;
      if ( v5 != 1 )
      {
        *(_DWORD *)(a1 + 40) = 0;
        v5 = ndisPreRemoveMiniportWakeUpPattern(v8, v4);
      }
    }
  }
LABEL_14:
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qD(0x59u, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, *(_QWORD *)a1, *(_DWORD *)(a1 + 40));
  return v5;
}
