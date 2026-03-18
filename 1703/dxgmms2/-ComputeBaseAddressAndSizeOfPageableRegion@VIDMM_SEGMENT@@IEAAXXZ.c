/*
 * XREFs of ?ComputeBaseAddressAndSizeOfPageableRegion@VIDMM_SEGMENT@@IEAAXXZ @ 0x1C0075D28
 * Callers:
 *     ?Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C0076050 (-Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z.c)
 *     ?MakeRangeNonPageable@VIDMM_SEGMENT@@QEAAJ_K0PEAPEAX@Z @ 0x1C00A21B4 (-MakeRangeNonPageable@VIDMM_SEGMENT@@QEAAJ_K0PEAPEAX@Z.c)
 *     ?MakeRangePageable@VIDMM_SEGMENT@@QEAAXPEAX@Z @ 0x1C00A22B8 (-MakeRangePageable@VIDMM_SEGMENT@@QEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_SEGMENT::ComputeBaseAddressAndSizeOfPageableRegion(VIDMM_SEGMENT *this)
{
  VIDMM_SEGMENT *v1; // rax
  __int64 v2; // rdx
  VIDMM_SEGMENT *v3; // r9
  unsigned __int64 v4; // r11
  __int64 v5; // r8
  __int64 v6; // r10

  *((_QWORD *)this + 12) = 0LL;
  v1 = (VIDMM_SEGMENT *)*((_QWORD *)this + 14);
  v2 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 13) = v2;
  if ( v1 != (VIDMM_SEGMENT *)((char *)this + 112) )
  {
    do
    {
      v3 = v1;
      v1 = *(VIDMM_SEGMENT **)v1;
      *((_QWORD *)this + 12) = 0LL;
      v4 = *((_QWORD *)v3 + 2);
      *((_QWORD *)this + 13) = v4;
    }
    while ( v1 != (VIDMM_SEGMENT *)((char *)this + 112) );
    v5 = *((_QWORD *)v3 + 3);
    v6 = *((_QWORD *)v3 + 2);
    if ( v2 - v5 - v6 > v4 )
    {
      *((_QWORD *)this + 12) = v5 + v6;
      *((_QWORD *)this + 13) = v2 - (v5 + v6);
    }
  }
}
