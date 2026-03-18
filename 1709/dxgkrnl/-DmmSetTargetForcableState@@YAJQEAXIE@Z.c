/*
 * XREFs of ?DmmSetTargetForcableState@@YAJQEAXIE@Z @ 0x1C01223CC
 * Callers:
 *     DpiFdoHandleDisplayDetectControl @ 0x1C0012498 (DpiFdoHandleDisplayDetectControl.c)
 * Callees:
 *     DmmDoForSpecifiedTarget__lambda_e42b71b84518e98049766e5c9b960a74___ @ 0x1C01223EC (DmmDoForSpecifiedTarget__lambda_e42b71b84518e98049766e5c9b960a74___.c)
 */

__int64 __fastcall DmmSetTargetForcableState(void *const a1, __int64 a2, char a3)
{
  char v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = a3;
  return DmmDoForSpecifiedTarget__lambda_e42b71b84518e98049766e5c9b960a74_(a1, a2, &v4);
}
