/*
 * XREFs of _SetDeferredDpiStateForWindowAndChildren @ 0x1C00C8A5C
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C004AB9C (xxxMinMaximizeEx.c)
 *     UpdateWindowMonitor @ 0x1C0064FC0 (UpdateWindowMonitor.c)
 *     xxxSetParentWorker @ 0x1C00C8434 (xxxSetParentWorker.c)
 * Callees:
 *     FreeHwndList @ 0x1C006F360 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C006F3E0 (BuildHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 */

void __fastcall SetDeferredDpiStateForWindowAndChildren(__int64 a1, int a2)
{
  __int16 v2; // si
  struct tagBWL *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  struct tagBWL *v7; // rdi
  unsigned __int64 *i; // rbx
  __int64 v9; // rax

  if ( a2 != (*(_WORD *)(a1 + 374) != 0) )
  {
    v2 = a2 ? *(_WORD *)(a1 + 372) : 0;
    v3 = BuildHwndList(a1, (struct tagWND *)1, 0LL);
    v7 = v3;
    if ( v3 )
    {
      for ( i = (unsigned __int64 *)((char *)v3 + 32); *i != 1; ++i )
      {
        LOBYTE(v4) = 1;
        v9 = HMValidateHandleNoSecure(*i, v4, v5, v6);
        if ( v9 )
          *(_WORD *)(v9 + 374) = v2;
      }
      FreeHwndList(v7);
    }
  }
}
