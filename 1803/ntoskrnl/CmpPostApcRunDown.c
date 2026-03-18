/*
 * XREFs of CmpPostApcRunDown @ 0x140701440
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrint @ 0x1400772C0 (DbgPrint.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     CmpFreePostBlock @ 0x1404E224C (CmpFreePostBlock.c)
 *     CmpFreeSubordinatePost @ 0x1404E22A0 (CmpFreeSubordinatePost.c)
 */

__int64 __fastcall CmpPostApcRunDown(__int64 a1)
{
  unsigned __int8 CurrentIrql; // si
  char v2; // di
  _QWORD *v3; // rbx
  _QWORD *v4; // rdx
  unsigned __int64 v5; // rax
  __int16 v6; // ax
  __int64 v7; // rax
  _QWORD *v8; // rdx
  struct _KEVENT *v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  v2 = 1;
  __writecr8(1uLL);
  v3 = *(_QWORD **)(a1 + 72);
  v4 = (_QWORD *)v3[8];
  if ( (_QWORD *)v4[13] == v4 + 13 )
  {
    DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v4);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
        __debugbreak();
    }
  }
  v5 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
  if ( !v5 || (v6 = *(_WORD *)(v5 + 8), v6 != 332) && v6 != 452 )
    v2 = 0;
  **(_DWORD **)(v3[8] + 104LL) = 267;
  v7 = v3[8];
  if ( v2 )
    *(_DWORD *)(*(_QWORD *)(v7 + 104) + 4LL) = 0;
  else
    *(_QWORD *)(*(_QWORD *)(v7 + 104) + 8LL) = 0LL;
  v8 = (_QWORD *)v3[8];
  if ( (_QWORD *)v8[13] == v8 + 13 )
  {
    DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v8);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
        __debugbreak();
    }
  }
  v9 = *(struct _KEVENT **)(v3[8] + 8LL);
  if ( v9 )
  {
    KeSetEvent(v9, 0, 0);
    ObfDereferenceObject(*(PVOID *)(v3[8] + 8LL));
  }
  v10 = v3[2];
  v11 = (_QWORD *)v3[3];
  if ( *(_QWORD **)(v10 + 8) != v3 + 2 || (_QWORD *)*v11 != v3 + 2 )
    __fastfail(3u);
  *v11 = v10;
  *(_QWORD *)(v10 + 8) = v11;
  CmpFreeSubordinatePost((__int64)v3);
  CmpFreePostBlock(v3);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
