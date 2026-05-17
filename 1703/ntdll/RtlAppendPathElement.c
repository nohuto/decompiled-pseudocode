/*
 * XREFs of RtlAppendPathElement @ 0x1800D47B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlMultiAppendUnicodeStringBuffer @ 0x180077C90 (RtlMultiAppendUnicodeStringBuffer.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 */

__int64 __fastcall RtlAppendPathElement(int a1, unsigned __int16 *a2, __m128i *a3)
{
  __int16 v4; // bx
  char v5; // r14
  __int128 v6; // xmm2
  __int16 v7; // di
  __int16 v8; // r11
  __int16 v9; // r15
  __int16 v10; // si
  int v11; // r10d
  __m128i v12; // xmm1
  unsigned int v13; // r8d
  __int64 v14; // rdx
  unsigned int v15; // r8d
  __int64 v16; // rcx
  __int16 *v17; // rax
  __int16 v18; // dx
  __int16 *v19; // xmm0_8
  unsigned __int16 v20; // r8
  __int16 v21; // dx
  __int16 *v22; // rax
  const WCHAR *v23; // rax
  __int64 result; // rax
  __m128i v25; // [rsp+28h] [rbp-49h]
  __int128 v26; // [rsp+38h] [rbp-39h]
  __int128 v27; // [rsp+48h] [rbp-29h]
  _OWORD v28[3]; // [rsp+58h] [rbp-19h] BYREF
  int v29; // [rsp+88h] [rbp+17h] BYREF
  __int16 v30; // [rsp+8Ch] [rbp+1Bh]
  __int16 v31; // [rsp+8Eh] [rbp+1Dh] BYREF

  v29 = 0;
  v4 = 0;
  v30 = 0;
  v5 = a1;
  v31 = 0;
  v6 = unk_180111350;
  v7 = 47;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v26 = unk_180111350;
  *(_QWORD *)&v27 = unk_180111350;
  if ( (a1 & 0xFFFFFFFC) == 0 && a2 && a3 )
  {
    v11 = a1 & 1;
    if ( (a1 & 1) != 0 )
      v7 = 92;
    if ( !a3->m128i_i16[0] )
      return 0LL;
    v12 = *a3;
    v25 = *a3;
    if ( *a2 )
    {
      v13 = *a2;
      v14 = 0LL;
      v15 = v13 >> 1;
      v16 = 0LL;
      while ( (unsigned int)v16 < v15 )
      {
        v17 = (__int16 *)*((_QWORD *)a2 + 1);
        if ( v17[v14] == v7 || v17[v14] == 92 )
        {
          if ( (v5 & 2) != 0 )
            v8 = v17[v16];
          else
            v8 = *v17;
          LOWORD(v29) = v8;
          break;
        }
        v16 = (unsigned int)(v16 + 1);
        ++v14;
        if ( (unsigned int)v16 >= 3 )
          break;
      }
      v18 = *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * ((unsigned __int64)*a2 >> 1) - 2);
      if ( v18 == v7 || v18 == 92 )
      {
        v9 = *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * ((unsigned __int64)*a2 >> 1) - 2);
        HIWORD(v29) = v9;
      }
    }
    v19 = (__int16 *)_mm_srli_si128(v12, 8).m128i_u64[0];
    if ( *v19 == v7 || *v19 == 92 )
    {
      v10 = *v19;
      v30 = *v19;
    }
    v20 = _mm_cvtsi128_si32(v12);
    v21 = v19[((unsigned __int64)v20 >> 1) - 1];
    if ( v21 == v7 || v21 == 92 )
    {
      v4 = v19[((unsigned __int64)v20 >> 1) - 1];
      v31 = v4;
    }
    if ( v9 )
    {
      if ( !v4 )
      {
        LOWORD(v27) = 2;
        v23 = (const WCHAR *)&v29 + 1;
        if ( v11 )
          v23 = L"\\";
        *((_QWORD *)&v27 + 1) = v23;
        v6 = v27;
      }
      if ( v10 )
      {
        v25.m128i_i64[1] = (__int64)(v19 + 1);
        v25.m128i_i16[1] -= 2;
        v25.m128i_i16[0] = v20 - 2;
        v12 = v25;
      }
    }
    else if ( !v10 )
    {
      LOWORD(v26) = 2;
      *((_QWORD *)&v26 + 1) = L"\\";
      if ( !v11 )
      {
        if ( v4 )
        {
          v22 = &v31;
        }
        else
        {
          if ( !v8 )
            goto LABEL_41;
          v22 = (__int16 *)&v29;
        }
        *((_QWORD *)&v26 + 1) = v22;
      }
    }
LABEL_41:
    v28[0] = v26;
    v28[1] = v12;
    v28[2] = v6;
    result = RtlMultiAppendUnicodeStringBuffer(a2, 3, (__int64)v28);
    if ( (int)result < 0 )
      return result;
    return 0LL;
  }
  return 3221225485LL;
}
