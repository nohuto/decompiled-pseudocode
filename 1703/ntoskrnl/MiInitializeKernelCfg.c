/*
 * XREFs of MiInitializeKernelCfg @ 0x14082694C
 * Callers:
 *     MiInitSystem @ 0x1408032EC (MiInitSystem.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     MiProcessKernelCfgImage @ 0x14006BEA0 (MiProcessKernelCfgImage.c)
 *     RtlImageNtHeader @ 0x14008BA00 (RtlImageNtHeader.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 *     MiMakeZeroedPageTables @ 0x140127F0C (MiMakeZeroedPageTables.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiMarkKernelImageCfgBits @ 0x1405858D8 (MiMarkKernelImageCfgBits.c)
 *     MiProcessKernelCfgAddressTakenImports @ 0x1406BD5A0 (MiProcessKernelCfgAddressTakenImports.c)
 */

int __fastcall MiInitializeKernelCfg(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int result; // eax
  unsigned __int64 v4; // rbx
  ULONG_PTR v5; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  PVOID *v7; // rbx
  PVOID v8; // rcx
  PIMAGE_NT_HEADERS v9; // rax
  _BYTE v10[8]; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-80h]
  __int64 v12; // [rsp+30h] [rbp-78h]

  if ( (MiFlags & 0x80000) == 0 )
    return 0;
  v4 = qword_14036D860;
  v5 = MiReservePtes((__int64)&qword_14036D0A0, 0x20uLL, a3);
  if ( !v5 )
    return -1073741670;
  v11 = v4;
  v12 = (__int64)(v5 << 25) >> 16;
  result = VslpEnterIumSecureMode(1, 213LL, 0LL, (__int64)v10);
  if ( result >= 0 )
  {
    qword_14036C008 = v4;
    qword_14036C000 = 0x100000000000LL;
    result = MiMakeZeroedPageTables(
               ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
               (((v4 + 0x1FFFFFFFFFFLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
               4,
               9);
    if ( result >= 0 )
    {
      qword_14036C010 = 0LL;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite((PERESOURCE)&PsLoadedModuleResource, 1u);
      v7 = (PVOID *)PsLoadedModuleList;
      if ( PsLoadedModuleList != &PsLoadedModuleList )
      {
        do
        {
          if ( ((_DWORD)v7[13] & 0x2000) == 0 )
          {
            v8 = v7[6];
            if ( v8 == PsNtosImageBase )
            {
              v9 = RtlImageNtHeader(v8);
              MiMarkKernelImageCfgBits((__int64)v7, (__int64)v9);
              *((_DWORD *)v7 + 26) |= 0x2000u;
            }
            else
            {
              MiProcessKernelCfgImage((__int64)v7, 0, 0LL);
            }
          }
          v7 = (PVOID *)*v7;
        }
        while ( v7 != &PsLoadedModuleList );
        v7 = (PVOID *)PsLoadedModuleList;
      }
      MiProcessKernelCfgAddressTakenImports(v7);
      ExReleaseResourceLite((PERESOURCE)&PsLoadedModuleResource);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      guard_icall_bitmap = qword_14036C008 - 0x3FFFE0000000000LL;
      return 0;
    }
  }
  return result;
}
