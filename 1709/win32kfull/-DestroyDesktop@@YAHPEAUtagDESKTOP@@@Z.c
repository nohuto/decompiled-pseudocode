/*
 * XREFs of ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1C0122E58
 * Callers:
 *     UnmapDesktop @ 0x1C008E480 (UnmapDesktop.c)
 * Callees:
 *     _PostThreadMessage @ 0x1C009E634 (_PostThreadMessage.c)
 *     UnpackAffectedThreadList @ 0x1C00CB2A8 (UnpackAffectedThreadList.c)
 */

__int64 __fastcall DestroyDesktop(struct tagDESKTOP *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  _QWORD *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v10; // rcx

  v4 = *((_QWORD *)a1 + 5);
  if ( (*((_DWORD *)a1 + 12) & 8) != 0 )
    return 0LL;
  v5 = *((_QWORD *)a1 + 30);
  if ( v5 )
  {
    v10 = *(_QWORD *)(v5 + 8);
    if ( v10 )
    {
      Win32FreePool(v10, a2, a3);
      *(_QWORD *)(v5 + 8) = 0LL;
    }
    Win32FreePool(v5, a2, a3);
    *((_QWORD *)a1 + 30) = 0LL;
  }
  if ( a1 == (struct tagDESKTOP *)gpdeskRecalcQueueAttach )
    UnpackAffectedThreadList((__int64)a1, a2, a3);
  v6 = (_QWORD *)(v4 + 16);
  v7 = *(_QWORD *)(v4 + 16);
  if ( v7 )
  {
    do
    {
      if ( (struct tagDESKTOP *)v7 == a1 )
        break;
      v6 = (_QWORD *)(v7 + 32);
      v7 = *(_QWORD *)(v7 + 32);
    }
    while ( v7 );
    if ( *v6 )
    {
      LockObjectAssignment(v6, *((_QWORD *)a1 + 4));
      UnlockObjectAssignment((char *)a1 + 32);
    }
  }
  v8 = *(_QWORD *)(v4 + 24);
  LockObjectAssignment((char *)a1 + 32, *(_QWORD *)(v8 + 48));
  LockObjectAssignment(v8 + 48, a1);
  PostThreadMessage(*(_QWORD *)(v8 + 16), 0x31Cu, 2LL, 0LL);
  *((_DWORD *)a1 + 12) |= 8u;
  return 1LL;
}
