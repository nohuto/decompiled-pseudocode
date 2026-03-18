/*
 * XREFs of ?ResizeTimerFunc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01F0EA0
 * Callers:
 *     <none>
 * Callees:
 *     FindTimer @ 0x1C00B1F50 (FindTimer.c)
 */

void __fastcall ResizeTimerFunc(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx

  FindTimer((__int64)a1, a3, 2u, 1, 0LL);
  v4 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 592LL);
  if ( v4 && *(struct tagWND **)v4 == a1 )
    *(_DWORD *)(v4 + 184) |= 2u;
  GreCancelSynchronizedWindowResize(*(HWND *)a1);
}
