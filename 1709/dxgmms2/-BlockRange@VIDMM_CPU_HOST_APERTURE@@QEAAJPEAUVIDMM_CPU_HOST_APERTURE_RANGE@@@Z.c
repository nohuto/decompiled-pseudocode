/*
 * XREFs of ?BlockRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1C0023F3C
 * Callers:
 *     ?Init@VIDMM_MEMORY_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C007CDE0 (-Init@VIDMM_MEMORY_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_CPU_HOST_APERTURE::BlockRange(
        VIDMM_CPU_HOST_APERTURE *this,
        struct VIDMM_CPU_HOST_APERTURE_RANGE *a2)
{
  __int64 v2; // rax
  int v3; // r10d
  __int64 result; // rax

  v2 = *((unsigned int *)a2 + 1);
  v3 = *((_DWORD *)a2 + 1) - *(_DWORD *)a2 + 1;
  if ( *(_DWORD *)a2 == *((_DWORD *)this + 16) )
    *((_DWORD *)this + 16) = *(_DWORD *)(*((_QWORD *)this + 5) + 4LL * (unsigned int)v2);
  else
    *(_DWORD *)(*((_QWORD *)this + 5) + 4LL * (unsigned int)(*(_DWORD *)a2 - 1)) = *(_DWORD *)(*((_QWORD *)this + 5)
                                                                                             + 4 * v2);
  *(_DWORD *)(*((_QWORD *)this + 5) + 4LL * *((unsigned int *)a2 + 1)) = v3;
  result = 0LL;
  *((_DWORD *)this + 15) -= v3;
  return result;
}
