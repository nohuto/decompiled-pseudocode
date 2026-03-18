/*
 * XREFs of NtGdiRectInRegion @ 0x1C00FB8C0
 * Callers:
 *     <none>
 * Callees:
 *     GreRectInRegion @ 0x1C007DAF0 (GreRectInRegion.c)
 */

__int64 __fastcall NtGdiRectInRegion(struct HOBJ__ *a1, ULONG64 a2)
{
  struct _RECTL *v2; // rbx
  __m128i *v4; // rax
  LONG v5; // eax
  LONG v6; // ecx
  unsigned int v7; // r8d
  struct _RECTL v9; // [rsp+20h] [rbp-28h] BYREF
  __m128i v10; // [rsp+30h] [rbp-18h]

  v2 = (struct _RECTL *)a2;
  if ( a2 )
  {
    v4 = (__m128i *)a2;
    if ( a2 >= MmUserProbeAddress )
      v4 = (__m128i *)MmUserProbeAddress;
    v10 = *v4;
    v5 = _mm_cvtsi128_si32(v10);
    v6 = _mm_cvtsi128_si32(_mm_srli_si128(v10, 8));
    if ( v5 <= v6 )
    {
      v9.left = v5;
      v9.right = v6;
    }
    else
    {
      v9.left = v6;
      v9.right = v5;
    }
    if ( v10.m128i_i32[1] <= v10.m128i_i32[3] )
    {
      v9.top = v10.m128i_i32[1];
      v9.bottom = v10.m128i_i32[3];
    }
    else
    {
      v9.top = v10.m128i_i32[3];
      v9.bottom = v10.m128i_i32[1];
    }
    v7 = GreRectInRegion(a1, &v9);
    if ( v7 )
    {
      if ( (unsigned __int64)v2 >= MmUserProbeAddress )
        v2 = (struct _RECTL *)MmUserProbeAddress;
      *v2 = v9;
    }
  }
  else
  {
    return 0;
  }
  return v7;
}
