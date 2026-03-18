/*
 * XREFs of MiMarkKernelImageCfgBits @ 0x140605D78
 * Callers:
 *     MiProcessKernelCfgImage @ 0x140161788 (MiProcessKernelCfgImage.c)
 *     MiUnloadSystemImage @ 0x1405BCA9C (MiUnloadSystemImage.c)
 *     MiInitSystem @ 0x14089C128 (MiInitSystem.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140040D20 (RtlImageDirectoryEntryToData.c)
 *     VslpEnterIumSecureMode @ 0x140084A44 (VslpEnterIumSecureMode.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiAllocateKernelCfgBitmapPageTables @ 0x14075408C (MiAllocateKernelCfgBitmapPageTables.c)
 *     MiReleaseKernelCfgLock @ 0x140754378 (MiReleaseKernelCfgLock.c)
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
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403CB4D0, 0LL);
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
