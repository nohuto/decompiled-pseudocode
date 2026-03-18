/*
 * XREFs of DxgkOutputDuplPresent @ 0x1C01B80C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z @ 0x1C01B7EC4 (-TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z.c)
 *     OutputDuplPresent @ 0x1C01CA16C (OutputDuplPresent.c)
 */

__int64 __fastcall DxgkOutputDuplPresent(__int64 a1, __int64 a2)
{
  _OWORD *v2; // rdi
  struct DXGPROCESS *Current; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  struct DXGPROCESS *v6; // r13
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v12; // rax
  struct _D3DKMT_OUTPUTDUPLPRESENT *v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r15
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  UINT v20; // r14d
  __int64 v21; // rcx
  unsigned int v22; // edi
  __int64 v23; // rax
  RECT *v24; // rdi
  RECT *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  D3DKMT_MOVE_RECT *v28; // rsi
  const RECT *pDirtyRects; // rdx
  UINT MoveRectCount; // ecx
  const D3DKMT_MOVE_RECT *v31; // r8
  unsigned int v32; // esi
  struct _D3DKMT_OUTPUTDUPLPRESENT v33; // [rsp+40h] [rbp-168h] BYREF

  v2 = (_OWORD *)a1;
  Current = DXGPROCESS::GetCurrent(a1, a2);
  v6 = Current;
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    *(_QWORD *)(v7 + 32) = PsGetCurrentProcess(v9, v8);
    v10 = v7;
LABEL_3:
    WdLogEvent5_WdError(v10);
    return 3221225485LL;
  }
  if ( !*((_BYTE *)Current + 306) )
  {
    v12 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v12 + 24) = 10578LL;
    v10 = v12;
    goto LABEL_3;
  }
  if ( (unsigned __int64)v2 >= MmUserProbeAddress )
    v2 = (_OWORD *)MmUserProbeAddress;
  v13 = &v33;
  v14 = 2LL;
  do
  {
    *(_OWORD *)&v13->hContext = *v2;
    *(_OWORD *)v13->BroadcastContext = v2[1];
    *(_OWORD *)&v13->BroadcastContext[4] = v2[2];
    *(_OWORD *)&v13->BroadcastContext[8] = v2[3];
    *(_OWORD *)&v13->BroadcastContext[12] = v2[4];
    *(_OWORD *)&v13->BroadcastContext[16] = v2[5];
    *(_OWORD *)&v13->BroadcastContext[20] = v2[6];
    v13 = (struct _D3DKMT_OUTPUTDUPLPRESENT *)((char *)v13 + 128);
    *(_OWORD *)&v13[-1].PresentRegions.pMoveRects = v2[7];
    v2 += 8;
    --v14;
  }
  while ( v14 );
  *(_OWORD *)&v13->hContext = *v2;
  *(_OWORD *)v13->BroadcastContext = v2[1];
  *(_OWORD *)&v13->BroadcastContext[4] = v2[2];
  *(_QWORD *)&v13->BroadcastContext[8] = *((_QWORD *)v2 + 6);
  v15 = 16LL * v33.PresentRegions.DirtyRectCount;
  v16 = 0xFFFFFFFFLL;
  if ( v15 > 0xFFFFFFFF )
  {
    v18 = WdLogNewEntry5_WdWarning(v13, 0xFFFFFFFFLL, v5);
    *(_QWORD *)(v18 + 24) = 10597LL;
LABEL_13:
    WdLogEvent5_WdWarning(v18);
    return 3221225621LL;
  }
  v17 = (unsigned int)v15;
  v19 = 24LL * v33.PresentRegions.MoveRectCount;
  if ( v19 > 0xFFFFFFFF )
  {
    v18 = WdLogNewEntry5_WdWarning(v19, 0xFFFFFFFFLL, v5);
    *(_QWORD *)(v18 + 24) = 10604LL;
    goto LABEL_13;
  }
  v20 = 24 * v33.PresentRegions.MoveRectCount;
  v21 = (unsigned int)(v19 + v15);
  if ( (unsigned int)v21 >= v20 )
    v16 = (unsigned int)v21;
  v22 = (unsigned int)v21 < v20 ? 0xC0000095 : 0;
  if ( (unsigned int)v21 < v20 )
  {
    v23 = WdLogNewEntry5_WdWarning(v21, v16, v5);
    *(_QWORD *)(v23 + 24) = 10611LL;
    WdLogEvent5_WdWarning(v23);
    return v22;
  }
  v24 = 0LL;
  if ( (_DWORD)v16 )
  {
    v25 = (RECT *)operator new((unsigned int)v16, 0x4B677844u, PagedPool);
    v24 = v25;
    if ( !v25 )
    {
      v27 = WdLogNewEntry5_WdLowResource(v26);
      *(_QWORD *)(v27 + 24) = 10622LL;
      WdLogEvent5_WdLowResource(v27);
      return 3221225495LL;
    }
    v28 = (D3DKMT_MOVE_RECT *)&v25[v33.PresentRegions.DirtyRectCount];
    if ( v33.PresentRegions.DirtyRectCount )
    {
      pDirtyRects = v33.PresentRegions.pDirtyRects;
      if ( (const RECT *)((unsigned __int64)v33.PresentRegions.pDirtyRects + v17) < v33.PresentRegions.pDirtyRects
        || (const RECT *)((char *)v33.PresentRegions.pDirtyRects + v17) > (const RECT *)MmUserProbeAddress )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove(v25, pDirtyRects, (unsigned int)v17);
      v33.PresentRegions.pDirtyRects = v24;
    }
    else
    {
      v33.PresentRegions.pDirtyRects = 0LL;
    }
    MoveRectCount = v33.PresentRegions.MoveRectCount;
    if ( v33.PresentRegions.MoveRectCount )
    {
      if ( v20 )
      {
        v31 = &v33.PresentRegions.pMoveRects[v20 / 0x18];
        if ( (unsigned __int64)v31 > MmUserProbeAddress || v31 < v33.PresentRegions.pMoveRects )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
          MoveRectCount = v33.PresentRegions.MoveRectCount;
        }
      }
      TranslateAndCopyDWMMoveRegionToDDAMoveRegions(MoveRectCount, v33.PresentRegions.pMoveRects, v28);
      v33.PresentRegions.pMoveRects = v28;
    }
    else
    {
      v33.PresentRegions.pMoveRects = 0LL;
    }
  }
  else
  {
    v33.PresentRegions.pDirtyRects = 0LL;
    v33.PresentRegions.pMoveRects = 0LL;
  }
  v32 = OutputDuplPresent(&v33, v6);
  if ( v24 )
    ExFreePoolWithTag(v24, 0);
  return v32;
}
