/*
 * XREFs of ?VidMmEvictAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C0096AB0
 * Callers:
 *     ?VidMmEvictAllocation@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C001E9C0 (-VidMmEvictAllocation@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLO.c)
 * Callees:
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0062DF0 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAU_VIDMM_MULTI_ALLOC@@IKPEA_K@Z @ 0x1C006310C (-Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAU_VIDMM_MULTI_ALLOC@@IKPEA_K@Z.c)
 *     ?VidMmiAllocationMeetsCriteria@@YA_NPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C0097E68 (-VidMmiAllocationMeetsCriteria@@YA_NPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::VidMmEvictAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_MULTI_ALLOC *a2,
        struct _VIDMM_MULTI_GLOBAL_ALLOC *a3,
        struct _D3DKMT_EVICTION_CRITERIA *a4)
{
  __int64 v7; // rdi
  struct VIDMM_DEVICE *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  char *v11; // r14
  char *v12; // rbx
  int *v13; // rdi
  int *v14; // r13
  struct VIDMM_DEVICE *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  struct _VIDSCH_SYNC_OBJECT *v18; // [rsp+30h] [rbp-30h] BYREF
  struct _VIDMM_MULTI_ALLOC *v19; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v20; // [rsp+40h] [rbp-20h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v21; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int64 v22; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int64 v23; // [rsp+58h] [rbp-8h] BYREF
  struct _VIDMM_MULTI_ALLOC *v25; // [rsp+A8h] [rbp+48h] BYREF
  unsigned __int64 v26; // [rsp+B0h] [rbp+50h] BYREF

  if ( a2 )
  {
    v7 = **(_QWORD **)a2;
    if ( VidMmiAllocationMeetsCriteria((struct _VIDMM_GLOBAL_ALLOC *)v7, a4) && *((int *)a2 + 38) > 0 )
    {
      v8 = (struct VIDMM_DEVICE *)*((_QWORD *)a2 + 1);
      v25 = a2;
      VIDMM_GLOBAL::Evict(this, v8, (__int64 ***)&v25, 1u, 0, &v22);
      v9 = *(_QWORD *)(*((_QWORD *)a2 + 1) + 80LL) + 160LL * (*(_DWORD *)(v7 + 76) & 0x3F);
      v18 = *(struct _VIDSCH_SYNC_OBJECT **)(v9 + 88);
      v26 = *(_QWORD *)(v9 + 96);
      VIDMM_GLOBAL::WaitForFences(this, &v18, &v26, 1u, 0LL);
    }
  }
  else if ( a3 )
  {
    if ( VidMmiAllocationMeetsCriteria(a3, a4) )
    {
      v11 = (char *)(v10 + 296);
      v12 = *(char **)(v10 + 296);
      if ( v12 != (char *)(v10 + 296) )
      {
        do
        {
          v13 = (int *)*((_QWORD *)v12 - 2);
          if ( v13 != (int *)(v12 - 16) )
          {
            do
            {
              v14 = v13 - 10;
              if ( v13[28] > 0 )
              {
                v15 = (struct VIDMM_DEVICE *)*((_QWORD *)v14 + 1);
                v19 = (struct _VIDMM_MULTI_ALLOC *)(v13 - 10);
                VIDMM_GLOBAL::Evict(this, v15, (__int64 ***)&v19, 1u, 0, &v23);
                v16 = *(_QWORD *)(*((_QWORD *)v14 + 1) + 80LL) + 160LL * (*((_DWORD *)a3 + 19) & 0x3F);
                v21 = *(struct _VIDSCH_SYNC_OBJECT **)(v16 + 88);
                v20 = *(_QWORD *)(v16 + 96);
                VIDMM_GLOBAL::WaitForFences(this, &v21, &v20, 1u, 0LL);
              }
              v13 = *(int **)v13;
            }
            while ( v13 != (int *)(v12 - 16) );
            v11 = (char *)a3 + 296;
          }
          v12 = *(char **)v12;
        }
        while ( v12 != v11 );
      }
    }
  }
  else
  {
    v17 = WdLogNewEntry5_WdWarning(this, 0LL);
    WdLogEvent5_WdWarning(v17);
  }
}
