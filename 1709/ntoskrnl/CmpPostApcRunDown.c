/*
 * XREFs of CmpPostApcRunDown @ 0x140697900
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     DbgPrint @ 0x140132890 (DbgPrint.c)
 *     CmpFreePostBlock @ 0x14046FAD4 (CmpFreePostBlock.c)
 *     CmpFreeSubordinatePost @ 0x14046FB14 (CmpFreeSubordinatePost.c)
 */

__int64 __fastcall CmpPostApcRunDown(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  _QWORD *v2; // rbx
  _QWORD *v3; // rdx
  unsigned __int64 v4; // rax
  __int16 v5; // ax
  _QWORD *v6; // rdx
  struct _KEVENT *v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  v2 = *(_QWORD **)(a1 + 72);
  v3 = (_QWORD *)v2[8];
  if ( (_QWORD *)v3[13] == v3 + 13 )
  {
    DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v3);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
        __debugbreak();
    }
  }
  v4 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
  if ( v4 && ((v5 = *(_WORD *)(v4 + 8), v5 == 332) || v5 == 452) )
  {
    **(_DWORD **)(v2[8] + 104LL) = 267;
    *(_DWORD *)(*(_QWORD *)(v2[8] + 104LL) + 4LL) = 0;
  }
  else
  {
    **(_DWORD **)(v2[8] + 104LL) = 267;
    *(_QWORD *)(*(_QWORD *)(v2[8] + 104LL) + 8LL) = 0LL;
  }
  v6 = (_QWORD *)v2[8];
  if ( (_QWORD *)v6[13] == v6 + 13 )
  {
    DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v6);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
        __debugbreak();
    }
  }
  v7 = *(struct _KEVENT **)(v2[8] + 8LL);
  if ( v7 )
  {
    KeSetEvent(v7, 0, 0);
    ObfDereferenceObject(*(PVOID *)(v2[8] + 8LL));
  }
  v8 = v2[2];
  v9 = (_QWORD *)v2[3];
  if ( *(_QWORD **)(v8 + 8) != v2 + 2 || (_QWORD *)*v9 != v2 + 2 )
    __fastfail(3u);
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  CmpFreeSubordinatePost((__int64)v2);
  CmpFreePostBlock(v2);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
