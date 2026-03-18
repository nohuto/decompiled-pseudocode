/*
 * XREFs of xxxRemoveFullScreen @ 0x1C00602AC
 * Callers:
 *     xxxCheckFullScreen @ 0x1C005F0B8 (xxxCheckFullScreen.c)
 *     xxxFreeWindow @ 0x1C0060AD0 (xxxFreeWindow.c)
 * Callees:
 *     xxxSetTrayWindow @ 0x1C00537F8 (xxxSetTrayWindow.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CE7E0 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxRemoveFullScreen(__int64 a1)
{
  _QWORD *v1; // rdi
  unsigned int v2; // ebx
  __int16 v4; // dx
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD **)(a1 + 24);
  v2 = 0;
  if ( !v1 )
    return 0LL;
  if ( (*(_BYTE *)(a1 + 60) & 0x40) != 0
    && (*(_DWORD *)(gpsi + 2104LL) & 8) != 0
    && (((*(_DWORD *)(gptiCurrent + 656LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 440LL) + 16LL)) & 0x800) != 0
     || *(_QWORD *)(v1[1] + 184LL)) )
  {
    SetOrClrWF(0LL, a1, 1088LL, 1LL);
    v4 = *(_WORD *)(gpDispInfo + 152LL);
    *(_WORD *)(gpDispInfo + 152LL) = v4 - 1;
    if ( !v4 )
    {
      PushW32ThreadLock(v1, v5, UserDereferenceObject);
      ObfReferenceObject(v1);
      xxxSetTrayWindow((__int64)v1, (__int64 *)1);
      PopAndFreeW32ThreadLock(v5);
      return 1;
    }
  }
  return v2;
}
