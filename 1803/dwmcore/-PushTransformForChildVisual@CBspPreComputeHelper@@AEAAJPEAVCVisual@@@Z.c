/*
 * XREFs of ?PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x180212084
 * Callers:
 *     ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x180211CF0 (-PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetTransformParentNoRef@CVisual@@QEBAPEAV1@XZ @ 0x18000B384 (-GetTransformParentNoRef@CVisual@@QEBAPEAV1@XZ.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18004EAA0 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z @ 0x1800BE8E8 (-Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z.c)
 */

__int64 __fastcall CBspPreComputeHelper::PushTransformForChildVisual(CBspPreComputeHelper *this, struct CVisual **a2)
{
  int v3; // ebx
  struct CVisual *TransformParentNoRef; // rax
  struct CVisual *v6; // r9
  struct CVisual *v7; // r8
  int v8; // ecx
  struct CVisual **v9; // rax
  int *v10; // r8
  int v11; // eax
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // ebx
  _BYTE v16[64]; // [rsp+30h] [rbp-B8h] BYREF
  int v17; // [rsp+70h] [rbp-78h]
  char v18[64]; // [rsp+80h] [rbp-68h] BYREF
  int v19; // [rsp+C0h] [rbp-28h]
  char v20; // [rsp+F0h] [rbp+8h] BYREF

  v3 = 0;
  TransformParentNoRef = CVisual::GetTransformParentNoRef((CVisual *)a2);
  v6 = TransformParentNoRef;
  if ( TransformParentNoRef )
  {
    v7 = a2[10];
    if ( TransformParentNoRef != v7 )
    {
      v8 = *((_DWORD *)this + 8);
      v9 = 0LL;
      if ( v8 )
        v9 = (struct CVisual **)(*((_QWORD *)this + 6) + 8LL * (unsigned int)(v8 - 1));
      while ( v7 )
      {
        if ( v7 == v6 )
          goto LABEL_12;
        if ( v7 == *v9 )
          break;
        v7 = (struct CVisual *)*((_QWORD *)v7 + 10);
        ++v3;
      }
      if ( v7 != v6 )
        v3 = 0;
    }
  }
LABEL_12:
  v19 = 0;
  v10 = 0LL;
  v11 = *((_DWORD *)this + 24) - v3;
  v17 = 0;
  v12 = (unsigned int)(v11 - 1);
  if ( *((_DWORD *)this + 24) && (unsigned int)v12 < *((_DWORD *)this + 24) )
    v10 = (int *)(*((_QWORD *)this + 14) + 68 * v12);
  CVisual::CalcEffectiveTransform((__int64)a2, (const struct D2D_SIZE_F *)5, v10, &v20, (CMILMatrix *)v18, (__int64)v16);
  v13 = CMatrixStack::Push((CBspPreComputeHelper *)((char *)this + 96), (const struct CMILMatrix *)v16, 0);
  v14 = v13;
  if ( v13 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xE1u);
  return v14;
}
