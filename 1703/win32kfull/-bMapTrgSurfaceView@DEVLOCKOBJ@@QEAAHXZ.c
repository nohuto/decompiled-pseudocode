/*
 * XREFs of ?bMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C00749D8
 * Callers:
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x1C0071600 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 * Callees:
 *     ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C00E4CC8 (-bHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C027A3C8 (-bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall DEVLOCKOBJ::bMapTrgSurfaceView(DEVLOCKOBJ *this)
{
  struct XDCOBJ *v1; // r14
  __int64 v3; // r8
  __int64 v4; // rdi
  unsigned int v5; // eax
  unsigned int v6; // esi

  v1 = (DEVLOCKOBJ *)((char *)this + 32);
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    if ( (*((_DWORD *)this + 6) & 0x1000) != 0 )
    {
      v4 = *(_QWORD *)(v3 + 512);
      if ( v4 )
      {
        v5 = SURFACE::Map(*(_QWORD *)(v3 + 512), this, v3);
        v6 = v5;
        if ( v5 <= 1 )
        {
          if ( (*(_DWORD *)(v4 + 112) & 0x800) != 0 && *(_QWORD *)(v4 + 256) && (unsigned int)bHookRedir(v1) )
            *((_DWORD *)this + 6) |= 0x400u;
          if ( (*(_DWORD *)(v4 + 112) & 0x10) != 0 && (unsigned int)bHookBmpDrv(v1) )
            *((_DWORD *)this + 6) |= 0x2000u;
          if ( v6 == 1 )
            *((_DWORD *)this + 6) |= 0x40u;
        }
        else if ( v5 == 2 )
        {
          return 0LL;
        }
      }
    }
  }
  return 1LL;
}
