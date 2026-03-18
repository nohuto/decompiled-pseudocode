/*
 * XREFs of ?FaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0051E34
 * Callers:
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0059D30 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005BAA4 (-PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_DEVICE::FaultCommitment(VIDMM_DEVICE *this, struct VIDMM_ALLOC *a2)
{
  __int64 v2; // r8
  _QWORD *v3; // rax
  _QWORD *v4; // rcx
  _QWORD *v5; // r8
  __int64 v6; // r8

  v2 = *((_QWORD *)a2 + 1);
  v3 = (_QWORD *)((char *)a2 + 56);
  v4 = (_QWORD *)(v2 + 128);
  if ( (*(_DWORD *)(**(_QWORD **)a2 + 76LL) & 0x8000000) != 0 )
  {
    v6 = *v4;
    if ( *(_QWORD **)(*v4 + 8LL) != v4 )
      __fastfail(3u);
    *v3 = v6;
    *((_QWORD *)a2 + 8) = v4;
    *(_QWORD *)(v6 + 8) = v3;
    *v4 = v3;
  }
  else
  {
    v5 = *(_QWORD **)(v2 + 136);
    if ( (_QWORD *)*v5 != v4 )
      __fastfail(3u);
    *v3 = v4;
    *((_QWORD *)a2 + 8) = v5;
    *v5 = v3;
    v4[1] = v3;
  }
  *((_DWORD *)a2 + 7) = *((_DWORD *)a2 + 7) & 0xFFFFFFFC | 1;
}
