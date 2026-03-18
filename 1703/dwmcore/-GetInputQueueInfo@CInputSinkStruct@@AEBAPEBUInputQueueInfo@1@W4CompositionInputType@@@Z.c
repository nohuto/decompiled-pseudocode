/*
 * XREFs of ?GetInputQueueInfo@CInputSinkStruct@@AEBAPEBUInputQueueInfo@1@W4CompositionInputType@@@Z @ 0x1800236F8
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@@KPEAPEAXIPEAIPEAPEAUHWND__@@3PEAU_LUID@@PEAVCMILMatrix@@4PEA_N4@Z @ 0x180012948 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@.c)
 *     _lambda_0fac207bc2d8fd4a1b8744335422bc83_::operator() @ 0x18019254C (_lambda_0fac207bc2d8fd4a1b8744335422bc83_--operator().c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CInputSinkStruct::GetInputQueueInfo(_DWORD *a1, int a2)
{
  _DWORD *v2; // rax

  v2 = a1 + 16;
  while ( a1 != v2 )
  {
    if ( a2 == *a1 )
      return a1;
    a1 += 4;
  }
  return 0LL;
}
