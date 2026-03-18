/*
 * XREFs of DestroyMonitorDCs @ 0x1C0062620
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C00626E0 (xxxResetDisplayDevice.c)
 * Callees:
 *     GreLockVisRgn @ 0x1C003E280 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C003FD70 (GreUnlockVisRgn.c)
 *     DestroyCacheDC @ 0x1C0057280 (DestroyCacheDC.c)
 *     HdevFromMonitor @ 0x1C00626A0 (HdevFromMonitor.c)
 */

__int64 __fastcall DestroyMonitorDCs(__int64 a1, int a2, int a3)
{
  __int64 v3; // rdx
  int v4; // r8d
  __int64 *v5; // rdi
  __int64 *i; // rbx
  __int64 v7; // rcx
  int v9; // eax
  int v10; // eax

  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32), a2, a3);
  v5 = (__int64 *)(gpDispInfo + 16);
  for ( i = *(__int64 **)(gpDispInfo + 16); i; i = (__int64 *)*i )
  {
    v7 = i[11];
    if ( v7 && (unsigned int)HdevFromMonitor(v7) == -1 )
    {
      v9 = *((_DWORD *)i + 16);
      if ( v9 >= 0 )
      {
        DestroyCacheDC(v5, i[1], v4);
      }
      else
      {
        i[11] = 0LL;
        v10 = v9 | 0x4000000;
        *((_DWORD *)i + 16) = v10;
        if ( (v10 & 0x4000) != 0 )
        {
          GreSelectRedirectionBitmap(i[1], 0LL);
          *((_DWORD *)i + 16) &= ~0x4000u;
          i[4] = 0LL;
        }
      }
    }
    if ( i != (__int64 *)*v5 )
      i = v5;
    v5 = i;
  }
  return GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32), v3, v4);
}
