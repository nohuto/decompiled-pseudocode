/*
 * XREFs of MiInitializeKernelCfg @ 0x1408580E8
 * Callers:
 *     MiInitSystem @ 0x140828E58 (MiInitSystem.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 *     RtlImageNtHeader @ 0x1400AE3B0 (RtlImageNtHeader.c)
 *     MiMakeZeroedPageTables @ 0x1400C3C2C (MiMakeZeroedPageTables.c)
 *     MiProcessKernelCfgImage @ 0x1400F9950 (MiProcessKernelCfgImage.c)
 *     VslpEnterIumSecureMode @ 0x14011D800 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiMarkKernelImageCfgBits @ 0x14059EF50 (MiMarkKernelImageCfgBits.c)
 *     MiProcessKernelCfgAddressTakenImports @ 0x1406EA380 (MiProcessKernelCfgAddressTakenImports.c)
 */

int __fastcall MiInitializeKernelCfg(__int64 a1, __int64 a2, __int64 a3)
{
  int result; // eax
  unsigned __int64 v4; // rbx
  ULONG_PTR v5; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  PVOID *i; // rbx
  PVOID v8; // rcx
  PIMAGE_NT_HEADERS v9; // rax
  _BYTE v10[8]; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-80h]
  __int64 v12; // [rsp+30h] [rbp-78h]

  if ( (MiFlags & 0x80000) == 0 )
    return 0;
  v4 = qword_140389B30;
  v5 = MiReservePtes((__int64)&qword_140389360, 0x20uLL, a3);
  if ( !v5 )
    return -1073741670;
  v11 = v4;
  v12 = (__int64)(v5 << 25) >> 16;
  result = VslpEnterIumSecureMode(2u, 213LL, 0, (__int64)v10);
  if ( result >= 0 )
  {
    qword_140388328 = v4;
    qword_140388320 = 0x100000000000LL;
    result = MiMakeZeroedPageTables(
               ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
               (((v4 + 0x1FFFFFFFFFFLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
               4,
               9);
    if ( result >= 0 )
    {
      qword_140388330 = 0LL;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
      for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
      {
        if ( ((_DWORD)i[13] & 0x2000) == 0 )
        {
          v8 = i[6];
          if ( v8 == PsNtosImageBase )
          {
            v9 = RtlImageNtHeader(v8);
            MiMarkKernelImageCfgBits((__int64)i, (__int64)v9);
            *((_DWORD *)i + 26) |= 0x2000u;
          }
          else
          {
            MiProcessKernelCfgImage((__int64)i, 0, 0LL);
          }
        }
      }
      MiProcessKernelCfgAddressTakenImports((PVOID *)PsLoadedModuleList);
      ExReleaseResourceLite(&PsLoadedModuleResource);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      guard_icall_bitmap = qword_140388328 - 0x3FFFE0000000000LL;
      return 0;
    }
  }
  return result;
}
