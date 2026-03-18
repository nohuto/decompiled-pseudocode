/*
 * XREFs of ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C002CDEC
 * Callers:
 *     UserSetDCVisRgn @ 0x1C002B840 (UserSetDCVisRgn.c)
 *     _GetDCEx @ 0x1C0033980 (_GetDCEx.c)
 * Callees:
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0027BCC (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     IntersectRect @ 0x1C00285C8 (IntersectRect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002A93C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C002BD78 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GetDwmDependentMetric @ 0x1C002BF30 (GetDwmDependentMetric.c)
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     HmgDecrementShareReferenceCount @ 0x1C002F950 (HmgDecrementShareReferenceCount.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0031E20 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     HmgShareLock @ 0x1C0032A40 (HmgShareLock.c)
 *     ?vCalcFillOrigin@DC@@QEAAXXZ @ 0x1C0039E3C (-vCalcFillOrigin@DC@@QEAAXXZ.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C003C4E0 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C003D940 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C003E9E0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     GreSetRectRgn @ 0x1C0040BF0 (GreSetRectRgn.c)
 */

void __fastcall ResetOrg(HRGN a1, struct tagDCE *a2, int a3)
{
  __int64 v4; // rdx
  __int128 v7; // xmm0
  _DWORD *LayeredOrRedirectedParent; // rdi
  int v9; // esi
  int v10; // edi
  LONG v11; // edi
  LONG v12; // esi
  __int64 v13; // rdi
  __int64 v14; // rcx
  _DWORD *v15; // rax
  __int64 v16; // rdx
  _DWORD *v17; // rcx
  _DWORD *v18; // rcx
  __int64 v19; // r9
  int v20; // ecx
  __int64 v21; // rcx
  DC *v22; // rbx
  _DWORD *v23; // rdi
  __int64 v24; // rcx
  int *v25; // rax
  int v26; // eax
  int v27; // eax
  int *v28; // r8
  __int128 v29; // [rsp+30h] [rbp-50h] BYREF
  DC *v30[2]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v31[2]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v32[2]; // [rsp+60h] [rbp-20h] BYREF
  int v33; // [rsp+70h] [rbp-10h]
  struct _POINTL v34; // [rsp+B8h] [rbp+38h] BYREF

  v4 = *((_QWORD *)a2 + 2);
  if ( (*(_WORD *)(v4 + 82) & 0x3FFF) == 0x29D )
  {
    *(_QWORD *)&v29 = 0LL;
    DWORD2(v29) = GetDwmDependentMetric(78);
    HIDWORD(v29) = GetDwmDependentMetric(79);
  }
  else
  {
    if ( (*((_DWORD *)a2 + 16) & 1) != 0 )
      v7 = *(_OWORD *)(v4 + 128);
    else
      v7 = *(_OWORD *)(v4 + 144);
    v29 = v7;
  }
  if ( *((_QWORD *)a2 + 11) && (*((_DWORD *)a2 + 16) & 0x4000) == 0 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
      && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
      && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL) + 52LL) & 1) != 0 )
    {
      v23 = (_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 40LL) + 48LL);
    }
    else
    {
      v23 = (_DWORD *)((W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
                    && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
                    && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                                  + 52LL) & 1) != 0
                     ? *(_QWORD *)(*((_QWORD *)a2 + 11) + 40LL) + 64LL
                     : *(_QWORD *)(*((_QWORD *)a2 + 11) + 40LL) + 32LL);
    }
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
      && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
      && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL) + 52LL) & 1) != 0 )
    {
      v24 = *((_QWORD *)a2 + 11);
      v25 = (int *)(*(_QWORD *)(v24 + 40) + 44LL);
    }
    else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
           && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
           && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL) + 52LL) & 1) != 0 )
    {
      v24 = *((_QWORD *)a2 + 11);
      v25 = (int *)(*(_QWORD *)(v24 + 40) + 60LL);
    }
    else
    {
      v24 = *((_QWORD *)a2 + 11);
      v25 = (int *)(*(_QWORD *)(v24 + 40) + 28LL);
    }
    v26 = *v25;
    v4 = (unsigned int)-*v23;
    HIDWORD(v29) -= *v23;
    v27 = -v26;
    LODWORD(v29) = v27 + v29;
    DWORD2(v29) += v27;
    DWORD1(v29) += v4;
    if ( a1 )
      SetMonitorRegion((struct tagMONITOR *)v24, a1, a1);
  }
  if ( (*((_DWORD *)a2 + 16) & 0x4000000) != 0 )
    goto LABEL_52;
  if ( (int)IsGetLayeredOrRedirectedParentSupported() < 0 )
    LayeredOrRedirectedParent = 0LL;
  else
    LayeredOrRedirectedParent = (_DWORD *)GetLayeredOrRedirectedParent(*((_QWORD *)a2 + 2));
  if ( !LayeredOrRedirectedParent )
    goto LABEL_21;
  if ( (LayeredOrRedirectedParent[16] & 0x20000000) != 0
    && (int)IsGetRedirectionBitmapSupported() >= 0
    && GetRedirectionBitmap(LayeredOrRedirectedParent) )
  {
    v9 = LayeredOrRedirectedParent[32];
    v10 = LayeredOrRedirectedParent[33];
    if ( *((_QWORD *)a2 + 11) && *((int *)a2 + 16) < 0 )
    {
      LODWORD(v29) = v9 + v29;
      DWORD2(v29) += v9;
      HIDWORD(v29) += v10;
      DWORD1(v29) += v10;
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
        && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
        && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL) + 52LL) & 1) != 0 )
      {
        v28 = (int *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 40LL) + 44LL);
      }
      else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
             && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
             && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL) + 52LL) & 1) != 0 )
      {
        v28 = (int *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 40LL) + 60LL);
      }
      else
      {
        v28 = (int *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 40LL) + 28LL);
      }
      IntersectRect((int *)&v29, (int *)&v29, v28);
    }
    v11 = -v10;
    v12 = -v9;
    LODWORD(v29) = v12 + v29;
    DWORD2(v29) += v12;
    HIDWORD(v29) += v11;
    DWORD1(v29) += v11;
    if ( a1 )
    {
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v32, a1, 0);
      v34.y = v11;
      v13 = v32[0];
      v34.x = v12;
      if ( v32[0] )
        RGNOBJ::bOffset((RGNOBJ *)v32, &v34);
      if ( !v33 )
        RGNOBJ::UpdateUserRgn((RGNOBJ *)v32);
      if ( v13 )
        _InterlockedDecrement((volatile signed __int32 *)(v13 + 12));
    }
  }
  else
  {
LABEL_52:
    if ( a1 )
      GreSetRectRgn(a1, 0);
  }
