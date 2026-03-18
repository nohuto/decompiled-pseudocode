/*
 * XREFs of ?MapCpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@_N2PEAPEAX@Z @ 0x1C00702C8
 * Callers:
 *     ?MapCpuVA@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAPEAX@Z @ 0x1C0066A98 (-MapCpuVA@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAPEAX@Z.c)
 * Callees:
 *     memset @ 0x1C0018400 (memset.c)
 *     ?VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z @ 0x1C00A36C8 (-VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z.c)
 */

__int64 __fastcall VIDMM_FENCE_STORAGE_PAGE::MapCpuVA(
        VIDMM_FENCE_STORAGE_PAGE *this,
        struct VIDMM_PROCESS *a2,
        struct VIDMM_MONITORED_FENCE_STORAGE *a3,
        char a4,
        bool a5,
        unsigned __int64 a6)
{
  _QWORD *v6; // r14
  __int64 v10; // r13
  char *v11; // rbp
  char *v12; // rdi
  char *i; // rax
  char *v14; // rbx
  char *PoolWithTag; // rax
  __int64 v17; // rcx
  int v18; // eax
  int v19; // esi
  char **v20; // rcx
  char *v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // [rsp+90h] [rbp+8h] BYREF
  struct VIDMM_MONITORED_FENCE_STORAGE *v26; // [rsp+A0h] [rbp+18h]

  v26 = a3;
  v6 = (_QWORD *)a6;
  *(_QWORD *)a6 = 0LL;
  if ( *(_BYTE *)(*((_QWORD *)this + 15) + 64LL) )
  {
    *v6 = *((_QWORD *)this + 13);
    return 0LL;
  }
  else
  {
    v10 = 0LL;
    v11 = (char *)this + 48;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v11, 0LL);
    v12 = (char *)this + 16;
    *((_QWORD *)v11 + 1) = KeGetCurrentThread();
    for ( i = (char *)*((_QWORD *)this + 2); i != v12; i = *(char **)i )
    {
      v14 = i - 16;
      if ( a2 == *((struct VIDMM_PROCESS **)i - 1) )
      {
        ++*((_DWORD *)v14 + 8);
LABEL_6:
        *v6 = *(_QWORD *)v14 + *((unsigned int *)v26 + 4);
        *((_QWORD *)v11 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v11, 0LL);
        KeLeaveCriticalRegion();
        return 0LL;
      }
    }
    PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x28uLL, 0x68536956u);
    v14 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x28uLL);
      *((_DWORD *)v14 + 8) = 1;
      *((_QWORD *)v14 + 1) = a2;
      v10 = *(_QWORD *)a2;
      v17 = *(_QWORD *)a2;
      v25 = 0LL;
      a6 = 4096LL;
      if ( PsGetProcessWow64Process(v17) || (v18 = 2, a4) )
        v18 = 4;
      v19 = MmMapViewOfSection(*((_QWORD *)this + 9), v10, v14, 0LL, a6, &v25, &a6, 2, 0, v18);
      if ( v19 >= 0 )
      {
        if ( !a4 || !a5 || (v22 = VidMmiEnsureVirtualAddressRangeValid(*(void **)v14, a6), v19 = v22, v22 >= 0) )
        {
          v20 = (char **)*((_QWORD *)v12 + 1);
          v21 = v14 + 16;
          if ( *v20 != v12 )
            __fastfail(3u);
          *(_QWORD *)v21 = v12;
          *((_QWORD *)v14 + 3) = v20;
          *v20 = v21;
          *((_QWORD *)v12 + 1) = v21;
          goto LABEL_6;
        }
        v24 = WdLogNewEntry5_WdWarning(v23);
        WdLogEvent5_WdWarning(v24);
      }
    }
    else
    {
      v19 = -1073741801;
    }
    *((_QWORD *)v11 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v11, 0LL);
    KeLeaveCriticalRegion();
    if ( v14 )
    {
      if ( *(_QWORD *)v14 )
        MmUnmapViewOfSection(v10, *(_QWORD *)v14);
      ExFreePoolWithTag(v14, 0);
    }
    return (unsigned int)v19;
  }
}
