/*
 * XREFs of ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0031A40
 * Callers:
 *     ?GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z @ 0x1C00020C4 (-GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z.c)
 *     GreGetClipBox @ 0x1C0020E10 (GreGetClipBox.c)
 *     GreGetDCPoint @ 0x1C00286C0 (GreGetDCPoint.c)
 *     GreCreateCompatibleDC @ 0x1C002BB10 (GreCreateCompatibleDC.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C002F598 (-vCleanupDCs@@YAXK@Z.c)
 *     NtGdiDeleteObjectApp @ 0x1C003ED30 (NtGdiDeleteObjectApp.c)
 *     GreIntersectClipRect @ 0x1C0040CC0 (GreIntersectClipRect.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00423D8 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     NtGdiDdDDIOpenAdapterFromHdc @ 0x1C005F3E0 (NtGdiDdDDIOpenAdapterFromHdc.c)
 *     GreSelectBrushInternal @ 0x1C009F940 (GreSelectBrushInternal.c)
 *     GreSelectPenInternal @ 0x1C009F9C0 (GreSelectPenInternal.c)
 *     hbmSelectBitmapInternal @ 0x1C00A02A0 (hbmSelectBitmapInternal.c)
 *     NtGdiGetAppliedDeviceGammaRamp @ 0x1C00FAAF0 (NtGdiGetAppliedDeviceGammaRamp.c)
 *     NtGdiGetGammaRampCapability @ 0x1C00FAD40 (NtGdiGetGammaRampCapability.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0030AC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHH@Z @ 0x1C0030C40 (-vLockHandle@HANDLELOCK@@AEAAXIHH@Z.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C0031D20 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0033500 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C00E8220 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

void __fastcall XDCOBJ::vLock(XDCOBJ *this, HDC a2)
{
  __int16 v2; // edi^2
  int v3; // ebp
  __int64 v5; // rsi
  _DWORD *v6; // r14
  struct _KTHREAD *CurrentThread; // rbp
  GdiHandleEntryDirectory **v8; // r15
  unsigned int v9; // esi
  GdiHandleEntryDirectory *v10; // rcx
  unsigned int v11; // r8d
  signed int v12; // edx
  __int64 v13; // rax
  __int16 v14; // ax
  unsigned int v15; // ebp
  GdiHandleEntryDirectory *v16; // rcx
  unsigned int v17; // r8d
  signed int v18; // edx
  __int64 v19; // rax
  _DWORD *v20; // rdx
  unsigned int v21; // eax
  unsigned int v22; // ebp
  GdiHandleEntryDirectory *v23; // rcx
  unsigned int v24; // r8d
  signed int v25; // edx
  __int64 v26; // r10
  unsigned int v27; // edi
  unsigned int v28; // edi
  int v29; // edi
  unsigned __int16 *v30; // [rsp+20h] [rbp-48h] BYREF
  int v31; // [rsp+28h] [rbp-40h]

  v2 = WORD1(a2);
  v3 = *((_DWORD *)this + 3);
  v30 = 0LL;
  v31 = 0;
  v5 = 0LL;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v30, (unsigned __int16)a2 | ((unsigned int)a2 >> 8) & 0xFF0000, 1, v3);
  if ( v31 )
  {
    v6 = v30;
    if ( v30 )
    {
      if ( *((_BYTE *)v30 + 14) != 1 || v30[6] != v2 || v3 && (*((_BYTE *)v30 + 15) & 0x20) == 0 )
        goto LABEL_18;
      CurrentThread = KeGetCurrentThread();
      v6 = v30;
      v8 = (GdiHandleEntryDirectory **)gpHandleManager;
      v9 = *(_DWORD *)v30 & 0xFFFFFF;
      if ( v9 >= 0x10000 )
      {
        if ( *(_DWORD *)gpHandleManager > 0x10000u )
        {
          v27 = *v30;
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                      v27,
                                      1)
               + 13) == HIWORD(v9) )
            v9 = v27;
        }
        else
        {
          v9 = *v30;
        }
      }
      v10 = v8[2];
      v11 = *((_DWORD *)v10 + 514);
      if ( v9 >= v11 + ((*((unsigned __int16 *)v10 + 1) + 0xFFFF) << 16) )
        goto LABEL_51;
      if ( v9 >= v11 )
      {
        v12 = ((v9 - v11) >> 16) + 1;
        if ( (v9 - v11) >> 16 == -2 )
          goto LABEL_51;
      }
      else
      {
        v12 = 0;
      }
      v13 = *((_QWORD *)v10 + v12 + 1);
      if ( v12 )
        v9 = v9 - (v12 << 16) - v11 + 0x10000;
      if ( v9 < *(_DWORD *)(v13 + 20) )
      {
        v5 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v13 + 24) + 8 * ((unsigned __int64)v9 >> 8))
                       + 16LL * (unsigned __int8)v9
                       + 8);
        goto LABEL_16;
      }
LABEL_51:
      v5 = 0LL;
LABEL_16:
      v14 = *(_WORD *)(v5 + 12);
      if ( v14 && *(struct _KTHREAD **)(v5 + 16) != CurrentThread )
      {
        v5 = 0LL;
LABEL_19:
        v15 = *v6 & 0xFFFFFF;
        if ( v15 >= 0x10000 )
        {
          if ( *(_DWORD *)v8 > 0x10000u )
          {
            v28 = *(unsigned __int16 *)v6;
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(v8[2], v28, 1) + 13) == HIWORD(v15) )
              v15 = v28;
          }
          else
          {
            v15 = *(unsigned __int16 *)v6;
          }
        }
        v16 = v8[2];
        v17 = *((_DWORD *)v16 + 514);
        if ( v15 >= v17 + ((*((unsigned __int16 *)v16 + 1) + 0xFFFF) << 16) )
          goto LABEL_56;
        if ( v15 >= v17 )
        {
          v18 = ((v15 - v17) >> 16) + 1;
          if ( (v15 - v17) >> 16 == -2 )
            goto LABEL_56;
        }
        else
        {
          v18 = 0;
        }
        v19 = *((_QWORD *)v16 + v18 + 1);
        if ( v18 )
          v15 = v15 - (v18 << 16) - v17 + 0x10000;
        if ( v15 < *(_DWORD *)(v19 + 20) )
        {
          v20 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v19 + 24) + 8 * ((unsigned __int64)v15 >> 8))
                           + 16LL * (unsigned __int8)v15
                           + 8);
LABEL_29:
          v21 = GdiHandleManager::DecodeIndex((GdiHandleManager *)v8, (unsigned __int16)*v20 | (*v20 >> 8) & 0xFF0000);
          v22 = v21;
          if ( v21 >= 0x10000 && *(_DWORD *)v8 > 0x10000u )
            GdiHandleEntryDirectory::GetEntry(v8[2], (unsigned __int16)v21, 1);
          v23 = v8[2];
          v24 = *((_DWORD *)v23 + 514);
          if ( v22 >= v24 + ((*((unsigned __int16 *)v23 + 1) + 0xFFFF) << 16) )
            goto LABEL_36;
          if ( v22 >= v24 )
          {
            v25 = ((v22 - v24) >> 16) + 1;
            if ( (v22 - v24) >> 16 == -2 )
            {
LABEL_36:
              KeLeaveCriticalRegion();
              goto LABEL_37;
            }
          }
          else
          {
            v25 = 0;
          }
          v26 = *((_QWORD *)v23 + v25 + 1);
          if ( v25 )
            v22 = v22 - (v25 << 16) - v24 + 0x10000;
          *(_DWORD *)(*(_QWORD *)v26 + 24LL * v22 + 8) &= ~1u;
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(**(_QWORD **)(v26 + 24) + 8 * ((unsigned __int64)v22 >> 8)) + 16LL * (unsigned __int8)v22,
            0LL);
          KeLeaveCriticalRegion();
          goto LABEL_36;
        }
LABEL_56:
        v20 = 0LL;
        goto LABEL_29;
      }
      *(_QWORD *)(v5 + 16) = CurrentThread;
      *(_WORD *)(v5 + 12) = v14 + 1;
LABEL_18:
      v8 = (GdiHandleEntryDirectory **)gpHandleManager;
      goto LABEL_19;
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v30);
  }
LABEL_37:
  *(_QWORD *)this = v5;
  if ( v5 )
  {
    if ( (!*((_DWORD *)this + 3)
       || (*(_DWORD *)(*(_QWORD *)(v5 + 48) + 32LL) & 0x8000) != 0
       && (v29 = *(_DWORD *)(v5 + 2544), v29 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC)))
      && (unsigned int)XDCOBJ::bSaveAttributes(this) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)this + 536LL) & 4) != 0 )
        DC::vMarkTransformDirty(*(DC **)this);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
      *(_QWORD *)this = 0LL;
    }
  }
}
