/*
 * XREFs of DxgkOutputDuplPresent @ 0x1C01A1230
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z @ 0x1C01A0F1C (-TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z.c)
 *     OutputDuplPresent @ 0x1C01B03B0 (OutputDuplPresent.c)
 */

__int64 __fastcall DxgkOutputDuplPresent(__int64 a1)
{
  _OWORD *v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct DXGPROCESS *Current; // r13
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  struct _D3DKMT_OUTPUTDUPLPRESENT *v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // r14
  __int64 v17; // rdx
  unsigned __int64 v18; // rsi
  __int64 v19; // rcx
  unsigned int v20; // edi
  __int64 v21; // rax
  RECT *v22; // rdi
  RECT *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  D3DKMT_MOVE_RECT *v26; // r15
  const RECT *pDirtyRects; // rdx
  const RECT *v28; // rcx
  UINT MoveRectCount; // ecx
  const D3DKMT_MOVE_RECT *v30; // r8
  unsigned int v31; // esi
  __int64 v32; // rax
  struct _D3DKMT_OUTPUTDUPLPRESENT v33; // [rsp+40h] [rbp-168h] BYREF

  v1 = (_OWORD *)a1;
  Current = DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v5 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v5 + 24) = -1073741811LL;
    *(_QWORD *)(v5 + 32) = PsGetCurrentProcess(v6);
    v7 = v5;
LABEL_3:
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
  if ( !(unsigned int)_guard_dispatch_icall_fptr() )
  {
    v13 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v13 + 24) = 9774LL;
    v7 = v13;
    goto LABEL_3;
  }
  if ( (unsigned __int64)v1 >= MmUserProbeAddress )
    v1 = (_OWORD *)MmUserProbeAddress;
  v14 = &v33;
  v15 = 2LL;
  do
  {
    *(_OWORD *)&v14->hContext = *v1;
    *(_OWORD *)v14->BroadcastContext = v1[1];
    *(_OWORD *)&v14->BroadcastContext[4] = v1[2];
    *(_OWORD *)&v14->BroadcastContext[8] = v1[3];
    *(_OWORD *)&v14->BroadcastContext[12] = v1[4];
    *(_OWORD *)&v14->BroadcastContext[16] = v1[5];
    *(_OWORD *)&v14->BroadcastContext[20] = v1[6];
    v14 = (struct _D3DKMT_OUTPUTDUPLPRESENT *)((char *)v14 + 128);
    *(_OWORD *)&v14[-1].PresentRegions.pMoveRects = v1[7];
    v1 += 8;
    --v15;
  }
  while ( v15 );
  *(_OWORD *)&v14->hContext = *v1;
  *(_OWORD *)v14->BroadcastContext = v1[1];
  *(_OWORD *)&v14->BroadcastContext[4] = v1[2];
  *(_QWORD *)&v14->BroadcastContext[8] = *((_QWORD *)v1 + 6);
  v16 = 16LL * v33.PresentRegions.DirtyRectCount;
  v17 = 0xFFFFFFFFLL;
  if ( v16 > 0xFFFFFFFF )
  {
    v32 = WdLogNewEntry5_WdWarning(v14, 0xFFFFFFFFLL, v11, v12);
    *(_QWORD *)(v32 + 24) = 9793LL;
    goto LABEL_38;
  }
  v18 = 24LL * v33.PresentRegions.MoveRectCount;
  if ( v18 > 0xFFFFFFFF )
  {
    v32 = WdLogNewEntry5_WdWarning(v14, 0xFFFFFFFFLL, v11, v12);
    *(_QWORD *)(v32 + 24) = 9800LL;
LABEL_38:
    WdLogEvent5_WdWarning(v32);
    return 3221225621LL;
  }
  v19 = (unsigned int)(v18 + v16);
  if ( (unsigned int)v19 >= (unsigned int)v18 )
    v17 = (unsigned int)v19;
  v20 = (unsigned int)v19 < (unsigned int)v18 ? 0xC0000095 : 0;
  if ( (unsigned int)v19 < (unsigned int)v18 )
  {
    v21 = WdLogNewEntry5_WdWarning(v19, v17, v11, v12);
    *(_QWORD *)(v21 + 24) = 9807LL;
    WdLogEvent5_WdWarning(v21);
    return v20;
  }
  v22 = 0LL;
  if ( (_DWORD)v17 )
  {
    v23 = (RECT *)operator new((unsigned int)v17, 0x4B677844u, PagedPool);
    v22 = v23;
    if ( !v23 )
    {
      v25 = WdLogNewEntry5_WdLowResource(v24);
      *(_QWORD *)(v25 + 24) = 9818LL;
      WdLogEvent5_WdLowResource(v25);
      return 3221225495LL;
    }
    v26 = (D3DKMT_MOVE_RECT *)&v23[v33.PresentRegions.DirtyRectCount];
    if ( v33.PresentRegions.DirtyRectCount )
    {
      pDirtyRects = v33.PresentRegions.pDirtyRects;
      v28 = (const RECT *)((char *)v33.PresentRegions.pDirtyRects + (unsigned int)v16);
      if ( v28 < v33.PresentRegions.pDirtyRects || (unsigned __int64)v28 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v23, pDirtyRects, (unsigned int)v16);
      v33.PresentRegions.pDirtyRects = v22;
    }
    else
    {
      v33.PresentRegions.pDirtyRects = 0LL;
    }
    MoveRectCount = v33.PresentRegions.MoveRectCount;
    if ( v33.PresentRegions.MoveRectCount )
    {
      if ( (_DWORD)v18 )
      {
        v30 = (const D3DKMT_MOVE_RECT *)((char *)v33.PresentRegions.pMoveRects + (unsigned int)v18);
        if ( (unsigned __int64)v30 > MmUserProbeAddress || v30 < v33.PresentRegions.pMoveRects )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
          MoveRectCount = v33.PresentRegions.MoveRectCount;
        }
      }
      TranslateAndCopyDWMMoveRegionToDDAMoveRegions(MoveRectCount, v33.PresentRegions.pMoveRects, v26);
      v33.PresentRegions.pMoveRects = v26;
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
  v31 = OutputDuplPresent(&v33, Current);
  if ( v22 )
    ExFreePoolWithTag(v22, 0);
  return v31;
}
