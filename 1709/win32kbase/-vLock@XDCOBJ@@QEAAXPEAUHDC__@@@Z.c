/*
 * XREFs of ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C004BE80
 * Callers:
 *     GreRestoreDC @ 0x1C00400D0 (GreRestoreDC.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004CA74 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     bDeleteDCInternalEx @ 0x1C0054EF0 (bDeleteDCInternalEx.c)
 *     GreIntersectClipRect @ 0x1C0055340 (GreIntersectClipRect.c)
 *     GreCreateCompatibleDC @ 0x1C0055490 (GreCreateCompatibleDC.c)
 *     GreGetClipBox @ 0x1C0055B60 (GreGetClipBox.c)
 *     GreGetDCPoint @ 0x1C005B500 (GreGetDCPoint.c)
 *     NtGdiDdDDIOpenAdapterFromHdc @ 0x1C005E800 (NtGdiDdDDIOpenAdapterFromHdc.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C0061AE0 (-vCleanupDCs@@YAXK@Z.c)
 *     NtGdiGetGammaRampCapability @ 0x1C00764C0 (NtGdiGetGammaRampCapability.c)
 *     GreSelectBrush @ 0x1C00948A0 (GreSelectBrush.c)
 *     GreSelectPen @ 0x1C00ED9A0 (GreSelectPen.c)
 *     ?GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z @ 0x1C00FAC60 (-GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z.c)
 *     NtGdiGetAppliedDeviceGammaRamp @ 0x1C00FB0B0 (NtGdiGetAppliedDeviceGammaRamp.c)
 * Callees:
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C004C150 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004E690 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ??0HANDLELOCK@@QEAA@PEAUHOBJ__@@HHH@Z @ 0x1C00A9654 (--0HANDLELOCK@@QEAA@PEAUHOBJ__@@HHH@Z.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C00ED900 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

void __fastcall XDCOBJ::vLock(XDCOBJ *this, struct HOBJ__ *a2)
{
  int v3; // edi
  __int16 v4; // ebx^2
  __int64 v5; // rbp
  _DWORD *v6; // rsi
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v8; // edi
  __int64 v9; // rcx
  unsigned int v10; // r9d
  unsigned int v11; // edx
  __int64 v12; // r8
  __int16 v13; // ax
  unsigned int v14; // edi
  GdiHandleManager *v15; // rsi
  __int64 v16; // rcx
  unsigned int v17; // r8d
  unsigned int v18; // edx
  __int64 v19; // r9
  _DWORD *v20; // rdx
  int v21; // eax
  __int64 v22; // rbx
  __int64 v23; // rdx
  unsigned int v24; // r8d
  unsigned int v25; // ecx
  __int64 v26; // r10
  unsigned int v27; // ebx
  unsigned int v28; // ebx
  unsigned int v29; // edi
  int v30; // ebx
  unsigned __int16 *v31; // [rsp+30h] [rbp-48h] BYREF
  int v32; // [rsp+38h] [rbp-40h]

  v3 = *((_DWORD *)this + 3);
  v4 = WORD1(a2);
  v5 = 0LL;
  HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v31, a2, 1, v3, 0);
  if ( v32 )
  {
    v6 = v31;
    if ( *((_BYTE *)v31 + 14) == 1 && v31[6] == v4 && (!v3 || (*((_BYTE *)v31 + 15) & 0x20) != 0) )
    {
      CurrentThread = KeGetCurrentThread();
      v6 = v31;
      v8 = *(_DWORD *)v31 & 0xFFFFFF;
      if ( v8 >= 0x10000 )
      {
        if ( *(_DWORD *)gpHandleManager > 0x10000u )
        {
          v27 = *v31;
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                      v27,
                                      1)
               + 13) == HIWORD(v8) )
            v8 = v27;
        }
        else
        {
          v8 = *v31;
        }
      }
      v9 = *((_QWORD *)gpHandleManager + 2);
      v10 = *(_DWORD *)(v9 + 2056);
      if ( v8 < v10 + ((*(unsigned __int16 *)(v9 + 2) + 0xFFFF) << 16) )
      {
        if ( v8 >= v10 )
          v11 = ((v8 - v10) >> 16) + 1;
        else
          v11 = 0;
        v12 = *(_QWORD *)(v9 + 8LL * v11 + 8);
        if ( v11 )
          v8 += ((1 - v11) << 16) - v10;
        if ( v8 < *(_DWORD *)(v12 + 20) )
          v5 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * ((unsigned __int64)v8 >> 8))
                         + 16LL * (unsigned __int8)v8
                         + 8);
      }
      v13 = *(_WORD *)(v5 + 12);
      if ( !v13 || *(struct _KTHREAD **)(v5 + 16) == CurrentThread )
      {
        *(_QWORD *)(v5 + 16) = CurrentThread;
        *(_WORD *)(v5 + 12) = v13 + 1;
      }
      else
      {
        v5 = 0LL;
      }
    }
    v14 = *v6 & 0xFFFFFF;
    if ( v14 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        v28 = *(unsigned __int16 *)v6;
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    v28,
                                    1)
             + 13) == HIWORD(v14) )
          v14 = v28;
      }
      else
      {
        v14 = *(unsigned __int16 *)v6;
      }
    }
    v15 = gpHandleManager;
    v16 = *((_QWORD *)gpHandleManager + 2);
    v17 = *(_DWORD *)(v16 + 2056);
    if ( v14 >= v17 + ((*(unsigned __int16 *)(v16 + 2) + 0xFFFF) << 16) )
      goto LABEL_55;
    if ( v14 >= v17 )
      v18 = ((v14 - v17) >> 16) + 1;
    else
      v18 = 0;
    v19 = *(_QWORD *)(v16 + 8LL * v18 + 8);
    if ( v18 )
      v14 += ((1 - v18) << 16) - v17;
    if ( v14 >= *(_DWORD *)(v19 + 20) )
LABEL_55:
      v20 = 0LL;
    else
      v20 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v19 + 24) + 8 * ((unsigned __int64)v14 >> 8))
                       + 16LL * (unsigned __int8)v14
                       + 8);
    v21 = (unsigned __int16)*v20;
    v22 = v21 | (*v20 >> 8) & 0xFF0000u;
    if ( (unsigned int)v22 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        v29 = (unsigned __int16)v21;
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)v21,
                                    1)
             + 13) == WORD1(v22) )
          v22 = v29;
      }
      else
      {
        v22 = (unsigned __int16)v21;
      }
    }
    v23 = *((_QWORD *)v15 + 2);
    v24 = *(_DWORD *)(v23 + 2056);
    if ( (unsigned int)v22 < v24 + ((*(unsigned __int16 *)(v23 + 2) + 0xFFFF) << 16) )
    {
      if ( (unsigned int)v22 >= v24 )
        v25 = (((unsigned int)v22 - v24) >> 16) + 1;
      else
        v25 = 0;
      v26 = *(_QWORD *)(v23 + 8LL * v25 + 8);
      if ( v25 )
        v22 = ((1 - v25) << 16) - v24 + (unsigned int)v22;
      *(_DWORD *)(*(_QWORD *)v26 + 24 * v22 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v26 + 24) + 8 * ((unsigned __int64)(unsigned int)v22 >> 8))
      + 16LL * (unsigned __int8)v22,
        0LL);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegion();
  }
  *(_QWORD *)this = v5;
  if ( v5 )
  {
    if ( (!*((_DWORD *)this + 3)
       || (*(_DWORD *)(*(_QWORD *)(v5 + 48) + 32LL) & 0x8000) != 0
       && (v30 = *(_DWORD *)(v5 + 2544), v30 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC)))
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
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
}
