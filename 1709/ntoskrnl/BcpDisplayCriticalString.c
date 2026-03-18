/*
 * XREFs of BcpDisplayCriticalString @ 0x140290AA4
 * Callers:
 *     BcpDisplayErrorInformation @ 0x140290DF8 (BcpDisplayErrorInformation.c)
 *     BcpDisplayProgress @ 0x1402910E0 (BcpDisplayProgress.c)
 *     BgpFwDisplayBugCheckScreen @ 0x1402917C8 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     BgpDisplayCharacterEx @ 0x140290668 (BgpDisplayCharacterEx.c)
 *     BgpFoGetStringAdvanceWidth @ 0x1402907D8 (BgpFoGetStringAdvanceWidth.c)
 *     BcpPrintSpaces @ 0x1402914A0 (BcpPrintSpaces.c)
 *     BgpRasGetGlyphAdvanceWidth @ 0x140291AE0 (BgpRasGetGlyphAdvanceWidth.c)
 */

__int64 __fastcall BcpDisplayCriticalString(__int16 *a1, int a2, unsigned int a3, int a4)
{
  __int64 v5; // r14
  int v6; // r12d
  unsigned int v7; // edi
  unsigned int v8; // esi
  unsigned int v9; // r15d
  int v10; // ebx
  __int64 v11; // rcx
  int StringAdvanceWidth; // eax
  bool v13; // cl
  int GlyphAdvanceWidth; // r8d
  int v15; // r10d
  unsigned int v16; // ebx
  unsigned int v17; // edx
  unsigned int v18; // r9d
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // edx
  int v22; // ecx
  __int64 v23; // r10
  unsigned int v24; // eax
  __int64 v25; // rcx
  unsigned int v26; // eax
  unsigned int v27; // eax
  __int64 result; // rax
  unsigned __int64 v29; // [rsp+40h] [rbp-38h]
  unsigned int v30; // [rsp+50h] [rbp-28h]
  int v31; // [rsp+54h] [rbp-24h]
  int v32; // [rsp+58h] [rbp-20h]
  __int64 v33; // [rsp+58h] [rbp-20h]
  int *v34; // [rsp+60h] [rbp-18h]
  bool v35; // [rsp+C0h] [rbp+48h]
  int v36; // [rsp+C8h] [rbp+50h] BYREF
  unsigned int v37; // [rsp+D0h] [rbp+58h] BYREF
  unsigned int v38; // [rsp+D8h] [rbp+60h]

  v37 = a3;
  v5 = 9LL * a4;
  if ( BcpTextBoxLeftEdgeOverride )
    v6 = *(_DWORD *)BcpTextBoxLeftEdgeOverride;
  else
    v6 = dword_140358260[18 * a4 + 4] + dword_140358260[18 * a4 + 8];
  if ( BcpTextBoxRightEdgeOverride )
    v7 = *(_DWORD *)BcpTextBoxRightEdgeOverride;
  else
    v7 = dword_140358260[18 * a4 + 4] + dword_140358260[18 * a4 + 6] + dword_140358260[18 * a4 + 8];
  v8 = BcpCursor;
  v9 = HIDWORD(BcpCursor);
  v10 = dword_140387EC8;
  v11 = *(_QWORD *)(qword_14038CD70 + 24);
  v35 = 0;
  *(_DWORD *)(v11 + 56) = a2;
  *(_DWORD *)(qword_14038CD70 + 8) = a2;
  v34 = (int *)(v11 + 40);
  StringAdvanceWidth = BgpFoGetStringAdvanceWidth((int)v11 + 40, a1, &v37);
  v13 = 0;
  GlyphAdvanceWidth = StringAdvanceWidth;
  if ( StringAdvanceWidth >= 0 )
  {
    v13 = v8 + v37 > v7;
    v35 = v13;
  }
  v15 = (int)v34;
  v16 = v10 - v9;
  v38 = 0;
  v17 = 0;
  v18 = 0;
  if ( (int)v16 <= 0 )
    v16 = 0;
  v30 = 0;
  v31 = *v34;
  if ( (*a1 & 0xFFFE) != 0 )
  {
    while ( 1 )
    {
      if ( v13 && v17 <= v18 )
      {
        v19 = *((_QWORD *)a1 + 1);
        v20 = v18;
        v30 = v18;
        v32 = 0;
        if ( *(_WORD *)(v19 + 2LL * v18) != 32 )
        {
          while ( 1 )
          {
            v21 = *(unsigned __int16 *)(v19 + 2 * v20);
            if ( (unsigned __int16)v21 <= 0xDu )
            {
              v22 = 9217;
              if ( _bittest(&v22, v21) )
                break;
            }
            GlyphAdvanceWidth = BgpRasGetGlyphAdvanceWidth(v15, v21, (unsigned int)&v36, v18, (__int64)&BcpWorkspace);
            if ( GlyphAdvanceWidth < 0 )
              goto LABEL_41;
            v23 = v30 + 1;
            v32 += v36;
            ++v30;
            if ( v7 < v32 + v8 && v16 )
            {
              if ( v8 < v7 )
              {
                GlyphAdvanceWidth = BcpPrintSpaces(qword_14038CD70, v8, v7, v9, v31, (__int64)&v37);
                if ( GlyphAdvanceWidth < 0 )
                  goto LABEL_41;
                if ( v16 < v37 )
                  v16 = v37;
              }
              v8 = v6;
              v24 = v16 + dword_140358260[2 * v5 + 10];
              v16 = 0;
              v9 += v24;
              break;
            }
            v19 = *((_QWORD *)a1 + 1);
            v20 = (unsigned int)v23;
            if ( *(_WORD *)(v19 + 2 * v23) == 32 )
              break;
            v15 = (int)v34;
          }
          v18 = v38;
        }
      }
      v33 = v18;
      GlyphAdvanceWidth = BgpRasGetGlyphAdvanceWidth(
                            (_DWORD)v34,
                            *(unsigned __int16 *)(*((_QWORD *)a1 + 1) + 2LL * v18),
                            (unsigned int)&v36,
                            v18,
                            (__int64)&BcpWorkspace);
      if ( GlyphAdvanceWidth < 0 )
        goto LABEL_41;
      if ( v7 >= v8 + v36 )
        break;
      if ( v8 < v7 )
      {
        GlyphAdvanceWidth = BcpPrintSpaces(qword_14038CD70, v8, v7, v9, v31, (__int64)&v37);
        if ( GlyphAdvanceWidth < 0 )
          goto LABEL_41;
        if ( v16 < v37 )
          v16 = v37;
      }
      v25 = v33;
      v8 = v6;
      v26 = v16 + dword_140358260[2 * v5 + 10];
      v16 = 0;
      v9 += v26;
      if ( *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * v33) != 32 )
        goto LABEL_37;
LABEL_40:
      v18 = v38 + 1;
      v13 = v35;
      v17 = v30;
      v15 = (int)v34;
      v27 = (unsigned __int16)*a1 >> 1;
      v38 = v18;
      if ( v18 >= v27 )
        goto LABEL_41;
    }
    v25 = v33;
LABEL_37:
    GlyphAdvanceWidth = BgpDisplayCharacterEx(
                          *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * v25),
                          (__int64 *)qword_14038CD70,
                          v8,
                          v9,
                          v31,
                          -1,
                          &v36,
                          &v37,
                          v29);
    if ( GlyphAdvanceWidth < 0 )
      goto LABEL_41;
    v8 += v36;
    if ( v37 > v16 )
      v16 = v37;
    goto LABEL_40;
  }
LABEL_41:
  LODWORD(BcpCursor) = v8;
  dword_140387EC8 = v16 + v9;
  result = (unsigned int)GlyphAdvanceWidth;
  HIDWORD(BcpCursor) = v9;
  return result;
}
