/*
 * XREFs of NtUserDrawIconEx @ 0x1C0044B50
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     _DrawIconEx @ 0x1C0044444 (_DrawIconEx.c)
 *     GetAnimatedCursorFrame @ 0x1C00465D8 (GetAnimatedCursorFrame.c)
 *     HMValidateHandle @ 0x1C00485E8 (HMValidateHandle.c)
 *     _GetIconSize @ 0x1C0048BA8 (_GetIconSize.c)
 *     FindSystemDpiCursorSize @ 0x1C0049920 (FindSystemDpiCursorSize.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserDrawIconEx(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        unsigned int a7,
        __int64 a8,
        int a9,
        int a10,
        unsigned __int64 a11)
{
  int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 SystemDpiCursorSize; // rax
  __int64 AnimatedCursorFrame; // rbx
  __int64 v25; // rax
  _BYTE *v26; // rdx
  _BYTE v27[8]; // [rsp+60h] [rbp-28h] BYREF
  unsigned __int64 v28; // [rsp+68h] [rbp-20h]

  v15 = 1;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v27);
  LOBYTE(v16) = 3;
  v17 = HMValidateHandle(a4, v16);
  if ( !v17 )
    goto LABEL_13;
  SystemDpiCursorSize = FindSystemDpiCursorSize(v17);
  AnimatedCursorFrame = SystemDpiCursorSize;
  if ( !a10 )
  {
    v15 = DrawIconEx(a1, a2, a3, SystemDpiCursorSize, a5, a6, a7, a8, a9);
    goto LABEL_4;
  }
  v19 = *(unsigned int *)(SystemDpiCursorSize + 80);
  if ( (v19 & 8) == 0 || (AnimatedCursorFrame = GetAnimatedCursorFrame(SystemDpiCursorSize, 0LL)) != 0 )
  {
    v25 = -PsGetCurrentProcessWow64Process(v19, v18, v20, v21);
    v28 = (-(__int64)(v25 != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 4;
    if ( ((v25 != 0 ? 0 : 3) & (unsigned int)a11) != 0 )
      ExRaiseDatatypeMisalignment();
    v26 = (_BYTE *)a11;
    if ( a11 >= W32UserProbeAddress )
      v26 = (_BYTE *)W32UserProbeAddress;
    *v26 = *v26;
    v26[39] = v26[39];
    *(_QWORD *)a11 = *(_QWORD *)(AnimatedCursorFrame + 88);
    *(_QWORD *)(a11 + 8) = *(_QWORD *)(AnimatedCursorFrame + 96);
    *(_QWORD *)(a11 + 32) = *(_QWORD *)(AnimatedCursorFrame + 128);
    GetIconSize(AnimatedCursorFrame, a11 + 24, a11 + 28);
    *(_DWORD *)(a11 + 16) = *(_DWORD *)(AnimatedCursorFrame + 140);
    *(_DWORD *)(a11 + 20) = *(_DWORD *)(AnimatedCursorFrame + 144);
  }
  else
  {
LABEL_13:
    v15 = 0;
  }
LABEL_4:
  if ( !v27[0] )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v27);
  }
  UserSessionSwitchLeaveCrit(v19, v18, v20, v21);
  return v15;
}
