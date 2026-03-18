/*
 * XREFs of NtUserGetGestureInfo @ 0x1C01D8D90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     HMValidateHandle @ 0x1C00485E8 (HMValidateHandle.c)
 *     _FreeGestureInfo @ 0x1C01EF7C0 (_FreeGestureInfo.c)
 */

__int64 __fastcall NtUserGetGestureInfo(__int64 a1, unsigned __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD *v10; // rax
  __int64 v11; // rax

  v4 = 1;
  EnterCrit(0LL, 1LL);
  if ( !a2 )
  {
    v5 = 87LL;
LABEL_3:
    v4 = 0;
    UserSetLastError(v5);
    goto LABEL_17;
  }
  v10 = (_DWORD *)a2;
  if ( a2 >= W32UserProbeAddress )
    v10 = (_DWORD *)W32UserProbeAddress;
  if ( *v10 != 56 )
  {
    v4 = 0;
    UserSetLastError(87LL);
    goto LABEL_17;
  }
  v11 = HMValidateHandle(a1, 21);
  v6 = v11;
  if ( !v11 )
  {
    v4 = 0;
    goto LABEL_17;
  }
  if ( *(_QWORD *)(v11 + 16) != gptiCurrent )
  {
    v5 = 5LL;
    goto LABEL_3;
  }
  if ( a2 >= W32UserProbeAddress )
    a2 = W32UserProbeAddress;
  *(_OWORD *)a2 = *(_OWORD *)(v11 + 32);
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(v11 + 48);
  *(_OWORD *)(a2 + 32) = *(_OWORD *)(v11 + 64);
  *(_QWORD *)(a2 + 48) = *(_QWORD *)(v11 + 80);
  v7 = *(_QWORD *)(gptiCurrent + 960LL);
  if ( v7 == a1 && !*(_DWORD *)(v11 + 80) )
  {
    FreeGestureInfo(v7, 1LL);
    *(_QWORD *)(gptiCurrent + 960LL) = 0LL;
  }
LABEL_17:
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v4;
}
