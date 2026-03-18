/*
 * XREFs of _SetDeferredDpiStateForWindowAndChildren @ 0x1C0018CFC
 * Callers:
 *     xxxSetParentWorker @ 0x1C0018034 (xxxSetParentWorker.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C00B7444 (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxMinMaximizeEx @ 0x1C00E8144 (xxxMinMaximizeEx.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     FreeHwndList @ 0x1C00693F0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0069470 (BuildHwndList.c)
 */

__int64 __fastcall SetDeferredDpiStateForWindowAndChildren(__int64 a1, int a2)
{
  __int64 result; // rax
  __int16 v3; // si
  __int64 v4; // rdx
  __int64 v5; // rdi
  _QWORD *i; // rbx
  __int64 v7; // rax

  result = *(_WORD *)(a1 + 374) != 0;
  if ( a2 != (_DWORD)result )
  {
    v3 = a2 ? *(_WORD *)(a1 + 372) : 0;
    result = BuildHwndList(a1, 1LL, 0LL);
    v5 = result;
    if ( result )
    {
      for ( i = (_QWORD *)(result + 32); *i != 1LL; ++i )
      {
        LOBYTE(v4) = 1;
        v7 = HMValidateHandleNoSecure(*i, v4);
        if ( v7 )
          *(_WORD *)(v7 + 374) = v3;
      }
      return FreeHwndList(v5);
    }
  }
  return result;
}
