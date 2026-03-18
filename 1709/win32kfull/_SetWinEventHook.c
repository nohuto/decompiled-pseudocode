/*
 * XREFs of _SetWinEventHook @ 0x1C0058360
 * Callers:
 *     NtUserSetWinEventHook @ 0x1C00581C0 (NtUserSetWinEventHook.c)
 * Callees:
 *     CategoryMaskFromEventRange @ 0x1C00584F4 (CategoryMaskFromEventRange.c)
 *     AddHmodDependency @ 0x1C00590AC (AddHmodDependency.c)
 *     GetHmodTableIndex @ 0x1C00590E8 (GetHmodTableIndex.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall SetWinEventHook(
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
  __int64 v12; // rax
  __int64 v13; // rbx
  int v14; // eax
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v20; // rcx

  v8 = a3;
  if ( (*(_DWORD *)(gptiCurrent + 464LL) & 1) != 0 )
    return 0LL;
  if ( !a5 )
  {
    v20 = 1427LL;
LABEL_17:
    UserSetLastError(v20);
    return 0LL;
  }
  if ( a1 > a2 )
  {
    v20 = 1426LL;
    goto LABEL_17;
  }
  if ( (a8 & 4) == 0 )
  {
    HmodTableIndex = -1;
    v8 = 0LL;
    goto LABEL_8;
  }
  if ( !a3 )
  {
    v20 = 1428LL;
    goto LABEL_17;
  }
  if ( !a4 )
  {
    v20 = 1157LL;
    goto LABEL_17;
  }
  HmodTableIndex = GetHmodTableIndex(a4);
  if ( HmodTableIndex == -1 )
  {
    v20 = 126LL;
    goto LABEL_17;
  }
LABEL_8:
  if ( a7 )
  {
    v11 = PtiFromThreadId(a7);
    if ( !v11 || (*(_DWORD *)(v11 + 464) & 0x1000000) == 0 )
    {
      v20 = 1444LL;
      goto LABEL_17;
    }
  }
  LOBYTE(a3) = 15;
  v12 = HMAllocObject(gptiCurrent, 0LL, a3, 96LL);
  v13 = v12;
  if ( !v12 )
    return 0LL;
  *(_DWORD *)(v12 + 32) = a1;
  v14 = *(_DWORD *)(v12 + 40);
  *(_DWORD *)(v13 + 36) = a2;
  *(_DWORD *)(v13 + 56) = a7;
  *(_DWORD *)(v13 + 72) = HmodTableIndex;
  *(_QWORD *)(v13 + 48) = a6;
  *(_DWORD *)(v13 + 40) = (2 * (a8 & 0xB)) | v14 & 0xFFFFFFE0 | ((a8 & 4) != 0 ? 8 : 0);
  if ( HmodTableIndex >= 0 )
    AddHmodDependency((unsigned int)HmodTableIndex);
  *(_QWORD *)(v13 + 64) = a5 - v8;
  *(_QWORD *)(v13 + 24) = gpWinEventHooks;
  gpWinEventHooks = v13;
  v15 = CategoryMaskFromEventRange(a1, a2, gpsi);
  *(_DWORD *)(v16 + 1876) |= v15;
  *(_DWORD *)(v13 + 88) = W32GetCurrentThreadDpiAwarenessContext(v18, v17);
  return v13;
}
