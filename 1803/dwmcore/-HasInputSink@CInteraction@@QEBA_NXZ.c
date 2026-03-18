/*
 * XREFs of ?HasInputSink@CInteraction@@QEBA_NXZ @ 0x180028848
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@@KPEAPEAXIPEAIPEAPEAUHWND__@@3PEAU_LUID@@PEAVCMILMatrix@@4PEA_N@Z @ 0x180026E98 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInteraction::HasInputSink(CInteraction *this)
{
  __int64 v1; // rdx
  __int64 v2; // rax

  v1 = *((_QWORD *)this + 12);
  v2 = 0LL;
  if ( v1 )
    v2 = *(_QWORD *)(v1 + 64);
  return v2 != 0;
}
