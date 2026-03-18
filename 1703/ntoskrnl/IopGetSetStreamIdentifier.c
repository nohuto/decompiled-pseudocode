/*
 * XREFs of IopGetSetStreamIdentifier @ 0x1401F447C
 * Callers:
 *     IoAllocateSfioStreamIdentifier @ 0x1401F37E0 (IoAllocateSfioStreamIdentifier.c)
 *     IoGetSfioStreamIdentifier @ 0x1401F3AE0 (IoGetSfioStreamIdentifier.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopGetSetSpecificExtension @ 0x140050EF0 (IopGetSetSpecificExtension.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopGetSetStreamIdentifier(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4, char a5)
{
  __int64 v5; // r13
  __int64 result; // rax
  unsigned int v10; // ebx
  _QWORD *v11; // rdi
  KSPIN_LOCK *v12; // rbp
  KIRQL v13; // al
  _QWORD *v14; // rdx
  KIRQL v15; // si
  _QWORD *PoolWithTag; // rsi
  KIRQL v17; // al
  _QWORD *v18; // rcx
  KIRQL v19; // bl
  _QWORD *v20; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v21[4]; // [rsp+38h] [rbp-20h] BYREF

  v5 = a2;
  result = IopGetSetSpecificExtension(a1, 4u, 0x10u, a5, &v20, v21);
  v10 = 0;
  if ( (int)result < 0 )
    return result;
  v11 = v20;
  if ( !v20 )
  {
    *a4 = 0LL;
    return 0LL;
  }
  v12 = (KSPIN_LOCK *)(a1 + 184);
  v13 = KeAcquireSpinLockRaiseToDpc(v12);
  v14 = (_QWORD *)*v11;
  v15 = v13;
  if ( !*v11 )
  {
    v11[1] = v11;
    v14 = v11;
    *v11 = v11;
  }
  while ( 1 )
  {
    if ( v14 == v11 )
    {
      KxReleaseSpinLock(v12);
      __writecr8(v15);
      if ( a5 )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v5 + 32, 0x74536F49u);
        if ( PoolWithTag )
        {
          v17 = KeAcquireSpinLockRaiseToDpc(v12);
          v18 = (_QWORD *)v11[1];
          v19 = v17;
          if ( (_QWORD *)*v18 != v11 )
            __fastfail(3u);
          PoolWithTag[1] = v18;
          *PoolWithTag = v11;
          *v18 = PoolWithTag;
          v11[1] = PoolWithTag;
          PoolWithTag[2] = PoolWithTag + 4;
          PoolWithTag[3] = a3;
          *a4 = PoolWithTag + 4;
          KxReleaseSpinLock(v12);
          __writecr8(v19);
          return 0LL;
        }
        result = 3221225626LL;
      }
      else
      {
        result = 0LL;
      }
      *a4 = 0LL;
      return result;
    }
    if ( v14[3] == a3 )
      break;
    v14 = (_QWORD *)*v14;
  }
  if ( a5 )
  {
    *a4 = 0LL;
    v10 = -1073741791;
  }
  else
  {
    *a4 = v14[2];
  }
  KxReleaseSpinLock(v12);
  __writecr8(v15);
  return v10;
}
