/*
 * XREFs of NtUserFindExistingCursorIcon @ 0x1C0097CA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C000AC04 (UserSetLastStatus.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     _FindExistingCursorIcon @ 0x1C0097F3C (_FindExistingCursorIcon.c)
 *     HMValidateHandle @ 0x1C0099110 (HMValidateHandle.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserFindExistingCursorIcon(ULONG64 a1, int *a2, ULONG64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ecx
  _WORD *v11; // rdx
  ULONG64 v12; // r8
  int **v13; // rax
  int *v14; // rax
  int v15; // r8d
  ULONG64 v16; // rcx
  ULONG64 v17; // r10
  __int64 v18; // r9
  __int64 v19; // r8
  _WORD *v20; // rax
  NTSTATUS v21; // r10d
  __int64 v22; // rcx
  unsigned __int16 Atom; // ax
  __int64 *ExistingCursorIcon; // rax
  __int64 v26; // [rsp+20h] [rbp-2D8h]
  int v27; // [rsp+20h] [rbp-2D8h]
  __int64 v28; // [rsp+50h] [rbp-2A8h]
  int v29; // [rsp+80h] [rbp-278h] BYREF
  ULONG64 v30; // [rsp+88h] [rbp-270h]
  int v31; // [rsp+A0h] [rbp-258h]
  _WORD *v32; // [rsp+A8h] [rbp-250h]
  __int128 v33; // [rsp+B0h] [rbp-248h] BYREF
  __int64 v34; // [rsp+C0h] [rbp-238h]
  _BYTE v35[512]; // [rsp+D0h] [rbp-228h] BYREF

  v6 = 0LL;
  EnterSharedCrit(0LL, 1LL);
  if ( a3 >= MmUserProbeAddress )
    a3 = MmUserProbeAddress;
  v33 = *(_OWORD *)a3;
  v34 = *(_QWORD *)(a3 + 16);
  if ( (_QWORD)v33 )
  {
    LOBYTE(v7) = 3;
    v28 = HMValidateHandle(v33, v7);
    if ( !v28 )
      goto LABEL_38;
  }
  else
  {
    v28 = 0LL;
  }
  if ( a1 >= MmUserProbeAddress )
    a1 = MmUserProbeAddress;
  v10 = *(_DWORD *)a1;
  v27 = *(_DWORD *)a1;
  v31 = *(_DWORD *)a1;
  v11 = *(_WORD **)(a1 + 8);
  v32 = v11;
  if ( ((unsigned __int8)v11 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v12 = (ULONG64)v11 + (unsigned __int16)v10 + 2;
  v13 = (int **)MmUserProbeAddress;
  if ( v12 >= MmUserProbeAddress
    || (unsigned __int16)v10 > HIWORD(v27)
    || (v10 & 1) != 0
    || v12 <= (unsigned __int64)v11 )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
    v13 = (int **)MmUserProbeAddress;
  }
  v14 = *v13;
  if ( a2 >= v14 )
    a2 = v14;
  v15 = *a2;
  LODWORD(v26) = *a2;
  v29 = *a2;
  v16 = *((_QWORD *)a2 + 1);
  v30 = v16;
  if ( (v16 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( (v16 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v17 = v16 + (unsigned __int16)v15 + 2LL;
    if ( v17 >= MmUserProbeAddress || (unsigned __int16)v15 > WORD1(v26) || (v15 & 1) != 0 || v17 <= v16 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v18 = 2147483646LL;
  v19 = 256LL;
  v20 = v35;
  v21 = 0;
  v22 = 0LL;
  while ( v19 )
  {
    if ( !v18 || !*v11 )
      goto LABEL_33;
    *v20++ = *v11++;
    --v19;
    --v18;
    ++v22;
  }
  --v20;
  v21 = -2147483643;
LABEL_33:
  *v20 = 0;
  if ( v21 < 0 )
  {
    UserSetLastStatus(v21, 1);
  }
  else
  {
    Atom = UserFindAtom(v35);
    WORD2(v26) = Atom;
    if ( Atom )
    {
      ExistingCursorIcon = (__int64 *)FindExistingCursorIcon(Atom, &v29, v28, &v33, v26);
      if ( ExistingCursorIcon )
        v6 = *ExistingCursorIcon;
    }
  }
LABEL_38:
  UserSessionSwitchLeaveCrit(v9, v8);
  return v6;
}
