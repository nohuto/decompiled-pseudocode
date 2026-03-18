/*
 * XREFs of Win32CreateSection @ 0x1C0006A80
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0041B80 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     HmgCreate @ 0x1C006F330 (HmgCreate.c)
 *     ?ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z @ 0x1C00A6D8C (-ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z.c)
 *     ?AllocateKernelSection@@YAJKKPEAPEAX@Z @ 0x1C00EF744 (-AllocateKernelSection@@YAJKKPEAPEAX@Z.c)
 *     ?AllocateSharedSection@@YAJKKPEAPEAX00@Z @ 0x1C00EF7F0 (-AllocateSharedSection@@YAJKKPEAPEAX00@Z.c)
 *     EngAllocSectionMem @ 0x1C00FBA10 (EngAllocSectionMem.c)
 *     InitCreateSharedSection @ 0x1C01DD220 (InitCreateSharedSection.c)
 *     InitKernelHandleTable @ 0x1C01DD2D4 (InitKernelHandleTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32CreateSection(_QWORD *a1, __int64 a2)
{
  int Section; // ebx

  Section = MmCreateSection(a1, a2, 0LL);
  if ( Section >= 0 )
    ObDeleteCapturedInsertInfo(*a1);
  return (unsigned int)Section;
}
