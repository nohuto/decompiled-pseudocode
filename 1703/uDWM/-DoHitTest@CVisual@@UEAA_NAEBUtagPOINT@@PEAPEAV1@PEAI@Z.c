/*
 * XREFs of ?DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z @ 0x1800244C0
 * Callers:
 *     ?DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z @ 0x1800244C0 (-DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z.c)
 *     ?DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x180028CC0 (-DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z.c)
 * Callees:
 *     ?D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18000C59C (-D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z @ 0x18000C648 (-GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z.c)
 *     ?DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z @ 0x1800244C0 (-DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x1800A1850 (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 */

bool __fastcall CVisual::DoHitTest(CVisual *this, const struct tagPOINT *a2, struct CVisual **a3, unsigned int *a4)
{
  unsigned int *v5; // r10
  struct CVisual **v6; // r9
  const struct tagPOINT *v7; // r8
  struct CVisual *v8; // rax
  unsigned int v9; // ecx
  __int64 v10; // rbx
  char v11; // di
  __int64 v12; // rcx
  bool (__fastcall *v13)(CVisual *__hidden, const struct tagPOINT *, struct CVisual **, unsigned int *); // rax
  bool v14; // al
  int v16; // ecx
  float *v17; // rdx
  struct D2DMatrix *v18; // rax
  struct tagPOINT v19; // [rsp+30h] [rbp-49h] BYREF
  unsigned int v20; // [rsp+38h] [rbp-41h] BYREF
  float x; // [rsp+40h] [rbp-39h] BYREF
  float y; // [rsp+44h] [rbp-35h]
  struct CVisual *v23; // [rsp+48h] [rbp-31h] BYREF
  const struct tagPOINT *v24; // [rsp+50h] [rbp-29h]
  struct CVisual **v25; // [rsp+58h] [rbp-21h]
  unsigned int *v26; // [rsp+60h] [rbp-19h]
  __int64 v27; // [rsp+68h] [rbp-11h]
  _BYTE v28[64]; // [rsp+70h] [rbp-9h] BYREF

  v26 = a4;
  v5 = a4;
  v25 = a3;
  v6 = a3;
  v24 = a2;
  v7 = a2;
  v8 = 0LL;
  v23 = 0LL;
  v9 = 0;
  v20 = 0;
  if ( *((_QWORD *)this + 3) && ((*((_BYTE *)this + 84) & 4) == 0 || *((_DWORD *)this + 48) == -1) )
    goto LABEL_16;
  LODWORD(v10) = -1;
  v11 = 0;
  while ( 1 )
  {
    if ( !v11 )
    {
      LODWORD(v10) = *((_DWORD *)this + 18);
      v11 = 1;
    }
    v10 = (unsigned int)(v10 - 1);
    if ( (_DWORD)v10 == -1 )
      break;
    v12 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v10);
    v19 = *v7;
    v27 = v12;
    v19.x -= *(_DWORD *)(v12 + 112);
    v19.y -= *(_DWORD *)(v12 + 116);
    if ( (*(_BYTE *)(v12 + 84) & 2) != 0 )
    {
      CVisual::GetCurrentTransform((CVisual *)v12, (struct D2DMatrix *)v28);
      v18 = D2DMatrixInverse((struct D2DMatrix *)v28, v17, (const struct D2DMatrix *)v28);
      v7 = v24;
      if ( v18 )
      {
        x = (float)v19.x;
        y = (float)v19.y;
        D3DXVec2TransformCoord((struct D2DVector2 *)&x, (const struct D2DVector2 *)&x, (const struct D2DMatrix *)v28);
        v12 = v27;
        v19.y = (int)y;
        v19.x = (int)x;
        goto LABEL_9;
      }
    }
    else
    {
LABEL_9:
      v13 = *(bool (__fastcall **)(CVisual *__hidden, const struct tagPOINT *, struct CVisual **, unsigned int *))(*(_QWORD *)v12 + 120LL);
      if ( v13 == CVisual::DoHitTest )
        v14 = CVisual::DoHitTest((CVisual *)v12, &v19, &v23, &v20);
      else
        v14 = v13((CVisual *)v12, &v19, &v23, &v20);
      v7 = v24;
      if ( v14 )
        break;
    }
  }
  v8 = v23;
  if ( v23 || v7->x < 0 || v7->x >= *((_DWORD *)this + 30) || (v16 = v7->y, v16 < 0) || v16 >= *((_DWORD *)this + 31) )
  {
    v9 = v20;
  }
  else
  {
    v9 = *((_DWORD *)this + 48);
    v8 = this;
  }
  v5 = v26;
  v6 = v25;
LABEL_16:
  *v6 = v8;
  *v5 = v9;
  return v8 != 0LL;
}
