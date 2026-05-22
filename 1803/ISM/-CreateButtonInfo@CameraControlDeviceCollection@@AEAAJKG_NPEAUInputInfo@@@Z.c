/*
 * XREFs of ?CreateButtonInfo@CameraControlDeviceCollection@@AEAAJKG_NPEAUInputInfo@@@Z @ 0x1800748D0
 * Callers:
 *     ?OnInputReport@CameraControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800745C0 (-OnInputReport@CameraControlDeviceCollection@@MEAAJKPEAXK@Z.c)
 * Callees:
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 */

__int64 __fastcall CameraControlDeviceCollection::CreateButtonInfo(
        CameraControlDeviceCollection *this,
        int a2,
        __int16 a3,
        char a4,
        struct InputInfo *a5)
{
  int v5; // esi
  unsigned int v8; // edi

  v5 = 0x7FFFFFFF;
  if ( a3 == 120 )
    v5 = 239;
  v8 = a3 != 120 ? 0x80004001 : 0;
  if ( a3 == 120 )
  {
    memset_0(a5, 0, 0x6C8uLL);
    *((_DWORD *)a5 + 2) = 0;
    *((_QWORD *)a5 + 2) = 0LL;
    *((_DWORD *)a5 + 1) = a2;
    *(_DWORD *)a5 = 128;
    *((_DWORD *)a5 + 6) = 1736;
    *((_DWORD *)a5 + 130) = v5;
    *((_BYTE *)a5 + 524) = a4;
    *((_BYTE *)a5 + 513) = 1;
  }
  return v8;
}
