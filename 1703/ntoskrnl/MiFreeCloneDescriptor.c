/*
 * XREFs of MiFreeCloneDescriptor @ 0x1406BF4BC
 * Callers:
 *     MiCloneVads @ 0x1400018B8 (MiCloneVads.c)
 *     MiCloneProcessAddressSpace @ 0x14041DF70 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiUnlockPagedAddress @ 0x140038DB8 (MiUnlockPagedAddress.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1400DB850 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeCloneDescriptor(struct _KPROCESS *a1, _QWORD *a2)
{
  _QWORD *v2; // r14
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  void *v7; // rbp

  v2 = (_QWORD *)a2[7];
  v3 = 0LL;
  v4 = a2[8];
  v7 = (void *)v2[2];
  if ( v4 )
  {
    do
    {
      MiUnlockPagedAddress((unsigned __int64)v7 + v3);
      v3 += 4096LL;
    }
    while ( v3 < v4 );
  }
  PsReturnProcessNonPagedPoolQuota(a1, v4);
  ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(v7, 0);
  ExFreePoolWithTag(a2, 0);
}
