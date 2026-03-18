/*
 * XREFs of ?Init@VIDMM_MEMORY_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C0075630
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002798 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Init@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAVVIDMM_MEMORY_SEGMENT@@_KI@Z @ 0x1C0013F0C (-Init@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAVVIDMM_MEMORY_SEGMENT@@_KI@Z.c)
 *     ??0VIDMM_CPU_HOST_APERTURE@@QEAA@XZ @ 0x1C0013FAC (--0VIDMM_CPU_HOST_APERTURE@@QEAA@XZ.c)
 *     ?GetSystemMemoryCommitLimit@VIDMM_GLOBAL@@QEAA_KXZ @ 0x1C001F160 (-GetSystemMemoryCommitLimit@VIDMM_GLOBAL@@QEAA_KXZ.c)
 *     ?Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C0076050 (-Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::Init(VIDMM_MEMORY_SEGMENT *this, void (*a2)(void *), union _LARGE_INTEGER *a3)
{
  bool v5; // zf
  VIDMM_CPU_HOST_APERTURE *v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax

  if ( g_IsInternalReleaseOrDbg )
  {
    v19 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v19 + 24) = *((unsigned int *)this + 4);
    *(_QWORD *)(v19 + 32) = this;
  }
  *((_DWORD *)this + 20) |= 0x10u;
  if ( (*((_DWORD *)this + 20) & 0x40) != 0 )
  {
    if ( *((_QWORD *)this + 8) > (unsigned __int64)(VIDMM_GLOBAL::GetSystemMemoryCommitLimit(*((VIDMM_GLOBAL **)this + 1))
                                                  - 0x800000) )
    {
      v22 = WdLogNewEntry5_WdAssertion(v21, v20);
      *(_QWORD *)(v22 + 24) = 261LL;
      WdLogEvent5_WdAssertion(v22);
      return 3221225473LL;
    }
    *(_QWORD *)(v21 + 6456) -= *((_QWORD *)this + 6);
  }
  v5 = (*((_DWORD *)this + 20) & 0x2000) == 0;
  *((_QWORD *)this + 29) = *((_QWORD *)this + 6);
  if ( v5 )
    goto LABEL_9;
  v6 = (VIDMM_CPU_HOST_APERTURE *)operator new[](0x48uLL, 0x35346956u, PagedPool);
  if ( v6 )
    v6 = VIDMM_CPU_HOST_APERTURE::VIDMM_CPU_HOST_APERTURE(v6);
  *((_QWORD *)this + 63) = v6;
  if ( v6 )
  {
    v8 = VIDMM_CPU_HOST_APERTURE::Init(v6, this, *((_QWORD *)this + 4), *((_DWORD *)this + 10));
    v11 = v8;
    if ( v8 < 0 )
    {
      v24 = WdLogNewEntry5_WdAssertion(v10, v9);
      *(_QWORD *)(v24 + 24) = v11;
      WdLogEvent5_WdAssertion(v24);
      return (unsigned int)v11;
    }
LABEL_9:
    LODWORD(v11) = VIDMM_SEGMENT::Init(this, a2, 0LL);
    v14 = WdLogNewEntry5_WdEvent(v13, v12);
    WdLogEvent5_WdEvent(v14);
    v17 = (_QWORD *)WdLogNewEntry5_WdEvent(v16, v15);
    v17[3] = *((_QWORD *)this + 6);
    v17[4] = *((int *)this + 7);
    v17[5] = *((unsigned int *)this + 6);
    v17[6] = *((unsigned int *)this + 4);
    WdLogEvent5_WdEvent(v17);
    return (unsigned int)v11;
  }
  _InterlockedIncrement(&dword_1C003C670);
  v23 = WdLogNewEntry5_WdLowResource(v7);
  *(_QWORD *)(v23 + 24) = 291LL;
  WdLogEvent5_WdLowResource(v23);
  return 3221225495LL;
}
