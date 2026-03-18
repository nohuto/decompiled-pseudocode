/*
 * XREFs of NtUserGetCursorFrameInfo @ 0x1C010B080
 * Callers:
 *     <none>
 * Callees:
 *     GetAnimatedCursorFrame @ 0x1C00465D8 (GetAnimatedCursorFrame.c)
 *     HMValidateHandle @ 0x1C00485E8 (HMValidateHandle.c)
 *     FindSystemDpiCursorSize @ 0x1C0049920 (FindSystemDpiCursorSize.c)
 */

__int64 __fastcall NtUserGetCursorFrameInfo(__int64 a1, int a2, _DWORD *a3, int *a4)
{
  __int64 v6; // r14
  __int64 v8; // rdi
  int v9; // esi
  __int64 v10; // rax
  int *v11; // rdx
  _DWORD *v12; // rcx
  __int64 v13; // r8
  __int64 SystemDpiCursorSize; // r9
  int v15; // eax
  __int64 AnimatedCursorFrame; // r10

  v6 = a2;
  v8 = 0LL;
  v9 = 1;
  EnterSharedCrit(0LL, 1LL);
  v10 = HMValidateHandle(a1, 3);
  if ( v10 )
  {
    SystemDpiCursorSize = FindSystemDpiCursorSize(v10);
    v12 = a3;
    if ( (unsigned __int64)a3 >= W32UserProbeAddress )
      v12 = (_DWORD *)W32UserProbeAddress;
    *v12 = *v12;
    v11 = a4;
    if ( (unsigned __int64)a4 >= W32UserProbeAddress )
      v11 = (int *)W32UserProbeAddress;
    *v11 = *v11;
    if ( (*(_DWORD *)(SystemDpiCursorSize + 80) & 8) != 0 )
    {
      AnimatedCursorFrame = GetAnimatedCursorFrame(SystemDpiCursorSize, v6);
      if ( !AnimatedCursorFrame )
        goto LABEL_10;
      v9 = *(_DWORD *)(SystemDpiCursorSize + 92);
      v12 = *(_DWORD **)(SystemDpiCursorSize + 112);
      v15 = v12[v6];
      SystemDpiCursorSize = AnimatedCursorFrame;
    }
    else
    {
      v15 = 0;
    }
    if ( SystemDpiCursorSize )
    {
      v8 = *(_QWORD *)SystemDpiCursorSize;
      *a3 = v15;
      *a4 = v9;
    }
  }
LABEL_10:
  UserSessionSwitchLeaveCrit(v12, v11, v13, SystemDpiCursorSize);
  return v8;
}
