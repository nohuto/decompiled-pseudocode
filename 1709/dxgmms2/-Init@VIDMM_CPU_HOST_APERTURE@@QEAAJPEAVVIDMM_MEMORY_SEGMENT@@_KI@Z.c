/*
 * XREFs of ?Init@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAVVIDMM_MEMORY_SEGMENT@@_KI@Z @ 0x1C001659C
 * Callers:
 *     ?Init@VIDMM_MEMORY_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C007CDE0 (-Init@VIDMM_MEMORY_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall VIDMM_CPU_HOST_APERTURE::Init(
        VIDMM_CPU_HOST_APERTURE *this,
        struct VIDMM_MEMORY_SEGMENT *a2,
        __int64 a3,
        unsigned int a4)
{
  SIZE_T v5; // rax
  PVOID v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // ecx
  __int64 v10; // rax

  *((_QWORD *)this + 6) = a2;
  *((_QWORD *)this + 4) = a3;
  *((_DWORD *)this + 14) = a4;
  *((_DWORD *)this + 15) = a4;
  v5 = 4LL * a4;
  if ( !is_mul_ok(a4, 4uLL) )
    v5 = -1LL;
  v6 = operator new[](v5, 0x36346956u, PagedPool);
  v8 = 0;
  *((_QWORD *)this + 5) = v6;
  if ( v6 )
  {
    if ( *((_DWORD *)this + 14) != 1 )
    {
      do
      {
        *(_DWORD *)(*((_QWORD *)this + 5) + 4LL * v8) = v8 + 1;
        ++v8;
      }
      while ( v8 < *((_DWORD *)this + 14) - 1 );
    }
    *(_DWORD *)(*((_QWORD *)this + 5) + 4LL * (unsigned int)(*((_DWORD *)this + 14) - 1)) = -1;
    return 0LL;
  }
  else
  {
    _InterlockedIncrement(&dword_1C0040684);
    v10 = WdLogNewEntry5_WdLowResource(0LL, v7);
    *(_QWORD *)(v10 + 24) = 112LL;
    WdLogEvent5_WdLowResource(v10);
    return 3221225495LL;
  }
}
