/*
 * XREFs of ?GetMouseWheelDeviceRects@CInteractionContextWrapper@@SAJPEAUHMONITOR__@@PEAUtagRECT@@1@Z @ 0x1801D73A0
 * Callers:
 *     _anonymous_namespace_::DecomposeMatrix @ 0x1801D46A0 (_anonymous_namespace_--DecomposeMatrix.c)
 *     ?TransformOutput@CInteractionContextWrapper@@AEAAJAEBVCMILMatrix@@AEBUInteractionOutput@@PEAU3@@Z @ 0x1801D8368 (-TransformOutput@CInteractionContextWrapper@@AEAAJAEBVCMILMatrix@@AEBUInteractionOutput@@PEAU3@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionContextWrapper::GetMouseWheelDeviceRects(
        HMONITOR a1,
        struct tagRECT *a2,
        struct tagRECT *a3)
{
  int v5; // eax
  __int64 result; // rax
  struct tagRECT v7; // [rsp+20h] [rbp-18h]
  int v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = 96;
  if ( !(unsigned int)GetDpiForMonitorInternal(a1, 0LL, &v8, &v8) || (v5 = v8) == 0 )
    v5 = 96;
  *(_QWORD *)&v7.left = 0LL;
  *a3 = (struct tagRECT)_xmm;
  v7.right = (int)(float)((float)((float)a3->right * 2540.0) / (float)v5);
  v7.bottom = (int)(float)((float)((float)a3->bottom * 2540.0) / (float)v5);
  result = 0LL;
  *a2 = v7;
  return result;
}
