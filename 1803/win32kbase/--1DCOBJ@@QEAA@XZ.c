/*
 * XREFs of ??1DCOBJ@@QEAA@XZ @ 0x1C002D3D0
 * Callers:
 *     ReleaseCacheDC @ 0x1C002C3A0 (ReleaseCacheDC.c)
 *     bDeleteDCInternalEx @ 0x1C0030D10 (bDeleteDCInternalEx.c)
 *     GreSelectPalette @ 0x1C003F790 (GreSelectPalette.c)
 *     hdcOpenDCW @ 0x1C0044DB0 (hdcOpenDCW.c)
 *     GreGetDeviceCaps @ 0x1C0054280 (GreGetDeviceCaps.c)
 *     NtGdiGetDeviceCapsAll @ 0x1C00C84B0 (NtGdiGetDeviceCapsAll.c)
 * Callees:
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002AB40 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C002AFB0 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002BDF0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     bDeleteDCInternalEx @ 0x1C0030D10 (bDeleteDCInternalEx.c)
 */

void __fastcall DCOBJ::~DCOBJ(DCOBJ *this)
{
  __int64 v2; // rdi
  int v3; // r9d
  HDC v4; // rsi
  int v5; // ebx
  GdiHandleManager *v6; // rdi
  unsigned int v7; // eax
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  unsigned int v10; // r9d
  __int64 v11; // rcx
  __int64 v12; // r8
  _DWORD *v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // r10
  unsigned int v16; // edx
  unsigned int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // r10
  __int64 v20; // [rsp+30h] [rbp-28h] BYREF
  int v21; // [rsp+38h] [rbp-20h]

  if ( *(_QWORD *)this )
  {
    XDCOBJ::RestoreAttributes(this);
    v2 = *(_QWORD *)this;
    v3 = *((_DWORD *)this + 3);
    v20 = 0LL;
    v21 = 0;
    v4 = *(HDC *)v2;
    HANDLELOCK::vLockHandle(
      (HANDLELOCK *)&v20,
      (unsigned __int16)*(_QWORD *)v2 | ((unsigned int)*(_QWORD *)v2 >> 8) & 0xFF0000,
      0,
      v3,
      1);
    if ( v21 )
    {
      if ( (*(_BYTE *)(v20 + 15) & 8) == 0 || *(_DWORD *)(v2 + 8) || (v5 = 1, *(_WORD *)(v2 + 12) != 1) )
        v5 = 0;
      _InterlockedDecrement((volatile signed __int32 *)(v2 + 12));
      v6 = gpHandleManager;
      v7 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v20 & 0xFFFFFF);
      v8 = *((_QWORD *)v6 + 2);
      v9 = v7;
      v10 = *(_DWORD *)(v8 + 2056);
      if ( v7 >= v10 + ((*(unsigned __int16 *)(v8 + 2) + 0xFFFF) << 16) )
        goto LABEL_24;
      v11 = ((v7 - v10) >> 16) + 1;
      if ( v7 < v10 )
        v11 = 0LL;
      v12 = *(_QWORD *)(v8 + 8 * v11 + 8);
      if ( (_DWORD)v11 )
        v9 = ((1 - (_DWORD)v11) << 16) - v10 + v7;
      if ( (unsigned int)v9 >= *(_DWORD *)(v12 + 20) )
LABEL_24:
        v13 = 0LL;
      else
        v13 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * (v9 >> 8)) + 16LL * (unsigned __int8)v9 + 8);
      v14 = GdiHandleManager::DecodeIndex(
              (GdiHandleEntryDirectory **)v6,
              (unsigned __int16)*v13 | (*v13 >> 8) & 0xFF0000u);
      v15 = *((_QWORD *)v6 + 2);
      v16 = v14;
      v17 = *(_DWORD *)(v15 + 2056);
      if ( v14 < v17 + ((*(unsigned __int16 *)(v15 + 2) + 0xFFFF) << 16) )
      {
        v18 = ((v14 - v17) >> 16) + 1;
        if ( v14 < v17 )
          v18 = 0LL;
        v19 = *(_QWORD *)(v15 + 8 * v18 + 8);
        if ( (_DWORD)v18 )
          v16 = ((1 - (_DWORD)v18) << 16) - v17 + v14;
        *(_DWORD *)(*(_QWORD *)v19 + 24LL * v16 + 8) &= ~1u;
        ExReleasePushLockExclusiveEx(
          *(_QWORD *)(**(_QWORD **)(v19 + 24) + 8 * ((unsigned __int64)v16 >> 8)) + 16LL * (unsigned __int8)v16,
          0LL);
        KeLeaveCriticalRegion();
      }
      KeLeaveCriticalRegion();
      if ( v5 )
        bDeleteDCInternalEx(v4, 0LL);
    }
  }
}
