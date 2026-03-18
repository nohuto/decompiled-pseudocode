/*
 * XREFs of NtGdiDeleteObjectApp @ 0x1C003ED30
 * Callers:
 *     <none>
 * Callees:
 *     UserReleaseDC @ 0x1C0028B90 (UserReleaseDC.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0031A40 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0031E20 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0033500 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C003C4E0 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C003E550 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C003E9E0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C003F66C (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     bDeleteSurface @ 0x1C003F890 (bDeleteSurface.c)
 *     bDeleteBrush @ 0x1C0058800 (bDeleteBrush.c)
 *     bDeletePalette @ 0x1C0059240 (bDeletePalette.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C00777D0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     EngSetLastError @ 0x1C0083400 (EngSetLastError.c)
 */

__int64 __fastcall NtGdiDeleteObjectApp(HBRUSH a1)
{
  GdiHandleManager *v2; // r13
  unsigned int v3; // r15d
  int v4; // esi
  unsigned int v5; // r14d
  unsigned int v6; // ebx
  __int64 v7; // r9
  unsigned int v8; // edi
  unsigned int v9; // edx
  signed int v10; // ecx
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // rbx
  int v14; // eax
  int v16; // esi
  int v17; // esi
  PERESOURCE v18; // rdx
  unsigned int v19; // ebx
  __int64 v20; // rcx
  unsigned int v21; // esi
  GdiHandleManager *v22; // rbx
  unsigned int v23; // eax
  __int64 v24; // r8
  unsigned __int64 v25; // rdx
  unsigned int v26; // r9d
  signed int v27; // ecx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // r8
  int v32; // esi
  int v33; // esi
  _QWORD v34[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v35[2]; // [rsp+30h] [rbp-48h] BYREF
  int v36; // [rsp+40h] [rbp-38h]

  if ( ((unsigned int)a1 & 0x800000) != 0 )
    return 1LL;
  v2 = gpHandleManager;
  v3 = (unsigned int)a1 >> 16;
  v4 = BYTE2(a1) & 0x1F;
  v5 = (unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000;
  v6 = v5;
  if ( v5 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)a1,
                                  1)
           + 13) == ((unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000) >> 16 )
        v6 = (unsigned __int16)v5;
    }
    else
    {
      v6 = (unsigned __int16)a1;
    }
  }
  v7 = *((_QWORD *)v2 + 2);
  v8 = 0;
  v9 = *(_DWORD *)(v7 + 2056);
  if ( v6 < v9 + ((*(unsigned __int16 *)(v7 + 2) + 0xFFFF) << 16) )
  {
    if ( v6 >= v9 )
    {
      v10 = ((v6 - v9) >> 16) + 1;
      if ( (v6 - v9) >> 16 == -2 )
        goto LABEL_17;
    }
    else
    {
      v10 = 0;
    }
    v11 = *(_QWORD *)(v7 + 8LL * v10 + 8);
    if ( v10 )
      v6 = v6 - (v10 << 16) - v9 + 0x10000;
    v12 = 0LL;
    if ( v6 < *(_DWORD *)(v11 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v11 + 24) + 8 * ((unsigned __int64)v6 >> 8))
                   + 16LL * (unsigned __int8)v6
                   + 8) )
    {
      v12 = *(_QWORD *)v11 + 24LL * v6;
    }
    if ( v12
      && *(unsigned __int8 *)(v12 + 14) == v4
      && *(_WORD *)(v12 + 12) == (_WORD)v3
      && (*(_DWORD *)(v12 + 8) & 0xFFFFFFFE) == 0 )
    {
      if ( a1 )
        return 1;
      return v8;
    }
  }
LABEL_17:
  if ( v4 == 4 )
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v35, (HRGN)a1, 0);
    v13 = v35[0];
    if ( v35[0] )
    {
      if ( !*(_DWORD *)(v35[0] + 32LL) )
      {
        v14 = RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v35);
        v13 = v35[0];
        if ( v14 )
          v8 = 1;
      }
    }
    if ( !v36 )
      RGNOBJ::UpdateUserRgn((RGNOBJ *)v35);
    if ( v13 )
      _InterlockedDecrement((volatile signed __int32 *)(v13 + 12));
    return v8;
  }
  v16 = v4 - 1;
  if ( v16 )
  {
    v17 = v16 - 4;
    if ( v17 )
    {
      v32 = v17 - 3;
      if ( v32 )
      {
        v33 = v32 - 2;
        if ( v33 )
        {
          if ( v33 == 6 )
            return bDeleteBrush(a1);
          else
            return 0LL;
        }
        else
        {
          return bDeleteFont(a1, 0LL);
        }
      }
      else
      {
        return bDeletePalette((HPALETTE)a1);
      }
    }
    else
    {
      v18 = ghsemDynamicModeChange;
      if ( ghsemDynamicModeChange )
      {
        ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
        v18 = ghsemDynamicModeChange;
      }
      EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", v18);
      v19 = bDeleteSurface(a1);
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      if ( ghsemDynamicModeChange )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
        PsLeavePriorityRegion(v20);
      }
      return v19;
    }
  }
  v34[0] = 0LL;
  v34[1] = 0LL;
  v21 = 0;
  XDCOBJ::vLock((XDCOBJ *)v34, (HDC)a1);
  if ( !v34[0] )
    goto LABEL_67;
  v22 = gpHandleManager;
  v23 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, v5);
  v24 = *((_QWORD *)v22 + 2);
  v25 = v23;
  v26 = *(_DWORD *)(v24 + 2056);
  if ( v23 >= v26 + ((*(unsigned __int16 *)(v24 + 2) + 0xFFFF) << 16) )
    goto LABEL_66;
  if ( v23 >= v26 )
  {
    v27 = ((v23 - v26) >> 16) + 1;
    if ( (v23 - v26) >> 16 == -2 )
      goto LABEL_66;
  }
  else
  {
    v27 = 0;
  }
  v28 = *(_QWORD *)(v24 + 8LL * v27 + 8);
  if ( v27 )
    v25 = (_DWORD)v25 - (v27 << 16) - v26 + 0x10000;
  if ( (unsigned int)v25 < *(_DWORD *)(v28 + 20) )
  {
    v29 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v28 + 24) + 8 * (v25 >> 8)) + 16LL * (unsigned __int8)v25 + 8);
    goto LABEL_42;
  }
LABEL_66:
  v29 = 0LL;
LABEL_42:
  if ( *(_WORD *)(v29 + 12) <= 1u )
  {
    v21 = bDeleteDCInternalWorker((struct XDCOBJ *)v34, 0, 0, 0);
    if ( !v21 )
      v8 = 1;
    goto LABEL_45;
  }
LABEL_67:
  EngSetLastError(0xAAu);
LABEL_45:
  if ( v34[0] )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)v34);
    _InterlockedDecrement((volatile signed __int32 *)(v34[0] + 12LL));
  }
  if ( v8 )
    return (unsigned int)UserReleaseDC((__int64)a1, v30, v31);
  return v21;
}
