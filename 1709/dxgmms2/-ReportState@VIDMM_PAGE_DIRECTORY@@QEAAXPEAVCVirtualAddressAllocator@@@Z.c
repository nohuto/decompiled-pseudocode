/*
 * XREFs of ?ReportState@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@@Z @ 0x1C00A5AEC
 * Callers:
 *     ?ReportState@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@@Z @ 0x1C00A5AEC (-ReportState@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?ReportVaAllocatorState@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C00A5DC4 (-ReportVaAllocatorState@CVirtualAddressAllocator@@QEAAXXZ.c)
 * Callees:
 *     ?GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z @ 0x1C0001CA0 (-GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z.c)
 *     ?ReportState@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@@Z @ 0x1C00A5AEC (-ReportState@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?ReportState@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@@Z @ 0x1C00A5BA4 (-ReportState@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@@Z.c)
 */

void __fastcall VIDMM_PAGE_DIRECTORY::ReportState(VIDMM_PAGE_DIRECTORY *this, struct CVirtualAddressAllocator *a2)
{
  unsigned int NumPde; // eax
  __int64 v5; // rsi
  __int64 v6; // rbp
  VIDMM_PAGE_TABLE_BASE *v7; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h]

  if ( *((_QWORD *)this + 4) )
  {
    NumPde = CVirtualAddressAllocator::GetNumPde(a2, this);
    if ( (*(_DWORD *)this & 0x1020) == 0x1020 )
      NumPde *= 2;
    if ( NumPde )
    {
      v5 = 0LL;
      v6 = 0LL;
      v8 = NumPde;
      do
      {
        v7 = *(VIDMM_PAGE_TABLE_BASE **)(v5 + *((_QWORD *)this + 4));
        if ( v7 )
        {
          if ( (*(_DWORD *)this & 0x20) != 0 )
          {
            if ( (*(_DWORD *)(*((_QWORD *)this + 3) + v6) & 0x400LL) == 0 )
              VIDMM_PAGE_TABLE_BASE::ReportState(v7, a2);
          }
          else
          {
            VIDMM_PAGE_DIRECTORY::ReportState(v7, a2);
          }
        }
        v6 += 16LL;
        v5 += 8LL;
        --v8;
      }
      while ( v8 );
    }
  }
  VIDMM_PAGE_TABLE_BASE::ReportState(this, a2);
}
