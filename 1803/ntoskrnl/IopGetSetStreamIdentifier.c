/*
 * XREFs of IopGetSetStreamIdentifier @ 0x140237194
 * Callers:
 *     IoAllocateSfioStreamIdentifier @ 0x1402365D0 (IoAllocateSfioStreamIdentifier.c)
 *     IoGetSfioStreamIdentifier @ 0x1402367F0 (IoGetSfioStreamIdentifier.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopGetSetSpecificExtension @ 0x1400694F0 (IopGetSetSpecificExtension.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopGetSetStreamIdentifier(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4, char a5)
{
  __int64 v5; // r13
  __int64 result; // rax
  unsigned int v10; // edi
  _QWORD *v11; // rbx
  KSPIN_LOCK *v12; // rbp
  KIRQL v13; // al
  _QWORD *v14; // rdx
  KIRQL v15; // si
  _QWORD *PoolWithTag; // rsi
  KIRQL v17; // al
  _QWORD *v18; // rcx
  KIRQL v19; // di
  _QWORD *v20; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v21[4]; // [rsp+38h] [rbp-20h] BYREF

  v5 = a2;
  result = IopGetSetSpecificExtension(a1, 4u, 0x10u, a5, &v20, v21);
  v10 = 0;
  if ( (int)result < 0 )
    goto LABEL_12;
  v11 = v20;
  if ( !v20 )
  {
LABEL_3:
    result = 0LL;
LABEL_12:
    *a4 = 0LL;
    return result;
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
  while ( v14 != v11 )
  {
    if ( v14[3] == a3 )
    {
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
    v14 = (_QWORD *)*v14;
  }
  KxReleaseSpinLock(v12);
  __writecr8(v15);
  if ( !a5 )
    goto LABEL_3;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v5 + 32, 0x74536F49u);
  if ( !PoolWithTag )
  {
    result = 3221225626LL;
    goto LABEL_12;
  }
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
