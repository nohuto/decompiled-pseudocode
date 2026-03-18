/*
 * XREFs of ?MapCpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@_N2PEAPEAX@Z @ 0x1C00782B4
 * Callers:
 *     ?MapCpuVA@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAPEAX@Z @ 0x1C006B338 (-MapCpuVA@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAPEAX@Z.c)
 * Callees:
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z @ 0x1C00AA6E8 (-VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z.c)
 */

__int64 __fastcall VIDMM_FENCE_STORAGE_PAGE::MapCpuVA(
        VIDMM_FENCE_STORAGE_PAGE *this,
        struct VIDMM_PROCESS *a2,
        struct VIDMM_MONITORED_FENCE_STORAGE *a3,
        char a4,
        bool a5,
        unsigned __int64 a6)
{
  _QWORD *v6; // r15
  __int64 v10; // r13
  char *v11; // rbp
  char *v12; // rdi
  char *i; // rax
  __int64 *v14; // rbx
  __int64 *PoolWithTag; // rax
  __int64 v17; // rcx
  int v18; // eax
  int v19; // esi
  char **v20; // rcx
  char *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // [rsp+98h] [rbp+10h] BYREF
  struct VIDMM_MONITORED_FENCE_STORAGE *v29; // [rsp+A0h] [rbp+18h]

  v29 = a3;
  v6 = (_QWORD *)a6;
  *(_QWORD *)a6 = 0LL;
  if ( a2 && (*(_BYTE *)(*((_QWORD *)a2 + 4) + 323LL) & 8) != 0 )
  {
    v22 = *((_QWORD *)this + 16);
    if ( !v22 )
    {
      v23 = WdLogNewEntry5_WdAssertion(this, a2);
      *(_QWORD *)(v23 + 24) = 455LL;
      WdLogEvent5_WdAssertion(v23);
      v22 = *((_QWORD *)this + 16);
    }
    *v6 = v22;
    return 0LL;
  }
  else
  {
    v10 = 0LL;
    v11 = (char *)this + 72;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v11, 0LL);
    v12 = (char *)this + 40;
    *((_QWORD *)v11 + 1) = KeGetCurrentThread();
    for ( i = (char *)*((_QWORD *)this + 5); i != v12; i = *(char **)i )
    {
      v14 = (__int64 *)(i - 16);
      if ( a2 == *((struct VIDMM_PROCESS **)i - 1) )
      {
        ++*((_DWORD *)i + 4);
LABEL_7:
        *v6 = *v14 + *((unsigned int *)v29 + 4);
        *((_QWORD *)v11 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v11, 0LL);
        KeLeaveCriticalRegion();
        return 0LL;
      }
    }
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x28uLL, 0x68536956u);
    v14 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x28uLL);
      *((_DWORD *)v14 + 8) = 1;
      v14[1] = (__int64)a2;
      v10 = *(_QWORD *)a2;
      v17 = *(_QWORD *)a2;
      v28 = 0LL;
      a6 = 4096LL;
      if ( PsGetProcessWow64Process(v17) || (v18 = 2, a4) )
        v18 = 4;
      v19 = MmMapViewOfSection(*((_QWORD *)this + 12), v10, v14, 0LL, a6, &v28, &a6, 2, 0, v18);
      if ( v19 >= 0 )
      {
        if ( !a4 || !a5 || (v24 = VidMmiEnsureVirtualAddressRangeValid((void *)*v14, a6), v19 = v24, v24 >= 0) )
        {
          v20 = (char **)*((_QWORD *)v12 + 1);
          v21 = (char *)(v14 + 2);
          if ( *v20 != v12 )
            __fastfail(3u);
          *(_QWORD *)v21 = v12;
          v14[3] = (__int64)v20;
          *v20 = v21;
          *((_QWORD *)v12 + 1) = v21;
          goto LABEL_7;
        }
        v27 = WdLogNewEntry5_WdWarning(v26, v25);
        WdLogEvent5_WdWarning(v27);
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
      if ( *v14 )
        MmUnmapViewOfSection(v10, *v14);
      ExFreePoolWithTag(v14, 0);
    }
    return (unsigned int)v19;
  }
}
