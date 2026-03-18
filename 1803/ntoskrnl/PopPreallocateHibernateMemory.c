/*
 * XREFs of PopPreallocateHibernateMemory @ 0x1406251EC
 * Callers:
 *     PopEnableHiberFile @ 0x140624E34 (PopEnableHiberFile.c)
 * Callees:
 *     MmGetHighestPhysicalPage @ 0x1401063D0 (MmGetHighestPhysicalPage.c)
 *     MiChargeResident @ 0x140131D0C (MiChargeResident.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     HvlpPreallocatePageListResources @ 0x140717ED4 (HvlpPreallocatePageListResources.c)
 */

__int64 PopPreallocateHibernateMemory()
{
  __int64 v0; // rsi
  unsigned __int64 HighestPhysicalPage; // rax
  unsigned int v2; // r8d
  int v3; // r9d
  unsigned __int64 v4; // rdi
  unsigned int v5; // r8d
  unsigned int v6; // eax
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // r12
  SIZE_T v10; // rbp
  char *PoolWithTag; // rax
  __int64 v12; // r9
  char *v13; // rbx
  __int64 result; // rax
  __int64 v15; // [rsp+30h] [rbp-98h]
  __int64 v16; // [rsp+58h] [rbp-70h]
  __int64 v17; // [rsp+D0h] [rbp+8h]
  __int64 v18; // [rsp+D8h] [rbp+10h]
  __int64 v19; // [rsp+E0h] [rbp+18h]
  __int64 v20; // [rsp+E8h] [rbp+20h]

  if ( dword_1403A1C50 == 2 )
    v0 = 102400LL;
  else
    v0 = v15;
  HighestPhysicalPage = MmGetHighestPhysicalPage(0);
  v4 = (HighestPhysicalPage + 32) & 0xFFFFFFFFFFFFFFE0uLL;
  if ( v4 < HighestPhysicalPage || v4 > 0xFFFFFFFF )
    return 3221225626LL;
  v17 = v2;
  v5 = ((unsigned int)v4 >> 3) + v2;
  v18 = v5;
  v19 = (v5 + ((unsigned int)v4 >> 3) + 7) & 0xFFFFFFF8;
  v6 = ((((v5 + ((unsigned int)v4 >> 3) + 7) & 0xFFFFFFF8) + 247) & 0xFFFFFFF8) + 176;
  v20 = (((v5 + ((unsigned int)v4 >> 3) + 7) & 0xFFFFFFF8) + 247) & 0xFFFFFFF8;
  if ( v3 == 2 )
  {
    v7 = ((((v5 + ((unsigned int)v4 >> 3) + 7) & 0xFFFFFFF8) + 247) & 0xFFFFFFF8) + 176;
    v6 = ((((v5 + ((unsigned int)v4 >> 3) + 7) & 0xFFFFFFF8) + 247) & 0xFFFFFFF8) + 232;
  }
  else
  {
    v7 = v16;
  }
  v8 = v6;
  v9 = (v6 + 135) & 0xFFFFFFF8;
  if ( (HvlpFlags & 2) == 0
    || (result = HvlpPreallocatePageListResources(((((v5 + ((unsigned int)v4 >> 3) + 7) & 0xFFFFFFF8) + 247) & 0xFFFFFFF8) + 176),
        (int)result >= 0) )
  {
    v10 = ((((_DWORD)v9 + 4159) & 0xFFFFF000) + 0x3FFF) & 0xFFFFF000;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v10, 0x72626968u);
    v13 = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( (unsigned int)MiChargeResident(
                           &MiSystemPartition,
                           (v10 + ((unsigned __int16)PoolWithTag & 0xFFF) + 4095LL) >> 12,
                           1024LL,
                           v12) )
      {
        qword_1403AA1E8 = (__int64)(v13 + 4096);
        Length = v10;
        qword_1403AA1D0 = v13;
        qword_1403AA1E0 = (__int64)v13;
        if ( dword_1403A1C50 == 2 )
          qword_1403AA238 = (__int64)&v13[v0];
        else
          qword_1403AA238 = 0LL;
        LODWORD(xmmword_1403AA200) = v4;
        *((_QWORD *)&xmmword_1403AA200 + 1) = &v13[v17];
        LODWORD(xmmword_1403AA1F0) = v4;
        *((_QWORD *)&xmmword_1403AA1F0 + 1) = &v13[v18];
        qword_1403AA210 = (__int64)&v13[v19];
        if ( dword_1403A1C50 == 2 )
          qword_1403AA240 = (__int64)&v13[v7];
        else
          qword_1403AA240 = 0LL;
        qword_1403AA218 = &v13[v9];
        qword_1403AA220 = &v13[((_DWORD)v9 + 4159) & 0xFFFFF000];
        qword_1403AA228 = &v13[v8];
        qword_1403AA230 = (__int64)&v13[v20];
        return 0LL;
      }
      ExFreePoolWithTag(v13, 0x72626968u);
    }
    return 3221225626LL;
  }
  return result;
}
