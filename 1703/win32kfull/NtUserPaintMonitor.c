/*
 * XREFs of NtUserPaintMonitor @ 0x1C01DDF30
 * Callers:
 *     <none>
 * Callees:
 *     xxxDesktopPaintCallback @ 0x1C0113D50 (xxxDesktopPaintCallback.c)
 */

_BOOL8 __fastcall NtUserPaintMonitor(__int64 a1, HDC a2, RECT *a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r10
  BOOL v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD v21[2]; // [rsp+28h] [rbp-60h] BYREF
  RECT v22; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v23[3]; // [rsp+48h] [rbp-40h] BYREF
  _QWORD v24[4]; // [rsp+60h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  if ( (unsigned __int64)a3 >= W32UserProbeAddress )
    a3 = (RECT *)W32UserProbeAddress;
  v22 = *a3;
  v13 = ValidateHmonitor(a1, v6, v7, v8);
  v14 = 0;
  if ( v13 )
  {
    v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 8LL) + 16LL);
    v23[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v23;
    v23[1] = v15;
    if ( v15 )
      ++*(_DWORD *)(v15 + 8);
    v24[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v24;
    v24[1] = v13;
    ++*(_DWORD *)(v13 + 8);
    v21[0] = v15;
    v21[1] = 0LL;
    v14 = xxxDesktopPaintCallback(v13, a2, &v22, (__int64)v21);
    ThreadUnlock1(v17, v16);
    ThreadUnlock1(v19, v18);
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v14;
}
