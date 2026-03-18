/*
 * XREFs of BcpDisplayCriticalString @ 0x140266788
 * Callers:
 *     BcpDisplayErrorInformation @ 0x140266AE4 (BcpDisplayErrorInformation.c)
 *     BcpDisplayProgress @ 0x140266DD0 (BcpDisplayProgress.c)
 *     BgpFwDisplayBugCheckScreen @ 0x1402674B4 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     BgpDisplayCharacterEx @ 0x140266350 (BgpDisplayCharacterEx.c)
 *     BgpFoGetStringAdvanceWidth @ 0x1402664AC (BgpFoGetStringAdvanceWidth.c)
 *     BcpPrintSpaces @ 0x140267190 (BcpPrintSpaces.c)
 *     BgpRasGetGlyphAdvanceWidth @ 0x140267788 (BgpRasGetGlyphAdvanceWidth.c)
 */

__int64 __fastcall BcpDisplayCriticalString(__int16 *a1, int a2, unsigned int a3, int a4)
{
  __int64 v5; // r14
  int v6; // r12d
  unsigned int v7; // edi
  int v8; // ebx
  __int64 v9; // rcx
  unsigned int v10; // esi
  int StringAdvanceWidth; // r8d
  int v12; // r10d
  unsigned int v13; // ecx
  unsigned int v14; // r15d
  unsigned int v15; // r9d
  unsigned int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // edx
  int v20; // ecx
  __int64 v21; // r10
  unsigned int v22; // eax
  __int64 v23; // rcx
  unsigned int v24; // eax
  unsigned int v25; // eax
  __int64 result; // rax
  unsigned __int64 v27; // [rsp+40h] [rbp-38h]
  int v28; // [rsp+50h] [rbp-28h]
  bool v29; // [rsp+54h] [rbp-24h]
  __int64 v30; // [rsp+58h] [rbp-20h]
  int v31; // [rsp+58h] [rbp-20h]
  __int64 v32; // [rsp+58h] [rbp-20h]
  int *v33; // [rsp+68h] [rbp-10h]
  unsigned int v34; // [rsp+C0h] [rbp+48h]
  int v35; // [rsp+C8h] [rbp+50h] BYREF
  unsigned int v36; // [rsp+D0h] [rbp+58h] BYREF
  unsigned int v37; // [rsp+D8h] [rbp+60h]

  v36 = a3;
  v5 = 9LL * a4;
  if ( BcpTextBoxLeftEdgeOverride )
    v6 = *(_DWORD *)BcpTextBoxLeftEdgeOverride;
  else
    v6 = dword_14033FBD0[18 * a4 + 4] + dword_14033FBD0[18 * a4 + 8];
  if ( BcpTextBoxRightEdgeOverride )
    v7 = *(_DWORD *)BcpTextBoxRightEdgeOverride;
  else
    v7 = dword_14033FBD0[18 * a4 + 4] + dword_14033FBD0[18 * a4 + 6] + dword_14033FBD0[18 * a4 + 8];
  v8 = dword_14036B980;
  v30 = BcpCursor;
  v9 = *(_QWORD *)(qword_14036EB40 + 24);
  v29 = 0;
  *(_DWORD *)(v9 + 56) = a2;
  *(_DWORD *)(qword_14036EB40 + 8) = a2;
  v33 = (int *)(v9 + 40);
  v10 = v30;
  StringAdvanceWidth = BgpFoGetStringAdvanceWidth((int)v9 + 40, a1, &v36);
  if ( StringAdvanceWidth >= 0 )
    v29 = (unsigned int)v30 + v36 > v7;
  v12 = (int)v33;
  v13 = 0;
  v14 = HIDWORD(v30);
  v15 = 0;
  v16 = v8 - HIDWORD(v30);
  v34 = 0;
  v37 = 0;
  v28 = *v33;
  if ( (int)v16 <= 0 )
    v16 = 0;
  if ( (*a1 & 0xFFFE) != 0 )
  {
    while ( 1 )
    {
      if ( v29 && v13 <= v15 )
      {
        v17 = *((_QWORD *)a1 + 1);
        v18 = v15;
        v34 = v15;
        v31 = 0;
        if ( *(_WORD *)(v17 + 2LL * v15) != 32 )
        {
          while ( 1 )
          {
            v19 = *(unsigned __int16 *)(v17 + 2 * v18);
            if ( (unsigned __int16)v19 <= 0xDu )
            {
              v20 = 9217;
              if ( _bittest(&v20, v19) )
                break;
            }
            StringAdvanceWidth = BgpRasGetGlyphAdvanceWidth(v12, v19, (unsigned int)&v35, v15, (__int64)&BcpWorkspace);
            if ( StringAdvanceWidth < 0 )
              goto LABEL_41;
            v21 = v34 + 1;
            v31 += v35;
            ++v34;
            if ( v7 < v31 + v10 && v16 )
            {
              if ( v10 < v7 )
              {
                StringAdvanceWidth = BcpPrintSpaces(qword_14036EB40, v10, v7, v14, v28, (__int64)&v36);
                if ( StringAdvanceWidth < 0 )
                  goto LABEL_41;
                if ( v16 < v36 )
                  v16 = v36;
              }
              v10 = v6;
              v22 = v16 + dword_14033FBD0[2 * v5 + 10];
              v16 = 0;
              v14 += v22;
              break;
            }
            v17 = *((_QWORD *)a1 + 1);
            v18 = (unsigned int)v21;
            if ( *(_WORD *)(v17 + 2 * v21) == 32 )
              break;
            v12 = (int)v33;
          }
          v15 = v37;
        }
      }
      v32 = v15;
      StringAdvanceWidth = BgpRasGetGlyphAdvanceWidth(
                             (_DWORD)v33,
                             *(unsigned __int16 *)(*((_QWORD *)a1 + 1) + 2LL * v15),
                             (unsigned int)&v35,
                             v15,
                             (__int64)&BcpWorkspace);
      if ( StringAdvanceWidth < 0 )
        goto LABEL_41;
      if ( v7 >= v10 + v35 )
        break;
      if ( v10 < v7 )
      {
        StringAdvanceWidth = BcpPrintSpaces(qword_14036EB40, v10, v7, v14, v28, (__int64)&v36);
        if ( StringAdvanceWidth < 0 )
          goto LABEL_41;
        if ( v16 < v36 )
          v16 = v36;
      }
      v23 = v32;
      v10 = v6;
      v24 = v16 + dword_14033FBD0[2 * v5 + 10];
      v16 = 0;
      v14 += v24;
      if ( *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * v32) != 32 )
        goto LABEL_37;
LABEL_40:
      v15 = v37 + 1;
      v13 = v34;
      v12 = (int)v33;
      v25 = (unsigned __int16)*a1 >> 1;
      v37 = v15;
      if ( v15 >= v25 )
        goto LABEL_41;
    }
    v23 = v32;
LABEL_37:
    StringAdvanceWidth = BgpDisplayCharacterEx(
                           *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * v23),
                           (__int64 *)qword_14036EB40,
                           v10,
                           v14,
                           v28,
                           -1,
                           &v35,
                           &v36,
                           v27);
    if ( StringAdvanceWidth < 0 )
      goto LABEL_41;
    v10 += v35;
    if ( v36 > v16 )
      v16 = v36;
    goto LABEL_40;
  }
LABEL_41:
  LODWORD(BcpCursor) = v10;
  dword_14036B980 = v16 + v14;
  result = (unsigned int)StringAdvanceWidth;
  HIDWORD(BcpCursor) = v14;
  return result;
}
