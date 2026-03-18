/*
 * XREFs of MiFreeCloneDescriptor @ 0x140594950
 * Callers:
 *     MiCloneVads @ 0x1400E6F20 (MiCloneVads.c)
 *     MiCloneProcessAddressSpace @ 0x14057A87C (MiCloneProcessAddressSpace.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x1400379D0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiUnlockPagedAddress @ 0x14012BF78 (MiUnlockPagedAddress.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeCloneDescriptor(struct _KPROCESS *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // r14
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  void *v9; // rbp

  v4 = (_QWORD *)a2[7];
  v5 = 0LL;
  v6 = a2[8];
  v9 = (void *)v4[2];
  if ( v6 )
  {
    do
    {
      MiUnlockPagedAddress((unsigned __int64)v9 + v5, (__int64)a2, a3, a4);
      v5 += 4096LL;
    }
    while ( v5 < v6 );
  }
  PsReturnProcessNonPagedPoolQuota(a1, v6);
  ExFreePoolWithTag(v4, 0);
  ExFreePoolWithTag(v9, 0);
  ExFreePoolWithTag(a2, 0);
}