LABEL_21:
  v14 = *((_QWORD *)a2 + 1);
  LOBYTE(v4) = 1;
  v31[1] = 0LL;
  v15 = (_DWORD *)HmgShareLock(v14, v4);
  v31[0] = v15;
  if ( v15 )
  {
    v17 = v15 + 360;
    if ( (v15[10] & 1) == 0 )
      v17 = v15 + 358;
    *v17 = v29;
    v18 = v15 + 360;
    if ( (v15[10] & 1) == 0 )
      v18 = v15 + 358;
    v18[1] = DWORD1(v29);
    DC::vCalcFillOrigin((DC *)v15);
    *(_OWORD *)(v19 + 1448) = v29;
    v20 = *(_DWORD *)(v19 + 536);
    if ( (v20 & 3) == 1 )
    {
      *(_DWORD *)(v19 + 36) |= 0x10u;
      *(_DWORD *)(v19 + 536) = v20 | 4;
    }
    XDCOBJ::RestoreAttributes((XDCOBJ *)v31);
    HmgDecrementShareReferenceCount(v31[0]);
  }
  if ( a3 )
  {
    v21 = *((_QWORD *)a2 + 1);
    LOBYTE(v16) = 1;
    v30[1] = 0LL;
    v30[0] = (DC *)HmgShareLock(v21, v16);
    v22 = v30[0];
    GreSelectVisRgnInternal(v30, a1, 1);
    if ( v22 )
    {
      XDCOBJ::RestoreAttributes((XDCOBJ *)v30);
      HmgDecrementShareReferenceCount(v30[0]);
    }
  }
}
