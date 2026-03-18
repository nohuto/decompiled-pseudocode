/*
 * XREFs of RawInputManagerDeviceObjectCreateKernelHandle @ 0x1C000D65C
 * Callers:
 *     rimCreateDev @ 0x1C000D5A0 (rimCreateDev.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RawInputManagerDeviceObjectCreateKernelHandle(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        PHANDLE Handle)
{
  *Handle = (void *)-1LL;
  if ( a1[1] == 2 )
    return ObOpenObjectByPointer(a1, 0x200u, 0LL, 3u, ExRawInputManagerObjectType, 0, Handle);
  else
    return -1073741788;
}
