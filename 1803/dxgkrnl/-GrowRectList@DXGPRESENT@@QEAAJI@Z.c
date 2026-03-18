/*
 * XREFs of ?GrowRectList@DXGPRESENT@@QEAAJI@Z @ 0x1C01458FC
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0101F80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTBLTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C01B2E2C (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTBLTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@P.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall DXGPRESENT::GrowRectList(DXGPRESENT *this, unsigned int a2)
{
  unsigned __int64 v2; // rbp
  __int64 i; // rdi
  unsigned int v5; // r8d
  SIZE_T v6; // rax
  PVOID v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax

  v2 = a2;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v5 = 1;
    if ( *((_DWORD *)this + 17) )
      v5 = *((_DWORD *)this + 17);
    if ( (unsigned int)i >= v5 )
      break;
    if ( *((_DWORD *)this + i + 40) < (unsigned int)v2 )
    {
      operator delete[](*((void **)this + i + 28));
      v6 = 16 * v2;
      if ( !is_mul_ok(v2, 0x10uLL) )
        v6 = -1LL;
      v7 = operator new[](v6, 0x4B677844u, PagedPool);
      *((_QWORD *)this + i + 28) = v7;
      if ( !v7 )
      {
        *((_DWORD *)this + i + 40) = 0;
        v9 = WdLogNewEntry5_WdLowResource(v8);
        *(_QWORD *)(v9 + 24) = this;
        *(_QWORD *)(v9 + 32) = v2;
        WdLogEvent5_WdLowResource(v9);
        return 3221225495LL;
      }
      *((_DWORD *)this + i + 40) = v2;
    }
  }
  return 0LL;
}
