/*
 * XREFs of DrvGetDisplayDriverNames @ 0x1C005FE90
 * Callers:
 *     DrvBuildDevmodeList @ 0x1C005E770 (DrvBuildDevmodeList.c)
 *     DrvEscapeRemoteDrivers @ 0x1C009C470 (DrvEscapeRemoteDrivers.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F5340 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAU_D3DKMT_GE.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 */

unsigned int *__fastcall DrvGetDisplayDriverNames(__int64 a1)
{
  _WORD *v1; // rax
  unsigned int *v3; // rdi
  int v4; // esi
  unsigned int v5; // r14d
  unsigned int *v6; // rax
  unsigned int *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v12; // rax

  v1 = *(_WORD **)(a1 + 208);
  v3 = 0LL;
  v4 = 0;
  if ( v1 )
  {
    v5 = 0;
    while ( *v1 )
    {
      ++v5;
      do
      {
        ++v1;
        v4 += 2;
      }
      while ( *v1 );
      ++v1;
      v4 += 2;
    }
    v6 = (unsigned int *)PALLOCMEM2(v4 + 24 * v5 + 26, 1936876615LL, 0);
    v3 = v6;
    if ( v6 )
    {
      v7 = &v6[6 * v5 + 6];
      memmove(v7, *(const void **)(a1 + 208), (unsigned int)(v4 + 2));
      *v3 = 0;
      while ( *(_WORD *)v7 )
      {
        *(_QWORD *)&v3[4 * *v3 + 4] = v7;
        v10 = *v3;
        if ( *v3 >= v5 )
        {
          v12 = WdLogNewEntry5_WdAssertion(v9, v8);
          WdLogEvent5_WdAssertion(v12);
          return v3;
        }
        v9 = 2LL * v10;
        *(_QWORD *)&v3[4 * v10 + 2] = *(_QWORD *)(a1 + 136);
        ++*v3;
        while ( *(_WORD *)v7 )
          v7 = (unsigned int *)((char *)v7 + 2);
        v7 = (unsigned int *)((char *)v7 + 2);
      }
    }
  }
  return v3;
}
