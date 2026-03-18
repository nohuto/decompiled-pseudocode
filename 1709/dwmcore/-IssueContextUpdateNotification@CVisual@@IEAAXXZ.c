/*
 * XREFs of ?IssueContextUpdateNotification@CVisual@@IEAAXXZ @ 0x180177668
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180055B70 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1800C5DAA (sqrtf_0.c)
 *     ?Transform3DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_3F@@AEBU2@@Z @ 0x18011C304 (-Transform3DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_3F@@AEBU2@@Z.c)
 *     ?GetNotifiedEffectiveLayoutSize@CVisual@@QEBA?AUVector2@Numerics@Foundation@Windows@@XZ @ 0x18017713C (-GetNotifiedEffectiveLayoutSize@CVisual@@QEBA-AUVector2@Numerics@Foundation@Windows@@XZ.c)
 *     ?GetNotifiedWorldOffset@CVisual@@QEBA?AUVector3@Numerics@Foundation@Windows@@XZ @ 0x180177194 (-GetNotifiedWorldOffset@CVisual@@QEBA-AUVector3@Numerics@Foundation@Windows@@XZ.c)
 *     ?GetNotifiedWorldRenderingScale@CVisual@@QEBAMXZ @ 0x1801771F4 (-GetNotifiedWorldRenderingScale@CVisual@@QEBAMXZ.c)
 *     ?SetNotifiedEffectiveLayoutSize@CVisual@@QEAAXUVector2@Numerics@Foundation@Windows@@@Z @ 0x180178064 (-SetNotifiedEffectiveLayoutSize@CVisual@@QEAAXUVector2@Numerics@Foundation@Windows@@@Z.c)
 *     ?SetNotifiedWorldOffset@CVisual@@QEAAXUVector3@Numerics@Foundation@Windows@@@Z @ 0x1801780A8 (-SetNotifiedWorldOffset@CVisual@@QEAAXUVector3@Numerics@Foundation@Windows@@@Z.c)
 *     ?SetNotifiedWorldRenderingScale@CVisual@@QEAAXM@Z @ 0x1801780EC (-SetNotifiedWorldRenderingScale@CVisual@@QEAAXM@Z.c)
 */

void __fastcall CVisual::IssueContextUpdateNotification(FLOAT *this)
{
  unsigned int v1; // edi
  char v2; // si
  float *v3; // r15
  FLOAT v5; // xmm2_4
  FLOAT v6; // xmm0_4
  unsigned __int64 v7; // rcx
  FLOAT v8; // xmm2_4
  __int64 v9; // xmm7_8
  float v10; // xmm8_4
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD v15[2]; // [rsp+68h] [rbp-29h] BYREF
  struct D2D_VECTOR_3F v16; // [rsp+78h] [rbp-19h] BYREF
  struct D2D_VECTOR_3F v17; // [rsp+88h] [rbp-9h] BYREF

  v1 = 0;
  v2 = 0;
  v3 = this + 80;
  CVisual::GetNotifiedWorldOffset((__int64)this, (__int64)&v17);
  v5 = v3[13];
  v6 = v3[14];
  v16.x = v3[12];
  v16.y = v5;
  v16.z = v6;
  v7 = *(_QWORD *)&v17.x - *(_QWORD *)&v16.x;
  if ( *(_QWORD *)&v17.x == *(_QWORD *)&v16.x )
    v7 = LODWORD(v17.z) - (unsigned __int64)LODWORD(v6);
  if ( v7 )
  {
    v16.z = v6;
    CVisual::SetNotifiedWorldOffset(this, &v16);
    v2 = 1;
  }
  CVisual::GetNotifiedEffectiveLayoutSize((__int64)this, (__int64)&v16);
  v8 = this[34];
  v17.x = this[33];
  v17.y = v8;
  v9 = *(_QWORD *)&v17.x;
  if ( *(_QWORD *)&v16.x != *(_QWORD *)&v17.x )
  {
    CVisual::SetNotifiedEffectiveLayoutSize(this, *(_QWORD *)&v17.x);
    v2 = 1;
  }
  v16.z = 0.0;
  v16.x = 0.70710677;
  v16.y = 0.70710677;
  CMILMatrix::Transform3DVector((CMILMatrix *)v3, &v17, &v16);
  v10 = sqrtf_0((float)((float)(v17.y * v17.y) + (float)(v17.x * v17.x)) + (float)(v17.z * v17.z));
  if ( CVisual::GetNotifiedWorldRenderingScale((CVisual *)this) != v10 )
  {
    CVisual::SetNotifiedWorldRenderingScale((CVisual *)this, v10);
    v2 = 1;
  }
  v16.x = 0.0;
  v16.z = 0.0;
  v16.y = FLOAT_N1_0;
  if ( v2 )
  {
    v11 = *((_QWORD *)this + 2);
    *(_QWORD *)&v17.x = *(_QWORD *)&v16.x;
    v12 = *(_QWORD *)(v11 + 1288);
    v17.z = v16.z;
    v13 = *((_QWORD *)this + 6);
    if ( v13 )
      v1 = *(_DWORD *)(v13 + 68);
    v14 = *(_QWORD *)(v12 + 56);
    v15[0] = v1;
    v15[1] = *((unsigned int *)this + 14);
    *(_QWORD *)&v16.x = v9;
    CoreUICallSend(v14, v15, 2LL, 9LL, 8, &unk_1801F0599);
  }
}
