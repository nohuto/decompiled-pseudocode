/*
 * XREFs of PsInitializeQuotaSystem @ 0x140850CF8
 * Callers:
 *     MiInitSystem @ 0x140828E58 (MiInitSystem.c)
 *     InitBootProcessor @ 0x14082FD94 (InitBootProcessor.c)
 * Callees:
 *     PspRegisterResource @ 0x140156284 (PspRegisterResource.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PspSanitizeResourceLimits @ 0x1405E209C (PspSanitizeResourceLimits.c)
 *     PspInitializeQuotaExpansionDescriptor @ 0x140850E2C (PspInitializeQuotaExpansionDescriptor.c)
 */

char __fastcall PsInitializeQuotaSystem(int a1)
{
  _QWORD *v1; // rdx
  char *v2; // rcx
  char *PoolWithTag; // rax
  _QWORD *v4; // rax
  __int64 v5; // rcx
  char v6; // dl
  int v7; // r8d
  int v8; // edx
  int v9; // edx
  int v10; // r9d
  int v11; // edx
  int v12; // r9d

  if ( a1 )
  {
    PspRegisterResource(0, 5, -1073741756);
    PspRegisterResource(1, v6, v7);
    PspRegisterResource(2, 0, -1073741524);
    PspRegisterResource(v8 + 3, v8, -1073741663);
    PspInitializeQuotaExpansionDescriptor((unsigned int)&PspQuotaExpansionDescriptors, v9, 0x10000, v10);
    PspInitializeQuotaExpansionDescriptor((unsigned int)&unk_140362A78, v11, 0x80000, v12);
LABEL_9:
    LOBYTE(PoolWithTag) = 1;
    return (char)PoolWithTag;
  }
  dword_14038CB40 = 1;
  v1 = &unk_14038C980;
  dword_14038CB44 = 1;
  v2 = PspResourceFlags;
  do
  {
    if ( (*v2 & 2) == 0 )
      *v1 = -1LL;
    v2 += 8;
    v1 += 16;
  }
  while ( (__int64)v2 < (__int64)&PspSystemPartitionHandle );
  KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[4] = (unsigned __int64)&PspSystemQuotaBlock;
  PspSanitizeResourceLimits((unsigned int *)PspDefaultResourceLimits, 1);
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x300uLL, 0x74517350u);
  PspQuotaBlockTable = (ULONG_PTR)PoolWithTag;
  if ( PoolWithTag )
  {
    v4 = PoolWithTag + 8;
    v5 = 32LL;
    do
    {
      v4[1] = v4;
      *v4 = v4;
      *(v4 - 1) = 0LL;
      v4 += 3;
      --v5;
    }
    while ( v5 );
    goto LABEL_9;
  }
  return (char)PoolWithTag;
}
