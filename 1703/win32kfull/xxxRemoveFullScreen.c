/*
 * XREFs of xxxRemoveFullScreen @ 0x1C005D114
 * Callers:
 *     xxxCheckFullScreen @ 0x1C0015690 (xxxCheckFullScreen.c)
 *     xxxFreeWindow @ 0x1C005DD44 (xxxFreeWindow.c)
 * Callees:
 *     xxxSetTrayWindow @ 0x1C0018E48 (xxxSetTrayWindow.c)
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CD890 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxRemoveFullScreen(__int64 a1)
{
  _QWORD *v1; // rdi
  unsigned int v2; // ebx
  __int16 v4; // dx
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD **)(a1 + 24);
  v2 = 0;
  if ( !v1 )
    return 0LL;
  if ( (*(_BYTE *)(a1 + 60) & 0x40) != 0
    && (*(_DWORD *)(gpsi + 2104LL) & 8) != 0
    && (((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 416LL) + 16LL)) & 0x800) != 0
     || *(_QWORD *)(v1[1] + 184LL)) )
  {
    SetOrClrWF(0, (_DWORD *)a1, 0x440u, 1);
    v4 = *(_WORD *)(gpDispInfo + 176LL);
    *(_WORD *)(gpDispInfo + 176LL) = v4 - 1;
    if ( !v4 )
    {
      PushW32ThreadLock((__int64)v1, v5, UserDereferenceObject);
      ObfReferenceObject(v1);
      xxxSetTrayWindow((__int64)v1, (__int64 *)1);
      PopAndFreeW32ThreadLock(v5);
      return 1;
    }
  }
  return v2;
}
