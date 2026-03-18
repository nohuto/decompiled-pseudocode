/*
 * XREFs of ?ReportSegment@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C007C420
 * Callers:
 *     ?Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C007C210 (-Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z.c)
 *     ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C009CE18 (-ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ??1VIDMM_SEGMENT@@UEAA@XZ @ 0x1C00A9758 (--1VIDMM_SEGMENT@@UEAA@XZ.c)
 * Callees:
 *     McTemplateK0qpxxxqqxpc @ 0x1C0023D04 (McTemplateK0qpxxxqqxpc.c)
 */

void __fastcall VIDMM_SEGMENT::ReportSegment(VIDMM_SEGMENT *this, __int64 a2, __int64 a3)
{
  int v3; // [rsp+40h] [rbp-38h]

  if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0qpxxxqqxpc(
      (__int64)this,
      *((_QWORD *)this + 1),
      a3,
      *((_DWORD *)this + 4) + 1,
      *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
      *((_QWORD *)this + 3),
      *((_QWORD *)this + 4),
      *((_QWORD *)this + 6),
      v3,
      *((_DWORD *)this + 20),
      *((_QWORD *)this + 26),
      *((_QWORD *)this + 16),
      *((_BYTE *)this + 476));
}
