/*
 * XREFs of ?AttachWindowCompositionTarget@@YAJPEAUHWND__@@HPEAUCompositionObject@@@Z @ 0x1C0044B78
 * Callers:
 *     NtUserCreateDCompositionHwndTarget @ 0x1C0044A60 (NtUserCreateDCompositionHwndTarget.c)
 * Callees:
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z @ 0x1C0044C58 (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z.c)
 */

__int64 __fastcall AttachWindowCompositionTarget(HWND a1, int a2, struct CompositionObject *a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  struct _KPROCESS *CurrentProcess; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // ebx
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v9 = v6;
  if ( v6 && (v8 = (*(_WORD *)(v6 + 82) & 0x3FFFu) - 669, (v8 & 0xFFFFFFFD) != 0) )
  {
    v15[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v15;
    v15[1] = v6;
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(gptiCurrent, gptiCurrent);
    if ( CurrentProcess == PsGetThreadProcess(**(PETHREAD **)(v9 + 16)) )
      v13 = _AttachWindowCompositionTarget((struct tagWND *)v9, a2, a3);
    else
      v13 = -1073741790;
    ThreadUnlock1(v12, v11);
  }
  else
  {
    v13 = -1073741811;
  }
  UserSessionSwitchLeaveCrit(v8, v7);
  return v13;
}
