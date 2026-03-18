/*
 * XREFs of ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1C01D355C
 * Callers:
 *     ?ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z @ 0x1C01D300C (-ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C01A8AC0 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?GetAllocationSize@@YAJPEAVDXGDEVICE@@IPEAUtagRECT@@@Z @ 0x1C01C91E8 (-GetAllocationSize@@YAJPEAVDXGDEVICE@@IPEAUtagRECT@@@Z.c)
 *     ?CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z @ 0x1C01D1A80 (-CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z.c)
 *     ?GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z @ 0x1C01D1F70 (-GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z.c)
 *     ?SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C01D3D8C (-SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT.c)
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
  __int64 v10; // rsi
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r12
  struct _D3DKMT_PRESENT_RGNS *v15; // r12
  int DirtyRectCount; // eax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  struct tagRECT *DirtyRectData; // rax
  __int64 v24; // r8
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int128 v31; // xmm0
  __int64 v32; // rax
  __int64 v33; // rbx
  void *Buffer; // rax
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
  v13 = *(unsigned int *)a2;
  v38 = PerformanceCounter;
  if ( (_DWORD)v13 )
  {
    if ( (unsigned int)(v13 - 1) <= 1 )
    {
      *(LARGE_INTEGER *)a4 = PerformanceCounter;
      v31 = *(_OWORD *)*((_QWORD *)a2 + 4);
      *((_DWORD *)a4 + 5) = 1;
      *(_OWORD *)((char *)a4 + 24) = v31;
      if ( *(_DWORD *)a2 == 2 )
      {
        v32 = *((_QWORD *)a2 + 3);
        v33 = (unsigned int)(*(_DWORD *)(v32 + 8) * *(_DWORD *)(v32 + 12));
        Buffer = AUTOEXPANDALLOCATION::GetBuffer(
                   *((const void ***)a4 + 11),
                   *(_DWORD *)(v32 + 8) * *(_DWORD *)(v32 + 12),
                   0);
        if ( Buffer )
        {
          memmove(Buffer, *(const void **)(*((_QWORD *)a2 + 3) + 24LL), (unsigned int)v33);
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
    || (v14 = *((_QWORD *)a2 + 3), (*(_DWORD *)(v14 + 304) & 4) != 0) )
  {
    v17 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdEvent)(v13, (LARGE_INTEGER)v12.QuadPart);
    *(_QWORD *)(v17 + 24) = *((int *)this + 70);
    *(_QWORD *)(v17 + 32) = *((unsigned int *)this + 10);
    WdLogEvent5_WdEvent(v17);
    LODWORD(v10) = GetAllocationSize(
                     *(struct DXGDEVICE **)(*((_QWORD *)a2 + 1) + 16LL),
                     *(unsigned int *)(*((_QWORD *)a2 + 3) + 4LL),
                     &v41);
    if ( (int)v10 < 0 )
    {
      v19 = WdLogNewEntry5_WdError(v18);
      *(_QWORD *)(v19 + 24) = 1682LL;
LABEL_10:
      WdLogEvent5_WdError(v19);
      return 3221225473LL;
    }
    memset(&v39, 0, sizeof(v39));
    v39.DirtyRectCount = 1;
    v39.pDirtyRects = &v41;
    v15 = &v39;
    DirtyRectCount = 1;
    *((_DWORD *)this + 70) = 0;
  }
  else
  {
    v15 = (struct _D3DKMT_PRESENT_RGNS *)(v14 + 272);
    DirtyRectCount = v15->DirtyRectCount;
  }
  if ( !DirtyRectCount && !v15->MoveRectCount )
    v6 = 1;
  if ( !v40 )
  {
    if ( *((_DWORD *)a4 + 4) == 2 )
    {
      v29 = WdLogNewEntry5_WdAssertion(v13);
      *(_QWORD *)(v29 + 24) = 1771LL;
      WdLogEvent5_WdAssertion(v29);
    }
    if ( !v6 )
    {
      if ( !(unsigned int)DDAMetaData::CombineNewMetaData(
                            *((DDAMetaData **)a4 + 1),
                            v15,
                            &v38,
                            *(_DWORD *)(*((_QWORD *)a2 + 3) + 304LL) & 1,
                            a6) )
      {
        v19 = WdLogNewEntry5_WdError(v30);
        *(_QWORD *)(v19 + 24) = 1783LL;
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
                        v15,
                        &v38,
                        *(_DWORD *)(*((_QWORD *)a2 + 3) + 304LL) & 1,
                        a6) )
  {
    v19 = WdLogNewEntry5_WdError(v21);
    *(_QWORD *)(v19 + 24) = 1715LL;
    goto LABEL_10;
  }
  if ( *((_DWORD *)a4 + 4) == 1 )
  {
    v22 = *((_QWORD *)a4 + 1);
    v39.DirtyRectCount = *(_DWORD *)(v22 + 24);
    DirtyRectData = DDAMetaData::GetDirtyRectData((const void ***)v22, v39.DirtyRectCount);
    v24 = *((_QWORD *)a4 + 1);
    v39.pDirtyRects = DirtyRectData;
    v39.MoveRectCount = *(_DWORD *)(v24 + 44);
    v25 = *((unsigned int *)this + 11);
    v39.pMoveRects = **(const D3DKMT_MOVE_RECT ***)(v24 + 48);
    v26 = OUTPUTDUPL_CONTEXT::SubmitBltForRegions(
            this,
            a2,
            *(_DWORD *)(*((_QWORD *)a2 + 3) + 4LL),
            *(_DWORD *)(*((_QWORD *)this + v25 + 6) + 92LL),
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
  v26 = OUTPUTDUPL_CONTEXT::SubmitBltForRegions(
          this,
          a2,
          *(_DWORD *)(*((_QWORD *)a2 + 3) + 4LL),
          *(_DWORD *)(*((_QWORD *)this + *((unsigned int *)this + 11) + 6) + 92LL),
          v15);
LABEL_21:
  v10 = v26;
  if ( v26 >= 0 )
  {
    *((_DWORD *)a4 + 4) = 2;
  }
  else
  {
    v28 = WdLogNewEntry5_WdError(v27);
    *(_QWORD *)(v28 + 24) = v10;
    WdLogEvent5_WdError(v28);
  }
  return (unsigned int)v10;
}
