/*
 * XREFs of DestroyTask @ 0x1C01C6870
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _PostMessage @ 0x1C00C91E0 (_PostMessage.c)
 */

void __fastcall DestroyTask(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdi
  _QWORD *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _QWORD **v9; // rcx
  __int64 v10; // rax
  struct _KEVENT *v11; // rcx
  _QWORD *v12; // rcx
  _QWORD *i; // rax
  int *v14; // rcx
  struct _KEVENT *v15; // rcx
  char v16; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 336);
  v4 = *(_QWORD *)(a2 + 592);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v16);
  if ( !v4 )
    goto LABEL_22;
  if ( (*(_BYTE *)(v4 + 34) & 1) != 0 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a2 + 440) + 160LL);
    if ( v7 )
      PostMessage(v7, 1114LL, 0LL, 0LL);
  }
  v8 = *(_QWORD **)(v4 + 24);
  if ( v8 )
  {
    v9 = (_QWORD **)gpwtiFirst;
    if ( (_QWORD *)gpwtiFirst == v8 )
      goto LABEL_10;
    do
    {
      v5 = *v9;
      if ( !**v9 )
        break;
      v9 = (_QWORD **)*v9;
    }
    while ( (_QWORD *)*v5 != v8 );
    if ( *v9 == v8 )
LABEL_10:
      *v9 = (_QWORD *)*v8;
    v10 = *(_QWORD *)(v4 + 24);
    v11 = *(struct _KEVENT **)(v10 + 32);
    if ( v11 != (struct _KEVENT *)-1LL )
    {
      if ( !v11 )
      {
LABEL_15:
        Win32FreePool(*(_QWORD *)(v4 + 24), v5, v6);
        goto LABEL_16;
      }
      KeSetEvent(v11, 1, 0);
      ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(v4 + 24) + 32LL));
      v10 = *(_QWORD *)(v4 + 24);
    }
    *(_QWORD *)(v10 + 32) = 0LL;
    goto LABEL_15;
  }
LABEL_16:
  *(_DWORD *)(gpsi + 4968LL) -= *(_DWORD *)(v4 + 8);
  v12 = (_QWORD *)(v2 + 16);
  for ( i = *(_QWORD **)(v2 + 16); i; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)v4 )
    {
      *v12 = *i;
      Win32FreePool(v4, v5, v6);
      *(_QWORD *)(a2 + 592) = 0LL;
      break;
    }
    v12 = i;
  }
LABEL_22:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v16);
  if ( *(_QWORD *)(v2 + 8) == a2 )
  {
    *(_QWORD *)(v2 + 8) = 0LL;
    if ( a2 == *(_QWORD *)(v2 + 56) )
    {
      *(_QWORD *)(v2 + 56) = 0LL;
      --*(_DWORD *)(v2 + 64);
    }
    v14 = *(int **)(v2 + 16);
    if ( v14 )
    {
      while ( v14[2] <= 0 )
      {
        v14 = *(int **)v14;
        if ( !v14 )
        {
          v15 = *(struct _KEVENT **)(v2 + 32);
          goto LABEL_30;
        }
      }
      v15 = *(struct _KEVENT **)(*((_QWORD *)v14 + 2) + 704LL);
LABEL_30:
      KeSetEvent(v15, 1, 0);
    }
  }
}
