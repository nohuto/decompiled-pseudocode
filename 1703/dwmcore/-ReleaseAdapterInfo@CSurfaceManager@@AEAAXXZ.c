/*
 * XREFs of ?ReleaseAdapterInfo@CSurfaceManager@@AEAAXXZ @ 0x1800B60E8
 * Callers:
 *     ?ProcessKernelTokens@CSurfaceManager@@AEAAJXZ @ 0x1800B5FAC (-ProcessKernelTokens@CSurfaceManager@@AEAAJXZ.c)
 *     ?EnsureAdapterInfo@CSurfaceManager@@AEAAJXZ @ 0x1800B6178 (-EnsureAdapterInfo@CSurfaceManager@@AEAAJXZ.c)
 *     ??1CSurfaceManager@@MEAA@XZ @ 0x180145104 (--1CSurfaceManager@@MEAA@XZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSurfaceManager::ReleaseAdapterInfo(CSurfaceManager *this)
{
  __int64 i; // rdi
  __int64 v3; // rbp

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 134); i = (unsigned int)(i + 1) )
  {
    v3 = *((_QWORD *)this + 64);
    if ( *(_QWORD *)(v3 + 40 * i + 16) )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 40 * i + 8) + 32LL))(*(_QWORD *)(v3 + 40 * i + 8));
    ReleaseInterfaceNoNULL<CD2DPencil>(*(_QWORD *)(v3 + 40 * i + 8));
  }
  *((_DWORD *)this + 134) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 512, 0x28u);
  *((_BYTE *)this + 624) = 0;
}
