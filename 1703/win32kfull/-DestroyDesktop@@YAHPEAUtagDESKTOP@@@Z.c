/*
 * XREFs of ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1C01182F4
 * Callers:
 *     UnmapDesktop @ 0x1C001B2D0 (UnmapDesktop.c)
 * Callees:
 *     UnpackAffectedThreadList @ 0x1C00B6A68 (UnpackAffectedThreadList.c)
 *     _PostThreadMessage @ 0x1C00CBC1C (_PostThreadMessage.c)
 *     UnreferenceUndispatchedFrame @ 0x1C019B190 (UnreferenceUndispatchedFrame.c)
 */

__int64 __fastcall DestroyDesktop(struct tagDESKTOP *a1)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  _QWORD *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v8; // rdi
  __int64 v9; // rcx
  _QWORD *v10; // rdi
  _QWORD *v11; // rcx
  _QWORD *v12; // rax

  v2 = *((_QWORD *)a1 + 5);
  if ( (*((_DWORD *)a1 + 12) & 8) != 0 )
    return 0LL;
  v3 = *((_QWORD *)a1 + 30);
  if ( v3 )
  {
    v8 = *(_QWORD *)(v3 + 288);
    if ( v8 )
    {
      v10 = (_QWORD *)(v8 + 1008);
      while ( (_QWORD *)*v10 != v10 )
      {
        v11 = (_QWORD *)v10[1];
        v12 = (_QWORD *)v11[1];
        if ( (_QWORD *)*v11 != v10 || (_QWORD *)*v12 != v11 )
          __fastfail(3u);
        v10[1] = v12;
        *v12 = v10;
        UnreferenceUndispatchedFrame(v11);
      }
      *(_QWORD *)(v3 + 288) = 0LL;
    }
    v9 = *(_QWORD *)(v3 + 8);
    if ( v9 )
    {
      Win32FreePool(v9);
      *(_QWORD *)(v3 + 8) = 0LL;
    }
    Win32FreePool(v3);
    *((_QWORD *)a1 + 30) = 0LL;
  }
  if ( a1 == (struct tagDESKTOP *)gpdeskRecalcQueueAttach )
    UnpackAffectedThreadList();
  v4 = (_QWORD *)(v2 + 16);
  v5 = *(_QWORD *)(v2 + 16);
  if ( v5 )
  {
    do
    {
      if ( (struct tagDESKTOP *)v5 == a1 )
        break;
      v4 = (_QWORD *)(v5 + 32);
      v5 = *(_QWORD *)(v5 + 32);
    }
    while ( v5 );
    if ( *v4 )
    {
      LockObjectAssignment(v4, *((_QWORD *)a1 + 4));
      UnlockObjectAssignment((char *)a1 + 32);
    }
  }
  v6 = *(_QWORD *)(v2 + 24);
  LockObjectAssignment((char *)a1 + 32, *(_QWORD *)(v6 + 48));
  LockObjectAssignment(v6 + 48, a1);
  PostThreadMessage(*(_QWORD *)(v6 + 16), 0x31Cu, 2LL, 0LL);
  *((_DWORD *)a1 + 12) |= 8u;
  return 1LL;
}
