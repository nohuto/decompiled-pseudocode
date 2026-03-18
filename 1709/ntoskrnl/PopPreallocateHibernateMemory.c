/*
 * XREFs of PopPreallocateHibernateMemory @ 0x1406FBE3C
 * Callers:
 *     PopEnableHiberFile @ 0x1405AD8E0 (PopEnableHiberFile.c)
 * Callees:
 *     MmGetHighestPhysicalPage @ 0x1401167C8 (MmGetHighestPhysicalPage.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     HvlpPreallocatePageListResources @ 0x1406B32A4 (HvlpPreallocatePageListResources.c)
 *     MmObtainChargesToLockPagedPool @ 0x1406E3434 (MmObtainChargesToLockPagedPool.c)
 */

__int64 PopPreallocateHibernateMemory()
{
  __int64 v0; // rsi
  unsigned __int64 HighestPhysicalPage; // rax
  unsigned int v2; // r8d
  int v3; // r9d
  unsigned __int64 v4; // rdi
  __int64 v5; // r8
  unsigned int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 result; // rax
  ULONG_PTR v12; // rbp
  char *PoolWithTag; // rax
  char *v14; // rbx
  __int64 v15; // [rsp+30h] [rbp-98h]
  __int64 v16; // [rsp+58h] [rbp-70h]
  __int64 v17; // [rsp+D0h] [rbp+8h]
  __int64 v18; // [rsp+D8h] [rbp+10h]
  __int64 v19; // [rsp+E0h] [rbp+18h]
  __int64 v20; // [rsp+E8h] [rbp+20h]

  if ( dword_14035E690 == 2 )
    v0 = 102400LL;
  else
    v0 = v15;
  HighestPhysicalPage = MmGetHighestPhysicalPage(0);
  v4 = (HighestPhysicalPage + 32) & 0xFFFFFFFFFFFFFFE0uLL;
  if ( v4 < HighestPhysicalPage || v4 > 0xFFFFFFFF )
    return 3221225626LL;
  v17 = v2;
  v5 = ((unsigned int)v4 >> 3) + v2;
  v18 = (unsigned int)v5;
  v19 = ((_DWORD)v5 + ((unsigned int)v4 >> 3) + 7) & 0xFFFFFFF8;
  v6 = ((((v5 + ((unsigned int)v4 >> 3) + 7) & 0xFFFFFFF8) + 247) & 0xFFFFFFF8) + 176;
  v20 = ((((_DWORD)v5 + ((unsigned int)v4 >> 3) + 7) & 0xFFFFFFF8) + 247) & 0xFFFFFFF8;
  v7 = v6;
  if ( v3 == 2 )
  {
    v8 = v6;
    v6 = ((((v5 + ((unsigned int)v4 >> 3) + 7) & 0xFFFFFFF8) + 247) & 0xFFFFFFF8) + 232;
  }
  else
  {
    v8 = v16;
  }
  v9 = v6;
  v10 = (v6 + 135) & 0xFFFFFFF8;
  if ( (HvlpFlags & 2) == 0 || (result = HvlpPreallocatePageListResources(v7, 4294967288LL, v5), (int)result >= 0) )
  {
    v12 = ((((_DWORD)v10 + 4159) & 0xFFFFF000) + 0x3FFF) & 0xFFFFF000;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v12, 0x72626968u);
    v14 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    if ( !MmObtainChargesToLockPagedPool((__int16)PoolWithTag, v12) )
    {
      ExFreePoolWithTag(v14, 0x72626968u);
      return 3221225626LL;
    }
    qword_140365B68 = (__int64)(v14 + 4096);
    Length = v12;
    qword_140365B50 = v14;
    qword_140365B60 = (__int64)v14;
    if ( dword_14035E690 == 2 )
      qword_140365BB8 = (__int64)&v14[v0];
    else
      qword_140365BB8 = 0LL;
    LODWORD(xmmword_140365B80) = v4;
    *((_QWORD *)&xmmword_140365B80 + 1) = &v14[v17];
    LODWORD(xmmword_140365B70) = v4;
    *((_QWORD *)&xmmword_140365B70 + 1) = &v14[v18];
    qword_140365B90 = (__int64)&v14[v19];
    if ( dword_14035E690 == 2 )
      qword_140365BC0 = (__int64)&v14[v8];
    else
      qword_140365BC0 = 0LL;
    qword_140365B98 = &v14[v10];
    qword_140365BA0 = &v14[((_DWORD)v10 + 4159) & 0xFFFFF000];
    qword_140365BA8 = &v14[v9];
    qword_140365BB0 = (__int64)&v14[v20];
    return 0LL;
  }
  return result;
}
