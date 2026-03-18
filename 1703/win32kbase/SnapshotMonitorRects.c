/*
 * XREFs of SnapshotMonitorRects @ 0x1C0074200
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C006FC00 (xxxResetDisplayDevice.c)
 *     ?RefreshMonitorList@CCursorClip@@QEAAXXZ @ 0x1C0072394 (-RefreshMonitorList@CCursorClip@@QEAAXXZ.c)
 * Callees:
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     HdevFromMonitor @ 0x1C0074360 (HdevFromMonitor.c)
 */

char *SnapshotMonitorRects()
{
  int v0; // edx
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  char *v5; // rsi
  _OWORD *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  char *result; // rax

  v0 = **(_DWORD **)gpDispInfo;
  if ( (unsigned int)(v0 - 1) > 0xFFFE )
    return 0LL;
  v1 = Win32AllocPool(120LL * (unsigned int)(v0 - 1) + 128, 0x726D7355u);
  v5 = (char *)v1;
  if ( !v1 )
  {
    UserSetLastError(14LL, v2, v3, v4);
    return 0LL;
  }
  v6 = (_OWORD *)(v1 + 8);
  v7 = *((_QWORD *)gpDispInfo + 12);
  if ( v7 )
  {
    v8 = v1 + 40;
    do
    {
      v9 = *(_QWORD *)(v7 + 40);
      if ( (*(_DWORD *)(v9 + 24) & 1) != 0 )
      {
        *v6 = *(_OWORD *)(v9 + 28);
        *(_OWORD *)(v8 - 16) = *(_OWORD *)(*(_QWORD *)(v7 + 40) + 76LL);
        *(_OWORD *)v8 = *(_OWORD *)(*(_QWORD *)(v7 + 40) + 44LL);
        *(_OWORD *)(v8 + 16) = *(_OWORD *)(*(_QWORD *)(v7 + 40) + 92LL);
        *(_OWORD *)(v8 + 32) = *(_OWORD *)(*(_QWORD *)(v7 + 40) + 60LL);
        *(_OWORD *)(v8 + 48) = *(_OWORD *)(*(_QWORD *)(v7 + 40) + 108LL);
        *(_WORD *)(v8 + 64) = *(_WORD *)(*(_QWORD *)(v7 + 40) + 128LL);
        *(_DWORD *)(v8 + 80) = *(_DWORD *)(v7 + 536);
        v10 = HdevFromMonitor(v7);
        v11 = v7;
        if ( v10 == -1 )
          v11 = 0LL;
        v6 = (_OWORD *)((char *)v6 + 120);
        *(_QWORD *)(v8 + 72) = v11;
        v8 += 120LL;
      }
      v7 = *(_QWORD *)(v7 + 56);
    }
    while ( v7 );
  }
  result = v5;
  *(_DWORD *)v5 = ((char *)v6 - v5 - 8) / 120;
  return result;
}
