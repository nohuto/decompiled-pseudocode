/*
 * XREFs of _RtlpMuiRegValidateLIPLanguage @ 0x1407499E4
 * Callers:
 *     _RtlpMuiRegValidateInstalled @ 0x1405B7C0C (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlpMuiRegGetInstalledLangInfoIndex @ 0x1407484A0 (RtlpMuiRegGetInstalledLangInfoIndex.c)
 */

__int64 __fastcall RtlpMuiRegValidateLIPLanguage(__int64 a1, int a2)
{
  __int64 v3; // r9
  int v4; // r15d
  int v5; // r12d
  _WORD *v6; // rbx
  int v7; // edi
  unsigned __int16 v8; // si
  unsigned __int8 v9; // dl
  __int16 v10; // r8
  __int64 v11; // rdx
  _WORD *v12; // r8
  char v13; // cl
  __int16 v14; // ax
  __int64 v15; // r14
  __int16 v16; // r8
  __int16 v17; // ax
  char v18; // cl
  __int16 v21; // [rsp+68h] [rbp+10h] BYREF

  v3 = a1;
  v4 = 0;
  v5 = 0;
  v6 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 28LL * a2);
  v7 = 0;
  while ( 1 )
  {
    v8 = v6[4];
    v9 = (v8 >> (2 * v5)) & 3;
    if ( !v9 )
      goto LABEL_26;
    v10 = v6[v5 + 6];
    if ( v9 != 2 )
    {
      v15 = *(_QWORD *)(v3 + 24);
      v21 = -1;
      if ( (int)RtlpMuiRegGetInstalledLangInfoIndex(v15, v9, v10, &v21) < 0
        || (v16 = v21, v21 < 0)
        || v21 >= (int)*(unsigned __int16 *)(v15 + 6)
        || v21 == a2
        || (v17 = *(_WORD *)(*(_QWORD *)(v15 + 16) + 28LL * v21), (v17 & 4) != 0) )
      {
        v3 = a1;
        v18 = v7;
LABEL_25:
        v6[4] = v8 & ~(3 << v18);
        goto LABEL_26;
      }
      v3 = a1;
      v18 = v7;
      if ( (v17 & 0x1820) != 0x820 )
        goto LABEL_25;
      v6[4] = (2 << v7) | v8 & ~(3 << v7);
      v6[v5 + 6] = v16;
LABEL_23:
      ++v4;
      goto LABEL_26;
    }
    if ( v10 < 0 || (v11 = *(_QWORD *)(v3 + 24), v10 >= (int)*(unsigned __int16 *)(v11 + 6)) || v10 == a2 )
    {
      v13 = v7;
LABEL_15:
      v6[4] = v8 & ~(3 << v13);
      v6[v5 + 6] = 0;
      goto LABEL_26;
    }
    v12 = (_WORD *)(*(_QWORD *)(v11 + 16) + 28LL * v10);
    if ( (*v12 & 4) != 0 )
      break;
    if ( (*v12 & 0x1820) == 0x820 )
      goto LABEL_23;
    v13 = v7;
    if ( v12[2] )
    {
      v6[4] = v8 & ~(3 << v7) | (1 << v7);
      v14 = v12[2];
    }
    else
    {
      if ( (__int16)v12[3] <= 0 )
        goto LABEL_15;
      v6[4] = (3 << v7) | v8 & ~(3 << v7);
      v14 = v12[3];
    }
    v6[v5 + 6] = v14;
LABEL_26:
    ++v5;
    v7 += 2;
    if ( v7 >= 8 )
      goto LABEL_29;
  }
  *v6 |= 0x1000u;
LABEL_29:
  if ( v4 >= 1 )
    return 0LL;
  *v6 |= 0x1000u;
  return 3221225473LL;
}
