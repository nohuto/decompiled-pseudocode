/*
 * XREFs of ExAllocateCacheAwarePushLock @ 0x140152F00
 * Callers:
 *     <none>
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x1400A73D0 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400AAD30 (KeRevertToUserGroupAffinityThread.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall ExAllocateCacheAwarePushLock(char a1)
{
  POOL_TYPE v1; // esi
  __int64 v2; // rbx
  _QWORD *PoolWithTag; // rdi
  unsigned int v4; // eax
  int *v5; // r13
  char v6; // r15
  __int64 v7; // rbp
  _QWORD *i; // r12
  unsigned int v9; // ecx
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  _BYTE *v11; // rax
  char *v13; // rax
  _QWORD *v14; // rcx
  __int64 v15; // r14
  PVOID *v16; // rsi
  unsigned int v17; // [rsp+20h] [rbp-58h]
  struct _GROUP_AFFINITY Affinity; // [rsp+28h] [rbp-50h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+38h] [rbp-40h] BYREF

  v1 = (a1 & 1) != 0 ? NonPagedPoolNx : PagedPool;
  v2 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(v1, 0x100uLL, 0x70636C50u);
  if ( !PoolWithTag )
    return PoolWithTag;
  if ( KeNumberNodes == 1 )
  {
    v13 = (char *)ExAllocatePoolWithTag(v1, 0x1000uLL, 0x6C636C50u);
    v14 = PoolWithTag;
    if ( !v13 )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
      return (_QWORD *)v2;
    }
    v15 = 32LL;
    do
    {
      v13[8] = 1;
      *((_QWORD *)v13 + 2) = PoolWithTag;
      *(_QWORD *)v13 = 0LL;
      *v14 = v13;
      v13 += 128;
      ++v14;
      --v15;
    }
    while ( v15 );
    return PoolWithTag;
  }
  v4 = KeNumberProcessors_0;
  v5 = KiProcessorIndexToNumberMappingTable;
  v17 = KeNumberProcessors_0;
  v6 = 0;
  v7 = 0LL;
  for ( i = PoolWithTag; ; ++i )
  {
    if ( (unsigned int)v7 < v4 )
    {
      v9 = *v5;
      Affinity.Reserved[1] = 0;
      Affinity.Reserved[2] = 0;
      *(_DWORD *)&Affinity.Group = (unsigned __int16)(v9 >> 6);
      Affinity.Mask = 1LL << (v9 & 0x3F);
      if ( v6 )
      {
        p_PreviousAffinity = 0LL;
      }
      else
      {
        v6 = 1;
        p_PreviousAffinity = &PreviousAffinity;
      }
      KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
    }
    v11 = ExAllocatePoolWithTag(v1, 0x80uLL, 0x6C636C50u);
    if ( !v11 )
      break;
    v11[8] = 0;
    v7 = (unsigned int)(v7 + 1);
    *((_QWORD *)v11 + 2) = PoolWithTag;
    ++v5;
    *(_QWORD *)v11 = 0LL;
    *i = v11;
    v4 = v17;
    if ( (unsigned int)v7 >= 0x20 )
    {
      if ( v6 )
        KeRevertToUserGroupAffinityThread(&PreviousAffinity);
      return PoolWithTag;
    }
  }
  if ( (_DWORD)v7 )
  {
    v16 = (PVOID *)PoolWithTag;
    do
    {
      ExFreePoolWithTag(*v16++, 0);
      --v7;
    }
    while ( v7 );
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  if ( v6 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  return (_QWORD *)v2;
}
