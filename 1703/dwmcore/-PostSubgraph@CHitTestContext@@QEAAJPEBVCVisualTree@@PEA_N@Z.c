/*
 * XREFs of ?PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180012408
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x1800122DC (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCH.c)
 * Callees:
 *     ?GetPointInLocalSpace@CHitTestContext@@AEAA_NAEBVCMILMatrix@@PEAUD2D_POINT_2F@@@Z @ 0x18001256C (-GetPointInLocalSpace@CHitTestContext@@AEAA_NAEBVCMILMatrix@@PEAUD2D_POINT_2F@@@Z.c)
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@MilBackfaceVisibility@@XZ @ 0x180012E4C (-GetTopByReference@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@Mi.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800134A0 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z @ 0x180013760 (-IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x18002B258 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800855D8 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x180086E24 (-GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ.c)
 *     ?IsFacingUser@CMILMatrix@@QEBA_NXZ @ 0x18009AAA0 (-IsFacingUser@CMILMatrix@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHitTestContext::PostSubgraph(CHitTestContext *this, const struct CVisualTree *a2, bool *a3)
{
  __int64 *v3; // rdi
  unsigned int v4; // esi
  struct _LIST_ENTRY *v5; // rbp
  int v9; // eax
  int WorldTransform; // eax
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // eax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v16; // r10
  CTransform3D *Transform3DEffectNoRef; // rax
  CMILMatrix *Matrix; // rax
  int v19; // eax
  _BYTE v20[64]; // [rsp+30h] [rbp-78h] BYREF
  int v21; // [rsp+70h] [rbp-38h]
  char v22; // [rsp+B0h] [rbp+8h] BYREF
  struct D2D_POINT_2F v23; // [rsp+B8h] [rbp+10h] BYREF

  v3 = (__int64 *)*((_QWORD *)this + 2);
  v4 = 0;
  v5 = 0LL;
  *a3 = 1;
  if ( *((_BYTE *)a2 + 32) )
  {
    v5 = (struct _LIST_ENTRY *)(v3 + 33);
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)v3);
    v16 = TreeDataListHead;
    if ( TreeDataListHead )
    {
      while ( 1 )
      {
        TreeDataListHead = TreeDataListHead->Flink;
        if ( TreeDataListHead == v16 )
          break;
        if ( (const struct CVisualTree *)TreeDataListHead[2].Flink == a2 )
        {
          v5 = TreeDataListHead - 14;
          break;
        }
      }
    }
  }
  if ( !*((_QWORD *)this + 13)
    && !CVisual::IsPreserve3DRoot((CVisual *)v3, *((const struct CVisual **)this + 3))
    && (*((_BYTE *)v3 + 89) & 0x20) != 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*v3 + 176))(v3) )
    {
      if ( *(_DWORD *)CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::GetTopByReference((char *)this + 112) != 1
        || (Transform3DEffectNoRef = CVisual::GetTransform3DEffectNoRef((CVisual *)v3)) == 0LL
        || (Matrix = CTransform3D::GetMatrix(Transform3DEffectNoRef, (const struct D2D_SIZE_F *)v3 + 16),
            CMILMatrix::IsFacingUser(Matrix)) )
      {
        v21 = 0;
        WorldTransform = CVisual::GetWorldTransform(v3, a2, 4LL, v20, 0LL, 0LL);
        v4 = WorldTransform;
        if ( WorldTransform < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, WorldTransform, 0xE7u);
          return v4;
        }
        if ( CHitTestContext::GetPointInLocalSpace(this, (const struct CMILMatrix *)v20, &v23) )
        {
          v13 = *v3;
          LOBYTE(v12) = *((_BYTE *)this + 176);
          v22 = 0;
          v14 = (*(__int64 (__fastcall **)(__int64 *, __int64, struct D2D_POINT_2F *, char *))(v13 + 232))(
                  v3,
                  v12,
                  &v23,
                  &v22);
          v4 = v14;
          if ( v14 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xEEu);
            return v4;
          }
          if ( v22 )
            *((_QWORD *)this + 13) = v3;
        }
      }
    }
  }
  if ( *((_DWORD *)v3 + 49) != -1 )
  {
    v9 = *((_DWORD *)this + 28);
    if ( v9 )
      *((_DWORD *)this + 28) = v9 - 1;
  }
  if ( ((__int64)v5[14].Flink & 8) != 0 )
  {
    v19 = *((_DWORD *)this + 36);
    if ( v19 )
      *((_DWORD *)this + 36) = v19 - 1;
  }
  if ( *((_QWORD *)this + 13) )
    *a3 = 0;
  return v4;
}
