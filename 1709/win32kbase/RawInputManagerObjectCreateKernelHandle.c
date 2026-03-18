/*
 * XREFs of RawInputManagerObjectCreateKernelHandle @ 0x1C00973E0
 * Callers:
 *     ?GetKernelHandleToRimObj@CHidInput@@QEAAJPEAPEAX@Z @ 0x1C0019860 (-GetKernelHandleToRimObj@CHidInput@@QEAAJPEAPEAX@Z.c)
 *     ?HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ @ 0x1C001A520 (-HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ.c)
 *     DestroyMonitor @ 0x1C0071210 (DestroyMonitor.c)
 *     RIMIDECreatePseudoHIDDevice @ 0x1C0108FA8 (RIMIDECreatePseudoHIDDevice.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C01091E0 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RawInputManagerObjectCreateKernelHandle(
        _DWORD *a1,
        ACCESS_MASK a2,
        unsigned __int8 a3,
        KPROCESSOR_MODE AccessMode,
        PHANDLE Handle)
{
  *Handle = (void *)-1LL;
  if ( a1[1] == 1 )
    return ObOpenObjectByPointer(a1, 2 * a3 + 512, 0LL, a2, ExRawInputManagerObjectType, AccessMode, Handle);
  else
    return -1073741788;
}
