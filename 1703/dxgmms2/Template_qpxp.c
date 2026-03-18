/*
 * XREFs of Template_qpxp @ 0x1C0021384
 * Callers:
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C0068E20 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 *     ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJE@Z @ 0x1C0069074 (-Commit@VIDMM_RECYCLE_RANGE@@QEAAJE@Z.c)
 *     ?ReportStates@VIDMM_RECYCLE_BLOCK@@QEAAXXZ @ 0x1C009EC84 (-ReportStates@VIDMM_RECYCLE_BLOCK@@QEAAXXZ.c)
 *     ?Allocate@VIDMM_PROCESS_HEAP@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEEE@Z @ 0x1C00A6DA0 (-Allocate@VIDMM_PROCESS_HEAP@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEEE@Z.c)
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C00A7920 (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAE.c)
 *     ?Free@VIDMM_PROCESS_HEAP@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00A7D30 (-Free@VIDMM_PROCESS_HEAP@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?FreeSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00A80B0 (-FreeSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qpxp(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-21h] BYREF
  char *v9; // [rsp+40h] [rbp-11h]
  __int64 v10; // [rsp+48h] [rbp-9h]
  char *v11; // [rsp+50h] [rbp-1h]
  __int64 v12; // [rsp+58h] [rbp+7h]
  char *v13; // [rsp+60h] [rbp+Fh]
  __int64 v14; // [rsp+68h] [rbp+17h]
  int v15; // [rsp+B8h] [rbp+67h] BYREF

  v15 = a4;
  UserData.Ptr = (ULONGLONG)&v15;
  *(_QWORD *)&UserData.Size = 4LL;
  v9 = &a5;
  v10 = 8LL;
  v11 = &a6;
  v13 = &a7;
  v12 = 8LL;
  v14 = 8LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, a2, 0LL, 4u, &UserData);
}
