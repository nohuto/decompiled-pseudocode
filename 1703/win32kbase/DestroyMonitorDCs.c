/*
 * XREFs of DestroyMonitorDCs @ 0x1C0074180
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C006FC00 (xxxResetDisplayDevice.c)
 * Callees:
 *     GreLockVisRgn @ 0x1C0037BE0 (GreLockVisRgn.c)
 *     DestroyCacheDC @ 0x1C0044760 (DestroyCacheDC.c)
 *     HdevFromMonitor @ 0x1C0074360 (HdevFromMonitor.c)
 */

__int64 __fastcall DestroyMonitorDCs(__int64 a1, int a2, int a3)
{
  CCursorClip *v3; // rcx
  __int64 *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rcx
  int v8; // r8d
  int v9; // eax
  int v10; // eax

  GreLockVisRgn(*((_QWORD *)gpDispInfo + 4), a2, a3);
  v3 = gpDispInfo;
  v4 = (__int64 *)((char *)gpDispInfo + 16);
  v5 = *((_QWORD *)gpDispInfo + 2);
  if ( v5 )
  {
    do
    {
      v6 = *(_QWORD *)(v5 + 88);
      if ( v6 && (unsigned int)HdevFromMonitor(v6) == -1 )
      {
        v9 = *(_DWORD *)(v5 + 64);
        if ( v9 >= 0 )
        {
          DestroyCacheDC(v4, *(_QWORD *)(v5 + 8), v8);
        }
        else
        {
          *(_QWORD *)(v5 + 88) = 0LL;
          v10 = v9 | 0x4000000;
          *(_DWORD *)(v5 + 64) = v10;
          if ( (v10 & 0x4000) != 0 )
          {
            GreSelectRedirectionBitmap(*(_QWORD *)(v5 + 8), 0LL);
            *(_DWORD *)(v5 + 64) &= ~0x4000u;
            *(_QWORD *)(v5 + 32) = 0LL;
          }
        }
      }
      if ( v5 == *v4 )
        v4 = (__int64 *)v5;
      v5 = *v4;
    }
    while ( *v4 );
    v3 = gpDispInfo;
  }
  return GreUnlockVisRgn(*((_QWORD *)v3 + 4));
}
