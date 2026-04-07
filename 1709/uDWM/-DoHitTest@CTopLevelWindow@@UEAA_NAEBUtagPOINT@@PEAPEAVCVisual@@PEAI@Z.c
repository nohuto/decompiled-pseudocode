/*
 * XREFs of ?DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x18001D510
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002B020 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x180009E18 (-D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z @ 0x180009EC4 (-GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z.c)
 *     ?DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z @ 0x180018E90 (-DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x18009FFC8 (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 */

bool __fastcall CTopLevelWindow::DoHitTest(
        CTopLevelWindow *this,
        const struct tagPOINT *a2,
        struct CVisual **a3,
        unsigned int *a4)
{
  struct CVisual **v6; // r13
  CTopLevelWindow *v7; // r14
  unsigned int v8; // r15d
  __int64 v9; // rbx
  __int64 v10; // rdi
  bool (__fastcall *v11)(CVisual *, const struct tagPOINT *, struct CVisual **, unsigned int *); // rax
  bool v12; // al
  _DWORD *v13; // rax
  int v14; // eax
  int SystemMetricsForDpi; // edi
  int v16; // ebx
  int v17; // eax
  LONG *v18; // r8
  POINT v19; // rdx
  unsigned int *v20; // rax
  float *v22; // rdx
  LONG y; // eax
  LONG v24; // ecx
  int x; // eax
  LONG **v26; // rdi
  LONG v27; // eax
  __int64 v28; // r12
  LONG *v29; // rbx
  struct tagPOINT v30; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v31[2]; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int *v32; // [rsp+48h] [rbp-C0h]
  RECT v33; // [rsp+50h] [rbp-B8h] BYREF
  RECT v34; // [rsp+60h] [rbp-A8h] BYREF
  RECT rc; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v36[8]; // [rsp+88h] [rbp-80h] BYREF

  v6 = a3;
  v7 = 0LL;
  v8 = 0;
  v32 = a4;
  *(_QWORD *)&rc.left = a3;
  *(_QWORD *)&v34.left = 0LL;
  v31[0] = 0;
  if ( *((_QWORD *)this + 3) && ((*((_BYTE *)this + 84) & 4) == 0 || *((_DWORD *)this + 48) == -1) )
    goto LABEL_14;
  LODWORD(v9) = -1;
  while ( 1 )
  {
    if ( !(_BYTE)v7 )
    {
      LODWORD(v9) = *((_DWORD *)this + 18);
      LOBYTE(v7) = 1;
    }
    v9 = (unsigned int)(v9 - 1);
    if ( (_DWORD)v9 == -1 )
      break;
    v10 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v9);
    v30 = *a2;
    v30.x -= *(_DWORD *)(v10 + 112);
    v30.y -= *(_DWORD *)(v10 + 116);
    if ( (*(_BYTE *)(v10 + 84) & 2) != 0 )
    {
      CVisual::GetCurrentTransform((CVisual *)v10, (struct D2DMatrix *)v36);
      if ( D2DMatrixInverse((struct D2DMatrix *)v36, v22, (const struct D2DMatrix *)v36) )
      {
        *(float *)&v33.left = (float)v30.x;
        *(float *)&v33.top = (float)v30.y;
        D3DXVec2TransformCoord(
          (struct D2DVector2 *)&v33,
          (const struct D2DVector2 *)&v33,
          (const struct D2DMatrix *)v36);
        v30.y = (int)*(float *)&v33.top;
        v30.x = (int)*(float *)&v33.left;
        goto LABEL_9;
      }
    }
    else
    {
LABEL_9:
      v11 = *(bool (__fastcall **)(CVisual *, const struct tagPOINT *, struct CVisual **, unsigned int *))(*(_QWORD *)v10 + 120LL);
      if ( v11 == CVisual::DoHitTest )
        v12 = CVisual::DoHitTest((CVisual *)v10, &v30, (struct CVisual **)&v34, v31);
      else
        v12 = v11((CVisual *)v10, &v30, (struct CVisual **)&v34, v31);
      if ( v12 )
        break;
    }
  }
  v7 = *(CTopLevelWindow **)&v34.left;
  v6 = *(struct CVisual ***)&rc.left;
  if ( *(_QWORD *)&v34.left
    || a2->x < 0
    || a2->x >= *((_DWORD *)this + 30)
    || (y = a2->y, y < 0)
    || y >= *((_DWORD *)this + 31) )
  {
    v8 = v31[0];
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
      v24 = a2->y;
      if ( v24 >= *(_DWORD *)(*((_QWORD *)this + 90) + 96LL) && v24 < *((_DWORD *)this + 149) )
        v8 = 2;
    }
    v13 = (_DWORD *)*((_QWORD *)this + 90);
    *(_QWORD *)&rc.left = 0LL;
    if ( v13[14] - v13[12] < 0 )
      rc.right = 0;
    else
      rc.right = v13[14] - v13[12];
    if ( v13[15] - v13[13] < 0 )
      rc.bottom = 0;
    else
      rc.bottom = v13[15] - v13[13];
    if ( !PtInRect(&rc, *a2) )
    {
      v8 = 18;
      if ( a2->y < 0 )
        v8 = 2;
    }
    v14 = *((_DWORD *)this + 146);
    if ( (v14 & 0x20) != 0 )
    {
      if ( (v14 & 0x20000) != 0 )
        x = *((_DWORD *)this + 30) - a2->x - 1;
      else
        x = a2->x;
      v34.left = x;
      v26 = (LONG **)v36;
      v27 = a2->y;
      v28 = 5LL;
      v34.top = v27;
      v36[0] = *((_QWORD *)this + 65);
      v36[1] = *((_QWORD *)this + 60);
      v36[2] = *((_QWORD *)this + 61);
      v36[3] = *((_QWORD *)this + 62);
      v36[4] = *((_QWORD *)this + 63);
      do
      {
        v29 = *v26;
        if ( *v26 )
        {
          v33.left = v29[28];
          v33.top = *((_DWORD *)this + 161);
          v33.right = v29[28] + v29[30];
          v33.bottom = v29[29] + v29[31];
          if ( v29 == *((LONG **)this + 65) )
          {
            v33.left = *((_DWORD *)this + 159);
          }
          else if ( v29 == *((LONG **)this + 63) )
          {
            v33.right = *((_DWORD *)this + 30) - *((_DWORD *)this + 160);
          }
          if ( PtInRect(&v33, *(POINT *)&v34.left) )
          {
            v8 = v29[48];
            v7 = (CTopLevelWindow *)v29;
          }
        }
        ++v26;
        --v28;
      }
      while ( v28 );
    }
    else if ( *((_QWORD *)this + 65) )
    {
      SystemMetricsForDpi = GetSystemMetricsForDpi(31LL, *(unsigned int *)(*((_QWORD *)this + 90) + 332LL));
      v16 = GetSystemMetricsForDpi(46LL, *(unsigned int *)(*((_QWORD *)this + 90) + 332LL));
      v17 = (int)(SystemMetricsForDpi
                - v16
                - GetSystemMetricsForDpi(50LL, *(unsigned int *)(*((_QWORD *)this + 90) + 332LL)))
          / 2;
      if ( v17 >= 1 )
      {
        v18 = (LONG *)*((_QWORD *)this + 65);
        v34.left = v18[28];
        v34.top = v18[29] - v17;
        v34.right = v18[28] + v18[30];
        v19 = *a2;
        v34.bottom = v17 + v18[29] + v18[31];
        if ( PtInRect(&v34, v19) )
        {
          v7 = (CTopLevelWindow *)*((_QWORD *)this + 65);
          v8 = *((_DWORD *)v7 + 48);
        }
      }
    }
  }
  v20 = v32;
  *v6 = v7;
  *v20 = v8;
  return v7 != 0LL;
}
