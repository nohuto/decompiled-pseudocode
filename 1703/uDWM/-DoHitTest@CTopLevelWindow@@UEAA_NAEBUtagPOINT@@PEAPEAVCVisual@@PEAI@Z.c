/*
 * XREFs of ?DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x180028CC0
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x180032100 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18000C59C (-D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z @ 0x18000C648 (-GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z.c)
 *     ?DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z @ 0x1800244C0 (-DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x1800A1850 (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 */

bool __fastcall CTopLevelWindow::DoHitTest(
        CTopLevelWindow *this,
        const struct tagPOINT *a2,
        struct CVisual **a3,
        unsigned int *a4)
{
  CTopLevelWindow *v7; // rdi
  unsigned int v8; // esi
  __int64 v9; // rdi
  char v10; // r14
  __int64 v11; // rsi
  bool (__fastcall *v12)(CVisual *, const struct tagPOINT *, struct CVisual **, unsigned int *); // rax
  bool v13; // al
  _DWORD *v14; // rax
  int v15; // eax
  __int64 v16; // rax
  unsigned int DpiForSystem; // eax
  int SystemMetricsForDpi; // eax
  __int64 v19; // rcx
  int v20; // r14d
  unsigned int v21; // eax
  int v22; // eax
  __int64 v23; // rcx
  int v24; // r15d
  unsigned int v25; // eax
  int v26; // eax
  LONG *v27; // r8
  POINT v28; // rdx
  unsigned int *v29; // rax
  float *v31; // rdx
  LONG y; // eax
  LONG v33; // ecx
  int x; // eax
  LONG **v35; // r15
  LONG v36; // eax
  __int64 v37; // r12
  LONG *v38; // r14
  unsigned int v39; // [rsp+38h] [rbp-79h] BYREF
  unsigned int *v40; // [rsp+40h] [rbp-71h]
  RECT v41; // [rsp+48h] [rbp-69h] BYREF
  RECT rc; // [rsp+58h] [rbp-59h] BYREF
  RECT v43; // [rsp+68h] [rbp-49h] BYREF
  _QWORD v44[8]; // [rsp+78h] [rbp-39h] BYREF

  v7 = 0LL;
  v8 = 0;
  v40 = a4;
  *(_QWORD *)&v43.left = 0LL;
  v39 = 0;
  if ( *((_QWORD *)this + 3) && ((*((_BYTE *)this + 84) & 4) == 0 || *((_DWORD *)this + 48) == -1) )
    goto LABEL_14;
  LODWORD(v9) = -1;
  v10 = 0;
  while ( 1 )
  {
    if ( !v10 )
    {
      LODWORD(v9) = *((_DWORD *)this + 18);
      v10 = 1;
    }
    v9 = (unsigned int)(v9 - 1);
    if ( (_DWORD)v9 == -1 )
      break;
    v11 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v9);
    *(struct tagPOINT *)&v41.left = *a2;
    v41.left -= *(_DWORD *)(v11 + 112);
    v41.top -= *(_DWORD *)(v11 + 116);
    if ( (*(_BYTE *)(v11 + 84) & 2) != 0 )
    {
      CVisual::GetCurrentTransform((CVisual *)v11, (struct D2DMatrix *)v44);
      if ( D2DMatrixInverse((struct D2DMatrix *)v44, v31, (const struct D2DMatrix *)v44) )
      {
        *(float *)&rc.left = (float)v41.left;
        *(float *)&rc.top = (float)v41.top;
        D3DXVec2TransformCoord((struct D2DVector2 *)&rc, (const struct D2DVector2 *)&rc, (const struct D2DMatrix *)v44);
        v41.top = (int)*(float *)&rc.top;
        v41.left = (int)*(float *)&rc.left;
        goto LABEL_9;
      }
    }
    else
    {
LABEL_9:
      v12 = *(bool (__fastcall **)(CVisual *, const struct tagPOINT *, struct CVisual **, unsigned int *))(*(_QWORD *)v11 + 120LL);
      if ( v12 == CVisual::DoHitTest )
        v13 = CVisual::DoHitTest((CVisual *)v11, (const struct tagPOINT *)&v41, (struct CVisual **)&v43, &v39);
      else
        v13 = v12((CVisual *)v11, (const struct tagPOINT *)&v41, (struct CVisual **)&v43, &v39);
      if ( v13 )
        break;
    }
  }
  v7 = *(CTopLevelWindow **)&v43.left;
  if ( *(_QWORD *)&v43.left
    || a2->x < 0
    || a2->x >= *((_DWORD *)this + 30)
    || (y = a2->y, y < 0)
    || y >= *((_DWORD *)this + 31) )
  {
    v8 = v39;
  }
  else
  {
    v8 = *((_DWORD *)this + 48);
    v7 = this;
  }
