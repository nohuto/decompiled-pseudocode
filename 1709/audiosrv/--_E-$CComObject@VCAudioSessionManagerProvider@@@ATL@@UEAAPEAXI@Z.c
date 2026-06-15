/*
 * XREFs of ??_E?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAPEAXI@Z @ 0x18007B660
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAA@XZ @ 0x18007B500 (--1-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAA@XZ.c)
 */

void *__fastcall ATL::CComObject<CAudioSessionManagerProvider>::`vector deleting destructor'(void *a1, char a2)
{
  ATL::CComObject<CAudioSessionManagerProvider>::~CComObject<CAudioSessionManagerProvider>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0xA8);
  return a1;
}
