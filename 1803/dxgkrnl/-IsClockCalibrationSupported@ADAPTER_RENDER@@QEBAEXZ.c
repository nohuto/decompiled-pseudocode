/*
 * XREFs of ?IsClockCalibrationSupported@ADAPTER_RENDER@@QEBAEXZ @ 0x1C0002444
 * Callers:
 *     ?EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C00A6330 (-EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C015A35C (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall ADAPTER_RENDER::IsClockCalibrationSupported(ADAPTER_RENDER *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 2);
  result = 0;
  if ( *(_QWORD *)(v1 + 784) )
    return *(_DWORD *)(v1 + 2104) >= 4864;
  return result;
}
