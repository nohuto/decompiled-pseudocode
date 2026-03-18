/*
 * XREFs of ?CitpParametersCleanup@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C0084F98
 * Callers:
 *     ?CitpCleanup@@YAXXZ @ 0x1C0084F68 (-CitpCleanup@@YAXXZ.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x1C0154F8C (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

void __fastcall CitpParametersCleanup(struct _CIT_PARAMETERS *a1)
{
  wchar_t *v2; // rcx

  v2 = (wchar_t *)*((_QWORD *)a1 + 8);
  if ( v2 && v2 != L":RUNDLL32.EXE:DLLHOST.EXE:MMC.EXE:" )
  {
    Win32FreePool((__int64)v2);
    *((_QWORD *)a1 + 8) = L":RUNDLL32.EXE:DLLHOST.EXE:MMC.EXE:";
  }
  *((_WORD *)a1 + 46) = 0;
  *((_BYTE *)a1 + 96) = 0;
}
