/*
 * XREFs of zzzSetWindowsHookEx @ 0x1C00E45A4
 * Callers:
 *     NtUserSetWindowsHookEx @ 0x1C00E44A0 (NtUserSetWindowsHookEx.c)
 *     NtUserSetWindowsHookAW @ 0x1C01E0680 (NtUserSetWindowsHookAW.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     zzzSetFMouseMoved @ 0x1C003C3C0 (zzzSetFMouseMoved.c)
 *     zzzUnhookWindowsHookEx @ 0x1C00D9098 (zzzUnhookWindowsHookEx.c)
 *     GetHmodTableIndex @ 0x1C00E48C0 (GetHmodTableIndex.c)
 *     ?zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z @ 0x1C01C0F70 (-zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzSetWindowsHookEx(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, char a6)
{
  unsigned __int8 v9; // dl
  __int64 v10; // rcx
  __int64 v11; // r8
  ACCESS_MASK v12; // ebx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rbx
  int HmodTableIndex; // eax
  char v17; // cl
  __int64 *v18; // r13
  PRKPROCESS *v19; // rcx
  int v20; // edx
  __int64 v21; // r14
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // [rsp+20h] [rbp-78h]
  __int64 v32; // [rsp+48h] [rbp-50h] BYREF
  __int64 v33; // [rsp+50h] [rbp-48h]

  if ( (unsigned int)(a4 + 1) > 0xF )
  {
    v23 = 1426LL;
    goto LABEL_68;
  }
  if ( !a5 )
  {
    v23 = 1427LL;
LABEL_68:
    UserSetLastError(v23);
    return 0LL;
  }
  if ( !a3 )
  {
    if ( a1 || (byte_1C02E5B20[a4 + 1] & 0x24) != 0 )
      goto LABEL_10;
LABEL_41:
    v23 = 1428LL;
    goto LABEL_68;
  }
  v9 = byte_1C02E5B20[a4 + 1];
  if ( (v9 & 2) == 0 )
  {
    v23 = 1429LL;
    goto LABEL_68;
  }
  if ( *(_QWORD *)(a3 + 408) != *(_QWORD *)(gptiCurrent + 408LL) )
  {
LABEL_43:
    v23 = 5LL;
    goto LABEL_68;
  }
  v10 = *(_QWORD *)(gptiCurrent + 376LL);
  v11 = *(_QWORD *)(a3 + 376);
  if ( v10 == v11 )
    goto LABEL_10;
  if ( !a1 && (v9 & 0x24) == 0 )
    goto LABEL_41;
  if ( !gbEnforceUIPI
    && (*(_DWORD *)(v11 + 732) != *(_DWORD *)(v10 + 732) || *(_DWORD *)(v11 + 736) != *(_DWORD *)(v10 + 736))
    && (*(_DWORD *)(a3 + 440) & 0x400000) == 0 )
  {
    goto LABEL_43;
  }
  if ( ((unsigned __int8)~(v9 >> 4) & ((*(_DWORD *)(a3 + 440) & 0xC) != 0)) != 0 )
  {
    v23 = 1458LL;
    goto LABEL_68;
  }
LABEL_10:
  v31 = a4 + 1;
  if ( (byte_1C02E5B20[v31] & 4) != 0 )
  {
    v24 = *(_QWORD *)(gptiCurrent + 376LL);
    if ( gbEnforceUIPI )
    {
      if ( (unsigned int)*(_QWORD *)(v24 + 824) <= 0x3FFF && *(int *)(v24 + 12) >= 0 )
      {
        UserSetLastError(5LL);
        EtwTraceUIPISystemError(*(_QWORD *)(gptiCurrent + 376LL), 0LL, 4LL);
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
  if ( !RtlAreAllAccessesGranted(*(_DWORD *)(gptiCurrent + 776LL), v12) )
    goto LABEL_43;
  if ( v12 != 8 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 40LL) + 32LL) & 4) != 0 )
  {
    v23 = 1459LL;
    goto LABEL_68;
  }
  LOBYTE(v13) = 5;
  v14 = HMAllocObject(gptiCurrent, *(_QWORD *)(gptiCurrent + 408LL), v13, 96LL);
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
    if ( HmodTableIndex >= 0 && HmodTableIndex < catomSysTableEntries )
      ++*((_DWORD *)&acatomSysDepends + HmodTableIndex);
  }
  v17 = a4 + 1;
  if ( a3 )
  {
    v18 = (__int64 *)(a3 + 8 * (v31 + 99));
    *(_DWORD *)(a3 + 600) |= 1 << v17;
    if ( *(_QWORD *)(a3 + 432) )
    {
      v19 = *(PRKPROCESS **)(a3 + 376);
      if ( v19 == *(PRKPROCESS **)(gptiCurrent + 376LL) )
      {
        v20 = 0;
      }
      else
      {
        KeAttachProcess(*v19);
        v20 = 1;
      }
      *(_DWORD *)(*(_QWORD *)(a3 + 432) + 56LL) = *(_DWORD *)(a3 + 600);
      if ( v20 )
        KeDetachProcess();
    }
    *(_QWORD *)(v15 + 72) = a3;
  }
  else
  {
    v18 = (__int64 *)(*(_QWORD *)(gptiCurrent + 416LL) + 8 * (v31 + 4));
    *(_DWORD *)(v15 + 64) |= 1u;
    *(_DWORD *)(**(_QWORD **)(gptiCurrent + 416LL) + 16LL) |= 1 << v17;
    *(_QWORD *)(v15 + 72) = 0LL;
  }
  *(_DWORD *)(v15 + 64) |= a6 & 2;
  *(_DWORD *)(v15 + 48) = a4;
  *(_QWORD *)(v15 + 56) = a5 - a1;
  *(_QWORD *)(v15 + 40) = *v18;
  *v18 = v15;
  v21 = a4 + 1;
  if ( (byte_1C02E5B20[v21] & 4) != 0 )
  {
    v32 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v32;
    v33 = v15;
    ++*(_DWORD *)(v15 + 8);
    if ( !(unsigned int)zzzJournalAttach(gptiCurrent, 1) )
    {
      if ( ThreadUnlock1(v26, v25) )
        zzzUnhookWindowsHookEx((struct tagHOOK *)v15, v27, v28);
      return 0LL;
    }
    v15 = ThreadUnlock1(v26, v25);
    if ( !v15 )
      return 0LL;
  }
  if ( (*(_DWORD *)(v15 + 64) & 1) != 0 && (byte_1C02E5B20[v21] & 0x10) != 0 )
  {
    *(_DWORD *)(gptiCurrent + 440LL) |= 0x40000u;
    KeSetPriorityThread((PKTHREAD)*gptiCurrent, 14);
    if ( (byte_1C02E5B20[v21] & 4) != 0 )
    {
      v32 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v32;
      v33 = v15;
      ++*(_DWORD *)(v15 + 8);
      zzzSetFMouseMoved();
      v15 = ThreadUnlock1(v30, v29);
      if ( a4 == 1 )
        gppiInputProvider = *(_QWORD *)(gptiCurrent + 376LL);
    }
  }
  return v15;
}
