/*
 * XREFs of ?MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJ_KKKPEAPEAXPEA_K1@Z @ 0x1C00A8C08
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z @ 0x1C0055B08 (-Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z.c)
 * Callees:
 *     MapChildVaSpace @ 0x1C002316C (MapChildVaSpace.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C005A7D4 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x1C00A887C (-GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C00AB19C (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 */

__int64 __fastcall VIDMM_PROCESS::MapHostVirtualAddressToGuest(
        VIDMM_PROCESS *this,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        unsigned __int64 *a6)
{
  struct _KTHREAD **CpuVisibleBufferAllocator; // rsi
  __int64 v9; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // edi
  __int64 v14; // rax
  __int64 v15; // rcx
  char v16; // al
  __int64 v17; // rax
  unsigned __int64 v18; // r14
  _QWORD *v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int64 v23; // [rsp+40h] [rbp-28h] BYREF

  CpuVisibleBufferAllocator = (struct _KTHREAD **)VIDMM_PROCESS::GetCpuVisibleBufferAllocator(this);
  if ( !CpuVisibleBufferAllocator )
    return 3221225495LL;
  v13 = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
          CpuVisibleBufferAllocator,
          a2,
          v9,
          0LL,
          0LL,
          0x1000u,
          &v23);
  if ( v13 >= 0 )
  {
    v15 = *((_QWORD *)this + 4);
    v16 = *(_BYTE *)(v15 + 323);
    if ( (v16 & 8) != 0 )
      v17 = *(_QWORD *)(v15 + 456);
    else
      v17 = v15 & -(__int64)((v16 & 4) != 0);
    v18 = v23;
    v19 = (_QWORD *)(v23 + *(_QWORD *)(*(_QWORD *)(v17 + 456) + 160LL));
    v13 = MapChildVaSpace(v15, v19, a2);
    if ( v13 >= 0 )
    {
      *a6 = (unsigned __int64)v19;
    }
    else
    {
      v22 = WdLogNewEntry5_WdAssertion(v21, v20);
      *(_QWORD *)(v22 + 24) = a2;
      *(_QWORD *)(v22 + 32) = 2243LL;
      WdLogEvent5_WdAssertion(v22);
      CVirtualAddressAllocator::FreeVirtualAddressRange((CVirtualAddressAllocator *)CpuVisibleBufferAllocator, v18);
    }
  }
  else
  {
    v14 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v14 + 24) = a2;
    WdLogEvent5_WdAssertion(v14);
  }
  return (unsigned int)v13;
}
