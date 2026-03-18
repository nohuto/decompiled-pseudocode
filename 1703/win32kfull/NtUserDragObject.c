/*
 * XREFs of NtUserDragObject @ 0x1C01D76A0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C00485E8 (HMValidateHandle.c)
 *     xxxDragObject @ 0x1C0211F88 (xxxDragObject.c)
 */

__int64 __fastcall NtUserDragObject(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // ebx
  __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD v24[3]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v25[3]; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v26[4]; // [rsp+60h] [rbp-38h] BYREF

  EnterCrit(0LL, 1LL);
  v9 = ValidateHwnd(a1);
  v14 = 0;
  v15 = v9;
  if ( v9 )
  {
    v24[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v24;
    v24[1] = v9;
    ++*(_DWORD *)(v9 + 8);
    if ( a2 )
    {
      v18 = ValidateHwnd(a2);
      if ( !v18 )
      {
LABEL_15:
        ThreadUnlock1(v17, v16);
        goto LABEL_16;
      }
    }
    else
    {
      v18 = 0LL;
    }
    if ( a5 )
    {
      v17 = HMValidateHandle(a5, 3);
      if ( !v17 )
        goto LABEL_15;
    }
    else
    {
      v17 = 0LL;
    }
    v25[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v25;
    v25[1] = v18;
    if ( v18 )
      ++*(_DWORD *)(v18 + 8);
    v26[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v26;
    v26[1] = v17;
    if ( v17 )
      ++*(_DWORD *)(v17 + 8);
    v14 = xxxDragObject(v15, v18, a3, a4, v17);
    ThreadUnlock1(v20, v19);
    ThreadUnlock1(v22, v21);
    goto LABEL_15;
  }
LABEL_16:
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return v14;
}
