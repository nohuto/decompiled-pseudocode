/*
 * XREFs of EngUnlockSurface @ 0x1C0036F00
 * Callers:
 *     ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C00EF040 (-MulDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C002F950 (HmgDecrementShareReferenceCount.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0033500 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

void __stdcall EngUnlockSurface(SURFOBJ *pso)
{
  PVOID *p_pvScan0; // rbx
  char *v2; // rbp
  HSURF hsurf; // rsi
  unsigned int v4; // edi
  GdiHandleManager *v5; // r15
  unsigned int v6; // eax
  __int64 v7; // r14
  unsigned __int64 v8; // rdx
  unsigned int v9; // r8d
  signed int v10; // ecx
  __int64 v11; // r9
  __int64 v12; // r8
  unsigned int v13; // edx
  signed int v14; // ecx
  __int64 v15; // rax

  if ( pso )
  {
    p_pvScan0 = &pso[-1].pvScan0;
    v2 = 0LL;
    hsurf = pso->hsurf;
    v4 = (unsigned __int16)hsurf | ((unsigned int)hsurf >> 8) & 0xFF0000;
    v5 = gpHandleManager;
    v6 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, v4);
    v7 = *((_QWORD *)v5 + 2);
    v8 = v6;
    v9 = *(_DWORD *)(v7 + 2056);
    if ( v6 >= v9 + ((*(unsigned __int16 *)(v7 + 2) + 0xFFFF) << 16) )
      goto LABEL_23;
    if ( v6 >= v9 )
    {
      v10 = ((v6 - v9) >> 16) + 1;
      if ( (v6 - v9) >> 16 == -2 )
        goto LABEL_23;
    }
    else
    {
      v10 = 0;
    }
    v11 = *(_QWORD *)(v7 + 8LL * v10 + 8);
    if ( v10 )
      v8 = v6 - (v10 << 16) - v9 + 0x10000;
    v12 = 0LL;
    if ( (unsigned int)v8 < *(_DWORD *)(v11 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v11 + 24) + 8 * (v8 >> 8)) + 16LL * (unsigned __int8)v8 + 8) )
    {
      v12 = *(_QWORD *)v11 + 24LL * (unsigned int)v8;
    }
    if ( !v12 || *(_BYTE *)(v12 + 14) != 5 || *(_WORD *)(v12 + 12) != WORD1(hsurf) )
      goto LABEL_23;
    if ( v4 >= 0x10000 )
    {
      if ( *(_DWORD *)v5 > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)v5 + 2),
                                    (unsigned __int16)hsurf,
                                    1)
             + 13) == ((unsigned __int16)hsurf | ((unsigned int)hsurf >> 8) & 0xFF0000) >> 16 )
          v4 = (unsigned __int16)v4;
      }
      else
      {
        v4 = (unsigned __int16)v4;
      }
    }
    v13 = *(_DWORD *)(v7 + 2056);
    if ( v4 >= v13 + ((*(unsigned __int16 *)(v7 + 2) + 0xFFFF) << 16) )
      goto LABEL_23;
    if ( v4 < v13 )
    {
      v14 = 0;
LABEL_19:
      v15 = *(_QWORD *)(v7 + 8LL * v14 + 8);
      if ( v14 )
        v4 = v4 - (v14 << 16) - v13 + 0x10000;
      if ( v4 < *(_DWORD *)(v15 + 20) )
        v2 = *(char **)(*(_QWORD *)(**(_QWORD **)(v15 + 24) + 8 * ((unsigned __int64)v4 >> 8))
                      + 16LL * (unsigned __int8)v4
                      + 8);
      goto LABEL_23;
    }
    v14 = ((v4 - v13) >> 16) + 1;
    if ( (v4 - v13) >> 16 != -2 )
      goto LABEL_19;
LABEL_23:
    if ( p_pvScan0 == (PVOID *)v2 )
      HmgDecrementShareReferenceCount((__int64)p_pvScan0);
  }
}
