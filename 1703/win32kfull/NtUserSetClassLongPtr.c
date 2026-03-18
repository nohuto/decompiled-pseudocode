/*
 * XREFs of NtUserSetClassLongPtr @ 0x1C0116510
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxSetClassLongPtr @ 0x1C01166FC (xxxSetClassLongPtr.c)
 */

__int64 __fastcall NtUserSetClassLongPtr(__int64 a1, unsigned int a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // rbx
  unsigned __int64 v14; // rdx
  int *v15; // rdx
  int v16; // r8d
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v22; // [rsp+20h] [rbp-98h]
  __int128 v23; // [rsp+40h] [rbp-78h] BYREF
  int *v24; // [rsp+50h] [rbp-68h]
  int v25; // [rsp+58h] [rbp-60h] BYREF
  unsigned __int64 v26; // [rsp+60h] [rbp-58h]
  unsigned __int64 v27; // [rsp+68h] [rbp-50h]
  _QWORD v28[3]; // [rsp+80h] [rbp-38h] BYREF
  __int128 v29; // [rsp+98h] [rbp-20h]
  int *v30; // [rsp+A8h] [rbp-10h]

  EnterCrit(0LL, 1LL);
  v12 = ValidateHwnd(a1);
  v13 = 0LL;
  if ( v12 )
  {
    v28[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v28;
    v28[1] = v12;
    ++*(_DWORD *)(v12 + 8);
    if ( a2 == -26 )
    {
      if ( (a3 & 0x10000) != 0 )
      {
        UserSetLastError(13LL);
LABEL_23:
        ThreadUnlock1(v20, v19);
        goto LABEL_24;
      }
    }
    else if ( a2 == -8 )
    {
      v27 = a3;
      v14 = a3;
      if ( a3 + 24 < a3 || a3 + 24 > W32UserProbeAddress )
        v14 = W32UserProbeAddress;
      v29 = *(_OWORD *)v14;
      v30 = *(int **)(v14 + 16);
      v23 = v29;
      v24 = v30;
      v15 = v30;
      if ( (unsigned __int64)v30 >= W32UserProbeAddress )
        v15 = (int *)W32UserProbeAddress;
      v16 = *v15;
      v22 = *v15;
      v25 = *v15;
      v17 = *((_QWORD *)v15 + 1);
      v26 = v17;
      if ( (v17 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        if ( (v17 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v18 = (unsigned __int16)v16 + v17 + 2;
        if ( v18 >= W32UserProbeAddress || (unsigned __int16)v16 > HIWORD(v22) || (v16 & 1) != 0 || v18 <= v17 )
          *W32UserProbeAddress = 0;
      }
      v24 = &v25;
      v13 = xxxSetClassLongPtr(v12, 4294967288LL, &v23, a4);
      v20 = W32UserProbeAddress;
      if ( a3 >= W32UserProbeAddress )
        a3 = W32UserProbeAddress;
      *(_OWORD *)a3 = v23;
      *(_QWORD *)(a3 + 16) = v24;
      goto LABEL_23;
    }
    v13 = xxxSetClassLongPtr(v12, a2, a3, a4);
    goto LABEL_23;
  }
LABEL_24:
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v13;
}
