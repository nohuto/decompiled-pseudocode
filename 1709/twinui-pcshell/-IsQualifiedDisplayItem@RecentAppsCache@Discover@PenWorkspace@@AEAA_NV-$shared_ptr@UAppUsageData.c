/*
 * XREFs of ?IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@Z @ 0x1800E82D8
 * Callers:
 *     ?GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800E7E2C (-GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV-$vector@V-$ComPtr@UIDiscoverRecent.c)
 *     ?LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x1800E958C (-LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Wind.c)
 * Callees:
 *     ?IsShellExperienceAppId@CallerIdentity@@YA_NPEBG@Z @ 0x1801C1EA8 (-IsShellExperienceAppId@CallerIdentity@@YA_NPEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall PenWorkspace::Discover::RecentAppsCache::IsQualifiedDisplayItem(__int64 a1, const WCHAR **a2)
{
  const WCHAR *v4; // rcx
  char *v5; // rax
  const WCHAR *v6; // rbx
  __int64 v7; // r8
  const WCHAR *v8; // rdx
  __int64 v9; // rcx
  signed __int64 v10; // rdx
  unsigned __int16 v11; // r8
  int v12; // eax
  const WCHAR *v13; // rcx
  __int64 v14; // r11
  __int64 v15; // rdx
  const wchar_t *v16; // rax
  signed __int64 v17; // rcx
  wchar_t v18; // r8
  int v19; // eax
  wchar_t **v20; // r10
  wchar_t *v21; // rax
  __int64 v22; // rcx
  const WCHAR *v23; // rdx
  __int64 v24; // r9
  signed __int64 v25; // rdx
  wchar_t v26; // cx
  int v27; // eax
  RTL_SRWLOCK *v28; // rbx
  volatile signed __int32 *v29; // rbx
  volatile signed __int32 *v31; // rbx

  v4 = *a2;
  if ( *((_QWORD *)*a2 + 3) >= 8uLL )
    v4 = *(const WCHAR **)v4;
  if ( !CallerIdentity::IsShellExperienceAppId(v4, (const unsigned __int16 *)a2) )
  {
    v5 = *(char **)(a1 + 208);
    v6 = *a2;
    if ( !v5 || !*(_WORD *)v5 )
      goto LABEL_17;
    v7 = -1LL;
    do
      ++v7;
    while ( *(_WORD *)&v5[2 * v7] );
    v8 = *a2;
    if ( *((_QWORD *)v6 + 3) >= 8uLL )
      v8 = *(const WCHAR **)v6;
    v9 = *((_QWORD *)v6 + 2);
    if ( v9 != v7 )
      goto LABEL_17;
    if ( v9 )
    {
      v10 = (char *)v8 - v5;
      while ( 1 )
      {
        v11 = *(_WORD *)&v5[v10];
        if ( v11 != *(_WORD *)v5 )
          break;
        v5 += 2;
        if ( !--v9 )
          goto LABEL_15;
      }
      v12 = v11 < *(_WORD *)v5 ? -1 : 1;
    }
    else
    {
LABEL_15:
      v12 = 0;
    }
    if ( v12 )
    {
LABEL_17:
      v13 = *a2;
      if ( *((_QWORD *)v6 + 3) >= 8uLL )
        v13 = *(const WCHAR **)v6;
      v14 = *((_QWORD *)v6 + 2);
      v15 = 26LL;
      if ( v14 != 26 )
        goto LABEL_27;
      v16 = L"Microsoft.Windows.Explorer";
      v17 = (char *)v13 - (char *)L"Microsoft.Windows.Explorer";
      while ( 1 )
      {
        v18 = *(const wchar_t *)((char *)v16 + v17);
        if ( v18 != *v16 )
          break;
        ++v16;
        if ( !--v15 )
        {
          v19 = 0;
          goto LABEL_26;
        }
      }
      v19 = v18 < *v16 ? -1 : 1;
LABEL_26:
      if ( v19 )
      {
LABEL_27:
        v20 = off_1802149A0;
        while ( 1 )
        {
          v21 = *v20;
          v22 = -1LL;
          do
            ++v22;
          while ( v21[v22] );
          v23 = *a2;
          if ( *((_QWORD *)v6 + 3) >= 8uLL )
            v23 = *(const WCHAR **)v6;
          if ( v14 == v22 )
          {
            v24 = *((_QWORD *)v6 + 2);
            if ( v14 )
            {
              v25 = (char *)v23 - (char *)v21;
              while ( 1 )
              {
                v26 = *(wchar_t *)((char *)v21 + v25);
                if ( v26 != *v21 )
                  break;
                ++v21;
                if ( !--v24 )
                  goto LABEL_37;
              }
              v27 = v26 < *v21 ? -1 : 1;
            }
            else
            {
LABEL_37:
              v27 = 0;
            }
            if ( !v27 )
              break;
          }
          if ( ++v20 == off_1802149B0 )
          {
            v28 = (RTL_SRWLOCK *)(v6 + 24);
            AcquireSRWLockShared(v28);
            if ( *((int *)*a2 + 8) < 15 )
            {
              if ( v28 )
                ReleaseSRWLockShared(v28);
              break;
            }
            if ( v28 )
              ReleaseSRWLockShared(v28);
            v31 = (volatile signed __int32 *)a2[1];
            if ( v31 )
            {
              if ( !_InterlockedDecrement(v31 + 2) )
              {
                (**(void (__fastcall ***)(volatile signed __int32 *))v31)(v31);
                if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
              }
            }
            return 1;
          }
        }
      }
    }
  }
  v29 = (volatile signed __int32 *)a2[1];
  if ( v29 && !_InterlockedDecrement(v29 + 2) )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v29)(v29);
    if ( !_InterlockedDecrement(v29 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
  }
  return 0;
}
