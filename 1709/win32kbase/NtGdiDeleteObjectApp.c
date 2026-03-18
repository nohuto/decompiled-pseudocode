/*
 * XREFs of NtGdiDeleteObjectApp @ 0x1C0042D20
 * Callers:
 *     <none>
 * Callees:
 *     bDeleteSurface @ 0x1C001F690 (bDeleteSurface.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0043550 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0043920 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0045460 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004E690 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     bDeleteDCInternalEx @ 0x1C0054EF0 (bDeleteDCInternalEx.c)
 *     bDeleteBrush @ 0x1C0062D60 (bDeleteBrush.c)
 *     bDeletePalette @ 0x1C006ECD0 (bDeletePalette.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0073530 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

__int64 __fastcall NtGdiDeleteObjectApp(struct HOBJ__ *a1)
{
  unsigned int v2; // esi
  __int64 v3; // rbx
  unsigned int v4; // edi
  __int64 v5; // r9
  unsigned int v6; // edx
  unsigned int v7; // ecx
  __int64 v8; // r9
  __int64 v9; // r8
  unsigned int v10; // esi
  unsigned int v11; // esi
  unsigned int v12; // ebx
  __int64 v14; // rbx
  int v15; // eax
  unsigned int v16; // esi
  unsigned int v17; // esi
  _QWORD v18[2]; // [rsp+20h] [rbp-38h] BYREF
  int v19; // [rsp+30h] [rbp-28h]
  unsigned int v20; // [rsp+60h] [rbp+8h] BYREF

  if ( ((unsigned int)a1 & 0x800000) != 0 )
    return 1LL;
  v2 = ((unsigned int)a1 >> 16) & 0x1F;
  v3 = (unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000;
  if ( (unsigned int)v3 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)a1,
                                  1)
           + 13) == WORD1(v3) )
        v3 = (unsigned __int16)a1;
    }
    else
    {
      v3 = (unsigned __int16)a1;
    }
  }
  v4 = 1;
  v5 = *((_QWORD *)gpHandleManager + 2);
  v6 = *(_DWORD *)(v5 + 2056);
  if ( (unsigned int)v3 < v6 + ((*(unsigned __int16 *)(v5 + 2) + 0xFFFF) << 16) )
  {
    if ( (unsigned int)v3 >= v6 )
      v7 = (((unsigned int)v3 - v6) >> 16) + 1;
    else
      v7 = 0;
    v8 = *(_QWORD *)(v5 + 8LL * v7 + 8);
    if ( v7 )
      v3 = ((1 - v7) << 16) - v6 + (unsigned int)v3;
    v9 = 0LL;
    if ( (unsigned int)v3 < *(_DWORD *)(v8 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v8 + 24) + 8 * ((unsigned __int64)(unsigned int)v3 >> 8))
                   + 16LL * (unsigned __int8)v3
                   + 8) )
    {
      v9 = *(_QWORD *)v8 + 24 * v3;
    }
    if ( v9
      && *(unsigned __int8 *)(v9 + 14) == v2
      && *(_WORD *)(v9 + 12) == WORD1(a1)
      && (*(_DWORD *)(v9 + 8) & 0xFFFFFFFE) == 0 )
    {
      if ( !a1 )
        return 0;
      return v4;
    }
  }
  if ( v2 == 4 )
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v18, (HRGN)a1, 0);
    v14 = v18[0];
    if ( !v18[0]
      || *(_DWORD *)(v18[0] + 32LL)
      || (v15 = RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v18), v14 = v18[0], !v15) )
    {
      v4 = 0;
    }
    if ( !v19 )
      RGNOBJ::UpdateUserRgn((RGNOBJ *)v18);
    if ( v14 )
      _InterlockedDecrement((volatile signed __int32 *)(v14 + 12));
    return v4;
  }
  v10 = v2 - 1;
  if ( v10 )
  {
    v11 = v10 - 4;
    if ( v11 )
    {
      v16 = v11 - 3;
      if ( v16 )
      {
        v17 = v16 - 2;
        if ( v17 )
        {
          if ( v17 == 6 )
            return bDeleteBrush((HBRUSH)a1);
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
      if ( ghsemDynamicModeChange )
        ExEnterPriorityRegionAndAcquireResourceShared();
      EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      v12 = bDeleteSurface(a1);
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      if ( ghsemDynamicModeChange )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
        PsLeavePriorityRegion();
      }
      return v12;
    }
  }
  else
  {
    v20 = 0;
    return bDeleteDCInternalEx((HDC)a1, &v20);
  }
}
