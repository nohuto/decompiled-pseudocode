/*
 * XREFs of ?MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z @ 0x1C019F368
 * Callers:
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@IPEBUtagRECT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C019DD80 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@IPEBUtagRECT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C019E3EC (-BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
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
  __int64 v15; // r9
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v19; // [rsp+40h] [rbp-49h] BYREF
  __int64 v20; // [rsp+48h] [rbp-41h] BYREF
  _QWORD v21[14]; // [rsp+50h] [rbp-39h] BYREF

  v4 = *((_QWORD *)a1 + 54);
  v19 = 0LL;
  v20 = 0LL;
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(v4 + 8) + 960LL))(
    *((_QWORD *)a2 + 74),
    a3,
    &v19,
    &v20);
  memset(v21, 0, 0x68uLL);
  v21[7] |= 1uLL;
  v7 = *((_QWORD *)a1 + 2);
  v8 = *((_QWORD *)a4 + 3);
  v21[2] = *(_QWORD *)(v7 + 2160);
  v9 = *(_QWORD *)(v7 + 2168);
  v10 = *((_QWORD *)a1 + 55);
  v21[3] = v9;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD *, char, int))(*(_QWORD *)(*((_QWORD *)a1 + 54)
                                                                                              + 8LL)
                                                                                  + 792LL))(
          v10,
          v19,
          v8,
          v21,
          1,
          -2);
  v16 = v11;
  if ( v11 >= 0 )
  {
    if ( v11 == 259 )
    {
      LODWORD(v16) = 0;
      (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD *, __int64))(*(_QWORD *)(*((_QWORD *)a1 + 54) + 8LL) + 968LL))(
        *((_QWORD *)a1 + 55),
        &v20,
        &v21[12],
        1LL);
    }
  }
  else
  {
    v17 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
    *(_QWORD *)(v17 + 24) = v16;
    WdLogEvent5_WdWarning(v17);
  }
  return (unsigned int)v16;
}
