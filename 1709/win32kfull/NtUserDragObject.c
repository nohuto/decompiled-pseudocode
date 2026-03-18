/*
 * XREFs of NtUserDragObject @ 0x1C01E3EB0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0099110 (HMValidateHandle.c)
 *     xxxDragObject @ 0x1C02134AC (xxxDragObject.c)
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
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD v23[3]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v24[3]; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v25[4]; // [rsp+60h] [rbp-38h] BYREF

  EnterCrit(0LL, 1LL);
  v9 = ValidateHwnd(a1);
  v14 = 0;
  v15 = v9;
  if ( v9 )
  {
    v23[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v23;
    v23[1] = v9;
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    if ( a2 )
    {
      v17 = ValidateHwnd(a2);
      if ( !v17 )
      {
LABEL_15:
        ThreadUnlock1(v16, v10);
        goto LABEL_16;
      }
    }
    else
    {
      v17 = 0LL;
    }
    if ( a5 )
    {
      LOBYTE(v10) = 3;
      v16 = HMValidateHandle(a5, v10, v12, v13);
      if ( !v16 )
        goto LABEL_15;
    }
    else
    {
      v16 = 0LL;
    }
    v24[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v24;
    v24[1] = v17;
    if ( v17 )
      _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
    v25[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v25;
    v25[1] = v16;
    if ( v16 )
      _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
    v14 = xxxDragObject(v15, v17, a3, a4, v16);
    ThreadUnlock1(v19, v18);
    ThreadUnlock1(v21, v20);
    goto LABEL_15;
  }
LABEL_16:
  UserSessionSwitchLeaveCrit(v11, v10);
  return v14;
}
