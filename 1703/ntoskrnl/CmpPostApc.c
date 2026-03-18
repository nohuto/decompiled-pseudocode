/*
 * XREFs of CmpPostApc @ 0x1404CDCF0
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrint @ 0x140068550 (DbgPrint.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     CmpFreePostBlock @ 0x1404CE0B0 (CmpFreePostBlock.c)
 *     CmpFreeSubordinatePost @ 0x1404CE104 (CmpFreeSubordinatePost.c)
 */

__int64 __fastcall CmpPostApc(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, __int64 a5)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rdx
  unsigned __int64 v8; // rax
  _QWORD *v9; // rdx
  __int16 v10; // ax
  _QWORD *v11; // rdx
  struct _KEVENT *v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // rdx

  v6 = *(_QWORD **)a5;
  v7 = *(_QWORD **)(*(_QWORD *)a5 + 64LL);
  if ( (_QWORD *)v7[13] == v7 + 13 )
  {
    DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v7);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
        __debugbreak();
    }
  }
  v8 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
  if ( v8 && ((v10 = *(_WORD *)(v8 + 8), v10 == 332) || v10 == 452) )
  {
    **(_DWORD **)(v6[8] + 104LL) = *a4;
    *(_DWORD *)(*(_QWORD *)(v6[8] + 104LL) + 4LL) = 0;
  }
  else
  {
    **(_DWORD **)(v6[8] + 104LL) = *a4;
    *(_QWORD *)(*(_QWORD *)(v6[8] + 104LL) + 8LL) = 0LL;
  }
  v9 = (_QWORD *)v6[8];
  if ( (_QWORD *)v9[13] == v9 + 13 )
  {
    DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v9);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
        __debugbreak();
    }
  }
  *(_QWORD *)a4 = *(_QWORD *)(v6[8] + 104LL);
  v11 = (_QWORD *)v6[8];
  if ( (_QWORD *)v11[13] == v11 + 13 )
  {
    DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v11);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
        __debugbreak();
    }
  }
  v12 = *(struct _KEVENT **)(v6[8] + 8LL);
  if ( v12 )
  {
    KeSetEvent(v12, 0, 0);
    ObfDereferenceObject(*(PVOID *)(v6[8] + 8LL));
  }
  v13 = v6[2];
  v14 = (_QWORD *)v6[3];
  if ( *(_QWORD **)(v13 + 8) != v6 + 2 || (_QWORD *)*v14 != v6 + 2 )
    __fastfail(3u);
  *v14 = v13;
  *(_QWORD *)(v13 + 8) = v14;
  CmpFreeSubordinatePost(v6);
  return CmpFreePostBlock(v6);
}
