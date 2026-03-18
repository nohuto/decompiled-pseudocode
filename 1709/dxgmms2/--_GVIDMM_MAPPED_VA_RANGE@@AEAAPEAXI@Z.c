/*
 * XREFs of ??_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z @ 0x1C002041C
 * Callers:
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00547D0 (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005A240 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 * Callees:
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C00160F8 (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 */

_QWORD *__fastcall VIDMM_MAPPED_VA_RANGE::`scalar deleting destructor'(_QWORD *P)
{
  _QWORD *v1; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rdx
  char *v5; // rax
  __int64 v6; // rcx
  char **v7; // rdx
  int v8; // ecx
  char *v9; // rsi
  __int64 VidMmGlobalAllocFromOwner; // rbx
  __int64 v11; // rdx
  char **v12; // rax

  v1 = P + 3;
  if ( P[3] )
  {
    v3 = *v1;
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v4 = (_QWORD *)v1[1], (_QWORD *)*v4 != v1) )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    *v1 = 0LL;
  }
  v5 = (char *)(P + 1);
  if ( P[1] )
  {
    v6 = *(_QWORD *)v5;
    if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || (v7 = (char **)P[2], *v7 != v5) )
      __fastfail(3u);
    *v7 = (char *)v6;
    *(_QWORD *)(v6 + 8) = v7;
    *(_QWORD *)v5 = 0LL;
  }
  v8 = *((_DWORD *)P + 16);
  if ( (v8 & 0x1000) == 0 )
  {
    v9 = (char *)(P + 5);
    if ( P[5] )
    {
      VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(v8 << 28 >> 28, P[7]);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(VidMmGlobalAllocFromOwner + 352, 0LL);
      v11 = *(_QWORD *)v9;
      if ( *(char **)(*(_QWORD *)v9 + 8LL) != v9 || (v12 = (char **)P[6], *v12 != v9) )
        __fastfail(3u);
      *v12 = (char *)v11;
      *(_QWORD *)(v11 + 8) = v12;
      *(_QWORD *)v9 = 0LL;
      ExReleasePushLockExclusiveEx(VidMmGlobalAllocFromOwner + 352, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  ExFreePoolWithTag(P, 0);
  return P;
}
