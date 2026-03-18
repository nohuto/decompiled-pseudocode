/*
 * XREFs of NtUserDrawIconEx @ 0x1C009AE70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     GetAnimatedCursorFrame @ 0x1C0089978 (GetAnimatedCursorFrame.c)
 *     HMValidateHandle @ 0x1C0099110 (HMValidateHandle.c)
 *     FindSystemDpiCursorSize @ 0x1C00992C0 (FindSystemDpiCursorSize.c)
 *     _DrawIconEx @ 0x1C009B010 (_DrawIconEx.c)
 *     _GetIconSize @ 0x1C009B6FC (_GetIconSize.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserDrawIconEx(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        int a10,
        ULONG64 a11)
{
  int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 SystemDpiCursorSize; // rax
  __int64 v21; // rcx
  __int64 AnimatedCursorFrame; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v26; // rax
  _BYTE *v27; // rdx
  _BYTE v28[8]; // [rsp+60h] [rbp-28h] BYREF
  unsigned __int64 v29; // [rsp+68h] [rbp-20h]

  EnterCrit(0LL, 1LL);
  v15 = 0;
  gbValidateHandleForIL = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v28);
  LOBYTE(v16) = 3;
  v19 = HMValidateHandle(a4, v16, v17, v18);
  if ( v19 )
  {
    SystemDpiCursorSize = FindSystemDpiCursorSize(v19);
    AnimatedCursorFrame = SystemDpiCursorSize;
    if ( a10 )
    {
      if ( (*(_DWORD *)(SystemDpiCursorSize + 80) & 8) == 0
        || (AnimatedCursorFrame = GetAnimatedCursorFrame(SystemDpiCursorSize, 0)) != 0 )
      {
        v26 = -PsGetCurrentProcessWow64Process(v21);
        v29 = (-(__int64)(v26 != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 4;
        if ( ((v26 != 0 ? 0 : 3) & (unsigned int)a11) != 0 )
          ExRaiseDatatypeMisalignment();
        v27 = (_BYTE *)a11;
        if ( a11 >= MmUserProbeAddress )
          v27 = (_BYTE *)MmUserProbeAddress;
        *v27 = *v27;
        v27[39] = v27[39];
        *(_QWORD *)a11 = *(_QWORD *)(AnimatedCursorFrame + 88);
        *(_QWORD *)(a11 + 8) = *(_QWORD *)(AnimatedCursorFrame + 96);
        *(_QWORD *)(a11 + 32) = *(_QWORD *)(AnimatedCursorFrame + 128);
        GetIconSize(AnimatedCursorFrame, a11 + 24, a11 + 28);
        *(_DWORD *)(a11 + 16) = *(_DWORD *)(AnimatedCursorFrame + 140);
        *(_DWORD *)(a11 + 20) = *(_DWORD *)(AnimatedCursorFrame + 144);
        v15 = 1;
      }
    }
    else
    {
      v15 = DrawIconEx(a1, a2, a3, SystemDpiCursorSize, a5, a6, a7, a8, a9);
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v28);
  UserSessionSwitchLeaveCrit(v24, v23);
  return v15;
}
