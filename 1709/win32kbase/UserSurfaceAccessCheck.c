/*
 * XREFs of UserSurfaceAccessCheck @ 0x1C0048F20
 * Callers:
 *     NtGdiDdDDIGetDeviceState @ 0x1C0070860 (NtGdiDdDDIGetDeviceState.c)
 *     UserScreenAccessCheck @ 0x1C007C030 (UserScreenAccessCheck.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall UserSurfaceAccessCheck(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 ThreadWin32Thread; // rax
  _QWORD *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rax
  _QWORD *v8; // rax

  v2 = 0;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v6 = ThreadWin32Thread;
  if ( !a1
    || (v7 = *(_QWORD *)(ThreadWin32Thread + 432)) != 0
    && (v8 = *(_QWORD **)(v7 + 8), v4 = (_QWORD *)*v8, *(_QWORD *)*v8 == a1)
    || (*(_DWORD *)(v6 + 464) & 8) != 0
    || (*(_DWORD *)(v6 + 1184) & 4) != 0 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v4, v6, v5) + 12) & 0x40010) == 0x40010 )
      return 1;
  }
  return v2;
}
