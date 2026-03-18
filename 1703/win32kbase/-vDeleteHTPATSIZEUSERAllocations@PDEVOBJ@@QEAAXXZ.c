/*
 * XREFs of ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x1C00386C4
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0057F50 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00E9CC0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 * Callees:
 *     EngFreeUserMem @ 0x1C007DCC0 (EngFreeUserMem.c)
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
