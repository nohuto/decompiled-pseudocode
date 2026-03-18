/*
 * XREFs of ?SetBufferProperty@CHolographicDisplayMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C014BE90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CHolographicDisplayMarshaler::SetBufferProperty(
        __m128i *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __m128i *a4,
        unsigned __int64 a5,
        bool *a6)
{
  int v7; // r8d
  int v8; // r8d
  bool v9; // zf
  unsigned int v10; // r8d
  __int64 v11; // rax
  __m128i v12; // xmm1
  unsigned __int64 v13; // rcx

  *a6 = 0;
  if ( !a3 )
  {
    v10 = a5 != 8 ? 0xC000000D : 0;
    if ( a5 != 8 || a4->m128i_i64[0] == this[4].m128i_i64[0] )
      return v10;
    this[4].m128i_i64[0] = a4->m128i_i64[0];
LABEL_19:
    this[1].m128i_i32[0] |= 0x20u;
    goto LABEL_20;
  }
  v7 = a3 - 1;
  if ( !v7 )
  {
    v10 = a5 != 8 ? 0xC000000D : 0;
    if ( a5 != 8 || a4->m128i_i64[0] == this[4].m128i_i64[1] )
      return v10;
    this[4].m128i_i64[1] = a4->m128i_i64[0];
    goto LABEL_19;
  }
  v8 = v7 - 3;
  if ( v8 )
  {
    v9 = v8 == 3;
    v10 = -1073741811;
    if ( v9 )
    {
      v10 = a5 != 8 ? 0xC000000D : 0;
      if ( a5 == 8 )
      {
        v11 = a4->m128i_i64[0];
        if ( a4->m128i_i64[0] != this[5].m128i_i64[0] )
        {
          this[1].m128i_i32[0] |= 0x400u;
          this[5].m128i_i64[0] = v11;
LABEL_20:
          *a6 = 1;
        }
      }
    }
  }
  else
  {
    v10 = a5 != 16 ? 0xC000000D : 0;
    if ( a5 == 16 )
    {
      v12 = *a4;
      v13 = this[6].m128i_i64[0] - a4->m128i_i64[0];
      if ( !v13 )
        v13 = this[6].m128i_i64[1] - _mm_srli_si128(*a4, 8).m128i_u64[0];
      if ( v13 )
      {
        this[1].m128i_i32[0] |= 0x40u;
        this[7].m128i_i8[2] = 1;
        this[6] = v12;
        goto LABEL_20;
      }
    }
  }
  return v10;
}
