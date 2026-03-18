/*
 * XREFs of ?MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z @ 0x1C01B5F78
 * Callers:
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@IPEBUtagRECT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B4654 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@IPEBUtagRECT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B4D4C (-BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 */

__int64 __fastcall MapGpuVaForAllocation(
        struct ADAPTER_RENDER *a1,
        struct DXGDEVICE *a2,
        unsigned int a3,
        struct DXGALLOCATION *a4)
{
  __int64 v4; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v18; // [rsp+40h] [rbp-49h] BYREF
  __int64 v19; // [rsp+48h] [rbp-41h] BYREF
  _QWORD v20[14]; // [rsp+50h] [rbp-39h] BYREF

  v4 = *((_QWORD *)a1 + 66);
  v18 = 0LL;
  v19 = 0LL;
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(v4 + 8) + 960LL))(
    *((_QWORD *)a2 + 74),
    a3,
    &v18,
    &v19);
  memset(v20, 0, 0x68uLL);
  v20[7] |= 1uLL;
  v7 = *((_QWORD *)a1 + 2);
  v8 = *((_QWORD *)a4 + 3);
  v20[2] = *(_QWORD *)(v7 + 2184);
  v9 = *(_QWORD *)(v7 + 2192);
  v10 = *((_QWORD *)a1 + 67);
  v20[3] = v9;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD *, char, int))(*(_QWORD *)(*((_QWORD *)a1 + 66)
                                                                                              + 8LL)
                                                                                  + 792LL))(
          v10,
          v18,
          v8,
          v20,
          1,
          -2);
  v15 = v11;
  if ( v11 >= 0 )
  {
    if ( v11 == 259 )
    {
      LODWORD(v15) = 0;
      (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD *, __int64))(*(_QWORD *)(*((_QWORD *)a1 + 66) + 8LL) + 968LL))(
        *((_QWORD *)a1 + 67),
        &v19,
        &v20[12],
        1LL);
    }
  }
  else
  {
    v16 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    *(_QWORD *)(v16 + 24) = v15;
    WdLogEvent5_WdWarning(v16);
  }
  return (unsigned int)v15;
}
