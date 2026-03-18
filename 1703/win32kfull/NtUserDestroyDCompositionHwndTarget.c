/*
 * XREFs of NtUserDestroyDCompositionHwndTarget @ 0x1C0017310
 * Callers:
 *     NtUserCreateDCompositionHwndTarget @ 0x1C00179F0 (NtUserCreateDCompositionHwndTarget.c)
 * Callees:
 *     UserSetLastStatus @ 0x1C00053F0 (UserSetLastStatus.c)
 *     ?DetachWindowCompositionTarget@@YAJPEAUHWND__@@H@Z @ 0x1C0017364 (-DetachWindowCompositionTarget@@YAJPEAUHWND__@@H@Z.c)
 */

__int64 __fastcall NtUserDestroyDCompositionHwndTarget(HWND a1, int a2)
{
  NTSTATUS v4; // eax
  __int64 v5; // rbx
  NTSTATUS v6; // edi

  KeEnterCriticalRegion();
  v4 = DetachWindowCompositionTarget(a1, a2);
  v5 = 0LL;
  v6 = v4;
  if ( v4 < 0 )
    UserSetLastStatus(v4, 1);
  KeLeaveCriticalRegion();
  LOBYTE(v5) = v6 >= 0;
  return v5;
}
