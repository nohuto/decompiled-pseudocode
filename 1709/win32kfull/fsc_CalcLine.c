/*
 * XREFs of fsc_CalcLine @ 0x1C02C7FE0
 * Callers:
 *     EvaluateSpline @ 0x1C02B9CB4 (EvaluateSpline.c)
 *     fsc_FillGlyph @ 0x1C02BA658 (fsc_FillGlyph.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     fsc_BeginElement @ 0x1C02C7238 (fsc_BeginElement.c)
 */

__int64 __fastcall fsc_CalcLine(int a1, int a2, int a3, int a4, __int16 a5)
{
  int v8; // esi
  int v9; // r10d
  unsigned int v10; // ebx
  int v11; // r15d
  unsigned int v12; // edx
  signed int v13; // ebx
  int v14; // ebx
  unsigned int v15; // edi
  unsigned int v16; // edx
  signed int v17; // edi
  int v18; // eax
  int v19; // edi
  int v20; // esi
  __int64 result; // rax
  unsigned int v22; // edi
  int v23; // ecx
  int v24; // esi
  int v25; // r15d
  int v26; // eax
  int v27; // ecx
  int v28; // esi
  int v29; // esi
  int v30; // ecx
  int v31; // esi
  int v32; // r15d
  int v33; // eax
  int v34; // [rsp+40h] [rbp-40h]
  int v35; // [rsp+44h] [rbp-3Ch]
  int v36; // [rsp+48h] [rbp-38h]
  int v37; // [rsp+4Ch] [rbp-34h]
  int v38; // [rsp+50h] [rbp-30h]
  int v39; // [rsp+54h] [rbp-2Ch]
  int v40; // [rsp+58h] [rbp-28h]
  __int64 (__fastcall *v41)(_QWORD, _QWORD); // [rsp+60h] [rbp-20h] BYREF
  int v42; // [rsp+68h] [rbp-18h]
  __int64 (__fastcall *v43)(_QWORD, _QWORD); // [rsp+70h] [rbp-10h] BYREF
  int v44; // [rsp+C8h] [rbp+48h]
  int v45; // [rsp+C8h] [rbp+48h]
  int v46; // [rsp+C8h] [rbp+48h]
  int v47; // [rsp+D0h] [rbp+50h] BYREF
  int v48; // [rsp+D8h] [rbp+58h] BYREF

  v48 = a4;
  v47 = a3;
  v36 = -1;
  if ( a4 < a2 )
  {
    v34 = -1;
    v13 = ((a2 - 33) & 0xFFFFFFC0) + 32;
    v8 = a2 - a4;
    v39 = a2 - v13;
    v9 = 4;
    v10 = v13 >> 6;
    v12 = v10 - ((a4 + 32) >> 6);
    v11 = 1;
  }
  else
  {
    v34 = 1;
    v8 = a4 - a2;
    v9 = 1;
    v10 = (int)(((a2 + 32) & 0xFFFFFFC0) + 32) >> 6;
    v39 = ((a2 + 32) & 0xFFFFFFC0) + 32 - a2;
    v11 = 0;
    v12 = ((a4 - 33) >> 6) - v10;
  }
  v42 = v11;
  v44 = v12 + 1;
  if ( a4 == a2 )
  {
    if ( (a5 & 2) != 0 )
      return 0LL;
    v14 = a2 - 1;
    if ( a3 >= a1 )
      v14 = a2;
    v44 = 0;
    v10 = (v14 + 32) >> 6;
  }
  if ( a3 < a1 )
  {
    v40 = 1;
    v11 = 1 - v11;
    v17 = ((a1 - 33) & 0xFFFFFFC0) + 32;
    v18 = a1 - v17;
    v15 = v17 >> 6;
    v37 = v18;
    v38 = a1 - a3;
    v9 = (v9 != 1) + 2;
    v16 = v15 - ((a3 + 32) >> 6);
  }
  else
  {
    v36 = 1;
    v40 = 0;
    v38 = a3 - a1;
    v15 = (int)(((a1 + 32) & 0xFFFFFFC0) + 32) >> 6;
    v37 = ((a1 + 32) & 0xFFFFFFC0) + 32 - a1;
    v16 = ((a3 - 33) >> 6) - v15;
  }
  v35 = v16 + 1;
  if ( a3 == a1 )
  {
    v19 = a1 - 1;
    if ( a4 <= a2 )
      v19 = a1;
    v35 = 0;
    v15 = (v19 + 32) >> 6;
  }
  fsc_BeginElement(a5, v9, 0, 1, (__int64)&v47, &v48, &v41, &v43);
  if ( (a5 & 2) != 0 )
  {
    if ( a1 == v47 )
    {
      v20 = 0;
      if ( v44 > 0 )
      {
        while ( 1 )
        {
          result = v41(v15, v10);
          if ( (_DWORD)result )
            break;
          v10 += v34;
          if ( ++v20 >= v44 )
            return 0LL;
        }
        return result;
      }
    }
    else
    {
      v22 = v40 + v15;
      v23 = v8 * v37;
      v24 = -64 * v8;
      v25 = v39 * v38 - v23 + v11;
      v26 = 0;
      v45 = v44 + v35;
      v48 = 0;
      if ( v45 > 0 )
      {
        do
        {
          if ( v25 <= 0 )
          {
            result = v41(v22, v10);
            if ( (_DWORD)result )
              return result;
            v26 = v48;
            v10 += v34;
            v27 = v38 << 6;
          }
          else
          {
            v22 += v36;
            v27 = v24;
          }
          ++v26;
          v25 += v27;
          v48 = v26;
        }
        while ( v26 < v45 );
      }
    }
    return 0LL;
  }
  if ( a2 == a4 )
  {
    v28 = 0;
    if ( v35 <= 0 )
      return 0LL;
    while ( 1 )
    {
      result = v43(v15, v10);
      if ( (_DWORD)result )
        break;
      v15 += v36;
      if ( ++v28 >= v35 )
        return 0LL;
    }
  }
  else
  {
    if ( a1 != v47 )
    {
      v48 = 0;
      v30 = v8 * v37;
      v31 = -64 * v8;
      v32 = v39 * v38 - v30 + v11;
      v46 = v44 + v35;
      if ( v46 > 0 )
      {
        do
        {
          if ( v32 <= 0 )
          {
            result = v41(v15 + v40, v10);
            if ( (_DWORD)result )
              return result;
            v10 += v34;
            v33 = v38 << 6;
          }
          else
          {
            result = v43(v15, v10 + v42);
            if ( (_DWORD)result )
              return result;
            v15 += v36;
            v33 = v31;
          }
          v32 += v33;
          ++v48;
        }
        while ( v48 < v46 );
      }
      return 0LL;
    }
    v29 = 0;
    if ( v44 <= 0 )
      return 0LL;
    while ( 1 )
    {
      result = v41(v15, v10);
      if ( (_DWORD)result )
        break;
      v10 += v34;
      if ( ++v29 >= v44 )
        return 0LL;
    }
  }
  return result;
}
