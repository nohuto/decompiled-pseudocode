/*
 * XREFs of NtRIMDeviceIoControl @ 0x1C00FFD20
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C0009030 (ApiSetEditionIsUsermodeRIMAccessAllowed.c)
 *     RIMDeviceIoControl @ 0x1C000AC40 (RIMDeviceIoControl.c)
 */

__int64 __fastcall NtRIMDeviceIoControl(
        __int64 a1,
        __int64 a2,
        ULONG a3,
        void *a4,
        ULONG a5,
        volatile void *a6,
        ULONG a7,
        _DWORD *a8,
        int a9)
{
  if ( (unsigned int)ApiSetEditionIsUsermodeRIMAccessAllowed() )
    return RIMDeviceIoControl(a1, a2, a3, a4, a5, a6, a7, a8, 0LL, 0, a9, 1);
  else
    return 3221225506LL;
}
