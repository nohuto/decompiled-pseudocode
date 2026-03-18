/*
 * XREFs of NtUserTranslateAccelerator @ 0x1C00B7FE0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C00485E8 (HMValidateHandle.c)
 *     xxxTranslateAccelerator @ 0x1C00B81C8 (xxxTranslateAccelerator.c)
 */

__int64 __fastcall NtUserTranslateAccelerator(__int64 a1, __int64 a2, __int128 *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD v17[3]; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v18[3]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v19; // [rsp+58h] [rbp-40h]
  __int128 v20; // [rsp+68h] [rbp-30h]
  __int128 v21; // [rsp+78h] [rbp-20h]

  EnterCrit(0LL, 1LL);
  if ( (unsigned __int64)a3 >= W32UserProbeAddress )
    a3 = (__int128 *)W32UserProbeAddress;
  v19 = *a3;
  v20 = a3[1];
  v21 = a3[2];
  v8 = ValidateHwnd(a1);
  v11 = 0;
  if ( v8 )
  {
    v6 = HMValidateHandle(a2, 8);
    if ( v6 )
    {
      v17[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v17;
      v17[1] = v8;
      ++*(_DWORD *)(v8 + 8);
      v18[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v18;
      v18[1] = v6;
      ++*(_DWORD *)(v6 + 8);
      v11 = xxxTranslateAccelerator(v8);
      ThreadUnlock1(v13, v12);
      ThreadUnlock1(v15, v14);
    }
  }
  UserSessionSwitchLeaveCrit(v7, v6, v9, v10);
  return v11;
}
