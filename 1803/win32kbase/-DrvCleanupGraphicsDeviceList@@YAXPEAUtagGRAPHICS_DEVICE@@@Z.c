/*
 * XREFs of ?DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00CD0F0
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C00C4240 (MultiUserNtGreCleanup.c)
 * Callees:
 *     ?DrvRemoveAdapterLuid@@YAJU_LUID@@@Z @ 0x1C00D0670 (-DrvRemoveAdapterLuid@@YAJU_LUID@@@Z.c)
 *     DrvCleanupOneGraphicsDevice @ 0x1C00D3A50 (DrvCleanupOneGraphicsDevice.c)
 */

void __fastcall DrvCleanupGraphicsDeviceList(struct tagGRAPHICS_DEVICE *a1)
{
  struct tagGRAPHICS_DEVICE *v1; // rbx
  struct tagGRAPHICS_DEVICE *v2; // rdi

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)v1 + 16);
      if ( (*((_DWORD *)v1 + 40) & 0x800000) != 0 )
        DrvRemoveAdapterLuid(*(struct _LUID *)((char *)v1 + 248));
      DrvCleanupOneGraphicsDevice(v1);
      v1 = v2;
    }
    while ( v2 );
  }
}
