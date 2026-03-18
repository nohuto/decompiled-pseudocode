/*
 * XREFs of NtGdiGetGlyphOutline @ 0x1C00E57F0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetGlyphOutlineInternal @ 0x1C00E59A8 (GreGetGlyphOutlineInternal.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall NtGdiGetGlyphOutline(
        HDC a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        size_t Size,
        char *a6,
        unsigned __int64 a7,
        int a8)
{
  unsigned int GlyphOutlineInternal; // esi
  void *v11; // rbx
  _OWORD *v12; // rdx
  char *v13; // rdx
  __int64 v15[2]; // [rsp+50h] [rbp-68h] BYREF
  __int128 v16; // [rsp+60h] [rbp-58h]
  int v17; // [rsp+70h] [rbp-48h]

  GlyphOutlineInternal = -1;
  if ( (unsigned int)(Size - 1) <= 0x270FFFF )
    v11 = (void *)AllocFreeTmpBuffer((unsigned int)Size);
  else
    v11 = 0LL;
  if ( v11 || !(_DWORD)Size )
  {
    v12 = (_OWORD *)a7;
    if ( a7 >= W32UserProbeAddress )
      v12 = (_OWORD *)W32UserProbeAddress;
    *(_OWORD *)v15 = *v12;
    if ( v11 )
      memset(v11, 0, (unsigned int)Size);
    GlyphOutlineInternal = GreGetGlyphOutlineInternal(a1, Size, (__int64)v11, (__int64)v15, a8);
    if ( GlyphOutlineInternal != -1 )
    {
      if ( v11 )
      {
        v13 = &a6[(unsigned int)Size];
        if ( (unsigned __int64)v13 > W32UserProbeAddress || v13 <= a6 )
          *W32UserProbeAddress = 0;
        memmove(a6, v11, (unsigned int)Size);
      }
      if ( a4 >= W32UserProbeAddress )
        a4 = W32UserProbeAddress;
      *(_OWORD *)a4 = v16;
      *(_DWORD *)(a4 + 16) = v17;
    }
    if ( v11 )
      FreeTmpBuffer(v11);
  }
  return GlyphOutlineInternal;
}
