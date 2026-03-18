/*
 * XREFs of pProcessDfbSurfaces2 @ 0x1C0077AB0
 * Callers:
 *     bDynamicProcessAllDriverRealizations @ 0x1C0077950 (bDynamicProcessAllDriverRealizations.c)
 *     pProcessDfbSurfaces @ 0x1C00F2AD0 (pProcessDfbSurfaces.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0037A88 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     pProcessDfbSurfacesInternal @ 0x1C0077B90 (pProcessDfbSurfacesInternal.c)
 *     bDfbSurfacesMigrated @ 0x1C0077D90 (bDfbSurfacesMigrated.c)
 */

__int64 __fastcall pProcessDfbSurfaces2(SURFACE *this, __int64 a2, int a3, int a4, __int64 a5)
{
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  int v13; // eax
  HSEMAPHORE v14; // [rsp+20h] [rbp-18h] BYREF

  v14 = ghsemDwmState;
  EngAcquireSemaphore(ghsemDwmState);
  v9 = 0LL;
  if ( a3 && !(unsigned int)IsDwmActive(v8) )
    goto LABEL_9;
  if ( (*((_DWORD *)this + 29) & 1) == 0 )
    goto LABEL_8;
  v10 = *((_QWORD *)this + 6);
  if ( (*(_DWORD *)(v10 + 2144) & 0x10000) != 0 && a5 && (*(_DWORD *)(a5 + 2144) & 0x10000) != 0 )
  {
    if ( (*(_DWORD *)(v10 + 32) & 0x20000) != 0 && (*(_DWORD *)(a5 + 32) & 0x20000) != 0 )
    {
      if ( (int)IsMulProcessChildRedirectionDfbSurfaces2Supported(v8) >= 0 )
      {
        v13 = MulProcessChildRedirectionDfbSurfaces2((char *)this + 24, a5);
LABEL_21:
        v9 = v13;
        goto LABEL_9;
      }
      goto LABEL_9;
    }
    bDfbSurfacesMigrated(a5, this);
LABEL_8:
    v9 = pProcessDfbSurfacesInternal(this);
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
    v13 = MulProcessChildRedirectionDfbSurfaces(*((_QWORD *)this + 18));
    goto LABEL_21;
  }
LABEL_9:
  SEMOBJ::vUnlock((PERESOURCE *)&v14);
  return v9;
}
