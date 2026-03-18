/*
 * XREFs of MiWritePageFileHash @ 0x140232A1C
 * Callers:
 *     MiMapPageFileHash @ 0x1402320E8 (MiMapPageFileHash.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14009A990 (MmMapLockedPagesSpecifyCache.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiComputePageHash @ 0x140231ED8 (MiComputePageHash.c)
 */

void __fastcall MiWritePageFileHash(__int64 a1, __int64 a2, _QWORD *a3, unsigned int a4, unsigned int a5)
{
  __int64 v5; // rdi
  char *v10; // rbx
  unsigned int v11; // ebp
  int v12; // edx
  __int64 v13; // r8
  __int64 v14; // rax
  unsigned int v15; // ecx
  int v16; // eax
  _DWORD *v17; // rdx
  int *v18; // rcx
  __int64 v19; // r8
  int v20; // eax
  char *v21; // rax
  _QWORD *v22; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-A0h] BYREF
  _DWORD v24[16]; // [rsp+50h] [rbp-88h] BYREF

  v5 = 0LL;
  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 10) & 5) != 0 )
      v10 = *(char **)(a2 + 24);
    else
      v10 = (char *)MmMapLockedPagesSpecifyCache((PMDL)a2, 0, MmCached, 0LL, 0, 0xC0000010);
    if ( v10 )
      v10 += 4096 * (((__int64)a3 - a2 - 48) >> 3);
  }
  else
  {
    v10 = 0LL;
  }
  v11 = 0;
  while ( 1 )
  {
    if ( v11 < a5 )
    {
      v24[v5] = 0;
      if ( !a3 || *a3 == qword_140389188 )
      {
LABEL_22:
        v5 = (unsigned int)(v5 + 1);
        if ( (_DWORD)v5 != 16 )
          goto LABEL_28;
        goto LABEL_25;
      }
      v12 = 1;
      v13 = 48LL * *a3 - 0x58000000000LL;
      v14 = (*(_QWORD *)(v13 + 16) >> 5) & 0x1FLL;
      if ( (dword_140400114 & 1) == 0 && (_DWORD)v14 != 31 )
      {
        v15 = (unsigned int)v14 >> 3;
        if ( (unsigned int)v14 >> 3 != 3 )
          goto LABEL_17;
        if ( ((*(_QWORD *)(v13 + 16) >> 5) & 7) != 0 )
        {
          v12 = 0;
LABEL_17:
          v16 = 0;
          if ( v15 != 1 )
            v16 = v12;
          if ( v16 != 1 )
          {
            v24[v5] = 2;
            goto LABEL_22;
          }
        }
      }
      v24[v5] = MiComputePageHash(v13, (unsigned __int64)v10);
      goto LABEL_22;
    }
    if ( !(_DWORD)v5 )
      break;
LABEL_25:
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 232), &LockHandle);
    v17 = (_DWORD *)(*(_QWORD *)(a1 + 216) + 4LL * a4);
    v18 = v24;
    v19 = (unsigned int)v5;
    do
    {
      v20 = *v18++;
      *v17++ = v20;
      --v19;
    }
    while ( v19 );
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    a4 += v5;
    v5 = 0LL;
LABEL_28:
    ++v11;
    v21 = v10 + 4096;
    if ( !v10 )
      v21 = 0LL;
    v10 = v21;
    v22 = a3 + 1;
    if ( !a3 )
      v22 = 0LL;
    a3 = v22;
  }
}
