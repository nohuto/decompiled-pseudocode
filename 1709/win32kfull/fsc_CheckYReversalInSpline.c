/*
 * XREFs of fsc_CheckYReversalInSpline @ 0x1C02BA3A8
 * Callers:
 *     fsc_CheckYReversalInSpline @ 0x1C02BA3A8 (fsc_CheckYReversalInSpline.c)
 *     fsc_MeasureGlyph @ 0x1C02BAC28 (fsc_MeasureGlyph.c)
 * Callees:
 *     CompDiv @ 0x1C02B6F58 (CompDiv.c)
 *     fsc_CheckYReversal @ 0x1C02BA2FC (fsc_CheckYReversal.c)
 *     fsc_CheckYReversalInSpline @ 0x1C02BA3A8 (fsc_CheckYReversalInSpline.c)
 */

__int64 __fastcall fsc_CheckYReversalInSpline(
        __int64 a1,
        _WORD *a2,
        _WORD *a3,
        _WORD *a4,
        int a5,
        unsigned int a6,
        int a7,
        unsigned int a8,
        int a9,
        int a10)
{
  __int64 v10; // rdx
  _WORD *v11; // rdi
  int v12; // ebp
  int v13; // ecx
  unsigned int i; // ebx
  int v15; // eax
  int v16; // esi
  int v17; // ecx
  int v18; // ebp
  bool v19; // sf
  __int64 v20; // rbx
  int v21; // edi
  int v22; // eax
  __int64 result; // rax
  bool v24; // sf
  int v25; // r8d
  __int64 v26; // rbx
  unsigned int v27; // esi
  int v28; // edi
  int v29; // eax
  int v30; // [rsp+30h] [rbp-58h]
  int v31; // [rsp+38h] [rbp-50h]
  int v32; // [rsp+50h] [rbp-38h]
  int v37; // [rsp+C0h] [rbp+38h]
  int v38; // [rsp+C8h] [rbp+40h]

  v10 = a6;
  v11 = a4;
  v12 = a7;
  v13 = a5;
  while ( 2 )
  {
    for ( i = a8; ; a6 = i )
    {
      v15 = v12 - v13;
      v16 = a9 - v12;
      v17 = i - v10;
      v18 = a10 - i;
      v19 = (int)(i - v10) < 0;
      if ( (int)(i - v10) > 0 )
      {
        if ( v18 < 0 )
          goto LABEL_8;
        v19 = v17 < 0;
      }
      if ( !v19 || v18 <= 0 )
        break;
LABEL_8:
      v38 = v17 - v18;
      if ( v17 == v18 )
        return 4870LL;
      v20 = v17;
      v21 = a5 + CompDiv(v17 - v18, v17 * (__int64)v15);
      v12 = a7 + CompDiv(v38, v20 * v16);
      a7 = v12;
      v32 = v21 + CompDiv(v38, v20 * (v12 - v21));
      v22 = CompDiv(v38, v20 * v20);
      i = a6 + v22;
      v30 = v21;
      v11 = a4;
      a8 = a6 + v22;
      result = fsc_CheckYReversalInSpline(a1, (_DWORD)a2, (_DWORD)a3, (_DWORD)a4, a5, a6, v30, a6 + v22, v32, a6 + v22);
      if ( (_DWORD)result )
        return result;
      v13 = v32;
      v10 = i;
      a5 = v32;
    }
    v24 = v15 < 0;
    if ( v15 > 0 )
    {
      if ( v16 < 0 )
        goto LABEL_16;
      v24 = v15 < 0;
    }
    if ( v24 && v16 > 0 )
    {
LABEL_16:
      v25 = v15 - v16;
      v37 = v15 - v16;
      if ( v15 == v16 )
        return 4870LL;
      v26 = v15;
      v27 = a6;
      v28 = a6 + CompDiv(v25, v15 * (__int64)v17);
      a8 += CompDiv(v37, v26 * v18);
      a6 = v28 + CompDiv(v37, v26 * (int)(a8 - v28));
      v29 = CompDiv(v37, v26 * v26);
      v12 = a5 + v29;
      v31 = v28;
      v11 = a4;
      a7 = a5 + v29;
      result = fsc_CheckYReversalInSpline(a1, (_DWORD)a2, (_DWORD)a3, (_DWORD)a4, a5, v27, a5 + v29, v31, a5 + v29, a6);
      if ( (_DWORD)result )
        return result;
      v13 = v12;
      a5 = v12;
      v10 = a6;
      continue;
    }
    return fsc_CheckYReversal(a1, v10, a10, a2, a3, v11);
  }
}
