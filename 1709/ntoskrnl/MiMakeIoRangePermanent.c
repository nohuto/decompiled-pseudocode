/*
 * XREFs of MiMakeIoRangePermanent @ 0x1402199D4
 * Callers:
 *     MiMakeIoRangePermanentDpc @ 0x140219C60 (MiMakeIoRangePermanentDpc.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140058B30 (RtlAvlRemoveNode.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlAvlInsertNodeEx @ 0x1400A2A10 (RtlAvlInsertNodeEx.c)
 *     MiRemoveUnmappedIoNode @ 0x140119CC4 (MiRemoveUnmappedIoNode.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiMakeIoRangePermanent(unsigned __int64 a1)
{
  unsigned __int64 v1; // rsi
  __int64 v2; // rdi
  unsigned __int64 v3; // r14
  int v4; // r12d
  _QWORD *v5; // rbx
  int v6; // r15d
  unsigned __int64 v7; // rdi
  _QWORD *i; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rdx
  _WORD *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rbp
  __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  bool v19; // r8
  _QWORD *v20; // rax
  unsigned __int64 v21; // rax
  _QWORD *v22; // rdx
  bool v23; // r8
  _QWORD *v24; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v28; // [rsp+90h] [rbp+18h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  v2 = *(_QWORD *)(a1 + 32);
  v3 = a1;
  v4 = *(_DWORD *)(a1 + 40);
  v5 = 0LL;
  v28 = 0LL;
  v6 = 0;
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v7 = v2 - v1 + 1;
  if ( !v7 )
    goto LABEL_33;
  do
  {
    for ( i = (_QWORD *)qword_1403890D0; ; i = (_QWORD *)i[1] )
    {
      while ( 1 )
      {
        if ( !i )
        {
          v15 = MiRemoveUnmappedIoNode((unsigned __int64 *)&qword_1403890D8, v1);
          v16 = v15;
          if ( !v15 )
          {
            v17 = v1 & 0x1FF;
            goto LABEL_28;
          }
          v18 = *(_QWORD *)(v15 + 40);
          v19 = 0;
          if ( !v5 )
            goto LABEL_27;
          while ( 1 )
          {
            if ( v18 < v5[5] )
            {
              v20 = (_QWORD *)*v5;
              if ( !*v5 )
              {
                v19 = 0;
LABEL_27:
                RtlAvlInsertNodeEx((unsigned __int64 *)&v28, (unsigned __int64)v5, v19, v16);
                v5 = v28;
                v17 = (v1 & 0xFFFFFFFFFLL) - *(_QWORD *)(v16 + 40);
LABEL_28:
                v21 = 512 - v17;
                if ( 512 - v17 > v7 )
                  v21 = v7;
                v7 -= v21;
                v1 += v21;
                goto LABEL_31;
              }
            }
            else
            {
              v20 = (_QWORD *)v5[1];
              if ( !v20 )
              {
                v19 = 1;
                goto LABEL_27;
              }
            }
            v5 = v20;
          }
        }
        v9 = i[5];
        if ( v1 >= v9 )
          break;
        i = (_QWORD *)*i;
      }
      v10 = v9 + 512;
      if ( v1 < v9 + 512 )
        break;
    }
    v11 = i[6];
    v12 = (v1 & 0xFFFFFFFFFLL) - v9;
    v13 = (_WORD *)(v11 + 2 * v12);
    if ( v7 + v1 <= v10 )
      v14 = 2 * (v12 + v7);
    else
      v14 = 1024LL;
    if ( (unsigned __int64)v13 >= v11 + v14 )
      continue;
    while ( (*v13 & 0x3FFF) == 0 )
    {
      *v13 = 0x4000;
LABEL_15:
      ++v13;
      ++v1;
      --v7;
      if ( (unsigned __int64)v13 >= v11 + v14 )
        goto LABEL_16;
    }
    if ( (unsigned __int16)*v13 >> 14 == v4 )
      goto LABEL_15;
    ++dword_140389114;
    v6 = -1073741800;
    v7 = 0LL;
LABEL_16:
    v5 = v28;
LABEL_31:
    ;
  }
  while ( v7 );
  v3 = a1;
  if ( v6 < 0 )
    goto LABEL_43;
LABEL_33:
  v22 = (_QWORD *)qword_140389120;
  v23 = 0;
  if ( !qword_140389120 )
    goto LABEL_42;
  while ( 2 )
  {
    if ( *(_QWORD *)(v3 + 32) >= v22[3] )
    {
      if ( *(_QWORD *)(v3 + 24) <= v22[4] )
      {
        ++dword_140389118;
        v6 = -1073741800;
        goto LABEL_43;
      }
      v24 = (_QWORD *)v22[1];
      if ( !v24 )
      {
        v23 = 1;
        goto LABEL_42;
      }
      goto LABEL_39;
    }
    v24 = (_QWORD *)*v22;
    if ( *v22 )
    {
LABEL_39:
      v22 = v24;
      continue;
    }
    break;
  }
  v23 = 0;
LABEL_42:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140389120, (unsigned __int64)v22, v23, v3);
LABEL_43:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  while ( v5 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)&v28, (__int64)v5);
    ExFreePoolWithTag(v5, 0);
    v5 = v28;
  }
  return (unsigned int)v6;
}
