/*
 * XREFs of ProcessKeyboardInput @ 0x1C01A1C20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcessKeyboardInput(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rsi

  EnterCrit(0LL, 1LL);
  v3 = gpKL;
  if ( gpKL )
  {
    if ( *(_DWORD *)(gpKL + 88LL) )
    {
      v2 = *(unsigned int *)(a1 + 484);
      if ( *(_QWORD *)(gpKL + 104LL) != *(_QWORD *)(a1 + 484) )
      {
        SearchAndSetKbdTbl((struct DEVICEINFO *)a1, v2, *(_DWORD *)(a1 + 488));
        v2 = gpKL;
        *(_DWORD *)(gpKL + 104LL) = *(_DWORD *)(a1 + 484);
        v3 = gpKL;
        *(_DWORD *)(gpKL + 108LL) = *(_DWORD *)(a1 + 488);
      }
    }
  }
  v4 = a1 + 492;
  v5 = a1 + 492 + *(_QWORD *)(a1 + 264);
  while ( v4 < v5 )
  {
    v3 = gpsi;
    if ( (*gpsi & 0x2000) != 0 )
      break;
    ProcessKeyboardInputWorker(v4, a1, 1LL);
    v4 += 12LL;
  }
  return UserSessionSwitchLeaveCrit(v3, v2);
}
