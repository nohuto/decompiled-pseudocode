/*
 * XREFs of NtUserGetControlColor @ 0x1C01D86E0
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetControlColor @ 0x1C002931C (xxxGetControlColor.c)
 */

__int64 __fastcall NtUserGetControlColor(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 ControlColor; // rbx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD v20[3]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v21[3]; // [rsp+38h] [rbp-30h] BYREF

  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  ControlColor = 0LL;
  v14 = v8;
  if ( v8 )
  {
    v20[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v20;
    v20[1] = v8;
    ++*(_DWORD *)(v8 + 8);
    v15 = ValidateHwnd(a2);
    if ( v15 && a3 && a4 - 306 <= 6 )
    {
      v21[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v21;
      v21[1] = v15;
      ++*(_DWORD *)(v15 + 8);
      ControlColor = xxxGetControlColor(v14, (__int64 *)v15, a3, a4);
      ThreadUnlock1(v18, v17);
    }
    ThreadUnlock1(v16, v15);
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return ControlColor;
}
