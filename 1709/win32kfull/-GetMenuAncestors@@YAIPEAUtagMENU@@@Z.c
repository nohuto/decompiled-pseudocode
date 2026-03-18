/*
 * XREFs of ?GetMenuAncestors@@YAIPEAUtagMENU@@@Z @ 0x1C0111ED8
 * Callers:
 *     ?SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00976B4 (-SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@.c)
 *     ?GetMenuAncestors@@YAIPEAUtagMENU@@@Z @ 0x1C0111ED8 (-GetMenuAncestors@@YAIPEAUtagMENU@@@Z.c)
 * Callees:
 *     ?GetMenuAncestors@@YAIPEAUtagMENU@@@Z @ 0x1C0111ED8 (-GetMenuAncestors@@YAIPEAUtagMENU@@@Z.c)
 */

__int64 __fastcall GetMenuAncestors(struct tagMENU *a1)
{
  __int64 **v1; // rdi
  unsigned int v2; // ebx
  unsigned int MenuAncestors; // eax

  v1 = (__int64 **)*((_QWORD *)a1 + 13);
  v2 = 0;
  while ( v1 )
  {
    MenuAncestors = GetMenuAncestors((struct tagMENU *)v1[1]);
    v1 = (__int64 **)*v1;
    if ( MenuAncestors > v2 )
      v2 = MenuAncestors;
  }
  return v2 + 1;
}
