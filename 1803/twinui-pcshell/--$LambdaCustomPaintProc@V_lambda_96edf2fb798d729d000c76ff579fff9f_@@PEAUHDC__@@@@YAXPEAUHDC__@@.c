/*
 * XREFs of ??$LambdaCustomPaintProc@V_lambda_96edf2fb798d729d000c76ff579fff9f_@@PEAUHDC__@@@@YAXPEAUHDC__@@AEBUtagSIZE@@_J@Z @ 0x1802F5930
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z @ 0x1802ECB54 (-JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z.c)
 */

void __fastcall LambdaCustomPaintProc<_lambda_96edf2fb798d729d000c76ff579fff9f_,HDC__ *>(
        HDC a1,
        _DWORD *a2,
        enum DEVICE_SCALE_FACTOR *a3)
{
  LONG v3; // eax
  enum DEVICE_SCALE_FACTOR v4; // r9d
  struct _GUID v5; // [rsp+30h] [rbp-38h] BYREF
  RECT v6; // [rsp+40h] [rbp-28h] BYREF

  v3 = a2[1];
  v4 = *a3;
  *(_DWORD *)v5.Data4 = *a2;
  v6.right = *(_DWORD *)v5.Data4;
  *(_QWORD *)&v5.Data1 = 0LL;
  *(_QWORD *)&v6.left = 0LL;
  *(_DWORD *)&v5.Data4[4] = v3;
  v6.bottom = v3;
  JointDivider_Paint(a1, &v6, &v5, v4, 0LL);
}
