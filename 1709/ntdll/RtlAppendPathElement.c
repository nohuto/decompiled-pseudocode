/*
 * XREFs of RtlAppendPathElement @ 0x1800CF510
 * Callers:
 *     <none>
 * Callees:
 *     RtlMultiAppendUnicodeStringBuffer @ 0x1800748C0 (RtlMultiAppendUnicodeStringBuffer.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlAppendPathElement(int a1, unsigned __int16 *a2, __m128i *a3)
{
  __int16 v4; // bx
  __int128 v5; // xmm2
  char v6; // r9
  __int16 v7; // r15
  __int16 v8; // di
  __int16 v9; // r11
  int v10; // r10d
  __int16 v11; // dx
  __m128i v12; // xmm1
  __int64 v13; // r8
  __int64 v14; // rax
  __int16 *v15; // rcx
  __int16 v16; // r8
  __int16 *v17; // xmm0_8
  unsigned __int16 v18; // r8
  __int16 v19; // r9
  __int16 *v20; // rax
  const WCHAR *v21; // rax
  __int64 result; // rax
  __m128i v23; // [rsp+28h] [rbp-39h]
  __int128 v24; // [rsp+38h] [rbp-29h]
  __int128 v25; // [rsp+48h] [rbp-19h]
  _OWORD v26[3]; // [rsp+58h] [rbp-9h] BYREF
  __int16 v27; // [rsp+88h] [rbp+27h] BYREF
  int v28; // [rsp+8Ah] [rbp+29h] BYREF
  __int16 v29; // [rsp+8Eh] [rbp+2Dh] BYREF

  v28 = 0;
  v4 = 0;
  v27 = 0;
  v5 = RtlpEmptyString;
  v29 = 0;
  v6 = a1;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v24 = RtlpEmptyString;
  *(_QWORD *)&v25 = RtlpEmptyString;
  if ( (a1 & 0xFFFFFFFC) == 0 && a2 && a3 )
  {
    v10 = a1 & 1;
    v11 = v10 != 0 ? 92 : 47;
    if ( !a3->m128i_i16[0] )
      return 0LL;
    v12 = *a3;
    v23 = *a3;
    if ( *a2 )
    {
      v13 = 0LL;
      v14 = 0LL;
      while ( (unsigned int)v14 < *a2 >> 1 )
      {
        v15 = (__int16 *)*((_QWORD *)a2 + 1);
        if ( v15[v13] == v11 || v15[v13] == 92 )
        {
          if ( (v6 & 2) != 0 )
            v4 = v15[v14];
          else
            v4 = *v15;
          v27 = v4;
          break;
        }
        v14 = (unsigned int)(v14 + 1);
        ++v13;
        if ( (unsigned int)v14 >= 3 )
          break;
      }
      v16 = *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * ((unsigned __int64)*a2 >> 1) - 2);
      if ( v16 == v11 || v16 == 92 )
      {
        v7 = *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * ((unsigned __int64)*a2 >> 1) - 2);
        LOWORD(v28) = v7;
      }
    }
    v17 = (__int16 *)_mm_srli_si128(v12, 8).m128i_u64[0];
    if ( *v17 == v11 || *v17 == 92 )
    {
      v8 = *v17;
      HIWORD(v28) = *v17;
    }
    v18 = _mm_cvtsi128_si32(v12);
    v19 = v17[((unsigned __int64)v18 >> 1) - 1];
    if ( v19 == v11 || v19 == 92 )
    {
      v9 = v17[((unsigned __int64)v18 >> 1) - 1];
      v29 = v9;
    }
    if ( v7 )
    {
      if ( !v9 )
      {
        LOWORD(v25) = 2;
        v21 = (const WCHAR *)&v28;
        if ( v10 )
          v21 = L"\\";
        *((_QWORD *)&v25 + 1) = v21;
        v5 = v25;
      }
      if ( v8 )
      {
        v23.m128i_i64[1] = (__int64)(v17 + 1);
        v23.m128i_i16[1] -= 2;
        v23.m128i_i16[0] = v18 - 2;
        v12 = v23;
      }
    }
    else if ( !v8 )
    {
      LOWORD(v24) = 2;
      *((_QWORD *)&v24 + 1) = L"\\";
      if ( !v10 )
      {
        if ( v9 )
        {
          v20 = &v29;
        }
        else
        {
          if ( !v4 )
            goto LABEL_39;
          v20 = &v27;
        }
        *((_QWORD *)&v24 + 1) = v20;
      }
    }
LABEL_39:
    v26[0] = v24;
    v26[1] = v12;
    v26[2] = v5;
    result = RtlMultiAppendUnicodeStringBuffer(a2, 3, (__int64)v26);
    if ( (int)result < 0 )
      return result;
    return 0LL;
  }
  return 3221225485LL;
}
