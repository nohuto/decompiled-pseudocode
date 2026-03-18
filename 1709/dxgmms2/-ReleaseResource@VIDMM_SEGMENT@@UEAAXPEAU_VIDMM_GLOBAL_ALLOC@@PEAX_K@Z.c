/*
 * XREFs of ?ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z @ 0x1C004F040
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyMemorySegmentIdle@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C0021370 (-NotifyMemorySegmentIdle@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     McTemplateK0pqx @ 0x1C0021D8C (McTemplateK0pqx.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C0050660 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 *     ?DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z @ 0x1C007BF24 (-DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z.c)
 */

void __fastcall VIDMM_SEGMENT::ReleaseResource(
        VIDMM_GLOBAL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct _VIDMM_POOL_BLOCK *a3,
        __int64 a4)
{
  struct _VIDMM_GLOBAL_ALLOC *v6; // rdi
  VIDMM_GLOBAL *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rax
  unsigned __int64 v19; // rbp
  __int64 v20; // rax
  __int64 v21; // rax

  v6 = a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v13[3] = v6;
    v13[4] = a3;
    v13[5] = a4;
  }
  if ( v6 )
  {
    if ( *((_DWORD *)v6 + 32) != 1 )
    {
      VIDMM_SEGMENT::DecrementBytesCommitted(
        (VIDMM_SEGMENT *)this,
        **((struct VIDMM_PARTITION ***)v6 + 61),
        *((_QWORD *)v6 + 2));
      --*((_DWORD *)this + 80);
      if ( ((_DWORD)this[10] & 0x1001) != 0 )
      {
        v14 = *((_QWORD *)v6 + 62);
        if ( !v14 || _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 20), 0xFFFFFFFF) == 1 )
        {
          v15 = **((_QWORD **)v6 + 61);
          a2 = (struct _VIDMM_GLOBAL_ALLOC *)_InterlockedExchangeAdd64(
                                               (volatile signed __int64 *)(v15 + 48),
                                               -*((_QWORD *)v6 + 2));
          if ( (unsigned __int64)a2 < *((_QWORD *)v6 + 2) )
          {
            v16 = WdLogNewEntry5_WdAssertion(v15, a2);
            *(_QWORD *)(v16 + 24) = 1872LL;
            WdLogEvent5_WdAssertion(v16);
          }
        }
      }
    }
  }
  if ( a3 )
  {
    if ( ((_DWORD)this[10] & 0x1000) == 0 )
      VIDMM_LINEAR_POOL::Free(this[19], a3);
    v8 = this[28];
    if ( v8 < (VIDMM_GLOBAL *)((char *)v8 - a4) )
    {
      v17 = WdLogNewEntry5_WdAssertion(v8, a2);
      *(_QWORD *)(v17 + 24) = 1897LL;
      WdLogEvent5_WdAssertion(v17);
    }
    this[28] = (VIDMM_GLOBAL *)((char *)this[28] - a4);
    --*((_DWORD *)this + 81);
    v9 = (__int64)this[28];
    if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0pqx(
        v9,
        &TotalBytesResidentInSegment,
        (__int64)a3,
        *((_QWORD *)this[1] + 3),
        *((_DWORD *)this + 4) + 1,
        this[28]);
    if ( !v6 || (*((_DWORD *)v6 + 20) & 0x200) != 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v9);
        v18[3] = a4;
        v9 = (__int64)this[55];
        v18[4] = v9;
        v18[5] = v6;
      }
      this[55] = (VIDMM_GLOBAL *)((char *)this[55] - a4);
      if ( v6 )
        *((_DWORD *)v6 + 20) &= ~0x200u;
      *((_BYTE *)this + 448) = 0;
    }
    if ( *((_DWORD *)this + 92) != -1 && v6 && (*((_DWORD *)v6 + 19) & 0x200) == 0 )
    {
      v19 = (unsigned __int64)this[29];
      if ( v19 < v19 - a4 )
      {
        v20 = WdLogNewEntry5_WdAssertion(v9, a2);
        *(_QWORD *)(v20 + 24) = 1931LL;
        WdLogEvent5_WdAssertion(v20);
      }
      this[29] = (VIDMM_GLOBAL *)((char *)this[29] - a4);
      if ( v19 > qword_1C0040410 && (unsigned __int64)this[29] <= qword_1C0040410 )
        (*((void (__fastcall **)(_QWORD, _QWORD))this[1] + 5003))(
          *((_QWORD *)this[1] + 5009),
          *((unsigned int *)this + 92));
      if ( !this[29] )
        VIDMM_GLOBAL::NotifyMemorySegmentIdle(this[1], (struct VIDMM_SEGMENT *)this);
    }
    if ( ((_DWORD)this[10] & 0x1001) != 0 )
    {
      v10 = *((_QWORD *)v6 + 62);
      if ( !v10 || _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 16), 0xFFFFFFFF) == 1 )
      {
        v11 = **((_QWORD **)v6 + 61);
        v12 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 56), -a4);
        if ( v12 < a4 )
        {
          v21 = WdLogNewEntry5_WdAssertion(v11, v12);
          *(_QWORD *)(v21 + 24) = 1957LL;
          WdLogEvent5_WdAssertion(v21);
        }
      }
      *((_QWORD *)this[1] + 5019) -= a4;
    }
  }
  else
  {
    *((_DWORD *)v6 + 20) &= ~0x200u;
  }
}
