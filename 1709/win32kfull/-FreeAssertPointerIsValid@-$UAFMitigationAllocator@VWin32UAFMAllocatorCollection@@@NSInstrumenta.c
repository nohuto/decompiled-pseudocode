/*
 * XREFs of ?FreeAssertPointerIsValid@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAXPEAXI@Z @ 0x1C01F4B10
 * Callers:
 *     Win32UAFMFreePagedLookasideListImpl @ 0x1C01F5110 (Win32UAFMFreePagedLookasideListImpl.c)
 *     Win32UAFMFreePoolImpl @ 0x1C01F5160 (Win32UAFMFreePoolImpl.c)
 *     Win32UAFMFreeToPagedLookasideListImpl @ 0x1C01F5190 (Win32UAFMFreeToPagedLookasideListImpl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::FreeAssertPointerIsValid(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3)
{
  __int64 result; // rax

  result = (unsigned int)(*(_DWORD *)(BugCheckParameter2 - 4) - 1);
  if ( (_DWORD)BugCheckParameter3 != (_DWORD)result )
    KeBugCheckEx(0x164u, 9uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 0LL);
  return result;
}
