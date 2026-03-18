/*
 * XREFs of ?FreeWin32KSyscallFilter@@YAXXZ @ 0x1C00670EC
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0066D40 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     InitializeWin32KSyscallFilter @ 0x1C007ECC0 (InitializeWin32KSyscallFilter.c)
 * Callees:
 *     <none>
 */

void FreeWin32KSyscallFilter(void)
{
  if ( gWin32KFilterBitArraySet1 )
  {
    ExFreePoolWithTag(gWin32KFilterBitArraySet1, 0);
    gWin32KFilterBitArraySet1 = 0LL;
  }
  if ( gWin32KFilterBitArraySet2 )
  {
    ExFreePoolWithTag(gWin32KFilterBitArraySet2, 0);
    gWin32KFilterBitArraySet2 = 0LL;
  }
  if ( gWin32KFilterBitArraySet3 )
  {
    ExFreePoolWithTag(gWin32KFilterBitArraySet3, 0);
    gWin32KFilterBitArraySet3 = 0LL;
  }
}
