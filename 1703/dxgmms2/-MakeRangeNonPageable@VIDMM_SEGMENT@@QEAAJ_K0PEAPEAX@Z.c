/*
 * XREFs of ?MakeRangeNonPageable@VIDMM_SEGMENT@@QEAAJ_K0PEAPEAX@Z @ 0x1C00A21B4
 * Callers:
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C004A470 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0075920 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002798 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ComputeBaseAddressAndSizeOfPageableRegion@VIDMM_SEGMENT@@IEAAXXZ @ 0x1C0075D28 (-ComputeBaseAddressAndSizeOfPageableRegion@VIDMM_SEGMENT@@IEAAXXZ.c)
 */

__int64 __fastcall VIDMM_SEGMENT::MakeRangeNonPageable(VIDMM_SEGMENT *this, unsigned __int64 a2, __int64 a3, void **a4)
{
  _QWORD *i; // rbx
  unsigned __int64 v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdi
  __int64 v13; // rax
  __int64 result; // rax
  __int64 v15; // rax
  _QWORD *v16; // rax

  for ( i = (_QWORD *)*((_QWORD *)this + 14); i != (_QWORD *)((char *)this + 112); i = (_QWORD *)*i )
  {
    v9 = i[2];
    if ( a2 < v9 + i[3] && a2 + a3 > v9 )
    {
      v15 = WdLogNewEntry5_WdAssertion(this, v9);
      *(_QWORD *)(v15 + 24) = 3710LL;
      WdLogEvent5_WdAssertion(v15);
      return 3221225473LL;
    }
    if ( a2 < v9 )
      break;
  }
  v10 = operator new[](0x20uLL, 0x37306956u, PagedPool);
  v12 = v10;
  if ( v10 )
  {
    v10[2] = a2;
    v10[3] = a3;
    v16 = (_QWORD *)i[1];
    if ( (_QWORD *)*v16 != i )
      __fastfail(3u);
    *v12 = i;
    v12[1] = v16;
    *v16 = v12;
    i[1] = v12;
    VIDMM_SEGMENT::ComputeBaseAddressAndSizeOfPageableRegion(this);
    result = 0LL;
    *a4 = v12;
  }
  else
  {
    _InterlockedIncrement(&dword_1C003C624);
    v13 = WdLogNewEntry5_WdLowResource(v11);
    *(_QWORD *)(v13 + 24) = 3732LL;
    WdLogEvent5_WdLowResource(v13);
    return 3221225495LL;
  }
  return result;
}
