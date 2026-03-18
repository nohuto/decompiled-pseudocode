/*
 * XREFs of xxxAddFullScreen @ 0x1C0015A0C
 * Callers:
 *     xxxCheckFullScreen @ 0x1C0015690 (xxxCheckFullScreen.c)
 *     xxxAddFullScreen @ 0x1C0015A0C (xxxAddFullScreen.c)
 * Callees:
 *     xxxAddFullScreen @ 0x1C0015A0C (xxxAddFullScreen.c)
 *     xxxSetTrayWindow @ 0x1C0018E48 (xxxSetTrayWindow.c)
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CD890 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxAddFullScreen(__int64 a1)
{
  _QWORD *v1; // rbx
  unsigned int v3; // esi
  __int64 v4; // rcx
  char v6; // al
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD **)(a1 + 24);
  if ( !v1 )
    return 0LL;
  v3 = 0;
  if ( (*(_BYTE *)(a1 + 60) & 0x40) == 0
    && (*(_DWORD *)(gpsi + 2104LL) & 8) != 0
    && (((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 416LL) + 16LL)) & 0x800) != 0
     || *(_QWORD *)(v1[1] + 184LL)) )
  {
    SetOrClrWF(1LL, a1, 1088LL, 1LL);
    if ( ++*(_WORD *)(gpDispInfo + 176LL) == 1 )
    {
      PushW32ThreadLock(v1, v9, UserDereferenceObject);
      ObfReferenceObject(v1);
      xxxSetTrayWindow(v1, 1LL);
      PopAndFreeW32ThreadLock(v9);
      v3 = 1;
    }
    v4 = *(_QWORD *)(a1 + 120);
    if ( v4 )
    {
      v6 = *(_BYTE *)(v4 + 71);
      if ( (v6 & 0x40) == 0 && !*(_DWORD *)(v4 + 136) && !*(_DWORD *)(v4 + 128) && (v6 & 0x10) == 0 )
      {
        v9[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v9;
        ++*(_DWORD *)(v4 + 8);
        v9[1] = v4;
        if ( (unsigned int)xxxAddFullScreen(v4) )
          v3 = 1;
        ThreadUnlock1(v8, v7);
      }
    }
  }
  return v3;
}
