/*
 * XREFs of zzzSetWindowsHookEx @ 0x1C005634C
 * Callers:
 *     NtUserSetWindowsHookEx @ 0x1C0056230 (NtUserSetWindowsHookEx.c)
 *     NtUserSetWindowsHookAW @ 0x1C01EC7D0 (NtUserSetWindowsHookAW.c)
 * Callees:
 *     zzzUnhookWindowsHookEx @ 0x1C0056178 (zzzUnhookWindowsHookEx.c)
 *     AddHmodDependency @ 0x1C00590AC (AddHmodDependency.c)
 *     GetHmodTableIndex @ 0x1C00590E8 (GetHmodTableIndex.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ?zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z @ 0x1C01C470C (-zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzSetWindowsHookEx(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, char a6)
{
  char v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rdx
  ACCESS_MASK v12; // ebx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rbx
  int HmodTableIndex; // eax
  char v17; // cl
  __int64 *v18; // r8
  PRKPROCESS *v19; // rcx
  int v20; // edx
  __int64 v21; // r14
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // [rsp+28h] [rbp-70h]
  __int64 *v30; // [rsp+28h] [rbp-70h]
  __int64 v31; // [rsp+48h] [rbp-50h] BYREF
  __int64 v32; // [rsp+50h] [rbp-48h]

  if ( (unsigned int)(a4 + 1) > 0xF )
  {
    v23 = 1426LL;
    goto LABEL_69;
  }
  if ( !a5 )
  {
    v23 = 1427LL;
LABEL_69:
    UserSetLastError(v23);
    return 0LL;
  }
  if ( !a3 )
  {
    if ( a1 || (byte_1C02E2020[a4 + 1] & 0x24) != 0 )
      goto LABEL_7;
LABEL_41:
    v23 = 1428LL;
    goto LABEL_69;
  }
  v9 = byte_1C02E2020[a4 + 1];
  if ( (v9 & 2) == 0 )
  {
    v23 = 1429LL;
    goto LABEL_69;
  }
  if ( *(_QWORD *)(a3 + 432) != *(_QWORD *)(gptiCurrent + 432LL) )
  {
LABEL_43:
    v23 = 5LL;
    goto LABEL_69;
  }
  v10 = *(_QWORD *)(gptiCurrent + 400LL);
  v11 = *(_QWORD *)(a3 + 400);
  if ( v10 == v11 )
    goto LABEL_7;
  if ( !a1 && (v9 & 0x24) == 0 )
    goto LABEL_41;
  if ( !gbEnforceUIPI
    && (*(_DWORD *)(v11 + 740) != *(_DWORD *)(v10 + 740) || *(_DWORD *)(v11 + 744) != *(_DWORD *)(v10 + 744))
    && (*(_DWORD *)(a3 + 464) & 0x400000) == 0 )
  {
    goto LABEL_43;
  }
  if ( (*(_DWORD *)(a3 + 464) & 0xC) != 0 && (v9 & 0x10) == 0 )
  {
    v23 = 1458LL;
    goto LABEL_69;
  }
LABEL_7:
  v29 = a4 + 1;
  if ( (byte_1C02E2020[v29] & 4) != 0 )
  {
    v24 = *(_QWORD *)(gptiCurrent + 400LL);
    if ( gbEnforceUIPI )
    {
      if ( (unsigned int)*(_QWORD *)(v24 + 832) <= 0x3FFF && *(int *)(v24 + 12) >= 0 )
      {
        UserSetLastError(5LL);
        EtwTraceUIPISystemError(*(_QWORD *)(gptiCurrent + 400LL), 0LL, 4LL);
        return 0LL;
      }
    }
  }
  if ( a4 )
  {
    if ( a4 == 1 )
      v12 = 32;
    else
      v12 = 8;
  }
  else
  {
    v12 = 16;
  }
  if ( !RtlAreAllAccessesGranted(*(_DWORD *)(gptiCurrent + 864LL), v12) )
    goto LABEL_43;
  if ( v12 != 8 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 40LL) + 32LL) & 4) != 0 )
  {
    v23 = 1459LL;
    goto LABEL_69;
  }
  LOBYTE(v13) = 5;
  v14 = HMAllocObject(gptiCurrent, *(_QWORD *)(gptiCurrent + 432LL), v13, 96LL);
  v15 = v14;
  if ( !v14 )
    return 0LL;
  *(_DWORD *)(v14 + 68) = -1;
  if ( a1 )
  {
    HmodTableIndex = GetHmodTableIndex(a2);
    *(_DWORD *)(v15 + 68) = HmodTableIndex;
    if ( HmodTableIndex == -1 )
    {
      UserSetLastError(126LL);
      HMFreeObject(v15);
      return 0LL;
    }
    if ( HmodTableIndex >= 0 )
      AddHmodDependency((unsigned int)HmodTableIndex);
  }
  v17 = a4 + 1;
  if ( a3 )
  {
    v18 = (__int64 *)(a3 + 8 * (v29 + 110));
    v30 = v18;
    *(_DWORD *)(a3 + 656) |= 1 << v17;
    if ( *(_QWORD *)(a3 + 456) )
    {
      v19 = *(PRKPROCESS **)(a3 + 400);
      if ( v19 == *(PRKPROCESS **)(gptiCurrent + 400LL) )
      {
        v20 = 0;
      }
      else
      {
        KeAttachProcess(*v19);
        v20 = 1;
        v18 = v30;
      }
      *(_DWORD *)(*(_QWORD *)(a3 + 456) + 56LL) = *(_DWORD *)(a3 + 656);
      if ( v20 )
      {
        KeDetachProcess();
        v18 = v30;
      }
    }
    *(_QWORD *)(v15 + 72) = a3;
  }
  else
  {
    v18 = (__int64 *)(*(_QWORD *)(gptiCurrent + 440LL) + 8 * (v29 + 4));
    *(_DWORD *)(v15 + 64) |= 1u;
    *(_DWORD *)(**(_QWORD **)(gptiCurrent + 440LL) + 16LL) |= 1 << v17;
    *(_QWORD *)(v15 + 72) = 0LL;
  }
  *(_DWORD *)(v15 + 64) |= a6 & 2;
  *(_DWORD *)(v15 + 48) = a4;
  *(_QWORD *)(v15 + 56) = a5 - a1;
  *(_QWORD *)(v15 + 40) = *v18;
  *v18 = v15;
  v21 = a4 + 1;
  if ( (byte_1C02E2020[v21] & 4) != 0 )
  {
    v31 = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = &v31;
    v32 = v15;
    _InterlockedAdd((volatile signed __int32 *)(v15 + 8), 1u);
    if ( !(unsigned int)zzzJournalAttach(gptiCurrent, 1) )
    {
      if ( ThreadUnlock1(v26, v25) )
        zzzUnhookWindowsHookEx((struct tagHOOK *)v15);
      return 0LL;
    }
    v15 = ThreadUnlock1(v26, v25);
    if ( !v15 )
      return 0LL;
  }
  if ( (*(_DWORD *)(v15 + 64) & 1) != 0 && (byte_1C02E2020[v21] & 0x10) != 0 )
  {
    *(_DWORD *)(gptiCurrent + 464LL) |= 0x40000u;
    KeSetPriorityThread((PKTHREAD)*gptiCurrent, 14);
    if ( (byte_1C02E2020[v21] & 4) != 0 )
    {
      v31 = *(_QWORD *)(gptiCurrent + 392LL);
      *(_QWORD *)(gptiCurrent + 392LL) = &v31;
      v32 = v15;
      _InterlockedAdd((volatile signed __int32 *)(v15 + 8), 1u);
      GenerateMouseMove(0LL);
      v15 = ThreadUnlock1(v28, v27);
      if ( a4 == 1 )
        gppiInputProvider = *(_QWORD *)(gptiCurrent + 400LL);
    }
  }
  return v15;
}
