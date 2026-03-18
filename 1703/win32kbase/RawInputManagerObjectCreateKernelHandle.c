/*
 * XREFs of RawInputManagerObjectCreateKernelHandle @ 0x1C0091820
 * Callers:
 *     ?GetKernelHandleToRimObj@CHidInput@@QEAAJPEAPEAX@Z @ 0x1C004EDA0 (-GetKernelHandleToRimObj@CHidInput@@QEAAJPEAPEAX@Z.c)
 *     ?HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ @ 0x1C004FAD0 (-HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ.c)
 *     RIMIDECreatePseudoHIDDevice @ 0x1C0109F10 (RIMIDECreatePseudoHIDDevice.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C010A148 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RawInputManagerObjectCreateKernelHandle(
        PVOID Object,
        ACCESS_MASK DesiredAccess,
        char a3,
        KPROCESSOR_MODE AccessMode,
        PHANDLE Handle)
{
  *Handle = (void *)-1LL;
  if ( *((_DWORD *)Object + 1) == 1 )
    return ObOpenObjectByPointer(
             Object,
             a3 != 0 ? 514 : 512,
             0LL,
             DesiredAccess,
             ExRawInputManagerObjectType,
             AccessMode,
             Handle);
  else
    return -1073741788;
}
