/*
 * XREFs of PspRemoveQuotaBlock @ 0x1406DF914
 * Callers:
 *     PspDereferenceQuotaBlock @ 0x1404F5B0C (PspDereferenceQuotaBlock.c)
 *     ObpFreeObject @ 0x140520A70 (ObpFreeObject.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     PspHashKeyValue @ 0x1404488FC (PspHashKeyValue.c)
 */

__int64 __fastcall PspRemoveQuotaBlock(__int64 a1)
{
  _QWORD *v1; // rbx
  int v2; // esi
  __int64 v4; // rcx
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v6; // eax
  ULONG_PTR v7; // r14
  __int64 v8; // rcx
  _QWORD *v9; // rax

  v1 = (_QWORD *)(a1 + 520);
  v2 = 1;
  if ( *(_QWORD *)(a1 + 520) == 1LL )
  {
    v4 = 0LL;
  }
  else
  {
    v2 = 0;
    v4 = a1 + 576;
  }
  CurrentThread = KeGetCurrentThread();
  v6 = PspHashKeyValue(v4, 0LL);
  --CurrentThread->KernelApcDisable;
  v7 = PspQuotaBlockTable + 24LL * v6;
  ExAcquirePushLockExclusiveEx(v7, 0LL);
  if ( v2 )
  {
    if ( a1 == PspDefaultQuotaBlock )
      PspDefaultQuotaBlock = 0LL;
  }
  else if ( *v1 )
  {
    v8 = *v1;
    v9 = (_QWORD *)v1[1];
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (_QWORD *)*v9 != v1 )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
  }
  return PspUnlockQuotaListExclusive((__int64)CurrentThread, v7);
}
