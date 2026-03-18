/*
 * XREFs of ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x1C003CD30
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C003D3C0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C006B870 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 * Callees:
 *     EngFreeUserMem @ 0x1C001EFC0 (EngFreeUserMem.c)
 */

void __fastcall PDEVOBJ::vDeleteHTPATSIZEUSERAllocations(PDEVOBJ *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( (*(_DWORD *)(v2 + 32) & 0x400000) != 0 )
  {
    EngFreeUserMem(*(PVOID *)(v2 + 2432));
    EngFreeUserMem(*(PVOID *)(*(_QWORD *)this + 2440LL));
    EngFreeUserMem(*(PVOID *)(*(_QWORD *)this + 2448LL));
  }
}
