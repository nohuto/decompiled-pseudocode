/*
 * XREFs of ?UMPDDrvFree@@YAXPEAXK@Z @ 0x1C0285790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UMPDDrvFree(PVOID a1, __int64 a2)
{
  if ( a1 && a1 >= MmSystemRangeStart && (_DWORD)a2 == (_DWORD)a1 )
    Win32FreePool(a1, a2);
}
