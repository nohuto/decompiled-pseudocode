/*
 * XREFs of ndisOidPreQueryOffloadEncapsulation @ 0x1C0046600
 * Callers:
 *     ndisOidPreOffloadEncapsulation @ 0x1C00C3900 (ndisOidPreOffloadEncapsulation.c)
 * Callees:
 *     memmove @ 0x1C0024F40 (memmove.c)
 */

char __fastcall ndisOidPreQueryOffloadEncapsulation(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v3; // rbp
  const void *v4; // rdx
  __int64 v5; // r13
  unsigned int v6; // ebx
  __int64 v7; // rcx
  char v8; // si
  __int64 v9; // r15
  KIRQL v10; // al
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rax

  v1 = *a1;
  v3 = a1[4];
  v4 = 0LL;
  v5 = a1[2];
  v6 = 0;
  v7 = a1[3];
  v8 = 1;
  if ( v7 )
  {
    v4 = *(const void **)(v7 + 792);
    if ( !v4 )
    {
      *((_DWORD *)a1 + 10) = 0;
      *(_DWORD *)(v3 + 52) = 0;
      return 1;
    }
    goto LABEL_8;
  }
  if ( v5 )
  {
    v9 = *(_QWORD *)(v5 + 32);
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v9 + 96));
    *(_QWORD *)(v9 + 520) = KeGetCurrentThread();
    *(_DWORD *)(v9 + 1856) = 2309422;
    v11 = *(_DWORD *)(v5 + 60);
    *(_QWORD *)(v9 + 520) = 0LL;
    *(_DWORD *)(v9 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v9 + 96), v10);
    if ( (v11 & 1) != 0 )
    {
      v12 = *(_QWORD *)(v9 + 4120);
      if ( v12 )
      {
        v4 = (const void *)(v12 + 788);
LABEL_8:
        v6 = 28;
LABEL_14:
        if ( v6 > *(_DWORD *)(v3 + 48) )
        {
          *(_DWORD *)(v3 + 56) = v6;
          *((_DWORD *)a1 + 10) = -1073676266;
        }
        else
        {
          memmove(*(void **)(v3 + 40), v4, v6);
          *(_DWORD *)(v3 + 52) = v6;
          *((_DWORD *)a1 + 10) = 0;
        }
        return 1;
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    if ( v1 )
    {
      v13 = *(_QWORD *)(v1 + 4120);
      if ( v13 )
      {
        v4 = (const void *)(v13 + 760);
        v6 = 28;
      }
    }
    v8 = 0;
    if ( v6 )
      goto LABEL_14;
  }
  return v8;
}
