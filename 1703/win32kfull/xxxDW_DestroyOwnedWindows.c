/*
 * XREFs of xxxDW_DestroyOwnedWindows @ 0x1C00DCC08
 * Callers:
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 * Callees:
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 *     DwmAsyncOwnerChange @ 0x1C005CFBC (DwmAsyncOwnerChange.c)
 */

__int64 __fastcall xxxDW_DestroyOwnedWindows(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  __int64 result; // rax
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 i; // rbx
  __int64 v9; // rdx
  __int64 v10; // r9
  void *v11; // rax
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 696LL);
  result = *(_QWORD *)(a1 + 24);
  if ( result )
  {
    result = *(_QWORD *)(result + 8);
    v6 = *(_QWORD *)(result + 16);
    if ( v6 )
    {
      v7 = gptiCurrent;
      v12[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v12;
      v12[1] = v6;
      ++*(_DWORD *)(v6 + 8);
LABEL_4:
      for ( i = *(_QWORD *)(v6 + 112); i; i = *(_QWORD *)(i + 88) )
      {
        if ( *(_QWORD *)(i + 120) == a1 )
        {
          v9 = gpsi;
          if ( (*gpsi & 4) == 0 || (v9 = *(unsigned int *)(*(_QWORD *)(a1 + 16) + 440LL), (v9 & 1) != 0) || i != v4 )
          {
            if ( (*(_WORD *)(i + 82) & 0x3FFF) == 0x2AA || !(unsigned int)xxxDestroyWindow(i, v9, a3) )
            {
              HMAssignmentUnlock(i + 120);
              if ( (unsigned int)IsWindowDesktopComposed(i) )
              {
                v11 = (void *)ReferenceDwmApiPort(v7, a2, a3, v10);
                DwmAsyncOwnerChange(v11, *(_QWORD *)i, 0LL);
              }
            }
            goto LABEL_4;
          }
          HMAssignmentUnlock(i + 120);
        }
      }
      return ThreadUnlock1(v7, a2);
    }
  }
  return result;
}
