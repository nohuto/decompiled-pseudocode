/*
 * XREFs of ?HitTestDelayZonePalmRejectionRegion@CPalmRejectZoneInfo@@QEAA_NUtagPOINT@@PEAUCDelayZonePanelTelemetryData@@@Z @ 0x1C012C6E4
 * Callers:
 *     ?HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTelemetryData@@@Z @ 0x1C012C818 (-HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTe.c)
 * Callees:
 *     ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C0002E40 (-QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     PtInRect @ 0x1C0055DE4 (PtInRect.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     ?Convert3dTo2dMatrix@CPalmRejectZoneInfo@@AEAAJPEBUtagINPUT_TRANSFORM@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1C012C3B8 (-Convert3dTo2dMatrix@CPalmRejectZoneInfo@@AEAAJPEBUtagINPUT_TRANSFORM@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?ConvertDipsToScreenSpaceUnits@CPalmRejectZoneInfo@@AEAAJUtagPOINT@@J@Z @ 0x1C012C458 (-ConvertDipsToScreenSpaceUnits@CPalmRejectZoneInfo@@AEAAJUtagPOINT@@J@Z.c)
 *     ?GetDelayZoneRectFromInputRect@CPalmRejectZoneInfo@@AEAA?AUtagRECT@@U2@J@Z @ 0x1C012C634 (-GetDelayZoneRectFromInputRect@CPalmRejectZoneInfo@@AEAA-AUtagRECT@@U2@J@Z.c)
 *     ?TransformRect@CPalmRejectZoneInfo@@AEAA?AUtagRECT@@U2@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1C012D6E4 (-TransformRect@CPalmRejectZoneInfo@@AEAA-AUtagRECT@@U2@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 */

bool __fastcall CPalmRejectZoneInfo::HitTestDelayZonePalmRejectionRegion(
        CPalmRejectZoneInfo *this,
        struct tagPOINT a2,
        struct tagRECT *a3)
{
  CompositionInputObject *v4; // rcx
  CPalmRejectZoneInfo *v7; // rcx
  INT v8; // r8d
  CPalmRejectZoneInfo *v9; // rcx
  int v10; // eax
  struct tagRECT v11; // xmm6
  CPalmRejectZoneInfo *v12; // rcx
  struct tagRECT v13; // xmm0
  struct tagRECT v15; // [rsp+28h] [rbp-49h] BYREF
  struct tagRECT v16; // [rsp+38h] [rbp-39h] BYREF
  int v17; // [rsp+48h] [rbp-29h] BYREF
  __int64 v18; // [rsp+4Ch] [rbp-25h]
  __int64 v19; // [rsp+54h] [rbp-1Dh]
  int v20; // [rsp+5Ch] [rbp-15h]
  __int64 v21; // [rsp+60h] [rbp-11h]
  __int64 v22; // [rsp+68h] [rbp-9h]
  int v23; // [rsp+70h] [rbp-1h]
  __int64 v24; // [rsp+74h] [rbp+3h]
  __int64 v25; // [rsp+7Ch] [rbp+Bh]
  int v26; // [rsp+84h] [rbp+13h]
  __int128 v27; // [rsp+88h] [rbp+17h] BYREF
  int v28; // [rsp+98h] [rbp+27h]
  int v29; // [rsp+9Ch] [rbp+2Bh]

  v18 = 0LL;
  v4 = (CompositionInputObject *)*((_QWORD *)this + 6);
  v19 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v17 = 1065353216;
  v20 = 1065353216;
  v23 = 1065353216;
  v26 = 1065353216;
  if ( v4 )
    CompositionInputObject::QueryTransform(v4, (struct tagINPUT_TRANSFORM *)&v17);
  v28 = 0;
  v29 = 0;
  v27 = _xmm;
  CPalmRejectZoneInfo::Convert3dTo2dMatrix(v4, (const struct tagINPUT_TRANSFORM *)&v17, (struct D2D_MATRIX_3X2_F *)&v27);
  v15 = *(struct tagRECT *)((char *)this + 24);
  CPalmRejectZoneInfo::TransformRect(v7, &v16, &v15, (struct D2D_MATRIX_3X2_F *)&v27);
  v8 = *((_DWORD *)this + 14);
  *(_QWORD *)&v15.left = *(_QWORD *)&v16.left;
  v10 = CPalmRejectZoneInfo::ConvertDipsToScreenSpaceUnits(v9, *(struct tagPOINT *)&v16.left, v8);
  v11 = v16;
  v15 = v16;
  CPalmRejectZoneInfo::GetDelayZoneRectFromInputRect(v12, &v16, (__m128i *)&v15, v10);
  v13 = v16;
  a3[1] = v11;
  *a3 = v13;
  return PtInRect(&v16, *(_QWORD *)&a2);
}
