/*
 * XREFs of PsInitializeQuotaSystem @ 0x14081FDD4
 * Callers:
 *     MiInitSystem @ 0x1408032EC (MiInitSystem.c)
 *     InitBootProcessor @ 0x140809FC8 (InitBootProcessor.c)
 * Callees:
 *     PspRegisterResource @ 0x140164DF0 (PspRegisterResource.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     PspSanitizeResourceLimits @ 0x1405CD8F8 (PspSanitizeResourceLimits.c)
 *     PspInitializeQuotaExpansionDescriptor @ 0x14081FF08 (PspInitializeQuotaExpansionDescriptor.c)
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
    PspInitializeQuotaExpansionDescriptor((unsigned int)&unk_140348F58, v11, 0x80000, v12);
LABEL_9:
    LOBYTE(PoolWithTag) = 1;
    return (char)PoolWithTag;
  }
  dword_14036E980 = 1;
  v1 = &unk_14036E7C0;
  dword_14036E984 = 1;
  v2 = PspResourceFlags;
  do
  {
    if ( (*v2 & 2) == 0 )
      *v1 = -1LL;
    v2 += 8;
    v1 += 16;
  }
  while ( (__int64)v2 < (__int64)&KiClockStateUpdateTimeout );
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
