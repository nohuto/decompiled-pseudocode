/*
 * XREFs of DestroyTask @ 0x1C01C46F0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _PostMessage @ 0x1C00B3950 (_PostMessage.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall DestroyTask(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdi
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD **v7; // rcx
  _QWORD *v8; // rdx
  __int64 v9; // rax
  struct _KEVENT *v10; // rcx
  _QWORD *v11; // rcx
  _QWORD *i; // rax
  int *v13; // rcx
  struct _KEVENT *v14; // rcx
  char v15; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 328);
  v4 = *(_QWORD *)(a2 + 536);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v15);
  if ( !v4 )
    goto LABEL_22;
  if ( (*(_BYTE *)(v4 + 34) & 1) != 0 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a2 + 416) + 160LL);
    if ( v5 )
      PostMessage(v5, 1114LL, 0LL, 0LL);
  }
  v6 = *(_QWORD **)(v4 + 24);
  if ( v6 )
  {
    v7 = (_QWORD **)gpwtiFirst;
    if ( (_QWORD *)gpwtiFirst == v6 )
      goto LABEL_10;
    do
    {
      v8 = *v7;
      if ( !**v7 )
        break;
      v7 = (_QWORD **)*v7;
    }
    while ( (_QWORD *)*v8 != v6 );
    if ( *v7 == v6 )
LABEL_10:
      *v7 = (_QWORD *)*v6;
    v9 = *(_QWORD *)(v4 + 24);
    v10 = *(struct _KEVENT **)(v9 + 32);
    if ( v10 != (struct _KEVENT *)-1LL )
    {
      if ( !v10 )
      {
LABEL_15:
        Win32FreePool(*(_QWORD *)(v4 + 24));
        goto LABEL_16;
      }
      KeSetEvent(v10, 1, 0);
      ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(v4 + 24) + 32LL));
      v9 = *(_QWORD *)(v4 + 24);
    }
    *(_QWORD *)(v9 + 32) = 0LL;
    goto LABEL_15;
  }
LABEL_16:
  *(_DWORD *)(gpsi + 5380LL) -= *(_DWORD *)(v4 + 8);
  v11 = (_QWORD *)(v2 + 16);
  for ( i = *(_QWORD **)(v2 + 16); i; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)v4 )
    {
      *v11 = *i;
      Win32FreePool(v4);
      *(_QWORD *)(a2 + 536) = 0LL;
      break;
    }
    v11 = i;
  }
LABEL_22:
  if ( !v15 )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v15);
  }
  if ( *(_QWORD *)(v2 + 8) == a2 )
  {
    *(_QWORD *)(v2 + 8) = 0LL;
    if ( a2 == *(_QWORD *)(v2 + 56) )
    {
      *(_QWORD *)(v2 + 56) = 0LL;
      --*(_DWORD *)(v2 + 64);
    }
    v13 = *(int **)(v2 + 16);
    if ( v13 )
    {
      while ( v13[2] <= 0 )
      {
        v13 = *(int **)v13;
        if ( !v13 )
        {
          v14 = *(struct _KEVENT **)(v2 + 32);
          goto LABEL_32;
        }
      }
      v14 = *(struct _KEVENT **)(*((_QWORD *)v13 + 2) + 648LL);
LABEL_32:
      KeSetEvent(v14, 1, 0);
    }
  }
}
