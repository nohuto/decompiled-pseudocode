/*
 * XREFs of ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1C01CD318
 * Callers:
 *     ?ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z @ 0x1C01CCDC4 (-ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00FC108 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?GetAllocationSize@@YAJPEAVDXGDEVICE@@IPEAUtagRECT@@@Z @ 0x1C01C63B8 (-GetAllocationSize@@YAJPEAVDXGDEVICE@@IPEAUtagRECT@@@Z.c)
 *     ?CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z @ 0x1C01CB850 (-CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z.c)
 *     ?GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z @ 0x1C01CBD28 (-GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z.c)
 *     ?SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C01CDB50 (-SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::ProcessUpdateLowLevel(
        OUTPUTDUPL_CONTEXT *this,
        struct _OUTPUTDUPL_UPDATE_INFO *a2,
        struct DXGDXGIKEYEDMUTEX *a3,
        struct _PRODUCER_INFO *a4,
        int *a5,
        int *a6)
{
  int v6; // r13d
  __int64 v10; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v12; // rdx
  LARGE_INTEGER v13; // r8
  LARGE_INTEGER v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r12
  struct _D3DKMT_PRESENT_RGNS *v17; // r12
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  struct tagRECT *DirtyRectData; // rax
  __int64 v25; // r8
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int128 v32; // xmm0
  unsigned int v33; // r14d
  PVOID Buffer; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  union _LARGE_INTEGER v38; // [rsp+38h] [rbp-48h] BYREF
  struct _D3DKMT_PRESENT_RGNS v39; // [rsp+40h] [rbp-40h] BYREF
  struct DXGDXGIKEYEDMUTEX *v40; // [rsp+60h] [rbp-20h]
  struct tagRECT v41; // [rsp+68h] [rbp-18h] BYREF

  v6 = 0;
  v40 = a3;
  LODWORD(v10) = 0;
  if ( a5 )
    *a5 = 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v15 = *(unsigned int *)a2;
  v38 = PerformanceCounter;
  if ( (_DWORD)v15 )
  {
    if ( (unsigned int)(v15 - 1) <= 1 )
    {
      *(LARGE_INTEGER *)a4 = PerformanceCounter;
      v32 = *(_OWORD *)*((_QWORD *)a2 + 4);
      *((_DWORD *)a4 + 5) = 1;
      *(_OWORD *)((char *)a4 + 24) = v32;
      if ( *(_DWORD *)a2 == 2 )
      {
        v33 = *(_DWORD *)(*((_QWORD *)a2 + 3) + 8LL) * *(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL);
        Buffer = AUTOEXPANDALLOCATION::GetBuffer(*((PVOID **)a4 + 11), v33, 0);
        if ( Buffer )
        {
          memmove(Buffer, *(const void **)(*((_QWORD *)a2 + 3) + 24LL), v33);
          v36 = *((_QWORD *)a2 + 3);
          *((_OWORD *)a4 + 3) = *(_OWORD *)v36;
          *((_OWORD *)a4 + 4) = *(_OWORD *)(v36 + 16);
          *((_QWORD *)a4 + 10) = *(_QWORD *)(v36 + 32);
          *((_QWORD *)a4 + 9) = 0LL;
          *((_DWORD *)a4 + 10) = 1;
        }
        else
        {
          v37 = WdLogNewEntry5_WdLowResource(v35);
          *(_QWORD *)(v37 + 24) = v33;
          *(_QWORD *)(v37 + 32) = *(unsigned int *)(*((_QWORD *)a2 + 3) + 16LL);
          WdLogEvent5_WdLowResource(v37);
          LODWORD(v10) = -1073741801;
        }
      }
    }
    return (unsigned int)v10;
  }
  if ( *((_DWORD *)this + 10) != 1
    || *((_DWORD *)this + 70) == 1
    || (v16 = *((_QWORD *)a2 + 3), (*(_DWORD *)(v16 + 304) & 4) != 0) )
  {
    v18 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdEvent)(
            v15,
            (LARGE_INTEGER)v12.QuadPart,
            (LARGE_INTEGER)v13.QuadPart,
            (LARGE_INTEGER)v14.QuadPart);
    *(_QWORD *)(v18 + 24) = *((int *)this + 70);
    *(_QWORD *)(v18 + 32) = *((unsigned int *)this + 10);
    WdLogEvent5_WdEvent(v18);
    LODWORD(v10) = GetAllocationSize(
                     *(struct DXGDEVICE **)(*((_QWORD *)a2 + 1) + 16LL),
                     *(unsigned int *)(*((_QWORD *)a2 + 3) + 4LL),
                     &v41);
    if ( (int)v10 < 0 )
    {
      v20 = WdLogNewEntry5_WdError(v19);
      *(_QWORD *)(v20 + 24) = 1682LL;
LABEL_10:
      WdLogEvent5_WdError(v20);
      return 3221225473LL;
    }
    memset(&v39, 0, sizeof(v39));
    v39.DirtyRectCount = 1;
    v39.pDirtyRects = &v41;
    v17 = &v39;
    *((_DWORD *)this + 70) = 0;
  }
  else
  {
    v17 = (struct _D3DKMT_PRESENT_RGNS *)(v16 + 272);
  }
  if ( !v17->DirtyRectCount && !v17->MoveRectCount )
    v6 = 1;
  if ( !v40 )
  {
    if ( *((_DWORD *)a4 + 4) == 2 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v15);
      *(_QWORD *)(v30 + 24) = 1771LL;
      WdLogEvent5_WdAssertion(v30);
    }
    if ( !v6 )
    {
      if ( !(unsigned int)DDAMetaData::CombineNewMetaData(
                            *((DDAMetaData **)a4 + 1),
                            v17,
                            &v38,
                            *(_DWORD *)(*((_QWORD *)a2 + 3) + 304LL) & 1,
                            a6) )
      {
        v20 = WdLogNewEntry5_WdError(v31);
        *(_QWORD *)(v20 + 24) = 1783LL;
        goto LABEL_10;
      }
      *((_DWORD *)a4 + 4) = 1;
    }
    if ( *((_DWORD *)a4 + 4) == 1 )
      LODWORD(v10) = 259;
    goto LABEL_34;
  }
  if ( !v6
    && !(unsigned int)DDAMetaData::CombineNewMetaData(
                        *((DDAMetaData **)a4 + 1),
                        v17,
                        &v38,
                        *(_DWORD *)(*((_QWORD *)a2 + 3) + 304LL) & 1,
                        a6) )
  {
    v20 = WdLogNewEntry5_WdError(v22);
    *(_QWORD *)(v20 + 24) = 1715LL;
    goto LABEL_10;
  }
  if ( *((_DWORD *)a4 + 4) == 1 )
  {
    v23 = *((_QWORD *)a4 + 1);
    v39.DirtyRectCount = *(_DWORD *)(v23 + 24);
    DirtyRectData = DDAMetaData::GetDirtyRectData((PVOID **)v23, v39.DirtyRectCount);
    v25 = *((_QWORD *)a4 + 1);
    v39.pDirtyRects = DirtyRectData;
    v39.MoveRectCount = *(_DWORD *)(v25 + 44);
    v26 = *((unsigned int *)this + 11);
    v39.pMoveRects = **(const D3DKMT_MOVE_RECT ***)(v25 + 48);
    v27 = OUTPUTDUPL_CONTEXT::SubmitBltForRegions(
            this,
            a2,
            *(_DWORD *)(*((_QWORD *)a2 + 3) + 4LL),
            *(_DWORD *)(*((_QWORD *)this + v26 + 6) + 92LL),
            &v39);
    goto LABEL_21;
  }
  if ( v6 )
  {
LABEL_34:
    if ( a5 )
      *a5 = 0;
    return (unsigned int)v10;
  }
  v27 = OUTPUTDUPL_CONTEXT::SubmitBltForRegions(
          this,
          a2,
          *(_DWORD *)(*((_QWORD *)a2 + 3) + 4LL),
          *(_DWORD *)(*((_QWORD *)this + *((unsigned int *)this + 11) + 6) + 92LL),
          v17);
LABEL_21:
  v10 = v27;
  if ( v27 >= 0 )
  {
    *((_DWORD *)a4 + 4) = 2;
  }
  else
  {
    v29 = WdLogNewEntry5_WdError(v28);
    *(_QWORD *)(v29 + 24) = v10;
    WdLogEvent5_WdError(v29);
  }
  return (unsigned int)v10;
}
