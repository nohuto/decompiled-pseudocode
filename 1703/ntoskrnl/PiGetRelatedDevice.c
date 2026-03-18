/*
 * XREFs of PiGetRelatedDevice @ 0x14055AAC8
 * Callers:
 *     PiControlGetRelatedDevice @ 0x14055A990 (PiControlGetRelatedDevice.c)
 *     PiCMGetRelatedDeviceInstance @ 0x140572E74 (PiCMGetRelatedDeviceInstance.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140488390 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PpDevNodeUnlockTree @ 0x14048A228 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14048AC58 (PpDevNodeLockTree.c)
 */

__int64 __fastcall PiGetRelatedDevice(__int64 a1, char *a2, _DWORD *a3, int a4)
{
  unsigned int v5; // esi
  _QWORD *v9; // rax
  void *v10; // r14
  __int64 *v11; // rdi
  __int64 v12; // rbp
  struct _KTHREAD *CurrentThread; // rax
  int v15; // eax
  int v16; // eax
  _QWORD *v17; // rax

  v5 = 0;
  PpDevNodeLockTree(0);
  v9 = PnpDeviceObjectFromDeviceInstanceWithTag(a1, 0x43706E50u);
  v10 = v9;
  if ( !v9 )
    goto LABEL_13;
  v11 = *(__int64 **)(v9[39] + 40LL);
  if ( !v11 || (unsigned int)(*((_DWORD *)v11 + 75) - 787) <= 1 )
    goto LABEL_13;
  if ( a4 == 1 )
  {
    v11 = (__int64 *)v11[2];
    goto LABEL_6;
  }
  if ( a4 != 2 )
  {
    if ( a4 != 3 )
    {
      v5 = -1073741811;
      goto LABEL_10;
    }
    goto LABEL_27;
  }
  v11 = (__int64 *)v11[1];
  if ( v11 )
  {
    v15 = *((_DWORD *)v11 + 99);
    if ( (v15 & 0x2000) != 0 && *((_DWORD *)v11 + 101) == 24 && (v15 & 0x1000) != 0 )
    {
      do
      {
LABEL_27:
        v11 = (__int64 *)*v11;
        if ( !v11 )
          break;
        v16 = *((_DWORD *)v11 + 99);
        if ( (v16 & 0x2000) == 0 )
          break;
      }
      while ( *((_DWORD *)v11 + 101) == 24 && (v16 & 0x1000) != 0 );
LABEL_6:
      if ( a4 == 1 )
        goto LABEL_7;
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  if ( v11 )
  {
    while ( 1 )
    {
      if ( v11[6] )
      {
        v17 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)(v11 + 5), 0x43706E50u);
        if ( v17 )
          break;
      }
      v11 = (__int64 *)*v11;
      if ( !v11 )
        goto LABEL_17;
    }
    ObfDereferenceObjectWithTag(v17, 0x43706E50u);
  }
LABEL_17:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_7:
  if ( !v11 )
  {
LABEL_13:
    v5 = -1073741810;
    goto LABEL_10;
  }
  v12 = *((unsigned __int16 *)v11 + 20);
  if ( *a3 <= (unsigned int)v12 )
  {
    v5 = -1073741789;
    *a3 = v12 + 2;
  }
  else
  {
    memmove(a2, (const void *)v11[6], *((unsigned __int16 *)v11 + 20));
    *(_WORD *)&a2[v12] = 0;
    *a3 = v12;
  }
LABEL_10:
  PpDevNodeUnlockTree(0);
  if ( v10 )
    ObfDereferenceObjectWithTag(v10, 0x43706E50u);
  return v5;
}
