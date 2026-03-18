/*
 * XREFs of ?GetMagClientToScreenTransform@@YAXPEAUtagDESKTOP@@PEAUtagPOINT@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x1C019C490
 * Callers:
 *     xxxDCompSpeedHitTest @ 0x1C00B6DB8 (xxxDCompSpeedHitTest.c)
 * Callees:
 *     MagpInverseMagnificationTransformFromPoint @ 0x1C01030C0 (MagpInverseMagnificationTransformFromPoint.c)
 */

void __fastcall GetMagClientToScreenTransform(
        struct tagDESKTOP *a1,
        struct tagPOINT *a2,
        struct tagINPUT_TRANSFORM *a3)
{
  __int64 v5; // r9

  v5 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL);
  *((_DWORD *)a3 + 15) = 1065353216;
  *((_DWORD *)a3 + 10) = 1065353216;
  *((_DWORD *)a3 + 5) = 1065353216;
  *(_DWORD *)a3 = 1065353216;
  *((float *)a3 + 12) = (float)*(int *)(v5 + 144);
  *((float *)a3 + 13) = (float)*(int *)(v5 + 148);
  MagpInverseMagnificationTransformFromPoint((__int64)a1, (unsigned __int64 *)a2);
  MagpAddTransformOutputMagFac((__int64)a1, (__int64)a3);
}
