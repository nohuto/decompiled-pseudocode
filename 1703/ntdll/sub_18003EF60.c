/*
 * XREFs of sub_18003EF60 @ 0x18003EF60
 * Callers:
 *     RtlIsDosDeviceName_U @ 0x18003C300 (RtlIsDosDeviceName_U.c)
 *     sub_18003E520 @ 0x18003E520 (sub_18003E520.c)
 *     RtlSetCurrentDirectory_U @ 0x18007ADF0 (RtlSetCurrentDirectory_U.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x18001FC70 (RtlEqualUnicodeString.c)
 *     sub_18003F2C4 @ 0x18003F2C4 (sub_18003F2C4.c)
 *     iswdigit @ 0x180099590 (iswdigit.c)
 */

__int64 __fastcall sub_18003EF60(__int64 a1)
{
  __int32 v1; // ebp
  __int16 v2; // di
  int v3; // eax
  __m128i *v4; // r11
  unsigned __int16 v5; // dx
  unsigned __int16 v6; // r10
  unsigned __int16 v7; // r8
  _WORD *v8; // rbx
  __int16 i; // cx
  __int16 *v10; // rax
  __int16 v11; // cx
  int v12; // r9d
  _WORD *v13; // rax
  unsigned __int16 v14; // cx
  unsigned __int16 v15; // r8
  unsigned __int16 v16; // ax
  _WORD *v17; // rcx
  _WORD *v18; // rdx
  _WORD *v19; // rax
  __int64 v20; // rcx
  int v21; // esi
  __int16 v22; // di
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  unsigned __int16 *v27; // rdx
  __m128i v28; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  v2 = 0;
  v3 = sub_18003F2C4(a1);
  if ( v3 < 6 && v3 >= 2 || v3 < 0 || v3 != 6 && v3 > 1 )
  {
    v5 = _mm_cvtsi128_si32(*v4);
    v28 = *v4;
    v6 = v5;
    v7 = v5 >> 1;
    if ( v5 >> 1 )
    {
      v8 = (_WORD *)v28.m128i_i64[1];
      if ( *(_WORD *)(v28.m128i_i64[1] + 2LL * (v7 - 1)) == 58 )
      {
        v5 -= 2;
        v2 = 1;
        --v7;
      }
      if ( v7 )
      {
        for ( i = *(_WORD *)(v28.m128i_i64[1] + 2LL * (v7 - 1));
              i == 46 || i == 32;
              i = *(_WORD *)(v28.m128i_i64[1] + 2LL * (v7 - 1)) )
        {
          v5 -= 2;
          ++v2;
          if ( !--v7 )
            break;
        }
        if ( !v7 )
        {
LABEL_23:
          v17 = v8;
          v18 = &v8[v7];
          if ( v8 < v18 )
          {
            do
            {
              if ( *v17 == 46 )
                break;
              if ( *v17 == 58 )
                break;
              ++v17;
            }
            while ( v17 < v18 );
            if ( v17 > v8 )
            {
              do
              {
                v19 = v17 - 1;
                if ( *(v17 - 1) != 32 )
                  break;
                --v17;
              }
              while ( v19 > v8 );
            }
          }
          v20 = v17 - v8;
          v21 = (unsigned __int16)v20;
          v22 = 2 * v20;
          v28.m128i_i16[0] = 2 * v20;
          if ( (unsigned __int16)v20 == 5 )
            return 0LL;
          v24 = (unsigned __int16)v20 - 3;
          if ( v21 == 3 )
          {
            if ( RtlEqualUnicodeString((unsigned __int16 *)&v28, word_1801100C0, 1)
              || RtlEqualUnicodeString((unsigned __int16 *)&v28, word_1801100E0, 1)
              || RtlEqualUnicodeString((unsigned __int16 *)&v28, word_1801100D0, 1)
              || RtlEqualUnicodeString((unsigned __int16 *)&v28, word_1801100F0, 1) )
            {
              return (v1 << 16) | (unsigned int)(2 * v21);
            }
          }
          else
          {
            v25 = v24 - 1;
            if ( v25 )
            {
              v26 = v25 - 2;
              if ( v26 )
              {
                if ( v26 != 1 )
                  return 0LL;
                v27 = (unsigned __int16 *)&unk_180110110;
              }
              else
              {
                v27 = (unsigned __int16 *)&unk_180110120;
              }
            }
            else
            {
              if ( !iswdigit(v8[3]) || v8[3] == 48 )
                return 0LL;
              v28.m128i_i16[0] = v22 - 2;
              if ( RtlEqualUnicodeString((unsigned __int16 *)&v28, word_180110140, 1) )
                return (v1 << 16) | (unsigned int)(2 * v21);
              v27 = (unsigned __int16 *)&unk_180110150;
            }
            if ( RtlEqualUnicodeString((unsigned __int16 *)&v28, v27, 1) )
              return (v1 << 16) | (unsigned int)(2 * v21);
          }
          return 0LL;
        }
        v10 = (__int16 *)(v28.m128i_i64[1] + 2 * (v7 - 1LL));
        if ( (unsigned __int64)v10 < v28.m128i_i64[1] )
        {
LABEL_16:
          v12 = 43013;
        }
        else
        {
          while ( 1 )
          {
            v11 = *v10;
            if ( *v10 == 92 || v11 == 47 || v11 == 58 && v10 == (__int16 *)(v28.m128i_i64[1] + 2) )
              break;
            if ( (unsigned __int64)--v10 < v28.m128i_i64[1] )
              goto LABEL_16;
          }
          v13 = v10 + 1;
          if ( (unsigned __int64)v13 >= v28.m128i_i64[1] + (unsigned __int64)(v6 & 0xFFFE) )
            return 0LL;
          v14 = (*v13 | 0x20) - 97;
          if ( v14 > 0xFu )
            return 0LL;
          v12 = 43013;
          if ( !_bittest(&v12, v14) )
            return 0LL;
          v1 = (_DWORD)v13 - v28.m128i_i32[2];
          v15 = v6 + v28.m128i_i16[4] - (_WORD)v13;
          v28.m128i_i64[1] = (__int64)v13;
          v8 = v13;
          v7 = (v15 >> 1) - v2;
        }
        v16 = (*v8 | 0x20) - 97;
        if ( v16 <= 0xFu && _bittest(&v12, v16) )
          goto LABEL_23;
      }
    }
    return 0LL;
  }
  return 0LL;
}
