/*
 * XREFs of _anonymous_namespace_::IsAppInBlackList @ 0x18019629C
 * Callers:
 *     ?IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@Z @ 0x180196320 (-IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV-$shared_ptr@UAppUsageData.c)
 * Callees:
 *     <none>
 */

char __fastcall anonymous_namespace_::IsAppInBlackList(char *a1)
{
  wchar_t **v2; // r8
  wchar_t *v3; // rax
  __int64 v4; // rdx
  char *v5; // rcx
  __int64 v6; // r11
  signed __int64 v7; // rcx
  wchar_t v8; // dx
  int v9; // eax

  v2 = off_18034C5E0;
  while ( 1 )
  {
    v3 = *v2;
    v4 = -1LL;
    do
      ++v4;
    while ( v3[v4] );
    v5 = a1;
    if ( *((_QWORD *)a1 + 3) >= 8uLL )
      v5 = *(char **)a1;
    if ( *((_QWORD *)a1 + 2) == v4 )
    {
      v6 = *((_QWORD *)a1 + 2);
      if ( v6 )
      {
        v7 = v5 - (char *)v3;
        while ( 1 )
        {
          v8 = *(wchar_t *)((char *)v3 + v7);
          if ( v8 != *v3 )
            break;
          ++v3;
          if ( !--v6 )
            goto LABEL_11;
        }
        v9 = v8 < *v3 ? -1 : 1;
      }
      else
      {
LABEL_11:
        v9 = 0;
      }
      if ( !v9 )
        return 1;
    }
    if ( ++v2 == off_18034C5F8 )
      return 0;
  }
}
