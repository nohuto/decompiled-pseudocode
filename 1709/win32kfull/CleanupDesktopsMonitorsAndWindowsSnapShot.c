/*
 * XREFs of CleanupDesktopsMonitorsAndWindowsSnapShot @ 0x1C0126820
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C00D63E0 (xxxRemoteDisconnect.c)
 * Callees:
 *     CleanMonitorsAndWindowsSnapshot @ 0x1C01B882C (CleanMonitorsAndWindowsSnapshot.c)
 */

void __fastcall CleanupDesktopsMonitorsAndWindowsSnapShot(_QWORD **a1)
{
  _QWORD *v1; // rbx
  _QWORD *v3; // rdi
  __int64 v4; // rax
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8

  v1 = *a1;
  while ( v1 != a1 )
  {
    v3 = v1;
    v1 = (_QWORD *)*v1;
    v4 = *v3;
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v5 = (_QWORD *)v3[1], (_QWORD *)*v5 != v3) )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    CleanMonitorsAndWindowsSnapshot(v3);
    Win32FreePool(v3, v6, v7);
  }
}
