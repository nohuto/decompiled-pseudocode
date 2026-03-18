/*
 * XREFs of ?ReportSegment@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00A3188
 * Callers:
 *     ?Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C0076050 (-Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z.c)
 *     ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0094F98 (-ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ??1VIDMM_SEGMENT@@UEAA@XZ @ 0x1C00A1040 (--1VIDMM_SEGMENT@@UEAA@XZ.c)
 * Callees:
 *     Template_qpxxxqqxpc @ 0x1C0021A8C (Template_qpxxxqqxpc.c)
 */

void __fastcall VIDMM_SEGMENT::ReportSegment(VIDMM_SEGMENT *this, __int64 a2, __int64 a3)
{
  int v3; // [rsp+40h] [rbp-38h]

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    Template_qpxxxqqxpc(
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
      *((_QWORD *)this + 29),
      *((_QWORD *)this + 19),
      *((_BYTE *)this + 500));
}
