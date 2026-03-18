/*
 * XREFs of NtGdiGetGlyphOutline @ 0x1C00B2E80
 * Callers:
 *     <none>
 * Callees:
 *     GreGetGlyphOutlineInternal @ 0x1C00B26C0 (GreGetGlyphOutlineInternal.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall NtGdiGetGlyphOutline(
        HDC a1,
        unsigned __int16 a2,
        int a3,
        ULONG64 a4,
        size_t Size,
        char *a6,
        ULONG64 a7,
        int a8)
{
  unsigned int GlyphOutlineInternal; // esi
  struct tagTTPOLYGONHEADER *v13; // rbx
  _OWORD *v14; // rdx
  char *v15; // rdx
  __int64 v17[2]; // [rsp+50h] [rbp-68h] BYREF
  __int128 v18; // [rsp+60h] [rbp-58h] BYREF
  int v19; // [rsp+70h] [rbp-48h]

  GlyphOutlineInternal = -1;
  if ( (unsigned int)(Size - 1) <= 0x270FFFF )
    v13 = (struct tagTTPOLYGONHEADER *)AllocFreeTmpBuffer((unsigned int)Size);
  else
    v13 = 0LL;
  if ( v13 || !(_DWORD)Size )
  {
    v14 = (_OWORD *)a7;
    if ( a7 >= MmUserProbeAddress )
      v14 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v17 = *v14;
    if ( v13 )
      memset(v13, 0, (unsigned int)Size);
    GlyphOutlineInternal = GreGetGlyphOutlineInternal(a1, a2, a3, (__int64)&v18, Size, v13, (struct _MAT2 *)v17, a8);
    if ( GlyphOutlineInternal != -1 )
    {
      if ( v13 )
      {
        v15 = &a6[(unsigned int)Size];
        if ( (unsigned __int64)v15 > MmUserProbeAddress || v15 <= a6 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a6, v13, (unsigned int)Size);
      }
      if ( a4 >= MmUserProbeAddress )
        a4 = MmUserProbeAddress;
      *(_OWORD *)a4 = v18;
      *(_DWORD *)(a4 + 16) = v19;
    }
    if ( v13 )
      FreeTmpBuffer(v13);
  }
  return GlyphOutlineInternal;
}
