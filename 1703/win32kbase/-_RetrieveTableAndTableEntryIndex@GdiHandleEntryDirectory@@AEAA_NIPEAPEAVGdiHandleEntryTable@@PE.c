/*
 * XREFs of ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C0033470
 * Callers:
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C002F230 (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     HmgLock @ 0x1C002F7C0 (HmgLock.c)
 *     ReleaseCacheDC @ 0x1C002FBD0 (ReleaseCacheDC.c)
 *     ?SetEntryObject@GdiHandleManager@@QEAAXIPEAVOBJECT@@@Z @ 0x1C0032E3C (-SetEntryObject@GdiHandleManager@@QEAAXIPEAVOBJECT@@@Z.c)
 *     ?ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z @ 0x1C00336B0 (-ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z.c)
 *     EngLockSurface @ 0x1C0036A00 (EngLockSurface.c)
 * Callees:
 *     <none>
 */

char __fastcall GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(
        GdiHandleEntryDirectory *this,
        unsigned int a2,
        struct GdiHandleEntryTable **a3,
        unsigned int *a4)
{
  int v4; // r10d
  unsigned int v5; // r11d
  unsigned int v6; // eax

  v4 = a2;
  v5 = *((_DWORD *)this + 514);
  if ( a2 >= v5 + ((*((unsigned __int16 *)this + 1) + 0xFFFF) << 16) )
    return 0;
  if ( a2 >= v5 )
  {
    v6 = ((a2 - v5) >> 16) + 1;
    if ( (a2 - v5) >> 16 != -2 )
      goto LABEL_5;
    return 0;
  }
  v6 = 0;
LABEL_5:
  *a3 = (struct GdiHandleEntryTable *)*((_QWORD *)this + (int)v6 + 1);
  if ( v6 )
    v4 = a2 - (v6 << 16) - v5 + 0x10000;
  *a4 = v4;
  return 1;
}
