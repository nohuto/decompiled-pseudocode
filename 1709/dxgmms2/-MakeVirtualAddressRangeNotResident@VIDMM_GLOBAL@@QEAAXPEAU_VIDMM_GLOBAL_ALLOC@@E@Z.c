/*
 * XREFs of ?MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C005A040
 * Callers:
 *     ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C004D6E0 (-EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00A7090 (-EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@.c)
 * Callees:
 *     ?MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0059DE8 (-MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005C818 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C005C8C0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 */

void __fastcall VIDMM_GLOBAL::MakeVirtualAddressRangeNotResident(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        char a3)
{
  char *v6; // rsi
  char *i; // rbx
  unsigned int k; // ebx
  char *j; // r14

  if ( (*((_BYTE *)this + 40872) & 1) != 0 )
  {
    v6 = (char *)a2 + 296;
    for ( i = (char *)*((_QWORD *)a2 + 37); i != v6; i = *(char **)i )
    {
      for ( j = (char *)*((_QWORD *)i - 2); j != i - 16; j = *(char **)j )
        VIDMM_GLOBAL::MakeOneVirtualAddressRangeNotResident(this, (struct VIDMM_ALLOC *)(j - 40));
    }
    if ( a3 )
    {
      for ( k = 0; k < *((_DWORD *)this + 1604); ++k )
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, k, 0, 0LL, 0LL, 0, 0);
      VIDMM_GLOBAL::WaitForAllPagingEngines(this, a2);
    }
  }
}
