/*
 * XREFs of ?HampAppAllocateState@@YAJPEAU_HAM_APPLICATION@@@Z @ 0x180009A50
 * Callers:
 *     ?HampAppCreate@@YAJPEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@PEAPEAU_HAM_APPLICATION@@@Z @ 0x1800099C4 (-HampAppCreate@@YAJPEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@PEAPEAU_HAM_APPLICATION@@@Z.c)
 * Callees:
 *     ?HampAppQueryRegistryTerminateReason@@YAJPEAU_HAM_APPLICATION@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x180009AC0 (-HampAppQueryRegistryTerminateReason@@YAJPEAU_HAM_APPLICATION@@PEAW4_HAM_TERMINATE_REASON@@@Z.c)
 */

__int64 __fastcall HampAppAllocateState(struct _HAM_APPLICATION *a1)
{
  int RegistryTerminateReason; // edx
  unsigned __int16 v4; // [rsp+30h] [rbp+8h] BYREF

  RegistryTerminateReason = TpAllocWork((char *)a1 + 560, HampAppInterruptiveUIChangeWorker, a1, 0LL);
  if ( RegistryTerminateReason >= 0 )
  {
    RegistryTerminateReason = HampAppQueryRegistryTerminateReason(a1, (enum _HAM_TERMINATE_REASON *)&v4);
    if ( (int)(RegistryTerminateReason + 0x80000000) < 0 || RegistryTerminateReason == -1073283070 )
    {
      *((_DWORD *)a1 + 152) &= 0xFFF80007;
      *((_DWORD *)a1 + 152) |= 8 * v4;
      return 0;
    }
  }
  return (unsigned int)RegistryTerminateReason;
}
