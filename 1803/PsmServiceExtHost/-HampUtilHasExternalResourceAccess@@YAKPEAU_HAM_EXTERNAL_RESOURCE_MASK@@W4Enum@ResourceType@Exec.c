/*
 * XREFs of ?HampUtilHasExternalResourceAccess@@YAKPEAU_HAM_EXTERNAL_RESOURCE_MASK@@W4Enum@ResourceType@ExecutionModel@@@Z @ 0x18003F944
 * Callers:
 *     ?HampHostHasExternalResourceAccess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4Enum@ResourceType@ExecutionModel@@@Z @ 0x180004D64 (-HampHostHasExternalResourceAccess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4Enum@ResourceType@ExecutionM.c)
 *     ?HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18000A560 (-HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampUtilHasExternalResourceAccess(ULONG *a1, int a2)
{
  unsigned int v2; // ebx
  struct _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2 - 3;
  RtlInitializeBitMap(&BitMapHeader, a1, 0x2Fu);
  return _bittest64((const signed __int64 *)BitMapHeader.Buffer, v2);
}
