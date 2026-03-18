/*
 * XREFs of ?GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z @ 0x1C00026B0
 * Callers:
 *     ?GetVirtualAddressOfPageTable@CVirtualAddressAllocator@@QEBA_KI_KE@Z @ 0x1C0052764 (-GetVirtualAddressOfPageTable@CVirtualAddressAllocator@@QEBA_KI_KE@Z.c)
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C0053D10 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0072D64 (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?ReportState@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@@Z @ 0x1C009D7C8 (-ReportState@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualAddressAllocator::GetNumPde(CVirtualAddressAllocator *this, struct VIDMM_PAGE_DIRECTORY *a2)
{
  unsigned __int64 v2; // r8

  v2 = *(unsigned int *)a2;
  if ( (v2 & 0x10) != 0 )
    return *(unsigned int *)(32 * ((v2 >> 7) & 0x1F) + *((_QWORD *)this + 14) + 16);
  else
    return *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 10) + 40168LL)
                           + 472 * ((v2 >> 7) & 0x1F)
                           + 48 * (v2 & 7)
                           + 88);
}
