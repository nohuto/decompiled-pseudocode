/*
 * XREFs of ?BeginFigure@CTransformingGeometrySink@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x1801CB680
 * Callers:
 *     <none>
 * Callees:
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x1801907DC (-Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 */

void __fastcall CTransformingGeometrySink::BeginFigure(
        CMILMatrix **this,
        struct D2D_POINT_2F a2,
        enum D2D1_FIGURE_BEGIN a3)
{
  __int64 v3; // rax
  unsigned int v4; // r10d
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = a2;
  CMILMatrix::Transform(this[1], (const struct MilPoint2F *)v5, (struct MilPoint2F *)v5, 1);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v3 + 24) + 40LL))(*(_QWORD *)(v3 + 24), v5[0], v4);
}