LABEL_14:
  if ( v7 && v8 == -2 )
  {
    if ( a2->x >= *((_DWORD *)this + 147) && a2->x < *((_DWORD *)this + 30) - *((_DWORD *)this + 148) )
    {
      v33 = a2->y;
      if ( v33 >= *(_DWORD *)(*((_QWORD *)this + 90) + 96LL) && v33 < *((_DWORD *)this + 149) )
        v8 = 2;
    }
    v14 = (_DWORD *)*((_QWORD *)this + 90);
    *(_QWORD *)&rc.left = 0LL;
    if ( v14[14] - v14[12] < 0 )
      rc.right = 0;
    else
      rc.right = v14[14] - v14[12];
    if ( v14[15] - v14[13] < 0 )
      rc.bottom = 0;
    else
      rc.bottom = v14[15] - v14[13];
    if ( !PtInRect(&rc, *a2) )
    {
      v8 = 18;
      if ( a2->y < 0 )
        v8 = 2;
    }
    v15 = *((_DWORD *)this + 146);
    if ( (v15 & 0x20) != 0 )
    {
      if ( (v15 & 0x20000) != 0 )
        x = *((_DWORD *)this + 30) - a2->x - 1;
      else
        x = a2->x;
      v43.left = x;
      v35 = (LONG **)v44;
      v36 = a2->y;
      v37 = 5LL;
      v43.top = v36;
      v44[0] = *((_QWORD *)this + 65);
      v44[1] = *((_QWORD *)this + 60);
      v44[2] = *((_QWORD *)this + 61);
      v44[3] = *((_QWORD *)this + 62);
      v44[4] = *((_QWORD *)this + 63);
      do
      {
        v38 = *v35;
        if ( *v35 )
        {
          v41.left = v38[28];
          v41.top = *((_DWORD *)this + 161);
          v41.right = v38[28] + v38[30];
          v41.bottom = v38[29] + v38[31];
          if ( v38 == *((LONG **)this + 65) )
          {
            v41.left = *((_DWORD *)this + 159);
          }
          else if ( v38 == *((LONG **)this + 63) )
          {
            v41.right = *((_DWORD *)this + 30) - *((_DWORD *)this + 160);
          }
          if ( PtInRect(&v41, *(POINT *)&v43.left) )
          {
            v8 = v38[48];
            v7 = (CTopLevelWindow *)v38;
          }
        }
        ++v35;
        --v37;
      }
      while ( v37 );
    }
    else if ( *((_QWORD *)this + 65) )
    {
      v16 = *((_QWORD *)this + 90);
      if ( *(_DWORD *)(v16 + 348) )
        DpiForSystem = *(_DWORD *)(v16 + 328);
      else
        DpiForSystem = GetDpiForSystem();
      SystemMetricsForDpi = GetSystemMetricsForDpi(31LL, DpiForSystem);
      v19 = *((_QWORD *)this + 90);
      v20 = SystemMetricsForDpi;
      if ( *(_DWORD *)(v19 + 348) )
        v21 = *(_DWORD *)(v19 + 328);
      else
        v21 = GetDpiForSystem();
      v22 = GetSystemMetricsForDpi(46LL, v21);
      v23 = *((_QWORD *)this + 90);
      v24 = v22;
      if ( *(_DWORD *)(v23 + 348) )
        v25 = *(_DWORD *)(v23 + 328);
      else
        v25 = GetDpiForSystem();
      v26 = (int)(v20 - v24 - GetSystemMetricsForDpi(50LL, v25)) / 2;
      if ( v26 >= 1 )
      {
        v27 = (LONG *)*((_QWORD *)this + 65);
        v28 = *a2;
        v43.left = v27[28];
        v43.top = v27[29] - v26;
        v43.right = v27[28] + v27[30];
        v43.bottom = v27[29] + v26 + v27[31];
        if ( PtInRect(&v43, v28) )
        {
          v7 = (CTopLevelWindow *)*((_QWORD *)this + 65);
          v8 = *((_DWORD *)v7 + 48);
        }
      }
    }
  }
  v29 = v40;
  *a3 = v7;
  *v29 = v8;
  return v7 != 0LL;
}
