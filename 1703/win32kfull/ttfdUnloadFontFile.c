/*
 * XREFs of ttfdUnloadFontFile @ 0x1C0229C58
 * Callers:
 *     bLoadFontFile @ 0x1C0227558 (bLoadFontFile.c)
 *     ttfdUnloadFontFileTTC @ 0x1C0229CBC (ttfdUnloadFontFileTTC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ttfdUnloadFontFile(_QWORD *pv)
{
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx

  if ( !pv )
    return 0LL;
  v3 = (void *)pv[11];
  if ( v3 )
  {
    EngFreeMem(v3);
    pv[11] = 0LL;
  }
  v4 = (void *)pv[12];
  if ( v4 )
  {
    EngFreeMem(v4);
    pv[12] = 0LL;
  }
  v5 = (void *)pv[2];
  if ( v5 )
    EngFreeMem(v5);
  EngFreeMem(pv);
  return 1LL;
}
