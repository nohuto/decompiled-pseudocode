/*
 * XREFs of itrp_ChangeCvtSlow @ 0x1C02CA614
 * Callers:
 *     InvokeMovePoint @ 0x1C02C939C (InvokeMovePoint.c)
 * Callees:
 *     CompDiv @ 0x1C02B6F58 (CompDiv.c)
 *     itrp_GetCVTScale @ 0x1C02CC400 (itrp_GetCVTScale.c)
 */

__int64 __fastcall itrp_ChangeCvtSlow(__int64 a1, int a2, int a3)
{
  __int64 v4; // rdi
  int CVTScale; // eax
  __int64 result; // rax

  v4 = a2;
  CVTScale = itrp_GetCVTScale();
  result = CompDiv(CVTScale, (__int64)a3 << 16);
  *(_DWORD *)(*(_QWORD *)(qword_1C0327C90 + 16) + 4 * v4) += result;
  return result;
}
