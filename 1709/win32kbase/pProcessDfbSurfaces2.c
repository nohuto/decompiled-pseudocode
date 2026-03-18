/*
 * XREFs of pProcessDfbSurfaces2 @ 0x1C006CF70
 * Callers:
 *     bDynamicProcessAllDriverRealizations @ 0x1C006CC80 (bDynamicProcessAllDriverRealizations.c)
 *     pProcessDfbSurfaces @ 0x1C00F4F40 (pProcessDfbSurfaces.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C003E250 (EngAcquireSemaphore.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0042C5C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     pProcessDfbSurfacesInternal @ 0x1C006D050 (pProcessDfbSurfacesInternal.c)
 *     bDfbSurfacesMigrated @ 0x1C006DA10 (bDfbSurfacesMigrated.c)
 */

__int64 __fastcall pProcessDfbSurfaces2(struct OBJECT *a1, __int64 a2, int a3, int a4, __int64 a5)
{
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  int v13; // eax
  PERESOURCE v14; // [rsp+20h] [rbp-18h] BYREF

  v14 = ghsemDwmState;
  EngAcquireSemaphore((HSEMAPHORE)ghsemDwmState);
  v9 = 0LL;
  if ( a3 && !(unsigned int)IsDwmActive(v8) )
    goto LABEL_9;
  if ( (*((_DWORD *)a1 + 29) & 1) == 0 )
    goto LABEL_8;
  v10 = *((_QWORD *)a1 + 6);
  if ( (*(_DWORD *)(v10 + 2144) & 0x10000) != 0 && a5 && (*(_DWORD *)(a5 + 2144) & 0x10000) != 0 )
  {
    if ( (*(_DWORD *)(v10 + 32) & 0x20000) != 0 && (*(_DWORD *)(a5 + 32) & 0x20000) != 0 )
    {
      if ( (int)IsMulProcessChildRedirectionDfbSurfaces2Supported(v8) >= 0 )
      {
        v13 = MulProcessChildRedirectionDfbSurfaces2((char *)a1 + 24, a5);
LABEL_20:
        v9 = v13;
        goto LABEL_9;
      }
      goto LABEL_9;
    }
    bDfbSurfacesMigrated(a5, a1);
LABEL_8:
    v9 = pProcessDfbSurfacesInternal(a1);
    goto LABEL_9;
  }
  if ( (*(_DWORD *)(v10 + 32) & 0x20000) != 0 )
    goto LABEL_8;
  v11 = *(_QWORD *)(v10 + 16);
  if ( (*(_DWORD *)(v11 + 32) & 0x20000) == 0 )
    goto LABEL_8;
  if ( a4 )
  {
    v9 = 1LL;
  }
  else if ( (int)IsMulProcessChildRedirectionDfbSurfacesSupported(v11) >= 0 )
  {
    v13 = MulProcessChildRedirectionDfbSurfaces(*((_QWORD *)a1 + 18));
    goto LABEL_20;
  }
LABEL_9:
  SEMOBJ::vUnlock(&v14);
  return v9;
}
