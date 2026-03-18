/*
 * XREFs of NtUserGetGUIThreadInfo @ 0x1C00D9680
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     _GetGUIThreadInfo @ 0x1C00D9790 (_GetGUIThreadInfo.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall NtUserGetGUIThreadInfo(unsigned int a1, unsigned __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  _BYTE *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int GUIThreadInfo; // ebx
  __int64 v13; // r8
  __int64 v14; // r9
  _OWORD v16[5]; // [rsp+50h] [rbp-58h] BYREF

  memset(v16, 0, 0x48uLL);
  EnterSharedCrit(0LL, 1LL);
  if ( a1 )
  {
    v8 = PtiFromThreadId(a1);
    if ( !v8 )
    {
      UserSetLastError(87LL);
      GUIThreadInfo = 0;
      goto LABEL_9;
    }
  }
  else
  {
    v8 = 0LL;
  }
  if ( ((PsGetCurrentProcessWow64Process(v5, v4, v6, v7) != 0 ? 0 : 3) & (unsigned int)a2) != 0 )
    ExRaiseDatatypeMisalignment();
  v9 = (_BYTE *)a2;
  if ( a2 >= W32UserProbeAddress )
    v9 = (_BYTE *)W32UserProbeAddress;
  *v9 = *v9;
  v9[71] = v9[71];
  LODWORD(v16[0]) = *(_DWORD *)a2;
  GUIThreadInfo = GetGUIThreadInfo(v8, v16);
  if ( GUIThreadInfo )
  {
    *(_OWORD *)a2 = v16[0];
    *(_OWORD *)(a2 + 16) = v16[1];
    *(_OWORD *)(a2 + 32) = v16[2];
    *(_OWORD *)(a2 + 48) = v16[3];
    *(_QWORD *)(a2 + 64) = *(_QWORD *)&v16[4];
  }
LABEL_9:
  UserSessionSwitchLeaveCrit(v11, v10, v13, v14);
  return GUIThreadInfo;
}
