/*
 * XREFs of NtUserFindExistingCursorIcon @ 0x1C00DB8B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C00053F0 (UserSetLastStatus.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     HMValidateHandle @ 0x1C00485E8 (HMValidateHandle.c)
 *     _FindExistingCursorIcon @ 0x1C00DBB50 (_FindExistingCursorIcon.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserFindExistingCursorIcon(int *a1, int *a2, __int128 *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ecx
  _WORD *v12; // rdx
  unsigned __int64 v13; // r8
  int **v14; // rax
  int *v15; // rax
  int v16; // r8d
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r10
  __int64 v19; // r9
  __int64 v20; // r8
  _WORD *v21; // rax
  NTSTATUS v22; // r10d
  __int64 v23; // rcx
  unsigned __int16 Atom; // ax
  __int64 *ExistingCursorIcon; // rax
  int v27; // [rsp+20h] [rbp-2D8h]
  int v28; // [rsp+20h] [rbp-2D8h]
  __int64 v29; // [rsp+58h] [rbp-2A0h]
  int v30; // [rsp+88h] [rbp-270h] BYREF
  unsigned __int64 v31; // [rsp+90h] [rbp-268h]
  int v32; // [rsp+A8h] [rbp-250h]
  _WORD *v33; // [rsp+B0h] [rbp-248h]
  __int128 v34; // [rsp+B8h] [rbp-240h] BYREF
  __int64 v35; // [rsp+C8h] [rbp-230h]
  _BYTE v36[512]; // [rsp+D0h] [rbp-228h] BYREF

  v6 = 0LL;
  EnterSharedCrit(0LL, 1LL);
  if ( (unsigned __int64)a3 >= W32UserProbeAddress )
    a3 = (__int128 *)W32UserProbeAddress;
  v34 = *a3;
  v35 = *((_QWORD *)a3 + 2);
  if ( (_QWORD)v34 )
  {
    v29 = HMValidateHandle(v34, 3);
    if ( !v29 )
      goto LABEL_38;
  }
  else
  {
    v29 = 0LL;
  }
  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    a1 = (int *)W32UserProbeAddress;
  v11 = *a1;
  v27 = *a1;
  v32 = *a1;
  v12 = (_WORD *)*((_QWORD *)a1 + 1);
  v33 = v12;
  if ( ((unsigned __int8)v12 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v13 = (unsigned __int64)v12 + (unsigned __int16)v11 + 2;
  v14 = (int **)W32UserProbeAddress;
  if ( v13 >= W32UserProbeAddress
    || (unsigned __int16)v11 > HIWORD(v27)
    || (v11 & 1) != 0
    || v13 <= (unsigned __int64)v12 )
  {
    *W32UserProbeAddress = 0;
    v14 = (int **)W32UserProbeAddress;
  }
  v15 = *v14;
  if ( a2 >= v15 )
    a2 = v15;
  v16 = *a2;
  v28 = *a2;
  v30 = *a2;
  v17 = *((_QWORD *)a2 + 1);
  v31 = v17;
  if ( (v17 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( (v17 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v18 = v17 + (unsigned __int16)v16 + 2LL;
    if ( v18 >= W32UserProbeAddress || (unsigned __int16)v16 > HIWORD(v28) || (v16 & 1) != 0 || v18 <= v17 )
      *W32UserProbeAddress = 0;
  }
  v19 = 2147483646LL;
  v20 = 256LL;
  v21 = v36;
  v22 = 0;
  v23 = 0LL;
  while ( v20 )
  {
    if ( !v19 || !*v12 )
      goto LABEL_33;
    *v21++ = *v12++;
    --v20;
    --v19;
    ++v23;
  }
  --v21;
  v22 = -2147483643;
LABEL_33:
  *v21 = 0;
  if ( v22 < 0 )
  {
    UserSetLastStatus(v22, 1);
  }
  else
  {
    Atom = UserFindAtom(v36);
    if ( Atom )
    {
      ExistingCursorIcon = (__int64 *)FindExistingCursorIcon(Atom, &v30, v29, &v34, v28, 0LL, Atom);
      if ( ExistingCursorIcon )
        v6 = *ExistingCursorIcon;
    }
  }
LABEL_38:
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v6;
}
