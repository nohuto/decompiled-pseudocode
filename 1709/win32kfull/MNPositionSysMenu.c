/*
 * XREFs of MNPositionSysMenu @ 0x1C0138480
 * Callers:
 *     xxxSetSystemMenu @ 0x1C0138420 (xxxSetSystemMenu.c)
 *     xxxMNStartMenu @ 0x1C01F72BC (xxxMNStartMenu.c)
 *     xxxMNInvertItem @ 0x1C0216F74 (xxxMNInvertItem.c)
 *     xxxMNKeyFilter @ 0x1C021A71C (xxxMNKeyFilter.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     GetDpiDependentMetric @ 0x1C00774BC (GetDpiDependentMetric.c)
 *     GetWindowBordersForDpi @ 0x1C007C2E0 (GetWindowBordersForDpi.c)
 *     GetWindowDpiLastNotify @ 0x1C00930B4 (GetWindowDpiLastNotify.c)
 */

__int64 __fastcall MNPositionSysMenu(__int64 a1, __int64 a2)
{
  int v4; // esi
  unsigned int v5; // ebp
  __int64 v6; // rax
  unsigned int v7; // eax
  int DpiDependentMetric; // r14d
  __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // edi
  __int64 v16; // rax
  _DWORD *v17; // rcx
  unsigned int WindowDpiLastNotify; // eax
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD v21[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( !a2 )
    return (__int64)UserSetLastError(6LL, 0LL);
  if ( a1 != *(_QWORD *)(a2 + 88) )
  {
    v21[0] = a2 + 88;
    v21[1] = a1;
    HMAssignmentLock(v21);
  }
  v4 = 0;
  v5 = 96;
  if ( *(char *)(a1 + 64) < 0 )
  {
    if ( (*(_DWORD *)(a1 + 304) & 0x10000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
    }
    else if ( (*(_DWORD *)(a1 + 368) & 0xF) == 0
           && (v19 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 432LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v19 + 8) + 52LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 400LL) + 284LL);
    }
    DpiDependentMetric = GetDpiDependentMetric(23LL, WindowDpiLastNotify);
    if ( (*(_DWORD *)(a1 + 304) & 0x10000000) != 0 )
    {
      v10 = GetWindowDpiLastNotify(a1);
    }
    else if ( (*(_DWORD *)(a1 + 368) & 0xF) == 0
           && (v20 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 432LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v20 + 8) + 52LL) & 1) != 0 )
    {
      v10 = 96;
    }
    else
    {
      v10 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 400LL) + 284LL);
    }
    v11 = 24LL;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 304) & 0x10000000) != 0 )
    {
      v7 = GetWindowDpiLastNotify(a1);
    }
    else if ( (*(_DWORD *)(a1 + 368) & 0xF) == 0
           && (v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 432LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v6 + 8) + 52LL) & 1) != 0 )
    {
      v7 = 96;
    }
    else
    {
      v7 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 400LL) + 284LL);
    }
    DpiDependentMetric = GetDpiDependentMetric(12LL, v7);
    if ( (*(_DWORD *)(a1 + 304) & 0x10000000) != 0 )
    {
      v10 = GetWindowDpiLastNotify(a1);
    }
    else if ( (*(_DWORD *)(a1 + 368) & 0xF) == 0
           && (v9 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 432LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v9 + 8) + 52LL) & 1) != 0 )
    {
      v10 = 96;
    }
    else
    {
      v10 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 400LL) + 284LL);
    }
    v11 = 13LL;
  }
  result = GetDpiDependentMetric(v11, v10);
  v15 = result;
  if ( (*(_BYTE *)(a1 + 71) & 0x20) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 304) & 0x10000000) != 0 )
    {
      v5 = GetWindowDpiLastNotify(a1);
    }
    else if ( (*(_DWORD *)(a1 + 368) & 0xF) != 0
           || (v16 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 432LL)) == 0
           || (*(_DWORD *)(**(_QWORD **)(v16 + 8) + 52LL) & 1) == 0 )
    {
      v5 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 400LL) + 284LL);
    }
    result = GetWindowBordersForDpi(*(_DWORD *)(a1 + 68), *(_DWORD *)(a1 + 64), v13, v14, v5);
    DpiDependentMetric += result;
    v4 = result;
    v15 += result;
  }
  if ( (*(_DWORD *)(a2 + 56) & 0x10) == 0 && *(_DWORD *)(a2 + 68) )
  {
    v17 = *(_DWORD **)(a2 + 96);
    if ( v17 )
    {
      v17[19] = v4;
      v17[18] = v4;
      v17[20] = DpiDependentMetric - v4;
      v17[21] = v15 - v4;
    }
  }
  return result;
}
