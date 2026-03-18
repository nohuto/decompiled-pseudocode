/*
 * XREFs of _SetWinEventHook @ 0x1C00E42BC
 * Callers:
 *     NtUserSetWinEventHook @ 0x1C00E41F0 (NtUserSetWinEventHook.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     CategoryMaskFromEventRange @ 0x1C00E445C (CategoryMaskFromEventRange.c)
 *     GetHmodTableIndex @ 0x1C00E48C0 (GetHmodTableIndex.c)
 */

// write access to const memory has been detected, the output may be wrong!
_DWORD *__fastcall SetWinEventHook(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        char a8)
{
  __int64 v8; // r12
  int HmodTableIndex; // edi
  __int64 v11; // rax
  _DWORD *v12; // rax
  _DWORD *v13; // rbx
  unsigned int v14; // eax
  int v15; // eax
  __int64 v16; // r8
  __int64 v18; // rcx

  v8 = a3;
  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 1) != 0 )
    return 0LL;
  if ( !a5 )
  {
    v18 = 1427LL;
LABEL_18:
    UserSetLastError(v18);
    return 0LL;
  }
  if ( a1 > a2 )
  {
    v18 = 1426LL;
    goto LABEL_18;
  }
  if ( (a8 & 4) == 0 )
  {
    HmodTableIndex = -1;
    v8 = 0LL;
    goto LABEL_8;
  }
  if ( !a3 )
  {
    v18 = 1428LL;
    goto LABEL_18;
  }
  if ( !a4 )
  {
    v18 = 1157LL;
    goto LABEL_18;
  }
  HmodTableIndex = GetHmodTableIndex(a4);
  if ( HmodTableIndex == -1 )
  {
    v18 = 126LL;
    goto LABEL_18;
  }
LABEL_8:
  if ( a7 )
  {
    v11 = PtiFromThreadId(a7);
    if ( !v11 || (*(_DWORD *)(v11 + 440) & 0x1000000) == 0 )
    {
      v18 = 1444LL;
      goto LABEL_18;
    }
  }
  LOBYTE(a3) = 15;
  v12 = (_DWORD *)HMAllocObject(gptiCurrent, 0LL, a3, 96LL);
  v13 = v12;
  if ( !v12 )
    return 0LL;
  v12[8] = a1;
  v12[9] = a2;
  v14 = v12[10] & 0xFFFFFFF0;
  v13[14] = a7;
  v13[18] = HmodTableIndex;
  *((_QWORD *)v13 + 6) = a6;
  v13[10] = (2 * (a8 & 0xB)) | v14 & 0xFFFFFFEF | ((a8 & 4) != 0 ? 8 : 0);
  if ( HmodTableIndex >= 0 && HmodTableIndex < catomSysTableEntries )
    ++*((_DWORD *)&acatomSysDepends + HmodTableIndex);
  *((_QWORD *)v13 + 8) = a5 - v8;
  *((_QWORD *)v13 + 3) = gpWinEventHooks;
  gpWinEventHooks = v13;
  v15 = CategoryMaskFromEventRange(a1, a2, gpsi);
  *(_DWORD *)(v16 + 1876) |= v15;
  v13[22] = W32GetCurrentThreadDpiAwarenessContext();
  return v13;
}
