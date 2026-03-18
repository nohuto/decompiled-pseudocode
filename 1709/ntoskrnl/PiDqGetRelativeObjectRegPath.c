/*
 * XREFs of PiDqGetRelativeObjectRegPath @ 0x140447D78
 * Callers:
 *     PiDqOpenUserObjectRegKey @ 0x140447AF4 (PiDqOpenUserObjectRegKey.c)
 *     PiDqDeleteUserObject @ 0x1406C4078 (PiDqDeleteUserObject.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x14051CD1C (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _CmGetCommonClassRegKeyPath @ 0x14051D9E4 (_CmGetCommonClassRegKeyPath.c)
 *     _CmGetDeviceRegKeyPath @ 0x140521A38 (_CmGetDeviceRegKeyPath.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x140550F88 (_CmGetDeviceContainerRegKeyPath.c)
 */

__int64 __fastcall PiDqGetRelativeObjectRegPath(int a1, int a2, PVOID *a3)
{
  wchar_t *pszDest; // rax
  int v7; // ecx
  int v8; // r9d
  int v9; // ebx
  int DeviceRegKeyPath; // eax
  unsigned int v11; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // r8d
  int v17; // [rsp+20h] [rbp-28h]
  size_t cchDest; // [rsp+30h] [rbp-18h]

  pszDest = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x800uLL, 0x58706E50u);
  *a3 = pszDest;
  if ( !pszDest )
  {
    v11 = -1073741670;
    goto LABEL_13;
  }
  v9 = a2 - 1;
  if ( !v9 )
  {
    DeviceRegKeyPath = CmGetDeviceRegKeyPath(PiPnpRtlCtx, a1, 0, pszDest, 1024, 0LL);
    goto LABEL_4;
  }
  v13 = v9 - 1;
  if ( !v13 )
  {
    v16 = 32;
    goto LABEL_18;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    LODWORD(cchDest) = 1024;
    DeviceRegKeyPath = CmGetDeviceInterfaceRegKeyPath(v7, a1, 48, 0, v17, (__int64)pszDest, cchDest, 0LL);
    goto LABEL_4;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v16 = 64;
LABEL_18:
    LODWORD(cchDest) = 1024;
    DeviceRegKeyPath = CmGetCommonClassRegKeyPath(v7, a1, v16, 0, v17, pszDest, cchDest, 0LL);
LABEL_4:
    v11 = DeviceRegKeyPath;
    if ( DeviceRegKeyPath >= 0 )
      return v11;
    goto LABEL_13;
  }
  if ( v15 == 1 )
  {
    LODWORD(cchDest) = 1024;
    DeviceRegKeyPath = CmGetDeviceContainerRegKeyPath(v7, a1, 80, v8, v17, pszDest, cchDest, 0LL);
    goto LABEL_4;
  }
  v11 = -1073741811;
LABEL_13:
  if ( *a3 )
  {
    ExFreePoolWithTag(*a3, 0x58706E50u);
    *a3 = 0LL;
  }
  return v11;
}
