/*
 * XREFs of MiWritePageFileHash @ 0x14013B348
 * Callers:
 *     MiMapPageFileHash @ 0x140075F48 (MiMapPageFileHash.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400F8330 (MmMapLockedPagesSpecifyCache.c)
 *     MiComputePageHash @ 0x14013B500 (MiComputePageHash.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void __fastcall MiWritePageFileHash(__int64 a1, __int64 a2, _QWORD *a3, unsigned int a4, unsigned int a5)
{
  unsigned int v9; // edi
  char *v10; // rbx
  unsigned int v11; // ebp
  int v12; // edx
  __int64 v13; // r8
  __int64 v14; // rax
  char *v15; // rax
  _QWORD *v16; // rax
  _DWORD *v17; // rdx
  int *v18; // rcx
  __int64 v19; // r8
  int v20; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-A0h] BYREF
  _DWORD v22[16]; // [rsp+50h] [rbp-88h] BYREF

  v9 = 0;
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
      v22[v9] = 0;
      if ( !a3 || *a3 == qword_14036CEC8 )
        goto LABEL_17;
      v12 = 1;
      v13 = 48LL * *a3 - 0x58000000000LL;
      v14 = (*(_QWORD *)(v13 + 16) >> 5) & 0x1FLL;
      if ( (dword_1403E3114 & 1) == 0 && (_DWORD)v14 != 31 )
      {
        if ( (unsigned int)v14 >> 3 != 3 )
        {
LABEL_13:
          if ( (unsigned int)v14 >> 3 == 1 )
            v12 = 0;
          if ( v12 == 1 )
            goto LABEL_16;
          v22[v9] = 2;
LABEL_17:
          if ( ++v9 != 16 )
            goto LABEL_18;
          goto LABEL_24;
        }
        if ( ((*(_QWORD *)(v13 + 16) >> 5) & 7) != 0 )
        {
          v12 = 0;
          goto LABEL_13;
        }
      }
LABEL_16:
      v22[v9] = MiComputePageHash(v13, v10);
      goto LABEL_17;
    }
    if ( !v9 )
      break;
LABEL_24:
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 232), &LockHandle);
    v17 = (_DWORD *)(*(_QWORD *)(a1 + 216) + 4LL * a4);
    v18 = v22;
    v19 = v9;
    do
    {
      v20 = *v18++;
      *v17++ = v20;
      --v19;
    }
    while ( v19 );
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    a4 += v9;
    v9 = 0;
LABEL_18:
    ++v11;
    v15 = v10 + 4096;
    if ( !v10 )
      v15 = 0LL;
    v10 = v15;
    v16 = a3 + 1;
    if ( !a3 )
      v16 = 0LL;
    a3 = v16;
  }
}
