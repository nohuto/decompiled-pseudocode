/*
 * XREFs of EvaluateSpline @ 0x1C02BFEA8
 * Callers:
 *     EvaluateSpline @ 0x1C02BFEA8 (EvaluateSpline.c)
 *     fsc_FillGlyph @ 0x1C02C0850 (fsc_FillGlyph.c)
 * Callees:
 *     CompDiv @ 0x1C02BD158 (CompDiv.c)
 *     EvaluateSpline @ 0x1C02BFEA8 (EvaluateSpline.c)
 *     fsc_CheckEndPoint @ 0x1C02CE038 (fsc_CheckEndPoint.c)
 *     fsc_CalcLine @ 0x1C02CE210 (fsc_CalcLine.c)
 *     fsc_CalcSpline @ 0x1C02CE6F4 (fsc_CalcSpline.c)
 */

__int64 __fastcall EvaluateSpline(
        int a1,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int16 a7)
{
  int v7; // esi
  int v8; // edi
  int v10; // ebx
  int v11; // edx
  int v12; // r8d
  int v13; // eax
  int v14; // ecx
  bool v15; // sf
  __int64 v16; // rbx
  int v17; // esi
  int v18; // edi
  int v19; // eax
  __int64 result; // rax
  bool v21; // sf
  __int64 v22; // rbx
  int v23; // esi
  int v24; // edi
  int v25; // eax
  int v26; // r9d
  int v27; // r9d
  int v28; // r8d
  unsigned int v29; // [rsp+40h] [rbp-38h]
  int v30; // [rsp+80h] [rbp+8h]
  int v31; // [rsp+80h] [rbp+8h]
  unsigned int v32; // [rsp+88h] [rbp+10h]
  int v33; // [rsp+88h] [rbp+10h]
  int v34; // [rsp+88h] [rbp+10h]
  int v35; // [rsp+88h] [rbp+10h]
  int v36; // [rsp+90h] [rbp+18h]
  int v37; // [rsp+98h] [rbp+20h]

  v37 = a4;
  v36 = a3;
  v30 = a1;
  v7 = a4;
  v8 = a3;
  v10 = a1;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = v8 - v10;
        v12 = a5 - v8;
        v13 = a6 - v7;
        v32 = a5 - v8;
        v29 = a6 - v7;
        v14 = v7 - a2;
        v15 = v7 - a2 < 0;
        if ( v7 - a2 > 0 )
        {
          if ( v13 < 0 )
            goto LABEL_7;
          v15 = v14 < 0;
        }
        if ( !v15 || v13 <= 0 )
          break;
LABEL_7:
        v16 = v14;
        v17 = v14 - v13;
        v18 = v30 + CompDiv(v14 - v13, v14 * (__int64)v11);
        v36 += CompDiv(v17, v16 * (int)v32);
        v33 = v18 + CompDiv(v17, v16 * (v36 - v18));
        v19 = CompDiv(v17, v16 * v16);
        v10 = v33;
        v7 = v19 + a2;
        v37 = v19 + a2;
        result = EvaluateSpline(v30, a2, v18, v19 + a2, v33, v19 + a2, a7);
        if ( (_DWORD)result )
          return result;
        v8 = v36;
        a2 = v7;
        v30 = v33;
      }
      v21 = v11 < 0;
      if ( v11 > 0 )
      {
        if ( v12 < 0 )
          goto LABEL_14;
        v21 = v11 < 0;
      }
      if ( !v21 || v12 <= 0 )
        break;
LABEL_14:
      v22 = v11;
      v23 = v11 - v12;
      v24 = CompDiv(v11 - v12, v11 * (__int64)v14) + a2;
      v37 += CompDiv(v23, v22 * (int)v29);
      v34 = v24 + CompDiv(v23, v22 * (v37 - v24));
      v25 = CompDiv(v23, v22 * v22);
      v26 = v24;
      v8 = v30 + v25;
      v36 = v30 + v25;
      result = EvaluateSpline(v30, a2, v30 + v25, v26, v30 + v25, v34, a7);
      if ( (_DWORD)result )
        return result;
      v7 = v37;
      a2 = v34;
      v10 = v8;
      v30 = v8;
    }
    if ( (int)abs32(a5 - v10) <= 3200 && (int)abs32(a6 - a2) <= 3200 )
      break;
    v27 = (v7 + a2) >> 1;
    v7 = (int)(a6 + v7) >> 1;
    v28 = (v10 + v8) >> 1;
    v8 = (int)(a5 + v8) >> 1;
    v36 = v8;
    v37 = v7;
    v35 = (v8 + v28) >> 1;
    v31 = (v7 + v27) >> 1;
    result = EvaluateSpline(v10, a2, v28, v27, v35, v31, a7);
    if ( (_DWORD)result )
      return result;
    a2 = v31;
    v10 = v35;
    v30 = v35;
  }
  result = fsc_CheckEndPoint(a5, a6, a7);
  if ( !(_DWORD)result )
  {
    if ( (v8 - v10) * v29 == v32 * (v7 - a2) )
      return fsc_CalcLine(v10, a2, a5, a6, a7);
    else
      return fsc_CalcSpline(v10, a2, v8, v7, a5, a6, a7);
  }
  return result;
}
