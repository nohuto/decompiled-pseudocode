/*
 * XREFs of ?PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x1801B3B6C
 * Callers:
 *     ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x1801B37D8 (-PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z @ 0x18004EC58 (-Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18008A2F0 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?GetTransformParentNoRef@CVisual@@QEBAPEAV1@XZ @ 0x18012B484 (-GetTransformParentNoRef@CVisual@@QEBAPEAV1@XZ.c)
 */

__int64 __fastcall CBspPreComputeHelper::PushTransformForChildVisual(CBspPreComputeHelper *this, struct CVisual **a2)
{
  struct CVisual *TransformParentNoRef; // rax
  int v5; // r10d
  struct CVisual *v6; // r11
  struct CVisual *v7; // r8
  int v8; // ecx
  struct CVisual **v9; // rax
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // ebx
  _BYTE v16[64]; // [rsp+30h] [rbp-A8h] BYREF
  int v17; // [rsp+70h] [rbp-68h]
  char v18[64]; // [rsp+80h] [rbp-58h] BYREF
  int v19; // [rsp+C0h] [rbp-18h]
  char v20; // [rsp+E0h] [rbp+8h] BYREF

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
        ++v5;
      }
      if ( v7 != v6 )
        v5 = 0;
    }
  }
LABEL_12:
  v10 = 0LL;
  v11 = *((_DWORD *)this + 24) - v5;
  v19 = 0;
  v12 = (unsigned int)(v11 - 1);
  v17 = 0;
  if ( *((_DWORD *)this + 24) && (unsigned int)v12 < *((_DWORD *)this + 24) )
    v10 = *((_QWORD *)this + 14) + 68 * v12;
  CVisual::CalcEffectiveTransform((__int64)a2, 5, v10, &v20, (CMILMatrix *)v18, (__int64)v16);
  v13 = CMatrixStack::Push((CBspPreComputeHelper *)((char *)this + 96), (const struct CMILMatrix *)v16, 0);
  v14 = v13;
  if ( v13 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xE1u);
  return v14;
}
