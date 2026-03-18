/*
 * XREFs of xxxDW_DestroyOwnedWindows @ 0x1C005ED5C
 * Callers:
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 * Callees:
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 *     DwmAsyncOwnerChange @ 0x1C0060154 (DwmAsyncOwnerChange.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxDW_DestroyOwnedWindows(__int64 a1)
{
  __int64 v2; // r14
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 i; // rbx
  void *v9; // rax
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 752LL);
  result = *(_QWORD *)(a1 + 24);
  if ( result )
  {
    result = *(_QWORD *)(result + 8);
    v4 = *(_QWORD *)(result + 16);
    if ( v4 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      v10[0] = *(_QWORD *)(ThreadWin32Thread + 392);
      v7 = v10;
      *(_QWORD *)(ThreadWin32Thread + 392) = v10;
      v10[1] = v4;
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
LABEL_4:
      for ( i = *(_QWORD *)(v4 + 112); i; i = *(_QWORD *)(i + 88) )
      {
        if ( *(_QWORD *)(i + 120) == a1 )
        {
          if ( (*gpsi & 4) == 0 || (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 464LL) & 1) != 0 || i != v2 )
          {
            if ( (*(_WORD *)(i + 82) & 0x3FFF) == 0x2AA || !(unsigned int)xxxDestroyWindow(i) )
            {
              HMAssignmentUnlock(i + 120);
              if ( (unsigned int)IsWindowDesktopComposed(i) )
              {
                v9 = (void *)ReferenceDwmApiPort(v7);
                DwmAsyncOwnerChange(v9);
              }
            }
            goto LABEL_4;
          }
          HMAssignmentUnlock(i + 120);
        }
      }
      return ThreadUnlock1(v7, v6);
    }
  }
  return result;
}
