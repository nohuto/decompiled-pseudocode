/*
 * XREFs of HmgSafeNextObjt @ 0x1C0032440
 * Callers:
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0038824 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0057F50 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C0059040 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     bDynamicProcessAllDriverRealizations @ 0x1C0077950 (bDynamicProcessAllDriverRealizations.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C0078060 (vDynamicConvertNewSurfaceDCs.c)
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C0090C2C (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00EA884 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     bDynamicModeChange @ 0x1C00F2CAC (bDynamicModeChange.c)
 *     ?DrvBackoutRedirectionDeviceBitmap@@YAXPEAUHDEV__@@@Z @ 0x1C00F4FE4 (-DrvBackoutRedirectionDeviceBitmap@@YAXPEAUHDEV__@@@Z.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C00F7538 (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall HmgSafeNextObjt(unsigned int a1, char a2)
{
  GdiHandleManager *v2; // rdi
  unsigned int v4; // eax
  __int64 v5; // rsi
  __int64 v6; // rdx
  unsigned int v7; // r9d
  signed int v8; // r8d
  __int64 v9; // r10
  unsigned int v10; // ecx
  __int64 v11; // r9
  unsigned int v12; // eax
  __int64 v13; // r8
  unsigned __int64 v14; // rdx
  unsigned int v15; // r9d
  signed int v16; // ecx
  __int64 v17; // rax

  v2 = gpHandleManager;
  v4 = GdiHandleManager::DecodeIndex(gpHandleManager, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000);
  v5 = 0LL;
  while ( ++v4 < *(_DWORD *)v2 )
  {
    v6 = *((_QWORD *)v2 + 2);
    v7 = *(_DWORD *)(v6 + 2056);
    if ( v4 < v7 + ((*(unsigned __int16 *)(v6 + 2) + 0xFFFF) << 16) )
    {
      if ( v4 < v7 )
      {
        v8 = 0;
        goto LABEL_6;
      }
      v8 = ((v4 - v7) >> 16) + 1;
      if ( (v4 - v7) >> 16 != -2 )
      {
LABEL_6:
        v9 = *(_QWORD *)(v6 + 8LL * v8 + 8);
        v10 = v4;
        if ( v8 )
          v10 = v4 - (v8 << 16) - v7 + 0x10000;
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
          if ( !v4 )
            return 0LL;
          if ( *(_BYTE *)(v11 + 14) == a2 )
          {
            v12 = GdiHandleManager::DecodeIndex(v2, v4);
            v13 = *((_QWORD *)v2 + 2);
            v14 = v12;
            v15 = *(_DWORD *)(v13 + 2056);
            if ( v12 < v15 + ((*(unsigned __int16 *)(v13 + 2) + 0xFFFF) << 16) )
            {
              if ( v12 < v15 )
              {
                v16 = 0;
                goto LABEL_17;
              }
              v16 = ((v12 - v15) >> 16) + 1;
              if ( (v12 - v15) >> 16 != -2 )
              {
LABEL_17:
                v17 = *(_QWORD *)(v13 + 8LL * v16 + 8);
                if ( v16 )
                  v14 = (_DWORD)v14 - (v16 << 16) - v15 + 0x10000;
                if ( (unsigned int)v14 < *(_DWORD *)(v17 + 20) )
                  return *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v17 + 24) + 8 * (v14 >> 8))
                                   + 16LL * (unsigned __int8)v14
                                   + 8);
              }
            }
            return v5;
          }
        }
      }
    }
  }
  return 0LL;
}
