/*
 * XREFs of ?DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z @ 0x180018E90
 * Callers:
 *     ?DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z @ 0x180018E90 (-DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z.c)
 *     ?DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x18001D510 (-DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z.c)
 * Callees:
 *     ?D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x180009E18 (-D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z @ 0x180009EC4 (-GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z.c)
 *     ?DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z @ 0x180018E90 (-DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x18009FFC8 (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 */

bool __fastcall CVisual::DoHitTest(CVisual *this, const struct tagPOINT *a2, struct CVisual **a3, unsigned int *a4)
{
  CVisual *v4; // rax
  unsigned int v6; // ecx
  __int64 v7; // rbx
  char v8; // si
  __int64 v9; // rcx
  bool (__fastcall *v10)(CVisual *__hidden, const struct tagPOINT *, struct CVisual **, unsigned int *); // rax
  bool v11; // al
  LONG v13; // ecx
  float *v14; // rdx
  struct D2DMatrix *v15; // rax
  struct tagPOINT v16; // [rsp+30h] [rbp-49h] BYREF
  unsigned int v17; // [rsp+38h] [rbp-41h] BYREF
  float x; // [rsp+40h] [rbp-39h] BYREF
  float y; // [rsp+44h] [rbp-35h]
  struct CVisual *v20; // [rsp+48h] [rbp-31h] BYREF
  const struct tagPOINT *v21; // [rsp+50h] [rbp-29h]
  struct CVisual **v22; // [rsp+58h] [rbp-21h]
  unsigned int *v23; // [rsp+60h] [rbp-19h]
  __int64 v24; // [rsp+68h] [rbp-11h]
  _BYTE v25[64]; // [rsp+70h] [rbp-9h] BYREF

  v4 = 0LL;
  v23 = a4;
  v22 = a3;
  v21 = a2;
  v6 = 0;
  v20 = 0LL;
  v17 = 0;
  if ( *((_QWORD *)this + 3) && ((*((_BYTE *)this + 84) & 4) == 0 || *((_DWORD *)this + 48) == -1) )
    goto LABEL_16;
  LODWORD(v7) = -1;
  v8 = 0;
  while ( 1 )
  {
    if ( !v8 )
    {
      LODWORD(v7) = *((_DWORD *)this + 18);
      v8 = 1;
    }
    v7 = (unsigned int)(v7 - 1);
    if ( (_DWORD)v7 == -1 )
      break;
    v9 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v7);
    v16 = *a2;
    v24 = v9;
    v16.x -= *(_DWORD *)(v9 + 112);
    v16.y -= *(_DWORD *)(v9 + 116);
    if ( (*(_BYTE *)(v9 + 84) & 2) != 0 )
    {
      CVisual::GetCurrentTransform((CVisual *)v9, (struct D2DMatrix *)v25);
      v15 = D2DMatrixInverse((struct D2DMatrix *)v25, v14, (const struct D2DMatrix *)v25);
      a2 = v21;
      if ( v15 )
      {
        x = (float)v16.x;
        y = (float)v16.y;
        D3DXVec2TransformCoord((struct D2DVector2 *)&x, (const struct D2DVector2 *)&x, (const struct D2DMatrix *)v25);
        v9 = v24;
        v16.y = (int)y;
        v16.x = (int)x;
        goto LABEL_9;
      }
    }
    else
    {
LABEL_9:
      v10 = *(bool (__fastcall **)(CVisual *__hidden, const struct tagPOINT *, struct CVisual **, unsigned int *))(*(_QWORD *)v9 + 120LL);
      if ( v10 == CVisual::DoHitTest )
        v11 = CVisual::DoHitTest((CVisual *)v9, &v16, &v20, &v17);
      else
        v11 = v10((CVisual *)v9, &v16, &v20, &v17);
      a2 = v21;
      if ( v11 )
        break;
    }
  }
  v4 = v20;
  if ( v20 || a2->x < 0 || a2->x >= *((_DWORD *)this + 30) || (v13 = a2->y, v13 < 0) || v13 >= *((_DWORD *)this + 31) )
  {
    v6 = v17;
  }
  else
  {
    v6 = *((_DWORD *)this + 48);
    v4 = this;
  }
  a4 = v23;
  a3 = v22;
LABEL_16:
  *a3 = v4;
  *a4 = v6;
  return v4 != 0LL;
}
