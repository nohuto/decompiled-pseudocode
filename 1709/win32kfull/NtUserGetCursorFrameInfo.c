/*
 * XREFs of NtUserGetCursorFrameInfo @ 0x1C0114D60
 * Callers:
 *     <none>
 * Callees:
 *     GetAnimatedCursorFrame @ 0x1C0089978 (GetAnimatedCursorFrame.c)
 *     HMValidateHandle @ 0x1C0099110 (HMValidateHandle.c)
 *     FindSystemDpiCursorSize @ 0x1C00992C0 (FindSystemDpiCursorSize.c)
 */

__int64 __fastcall NtUserGetCursorFrameInfo(__int64 a1, int a2, _DWORD *a3, int *a4)
{
  __int64 v6; // rsi
  int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  _DWORD *v13; // rdx
  ULONG64 v14; // rcx
  __int64 v15; // rbx
  __int64 SystemDpiCursorSize; // r9
  _DWORD *v17; // rcx
  int v18; // eax
  __int64 v20; // r9
  __int64 AnimatedCursorFrame; // r10

  v6 = a2;
  v8 = 1;
  EnterSharedCrit(0LL, 1LL);
  LOBYTE(v9) = 3;
  v12 = HMValidateHandle(a1, v9, v10, v11);
  v15 = 0LL;
  if ( v12 )
  {
    SystemDpiCursorSize = FindSystemDpiCursorSize(v12);
    v17 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v17 = (_DWORD *)MmUserProbeAddress;
    *v17 = *v17;
    v14 = MmUserProbeAddress;
    v13 = a4;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      v13 = (_DWORD *)MmUserProbeAddress;
    *v13 = *v13;
    if ( (*(_DWORD *)(SystemDpiCursorSize + 80) & 8) != 0 )
    {
      AnimatedCursorFrame = GetAnimatedCursorFrame(SystemDpiCursorSize, v6);
      if ( !AnimatedCursorFrame )
        goto LABEL_10;
      v8 = *(_DWORD *)(v20 + 92);
      v14 = *(_QWORD *)(v20 + 112);
      v18 = *(_DWORD *)(v14 + 4 * v6);
      SystemDpiCursorSize = AnimatedCursorFrame;
    }
    else
    {
      v18 = 0;
    }
    if ( SystemDpiCursorSize )
    {
      v15 = *(_QWORD *)SystemDpiCursorSize;
      *a3 = v18;
      *a4 = v8;
    }
  }
LABEL_10:
  UserSessionSwitchLeaveCrit(v14, v13);
  return v15;
}
