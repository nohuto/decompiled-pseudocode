/*
 * XREFs of HmgSafeNextObjt @ 0x1C006CDD0
 * Callers:
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C003CEA8 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C00635C4 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C006B870 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C006BC10 (vDynamicConvertNewSurfaceDCs.c)
 *     bDynamicModeChange @ 0x1C006BCF4 (bDynamicModeChange.c)
 *     bDynamicProcessAllDriverRealizations @ 0x1C006CC80 (bDynamicProcessAllDriverRealizations.c)
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C00A59E0 (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00EEF64 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?DrvBackoutRedirectionDeviceBitmap@@YAXPEAUHDEV__@@@Z @ 0x1C00F6004 (-DrvBackoutRedirectionDeviceBitmap@@YAXPEAUHDEV__@@@Z.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C00F8360 (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004E540 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004E690 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

__int64 __fastcall HmgSafeNextObjt(unsigned int a1, char a2)
{
  unsigned int v3; // ebx
  GdiHandleManager *v4; // r14
  unsigned int v5; // esi
  __int64 v6; // rcx
  unsigned int v7; // r9d
  unsigned int v8; // edx
  __int64 v9; // r8
  unsigned int v10; // eax
  __int64 v11; // rdi
  unsigned int v12; // eax
  __int64 v13; // r8
  unsigned __int64 v14; // rdx
  unsigned int v15; // r9d
  unsigned int v16; // ecx
  __int64 v17; // r8
  __int64 v18; // rdx

  v3 = (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000;
  if ( v3 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)a1,
                                  1)
           + 13) == ((unsigned __int16)a1 | (a1 >> 8) & 0xFF0000) >> 16 )
        v3 = (unsigned __int16)v3;
    }
    else
    {
      v3 = (unsigned __int16)a1;
    }
  }
  v4 = gpHandleManager;
  v5 = *(_DWORD *)gpHandleManager;
  while ( ++v3 < v5 )
  {
    v6 = *((_QWORD *)v4 + 2);
    v7 = *(_DWORD *)(v6 + 2056);
    if ( v3 < v7 + ((*(unsigned __int16 *)(v6 + 2) + 0xFFFF) << 16) )
    {
      if ( v3 >= v7 )
        v8 = ((v3 - v7) >> 16) + 1;
      else
        v8 = 0;
      v9 = *(_QWORD *)(v6 + 8LL * v8 + 8);
      if ( v8 )
        v10 = v3 + ((1 - v8) << 16) - v7;
      else
        v10 = v3;
      v11 = 0LL;
      if ( v10 < *(_DWORD *)(v9 + 20)
        && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v9 + 24) + 8 * ((unsigned __int64)v10 >> 8))
                     + 16LL * (unsigned __int8)v10
                     + 8) )
      {
        v11 = *(_QWORD *)v9 + 24LL * v10;
      }
      if ( v11 )
      {
        if ( !v3 )
          return 0LL;
        if ( *(_BYTE *)(v11 + 14) == a2 )
        {
          v12 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, v3);
          v13 = *((_QWORD *)v4 + 2);
          v14 = v12;
          v15 = *(_DWORD *)(v13 + 2056);
          if ( v12 >= v15 + ((*(unsigned __int16 *)(v13 + 2) + 0xFFFF) << 16) )
            return 0LL;
          if ( v12 >= v15 )
            v16 = ((v12 - v15) >> 16) + 1;
          else
            v16 = 0;
          v17 = *(_QWORD *)(v13 + 8LL * v16 + 8);
          if ( v16 )
            v14 = ((1 - v16) << 16) - v15 + v12;
          if ( (unsigned int)v14 >= *(_DWORD *)(v17 + 20) )
            v18 = 0LL;
          else
            v18 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v17 + 24) + 8 * (v14 >> 8)) + 16LL * (unsigned __int8)v14 + 8);
          if ( !v18
            || (*(_BYTE *)(v11 + 15) & 0x40) == 0
            || *(_WORD *)(v18 + 12) && *(struct _KTHREAD **)(v18 + 16) == KeGetCurrentThread() )
          {
            return v18;
          }
        }
      }
    }
  }
  return 0LL;
}
