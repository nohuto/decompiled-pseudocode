/*
 * XREFs of xxxAddFullScreen @ 0x1C0113C60
 * Callers:
 *     xxxCheckFullScreen @ 0x1C005F0B8 (xxxCheckFullScreen.c)
 *     xxxAddFullScreen @ 0x1C0113C60 (xxxAddFullScreen.c)
 * Callees:
 *     xxxSetTrayWindow @ 0x1C00537F8 (xxxSetTrayWindow.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CE7E0 (PopAndFreeW32ThreadLock.c)
 *     xxxAddFullScreen @ 0x1C0113C60 (xxxAddFullScreen.c)
 */

__int64 __fastcall xxxAddFullScreen(__int64 a1)
{
  _QWORD *v1; // rbx
  unsigned int v3; // esi
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rbx
  int v9; // edx
  char v10; // al
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD v14[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v15[4]; // [rsp+38h] [rbp-20h] BYREF

  v1 = *(_QWORD **)(a1 + 24);
  if ( !v1 )
    return 0LL;
  v3 = 0;
  if ( (*(_BYTE *)(a1 + 60) & 0x40) == 0
    && (*(_DWORD *)(gpsi + 2104LL) & 8) != 0
    && (((*(_DWORD *)(gptiCurrent + 656LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 440LL) + 16LL)) & 0x800) != 0
     || *(_QWORD *)(v1[1] + 184LL)) )
  {
    SetOrClrWF(1, (_DWORD *)a1, 0x440u, 1);
    ++*(_WORD *)(gpDispInfo + 152LL);
    v6 = gpDispInfo;
    if ( *(_WORD *)(gpDispInfo + 152LL) == 1 )
    {
      PushW32ThreadLock((__int64)v1, v15, UserDereferenceObject, v5);
      ObfReferenceObject(v1);
      v3 = 1;
      xxxSetTrayWindow((__int64)v1, (__int64 *)1);
      PopAndFreeW32ThreadLock((__int64)v15, v9);
    }
    v7 = *(_QWORD *)(a1 + 120);
    if ( v7 )
    {
      v10 = *(_BYTE *)(v7 + 71);
      if ( (v10 & 0x40) == 0 && !*(_DWORD *)(v7 + 136) && !*(_DWORD *)(v7 + 128) && (v10 & 0x10) == 0 )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v4, v5);
        v14[0] = *(_QWORD *)(ThreadWin32Thread + 392);
        *(_QWORD *)(ThreadWin32Thread + 392) = v14;
        v14[1] = v7;
        _InterlockedAdd((volatile signed __int32 *)(v7 + 8), 1u);
        if ( (unsigned int)xxxAddFullScreen(v7) )
          v3 = 1;
        ThreadUnlock1(v13, v12);
      }
    }
  }
  return v3;
}
