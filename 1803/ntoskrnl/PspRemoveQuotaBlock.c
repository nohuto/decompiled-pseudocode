/*
 * XREFs of PspRemoveQuotaBlock @ 0x140779F20
 * Callers:
 *     PspDereferenceQuotaBlock @ 0x1404EBF04 (PspDereferenceQuotaBlock.c)
 *     ObpFreeObject @ 0x14059CA30 (ObpFreeObject.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     PspUnlockQuotaListExclusive @ 0x140187064 (PspUnlockQuotaListExclusive.c)
 *     PspHashKeyValue @ 0x140572144 (PspHashKeyValue.c)
 */

_QWORD *__fastcall PspRemoveQuotaBlock(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v6; // rcx
  unsigned int v7; // eax
  ULONG_PTR v8; // r14
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 **v12; // rcx

  CurrentThread = KeGetCurrentThread();
  v2 = (__int64 *)(a1 + 520);
  v3 = *(_QWORD *)(a1 + 520);
  v4 = a1 + 576;
  v6 = 0LL;
  if ( v3 != 1 )
    v6 = v4;
  v7 = PspHashKeyValue(v6, 0LL);
  --CurrentThread->KernelApcDisable;
  v8 = PspQuotaBlockTable + 24LL * v7;
  ExAcquirePushLockExclusiveEx(v8, 0LL);
  if ( v3 == 1 )
  {
    if ( a1 == PspDefaultQuotaBlock )
      PspDefaultQuotaBlock = 0LL;
  }
  else
  {
    v11 = *v2;
    if ( *v2 )
    {
      if ( *(__int64 **)(v11 + 8) != v2 || (v12 = (__int64 **)v2[1], *v12 != v2) )
        __fastfail(3u);
      *v12 = (__int64 *)v11;
      *(_QWORD *)(v11 + 8) = v12;
    }
  }
  return PspUnlockQuotaListExclusive((__int64)CurrentThread, v8, v9, v10);
}
