/*
 * XREFs of FsRtlpHeatRegisterVolume @ 0x1407168A8
 * Callers:
 *     FsRtlHeatInit @ 0x140716620 (FsRtlHeatInit.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     McGenEventRegister @ 0x1401867E4 (McGenEventRegister.c)
 *     ZwUpdateWnfStateData @ 0x1401AAD80 (ZwUpdateWnfStateData.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     McTemplateK0jq @ 0x140225E10 (McTemplateK0jq.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall FsRtlpHeatRegisterVolume(__int64 a1, const GUID *a2, unsigned int *a3)
{
  __int64 i; // r9
  __int64 v7; // rcx
  _QWORD *PoolWithTag; // rsi
  int v9; // ebx
  __int64 *v10; // rdi
  unsigned int v11; // ebx
  unsigned int v12; // eax
  ETWENABLECALLBACK *v13; // rdx
  __int128 v14; // xmm0
  __int64 **v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  void *ExplicitScope; // [rsp+20h] [rbp-38h]

  ExAcquireResourceExclusiveLite(&Resource, 1u);
  for ( i = FsRtlTieringHeatData; (__int64 *)i != &FsRtlTieringHeatData; i = *(_QWORD *)i )
  {
    v7 = *(_QWORD *)(i + 20) - *(_QWORD *)a1;
    if ( !v7 )
      v7 = *(_QWORD *)(i + 28) - *(_QWORD *)(a1 + 8);
    if ( !v7 )
    {
      ++*(_DWORD *)(i + 16);
      *a3 = *(_DWORD *)(i + 36);
      goto LABEL_20;
    }
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x68745346u);
  if ( !PoolWithTag )
  {
    v9 = -1073741670;
    goto LABEL_21;
  }
  v10 = (__int64 *)FsRtlTieringHeatData;
  v11 = *(_DWORD *)a1 ^ (*(unsigned __int16 *)(a1 + 6) | (*(unsigned __int16 *)(a1 + 4) << 16)) ^ (*(unsigned __int8 *)(a1 + 15) | (*(unsigned __int8 *)(a1 + 10) << 24));
  while ( v10 != &FsRtlTieringHeatData )
  {
    v12 = *((_DWORD *)v10 + 9);
    if ( v12 == v11 )
    {
      if ( !++v11 )
        v10 = &FsRtlTieringHeatData;
    }
    else if ( v12 > v11 )
    {
      break;
    }
    v10 = (__int64 *)*v10;
  }
  memset(PoolWithTag, 0, 0x28uLL);
  v14 = *(_OWORD *)a1;
  *((_DWORD *)PoolWithTag + 9) = v11;
  *((_DWORD *)PoolWithTag + 4) = 1;
  *(_OWORD *)((char *)PoolWithTag + 20) = v14;
  v15 = (__int64 **)v10[1];
  if ( *v15 != v10 )
    __fastfail(3u);
  *PoolWithTag = v10;
  PoolWithTag[1] = v15;
  *v15 = PoolWithTag;
  v10[1] = (__int64)PoolWithTag;
  *a3 = v11;
  McGenEventRegister(
    &MS_StorageTiering_Provider,
    v13,
    MS_StorageTiering_Provider_Context,
    MS_StorageTiering_Provider_Context);
LABEL_20:
  v9 = 0;
LABEL_21:
  ExReleaseResourceLite(&Resource);
  if ( v9 >= 0 )
  {
    if ( (Microsoft_Windows_Storage_Tiering_IoHeatEnableBits & 1) != 0 )
    {
      LODWORD(ExplicitScope) = *a3;
      McTemplateK0jq(v17, v16, a2, a1, (__int64)ExplicitScope);
    }
    ZwUpdateWnfStateData(&WNF_FSRL_TIERED_VOLUME_DETECTED, 0LL, 0, 0LL, 0LL, 0, 0);
  }
  return (unsigned int)v9;
}
