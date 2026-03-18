/*
 * XREFs of ?ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z @ 0x1C004ACF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyMemorySegmentIdle@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C001F314 (-NotifyMemorySegmentIdle@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     Template_pqx @ 0x1C001FCC8 (Template_pqx.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C004C1D4 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 *     ?DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAX_K@Z @ 0x1C0075D4C (-DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAX_K@Z.c)
 */

void __fastcall VIDMM_SEGMENT::ReleaseResource(
        VIDMM_GLOBAL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct _VIDMM_POOL_BLOCK *a3,
        __int64 a4)
{
  VIDMM_GLOBAL *v8; // rcx
  __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  _QWORD *v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax
  unsigned __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax

  if ( g_IsInternalReleaseOrDbg )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v11[3] = a2;
    v11[4] = a3;
    v11[5] = a4;
  }
  if ( a2 )
  {
    if ( *((_DWORD *)a2 + 32) != 1 )
    {
      VIDMM_SEGMENT::DecrementBytesCommitted((VIDMM_SEGMENT *)this, *((_QWORD *)a2 + 2));
      --*((_DWORD *)this + 86);
      if ( ((_DWORD)this[10] & 0x1001) != 0 )
      {
        v12 = _InterlockedExchangeAdd64(
                (volatile signed __int64 *)&VIDMM_SEGMENT::_GlobalTotalBytesCommittedInAperture,
                -*((_QWORD *)a2 + 2));
        if ( v12 < *((_QWORD *)a2 + 2) )
        {
          v13 = WdLogNewEntry5_WdAssertion(v12, a2);
          *(_QWORD *)(v13 + 24) = 1847LL;
          WdLogEvent5_WdAssertion(v13);
        }
      }
    }
  }
  if ( a3 )
  {
    if ( ((_DWORD)this[10] & 0x1000) == 0 )
      VIDMM_LINEAR_POOL::Free(this[22], a3);
    v8 = this[31];
    if ( v8 < (VIDMM_GLOBAL *)((char *)v8 - a4) )
    {
      v14 = WdLogNewEntry5_WdAssertion(v8, a2);
      *(_QWORD *)(v14 + 24) = 1871LL;
      WdLogEvent5_WdAssertion(v14);
    }
    this[31] = (VIDMM_GLOBAL *)((char *)this[31] - a4);
    --*((_DWORD *)this + 87);
    v9 = (__int64)this[31];
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_pqx(
        v9,
        &TotalBytesResidentInSegment,
        (__int64)a3,
        *((_QWORD *)this[1] + 3),
        *((_DWORD *)this + 4) + 1,
        this[31]);
    if ( !a2 || (*((_DWORD *)a2 + 20) & 0x200) != 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v9);
        v15[3] = a4;
        v9 = (__int64)this[58];
        v15[4] = v9;
        v15[5] = a2;
      }
      this[58] = (VIDMM_GLOBAL *)((char *)this[58] - a4);
      if ( a2 )
        *((_DWORD *)a2 + 20) &= ~0x200u;
      *((_BYTE *)this + 472) = 0;
    }
    if ( *((_DWORD *)this + 98) != -1 && a2 && (*((_DWORD *)a2 + 19) & 0x200) == 0 )
    {
      v16 = (unsigned __int64)this[32];
      if ( v16 < v16 - a4 )
      {
        v17 = WdLogNewEntry5_WdAssertion(v9, a2);
        *(_QWORD *)(v17 + 24) = 1905LL;
        WdLogEvent5_WdAssertion(v17);
      }
      this[32] = (VIDMM_GLOBAL *)((char *)this[32] - a4);
      if ( v16 > qword_1C003C3D8 && (unsigned __int64)this[32] <= qword_1C003C3D8 )
        (*((void (__fastcall **)(_QWORD, _QWORD))this[1] + 5003))(
          *((_QWORD *)this[1] + 5009),
          *((unsigned int *)this + 98));
      if ( !this[32] )
        VIDMM_GLOBAL::NotifyMemorySegmentIdle(this[1], (struct VIDMM_SEGMENT *)this);
    }
    if ( ((_DWORD)this[10] & 0x1001) != 0 )
    {
      v10 = _InterlockedExchangeAdd64(
              (volatile signed __int64 *)&VIDMM_SEGMENT::_GlobalTotalBytesResidentInAperture,
              -a4);
      if ( v10 < a4 )
      {
        v18 = WdLogNewEntry5_WdAssertion(v10, a2);
        *(_QWORD *)(v18 + 24) = 1928LL;
        WdLogEvent5_WdAssertion(v18);
      }
      *((_QWORD *)this[1] + 5019) -= a4;
    }
  }
  else
  {
    *((_DWORD *)a2 + 20) &= ~0x200u;
  }
}
