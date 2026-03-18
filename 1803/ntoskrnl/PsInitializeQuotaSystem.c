/*
 * XREFs of PsInitializeQuotaSystem @ 0x1408C1AAC
 * Callers:
 *     MiInitSystem @ 0x14089C128 (MiInitSystem.c)
 *     InitBootProcessor @ 0x1408A6138 (InitBootProcessor.c)
 * Callees:
 *     PspRegisterResource @ 0x140182F6C (PspRegisterResource.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PspSanitizeResourceLimits @ 0x14064AAB8 (PspSanitizeResourceLimits.c)
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

  if ( a1 )
  {
    PspRegisterResource(0, 5, -1073741756);
    PspRegisterResource(1, v6, v7);
    PspRegisterResource(2, 0, -1073741524);
    PspRegisterResource(v8 + 3, v8, -1073741663);
    qword_1403A61D0 = 0LL;
    dword_1403A61F8 = 0;
    qword_1403A6208 = 0LL;
    qword_1403A61F0 = (__int64)&qword_1403A61E8;
    qword_1403A61E8 = (__int64)&qword_1403A61E8;
    qword_1403A6228 = (__int64)&qword_1403A6220;
    qword_1403A6220 = (__int64)&qword_1403A6220;
    qword_1403A61C8[0] = 0x10000LL;
    qword_1403A61D8 = (__int64)MmRaisePoolQuota;
    qword_1403A61E0 = (__int64)MmReturnPoolQuota;
    PspQuotaExpansionDescriptors[0] = 1;
    qword_1403A6200 = 0x80000LL;
    qword_1403A6210 = (__int64)MmRaisePoolQuota;
    qword_1403A6218 = (__int64)MmReturnPoolQuota;
LABEL_9:
    LOBYTE(PoolWithTag) = 1;
    return (char)PoolWithTag;
  }
  dword_1403D0E00 = 1;
  v1 = &unk_1403D0C40;
  dword_1403D0E04 = 1;
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
