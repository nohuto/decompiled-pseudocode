/*
 * XREFs of RtlpIsDosDeviceName_Ustr @ 0x180033BC0
 * Callers:
 *     RtlGetFullPathName_Ustr @ 0x180033160 (RtlGetFullPathName_Ustr.c)
 *     RtlIsDosDeviceName_U @ 0x180035B10 (RtlIsDosDeviceName_U.c)
 *     RtlSetCurrentDirectory_U @ 0x18007A610 (RtlSetCurrentDirectory_U.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x18002E610 (RtlEqualUnicodeString.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x180033F0C (RtlDetermineDosPathNameType_Ustr.c)
 *     iswdigit @ 0x180094490 (iswdigit.c)
 */

__int64 __fastcall RtlpIsDosDeviceName_Ustr(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int32 v4; // ebp
  __int16 v5; // di
  int v6; // eax
  __m128i *v7; // r11
  unsigned __int16 v8; // dx
  unsigned __int16 v9; // r10
  unsigned __int16 v10; // r8
  _WORD *v11; // rbx
  __int16 i; // cx
  __int16 *v13; // rax
  __int16 v14; // cx
  int v15; // r9d
  _WORD *v16; // rax
  unsigned __int16 v17; // cx
  unsigned __int16 v18; // r8
  unsigned __int16 v19; // ax
  _WORD *v20; // rcx
  _WORD *v21; // rdx
  _WORD *v22; // rax
  __int64 v23; // rcx
  int v24; // esi
  __int16 v25; // di
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  unsigned __int16 *v30; // rdx
  __m128i v31; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = RtlDetermineDosPathNameType_Ustr(a1, a2, a3, a4);
  if ( v6 < 6 && v6 >= 2 || v6 < 0 || v6 != 6 && v6 > 1 )
  {
    v8 = _mm_cvtsi128_si32(*v7);
    v31 = *v7;
    v9 = v8;
    v10 = v8 >> 1;
    if ( v8 >> 1 )
    {
      v11 = (_WORD *)v31.m128i_i64[1];
      if ( *(_WORD *)(v31.m128i_i64[1] + 2LL * v10 - 2) == 58 )
      {
        v8 -= 2;
        --v10;
        v5 = 1;
      }
      if ( v10 )
      {
        for ( i = *(_WORD *)(v31.m128i_i64[1] + 2LL * v10 - 2);
              i == 46 || i == 32;
              i = *(_WORD *)(v31.m128i_i64[1] + 2LL * v10 - 2) )
        {
          v8 -= 2;
          ++v5;
          if ( !--v10 )
            break;
        }
        if ( !v10 )
        {
LABEL_24:
          v20 = v11;
          v21 = &v11[v10];
          if ( v11 < v21 )
          {
            do
            {
              if ( *v20 == 46 )
                break;
              if ( *v20 == 58 )
                break;
              ++v20;
            }
            while ( v20 < v21 );
            if ( v20 > v11 )
            {
              do
              {
                v22 = v20 - 1;
                if ( *(v20 - 1) != 32 )
                  break;
                --v20;
              }
              while ( v22 > v11 );
            }
          }
          v23 = v20 - v11;
          v24 = (unsigned __int16)v23;
          v25 = 2 * v23;
          v31.m128i_i16[0] = 2 * v23;
          if ( (unsigned __int16)v23 == 5 )
            return 0LL;
          v27 = (unsigned __int16)v23 - 3;
          if ( v24 == 3 )
          {
            if ( RtlEqualUnicodeString((unsigned __int16 *)&v31, RtlpDosPRNDevice, 1)
              || RtlEqualUnicodeString((unsigned __int16 *)&v31, RtlpDosAUXDevice, 1)
              || RtlEqualUnicodeString((unsigned __int16 *)&v31, RtlpDosNULDevice, 1)
              || RtlEqualUnicodeString((unsigned __int16 *)&v31, RtlpDosCONDevice, 1) )
            {
              return (v4 << 16) | (unsigned int)(2 * v24);
            }
          }
          else
          {
            v28 = v27 - 1;
            if ( v28 )
            {
              v29 = v28 - 2;
              if ( v29 )
              {
                if ( v29 != 1 )
                  return 0LL;
                v30 = (unsigned __int16 *)&RtlpDosCONOUTDevice;
              }
              else
              {
                v30 = (unsigned __int16 *)&RtlpDosCONINDevice;
              }
            }
            else
            {
              if ( !iswdigit(v11[3]) || v11[3] == 48 )
                return 0LL;
              v31.m128i_i16[0] = v25 - 2;
              if ( RtlEqualUnicodeString((unsigned __int16 *)&v31, RtlpDosLPTDevice, 1) )
                return (v4 << 16) | (unsigned int)(2 * v24);
              v30 = (unsigned __int16 *)&RtlpDosCOMDevice;
            }
            if ( RtlEqualUnicodeString((unsigned __int16 *)&v31, v30, 1) )
              return (v4 << 16) | (unsigned int)(2 * v24);
          }
          return 0LL;
        }
        v13 = (__int16 *)(v31.m128i_i64[1] + 2 * (v10 - 1LL));
        if ( (unsigned __int64)v13 < v31.m128i_i64[1] )
        {
LABEL_16:
          v15 = 43013;
        }
        else
        {
          while ( 1 )
          {
            v14 = *v13;
            if ( *v13 == 92 || v14 == 47 || v14 == 58 && v13 == (__int16 *)(v31.m128i_i64[1] + 2) )
              break;
            if ( (unsigned __int64)--v13 < v31.m128i_i64[1] )
              goto LABEL_16;
          }
          v16 = v13 + 1;
          if ( (unsigned __int64)v16 >= v31.m128i_i64[1] + (unsigned __int64)(v9 & 0xFFFE) )
            return 0LL;
          v17 = (*v16 | 0x20) - 97;
          if ( v17 > 0xFu )
            return 0LL;
          v15 = 43013;
          if ( !_bittest(&v15, v17) )
            return 0LL;
          v4 = (_DWORD)v16 - v31.m128i_i32[2];
          v18 = v9 + v31.m128i_i16[4] - (_WORD)v16;
          v31.m128i_i64[1] = (__int64)v16;
          v11 = v16;
          v10 = (v18 >> 1) - v5;
        }
        v19 = (*v11 | 0x20) - 97;
        if ( v19 <= 0xFu && _bittest(&v15, v19) )
          goto LABEL_24;
      }
    }
    return 0LL;
  }
  return 0LL;
}
