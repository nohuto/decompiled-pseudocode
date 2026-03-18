/*
 * XREFs of UserSurfaceAccessCheck @ 0x1C0076A00
 * Callers:
 *     NtGdiDdDDIGetDeviceState @ 0x1C0076950 (NtGdiDdDDIGetDeviceState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UserSurfaceAccessCheck(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  _QWORD *v9; // rax

  v2 = 0;
  v3 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v3 = *ThreadWin32Thread;
  if ( !a1
    || (v8 = *(_QWORD *)(v3 + 408)) != 0 && (v9 = *(_QWORD **)(v8 + 8), v6 = (_QWORD *)*v9, *(_QWORD *)*v9 == a1)
    || (*(_DWORD *)(v3 + 440) & 8) != 0
    || (*(_DWORD *)(v3 + 1096) & 4) != 0 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v6, v5, v7) + 12) & 0x40010) == 0x40010 )
      return 1;
  }
  return v2;
}
