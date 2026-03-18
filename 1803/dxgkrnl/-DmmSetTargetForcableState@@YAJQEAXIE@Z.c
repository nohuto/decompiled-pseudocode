/*
 * XREFs of ?DmmSetTargetForcableState@@YAJQEAXIE@Z @ 0x1C02152C4
 * Callers:
 *     DpiFdoHandleDisplayDetectControl @ 0x1C003B0E8 (DpiFdoHandleDisplayDetectControl.c)
 * Callees:
 *     DmmDoForSpecifiedTarget__lambda_e42b71b84518e98049766e5c9b960a74___ @ 0x1C020F0E0 (DmmDoForSpecifiedTarget__lambda_e42b71b84518e98049766e5c9b960a74___.c)
 */

__int64 __fastcall DmmSetTargetForcableState(DXGADAPTER *a1, unsigned int a2, char a3)
{
  char v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = a3;
  return DmmDoForSpecifiedTarget__lambda_e42b71b84518e98049766e5c9b960a74_(a1, a2, &v4);
}
