/*
 * XREFs of WmipQueueNotification @ 0x1405ED690
 * Callers:
 *     WmipWriteWnodeToObject @ 0x140154818 (WmipWriteWnodeToObject.c)
 * Callees:
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall WmipQueueNotification(PRKEVENT Event, char **a2, unsigned int *a3)
{
  char *v3; // rdi
  unsigned int v5; // ebp
  unsigned int v6; // esi
  char *v7; // r15
  unsigned int v9; // edx
  struct _KEVENT *v10; // r12
  int v11; // eax
  unsigned int v12; // r14d
  char *v13; // rcx
  char *PoolWithTag; // rax
  void *v16; // rcx
  unsigned int v18; // [rsp+68h] [rbp+10h]

  v3 = *a2;
  v5 = *((_DWORD *)a2 + 4);
  v6 = 0;
  v7 = a2[1];
  v9 = *a3;
  v10 = Event;
  v11 = *((_DWORD *)a2 + 5);
  v18 = *a3;
  v12 = (v11 + *a3 + 7) & 0xFFFFFFF8;
  if ( !v3 )
    goto LABEL_19;
  if ( v12 > v5 )
    v3 = 0LL;
  if ( !v3 )
  {
LABEL_19:
    if ( v12 > 0x80000 )
      goto LABEL_16;
    if ( v12 > v5 )
      v5 = (v12 + 0x3FFF) & 0xFFFFC000;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v5, 0x70696D57u);
    v3 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_16:
      ++*((_DWORD *)a2 + 6);
      return (unsigned int)-1073741670;
    }
    memset(PoolWithTag, 0, v5);
    if ( *a2 )
    {
      memmove(v3, *a2, *((unsigned int *)a2 + 5));
      v16 = *a2;
      v7 += v3 - *a2;
      a2[1] = v7;
      ExFreePoolWithTag(v16, 0);
    }
    v11 = *((_DWORD *)a2 + 5);
    v9 = v18;
    v10 = Event;
    *a2 = v3;
    *((_DWORD *)a2 + 4) = v5;
  }
  v13 = &v3[v11];
  if ( v7 )
    *((_DWORD *)v7 + 3) = (_DWORD)v13 - (_DWORD)v7;
  a2[1] = v13;
  *((_DWORD *)a2 + 5) = v12;
  memmove(v13, a3, v9);
  KeSetEvent(v10, 0, 0);
  return v6;
}
