/*
 * XREFs of ?AddLines@CTransformingGeometrySink@@EEAAXPEBUD2D_POINT_2F@@I@Z @ 0x1801CB610
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x1801907DC (-Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 */

void __fastcall CTransformingGeometrySink::AddLines(CMILMatrix **this, const struct D2D_POINT_2F *a2, unsigned int a3)
{
  __int64 v4; // rsi
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  if ( a3 )
  {
    v4 = a3;
    do
    {
      CMILMatrix::Transform(this[1], (const struct MilPoint2F *)a2, (struct MilPoint2F *)&v6, 1);
      (*(void (__fastcall **)(CMILMatrix *, __int64))(*(_QWORD *)this[3] + 80LL))(this[3], v6);
      ++a2;
      --v4;
    }
    while ( v4 );
  }
}
