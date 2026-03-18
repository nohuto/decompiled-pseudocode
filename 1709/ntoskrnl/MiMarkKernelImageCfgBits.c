/*
 * XREFs of MiMarkKernelImageCfgBits @ 0x14059EF50
 * Callers:
 *     MiProcessKernelCfgImage @ 0x1400F9950 (MiProcessKernelCfgImage.c)
 *     MiUnloadSystemImage @ 0x140515B1C (MiUnloadSystemImage.c)
 *     MiInitializeKernelCfg @ 0x1408580E8 (MiInitializeKernelCfg.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     RtlImageDirectoryEntryToData @ 0x1400AE2A0 (RtlImageDirectoryEntryToData.c)
 *     VslpEnterIumSecureMode @ 0x14011D800 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiAllocateKernelCfgBitmapPageTables @ 0x1406EA260 (MiAllocateKernelCfgBitmapPageTables.c)
 *     MiReleaseKernelCfgLock @ 0x1406EA540 (MiReleaseKernelCfgLock.c)
 */

__int64 __fastcall MiMarkKernelImageCfgBits(__int64 a1, __int64 a2)
{
  NTSTATUS KernelCfgBitmapPageTables; // edi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v6; // rax
  ULONG Size[4]; // [rsp+20h] [rbp-108h] BYREF
  _BYTE v8[8]; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v9; // [rsp+38h] [rbp-F0h]
  __int64 v10; // [rsp+40h] [rbp-E8h]
  _BYTE v11[8]; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v12; // [rsp+A8h] [rbp-80h]

  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140388330, 0LL);
    KernelCfgBitmapPageTables = MiAllocateKernelCfgBitmapPageTables(*(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64));
    MiReleaseKernelCfgLock();
    if ( KernelCfgBitmapPageTables >= 0 )
    {
      v9 = *(_QWORD *)(a1 + 112);
      v10 = *(_QWORD *)(a1 + 48);
      KernelCfgBitmapPageTables = VslpEnterIumSecureMode(2u, 214LL, 0, (__int64)v8);
      if ( KernelCfgBitmapPageTables >= 0 )
      {
        v6 = RtlImageDirectoryEntryToData(*(PVOID *)(a1 + 48), 1u, 0xAu, Size);
        if ( v6 && Size[0] >= 0xB0 && v6[21] )
          *(_DWORD *)(a1 + 104) |= 0x800u;
        else
          *(_DWORD *)(a1 + 104) |= 0x100u;
      }
    }
  }
  else if ( (MiFlags & 0x80000) != 0 )
  {
    v12 = *(_QWORD *)(a1 + 48);
    return (unsigned int)VslpEnterIumSecureMode(2u, 215LL, 0, (__int64)v11);
  }
  else
  {
    return 0;
  }
  return (unsigned int)KernelCfgBitmapPageTables;
}
