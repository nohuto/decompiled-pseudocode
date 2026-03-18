/*
 * XREFs of ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1C01B3560
 * Callers:
 *     ?ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z @ 0x1C01B300C (-ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00A63E0 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?GetAllocationSize@@YAJPEAVDXGDEVICE@@IPEAUtagRECT@@@Z @ 0x1C01AC960 (-GetAllocationSize@@YAJPEAVDXGDEVICE@@IPEAUtagRECT@@@Z.c)
 *     ?CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z @ 0x1C01B1A90 (-CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z.c)
 *     ?GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z @ 0x1C01B1F68 (-GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z.c)
 *     ?SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C01B3D98 (-SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT.c)
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
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  struct tagRECT *DirtyRectData; // rax
  __int64 v27; // r8
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int128 v36; // xmm0
  unsigned int v37; // r14d
  PVOID Buffer; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  union _LARGE_INTEGER v42; // [rsp+38h] [rbp-48h] BYREF
  struct _D3DKMT_PRESENT_RGNS v43; // [rsp+40h] [rbp-40h] BYREF
  struct DXGDXGIKEYEDMUTEX *v44; // [rsp+60h] [rbp-20h]
  struct tagRECT v45; // [rsp+68h] [rbp-18h] BYREF

  v6 = 0;
  v44 = a3;
  LODWORD(v10) = 0;
  if ( a5 )
    *a5 = 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v15 = *(unsigned int *)a2;
  v42 = PerformanceCounter;
  if ( (_DWORD)v15 )
  {
    if ( (unsigned int)(v15 - 1) <= 1 )
    {
      *(LARGE_INTEGER *)a4 = PerformanceCounter;
      v36 = *(_OWORD *)*((_QWORD *)a2 + 4);
      *((_DWORD *)a4 + 5) = 1;
      *(_OWORD *)((char *)a4 + 24) = v36;
      if ( *(_DWORD *)a2 == 2 )
      {
        v37 = *(_DWORD *)(*((_QWORD *)a2 + 3) + 8LL) * *(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL);
        Buffer = AUTOEXPANDALLOCATION::GetBuffer(*((PVOID **)a4 + 11), v37, 0);
        if ( Buffer )
        {
          memmove(Buffer, *(const void **)(*((_QWORD *)a2 + 3) + 24LL), v37);
          v40 = *((_QWORD *)a2 + 3);
          *((_OWORD *)a4 + 3) = *(_OWORD *)v40;
          *((_OWORD *)a4 + 4) = *(_OWORD *)(v40 + 16);
          *((_QWORD *)a4 + 10) = *(_QWORD *)(v40 + 32);
          *((_QWORD *)a4 + 9) = 0LL;
          *((_DWORD *)a4 + 10) = 1;
        }
        else
        {
          v41 = WdLogNewEntry5_WdLowResource(v39);
          *(_QWORD *)(v41 + 24) = v37;
          *(_QWORD *)(v41 + 32) = *(unsigned int *)(*((_QWORD *)a2 + 3) + 16LL);
          WdLogEvent5_WdLowResource(v41);
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
    v18 = WdLogNewEntry5_WdEvent(v15);
    *(_QWORD *)(v18 + 24) = *((int *)this + 70);
    *(_QWORD *)(v18 + 32) = *((unsigned int *)this + 10);
    WdLogEvent5_WdEvent(v18);
    LODWORD(v10) = GetAllocationSize(
                     *(struct DXGDEVICE **)(*((_QWORD *)a2 + 1) + 16LL),
                     *(_DWORD *)(*((_QWORD *)a2 + 3) + 4LL),
                     &v45);
    if ( (int)v10 < 0 )
    {
      v21 = WdLogNewEntry5_WdError(v20, v19);
      *(_QWORD *)(v21 + 24) = 1677LL;
LABEL_10:
      WdLogEvent5_WdError(v21);
      return 3221225473LL;
    }
    memset(&v43, 0, sizeof(v43));
    v43.DirtyRectCount = 1;
    v43.pDirtyRects = &v45;
    v17 = &v43;
    *((_DWORD *)this + 70) = 0;
  }
  else
  {
    v17 = (struct _D3DKMT_PRESENT_RGNS *)(v16 + 272);
  }
  if ( !v17->DirtyRectCount && !v17->MoveRectCount )
    v6 = 1;
  if ( !v44 )
  {
    if ( *((_DWORD *)a4 + 4) == 2 )
    {
      v33 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(
              v15,
              (LARGE_INTEGER)v12.QuadPart,
              (LARGE_INTEGER)v13.QuadPart,
              (LARGE_INTEGER)v14.QuadPart);
      *(_QWORD *)(v33 + 24) = 1766LL;
      WdLogEvent5_WdAssertion(v33);
    }
    if ( !v6 )
    {
      if ( !(unsigned int)DDAMetaData::CombineNewMetaData(
                            *((DDAMetaData **)a4 + 1),
                            v17,
                            &v42,
                            *(_DWORD *)(*((_QWORD *)a2 + 3) + 304LL) & 1,
                            a6) )
      {
        v21 = WdLogNewEntry5_WdError(v35, v34);
        *(_QWORD *)(v21 + 24) = 1778LL;
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
                        &v42,
                        *(_DWORD *)(*((_QWORD *)a2 + 3) + 304LL) & 1,
                        a6) )
  {
    v21 = WdLogNewEntry5_WdError(v24, v23);
    *(_QWORD *)(v21 + 24) = 1710LL;
    goto LABEL_10;
  }
  if ( *((_DWORD *)a4 + 4) == 1 )
  {
    v25 = *((_QWORD *)a4 + 1);
    v43.DirtyRectCount = *(_DWORD *)(v25 + 24);
    DirtyRectData = DDAMetaData::GetDirtyRectData((PVOID **)v25, v43.DirtyRectCount);
    v27 = *((_QWORD *)a4 + 1);
    v43.pDirtyRects = DirtyRectData;
    v43.MoveRectCount = *(_DWORD *)(v27 + 44);
    v28 = *((unsigned int *)this + 11);
    v43.pMoveRects = **(const D3DKMT_MOVE_RECT ***)(v27 + 48);
    v29 = OUTPUTDUPL_CONTEXT::SubmitBltForRegions(
            this,
            a2,
            *(_DWORD *)(*((_QWORD *)a2 + 3) + 4LL),
            *(_DWORD *)(*((_QWORD *)this + v28 + 6) + 100LL),
            &v43);
    goto LABEL_21;
  }
  if ( v6 )
  {
LABEL_34:
    if ( a5 )
      *a5 = 0;
    return (unsigned int)v10;
  }
  v29 = OUTPUTDUPL_CONTEXT::SubmitBltForRegions(
          this,
          a2,
          *(_DWORD *)(*((_QWORD *)a2 + 3) + 4LL),
          *(_DWORD *)(*((_QWORD *)this + *((unsigned int *)this + 11) + 6) + 100LL),
          v17);
LABEL_21:
  v10 = v29;
  if ( v29 >= 0 )
  {
    *((_DWORD *)a4 + 4) = 2;
  }
  else
  {
    v32 = WdLogNewEntry5_WdError(v31, v30);
    *(_QWORD *)(v32 + 24) = v10;
    WdLogEvent5_WdError(v32);
  }
  return (unsigned int)v10;
}
