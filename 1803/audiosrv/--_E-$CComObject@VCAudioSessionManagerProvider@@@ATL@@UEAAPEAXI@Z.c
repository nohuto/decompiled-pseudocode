/*
 * XREFs of ??_E?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAPEAXI@Z @ 0x1800B4940
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAA@XZ @ 0x1800B4834 (--1-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAA@XZ.c)
 */

CAudioSessionManagerProvider *__fastcall ATL::CComObject<CAudioSessionManagerProvider>::`vector deleting destructor'(
        CAudioSessionManagerProvider *a1,
        char a2)
{
  ATL::CComObject<CAudioSessionManagerProvider>::~CComObject<CAudioSessionManagerProvider>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0xA8);
  return a1;
}
