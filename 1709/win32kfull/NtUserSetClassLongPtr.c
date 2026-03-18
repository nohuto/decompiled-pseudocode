/*
 * XREFs of NtUserSetClassLongPtr @ 0x1C011CB80
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     xxxSetClassLongPtr @ 0x1C011CD70 (xxxSetClassLongPtr.c)
 */

__int64 __fastcall NtUserSetClassLongPtr(__int64 a1, unsigned int a2, ULONG64 a3, unsigned int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r10
  __int64 v11; // rbx
  ULONG64 v12; // rdx
  ULONG64 v13; // rdx
  int v14; // r8d
  ULONG64 v15; // rcx
  ULONG64 v16; // r9
  ULONG64 v17; // rcx
  ULONG64 v18; // rdx
  int v20; // [rsp+20h] [rbp-98h]
  __int128 v21; // [rsp+40h] [rbp-78h] BYREF
  int *v22; // [rsp+50h] [rbp-68h]
  int v23; // [rsp+58h] [rbp-60h] BYREF
  ULONG64 v24; // [rsp+60h] [rbp-58h]
  ULONG64 v25; // [rsp+68h] [rbp-50h]
  _QWORD v26[3]; // [rsp+80h] [rbp-38h] BYREF
  __int128 v27; // [rsp+98h] [rbp-20h]
  ULONG64 v28; // [rsp+A8h] [rbp-10h]

  EnterCrit(0LL, 1LL);
  v10 = ValidateHwnd(a1);
  v11 = 0LL;
  if ( v10 )
  {
    v26[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v26;
    v26[1] = v10;
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    if ( a2 == -26 )
    {
      if ( (a3 & 0x10000) != 0 )
      {
        UserSetLastError(13LL, v8);
LABEL_23:
        ThreadUnlock1(v17, v18);
        goto LABEL_24;
      }
    }
    else if ( a2 == -8 )
    {
      v25 = a3;
      v12 = a3;
      if ( a3 + 24 < a3 || a3 + 24 > MmUserProbeAddress )
        v12 = MmUserProbeAddress;
      v27 = *(_OWORD *)v12;
      v28 = *(_QWORD *)(v12 + 16);
      v21 = v27;
      v22 = (int *)v28;
      v13 = v28;
      if ( v28 >= MmUserProbeAddress )
        v13 = MmUserProbeAddress;
      v14 = *(_DWORD *)v13;
      v20 = *(_DWORD *)v13;
      v23 = *(_DWORD *)v13;
      v15 = *(_QWORD *)(v13 + 8);
      v24 = v15;
      if ( (v15 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        if ( (v15 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v16 = (unsigned __int16)v14 + v15 + 2;
        if ( v16 >= MmUserProbeAddress || (unsigned __int16)v14 > HIWORD(v20) || (v14 & 1) != 0 || v16 <= v15 )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
      v22 = &v23;
      v11 = xxxSetClassLongPtr(v10, 4294967288LL, &v21, a4);
      v17 = MmUserProbeAddress;
      v18 = MmUserProbeAddress;
      if ( a3 >= MmUserProbeAddress )
        a3 = MmUserProbeAddress;
      *(_OWORD *)a3 = v21;
      *(_QWORD *)(a3 + 16) = v22;
      goto LABEL_23;
    }
    v11 = xxxSetClassLongPtr(v10, a2, a3, a4);
    goto LABEL_23;
  }
LABEL_24:
  UserSessionSwitchLeaveCrit(v9, v8);
  return v11;
}
