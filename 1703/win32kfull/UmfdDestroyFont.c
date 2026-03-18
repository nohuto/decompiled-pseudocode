/*
 * XREFs of UmfdDestroyFont @ 0x1C00F4B40
 * Callers:
 *     <none>
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C0090638 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     FONTOBJ_GetCachedGlyphAttrs @ 0x1C00F4BCC (FONTOBJ_GetCachedGlyphAttrs.c)
 *     FONTOBJ_SetCachedGlyphAttrs @ 0x1C0287374 (FONTOBJ_SetCachedGlyphAttrs.c)
 */

__int64 __fastcall UmfdDestroyFont(__int64 a1)
{
  void *CachedGlyphAttrs; // rax
  void *v3; // rax
  void **v5; // [rsp+20h] [rbp-38h] BYREF
  int v6; // [rsp+28h] [rbp-30h]
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-28h]
  __int64 v8; // [rsp+38h] [rbp-20h]
  __int64 v9; // [rsp+40h] [rbp-18h]

  CachedGlyphAttrs = (void *)FONTOBJ_GetCachedGlyphAttrs(a1, 0LL);
  if ( CachedGlyphAttrs )
  {
    EngFreeMem(CachedGlyphAttrs);
    FONTOBJ_SetCachedGlyphAttrs(a1, 0LL, 0LL);
  }
  v3 = (void *)FONTOBJ_GetCachedGlyphAttrs(a1, 1LL);
  if ( v3 )
  {
    EngFreeMem(v3);
    FONTOBJ_SetCachedGlyphAttrs(a1, 1LL, 0LL);
  }
  v6 = 3;
  v9 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v5 = &DestroyFontRequest::`vftable';
  v8 = a1;
  return UmfdClientSendAndWaitForCompletion(*(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL), (__int64)&v5);
}
