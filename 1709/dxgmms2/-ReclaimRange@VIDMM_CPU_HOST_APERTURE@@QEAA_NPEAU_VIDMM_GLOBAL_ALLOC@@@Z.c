/*
 * XREFs of ?ReclaimRange@VIDMM_CPU_HOST_APERTURE@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0016654
 * Callers:
 *     ?BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@PEAPEAU_MDL@@@Z @ 0x1C0079718 (-BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTU.c)
 * Callees:
 *     <none>
 */

char __fastcall VIDMM_CPU_HOST_APERTURE::ReclaimRange(VIDMM_CPU_HOST_APERTURE *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  char result; // al
  _QWORD *v3; // rax
  __int64 v4; // r8
  _QWORD *v5; // rdx
  __int64 v6; // rdx

  result = 0;
  if ( *((_QWORD *)a2 + 56) )
  {
    v3 = (_QWORD *)((char *)a2 + 456);
    v4 = *((_QWORD *)a2 + 57);
    if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v4 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 456)
      || (v5 = (_QWORD *)*((_QWORD *)a2 + 58), (_QWORD *)*v5 != v3) )
    {
      __fastfail(3u);
    }
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    v6 = *(_QWORD *)this;
    if ( *(VIDMM_CPU_HOST_APERTURE **)(*(_QWORD *)this + 8LL) != this )
      __fastfail(3u);
    *v3 = v6;
    v3[1] = this;
    *(_QWORD *)(v6 + 8) = v3;
    *(_QWORD *)this = v3;
    return 1;
  }
  return result;
}
