/*
 * XREFs of ?NotifyAllocationReclaimed@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z @ 0x1C006E410
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyMemorySegmentIdle@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C001F314 (-NotifyMemorySegmentIdle@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     Template_pqx @ 0x1C001FCC8 (Template_pqx.c)
 */

void __fastcall VIDMM_SEGMENT::NotifyAllocationReclaimed(VIDMM_SEGMENT *this, struct _VIDMM_GLOBAL_ALLOC *a2, int a3)
{
  char *v5; // rax
  __int64 v6; // rdx
  char **v7; // rcx
  char *v8; // rbx
  char **v9; // rcx
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  unsigned __int64 v12; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // [rsp+20h] [rbp-18h]

  if ( a3 )
  {
    v10 = *((_QWORD *)this + 31);
    if ( v10 < v10 - *((_QWORD *)a2 + 2) )
    {
      v11 = WdLogNewEntry5_WdAssertion(this, a2);
      *(_QWORD *)(v11 + 24) = 1944LL;
      WdLogEvent5_WdAssertion(v11);
    }
    *((_QWORD *)this + 31) -= *((_QWORD *)a2 + 2);
    --*((_DWORD *)this + 87);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      v16 = *((_DWORD *)this + 4) + 1;
      Template_pqx(
        v16,
        &TotalBytesResidentInSegment,
        v10,
        *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
        v16,
        *((_QWORD *)this + 31));
    }
    if ( *((_DWORD *)this + 98) != -1 && (*((_DWORD *)a2 + 19) & 0x200) == 0 )
    {
      v12 = *((_QWORD *)this + 32);
      if ( v12 < v12 - *((_QWORD *)a2 + 2) )
      {
        v13 = WdLogNewEntry5_WdAssertion(this, a2);
        *(_QWORD *)(v13 + 24) = 1958LL;
        WdLogEvent5_WdAssertion(v13);
      }
      *((_QWORD *)this + 32) -= *((_QWORD *)a2 + 2);
      if ( v12 > qword_1C003C3D8 && *((_QWORD *)this + 32) <= (unsigned __int64)qword_1C003C3D8 )
        (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)this + 1) + 40024LL))(
          *(_QWORD *)(*((_QWORD *)this + 1) + 40072LL),
          *((unsigned int *)this + 98));
      if ( !*((_QWORD *)this + 32) )
        VIDMM_GLOBAL::NotifyMemorySegmentIdle(*((VIDMM_GLOBAL **)this + 1), this);
    }
    if ( (*((_DWORD *)this + 20) & 0x1001) != 0 )
    {
      v14 = _InterlockedExchangeAdd64(
              (volatile signed __int64 *)&VIDMM_SEGMENT::_GlobalTotalBytesResidentInAperture,
              -*((_QWORD *)a2 + 2));
      if ( v14 < *((_QWORD *)a2 + 2) )
      {
        v15 = WdLogNewEntry5_WdAssertion(v14, a2);
        *(_QWORD *)(v15 + 24) = 1977LL;
        WdLogEvent5_WdAssertion(v15);
      }
      *(_QWORD *)(*((_QWORD *)this + 1) + 40152LL) -= *((_QWORD *)a2 + 2);
    }
  }
  v5 = (char *)a2 + 416;
  v6 = *((_QWORD *)a2 + 52);
  v7 = (char **)*((_QWORD *)a2 + 53);
  if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v6 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 416) || *v7 != v5 )
    __fastfail(3u);
  *v7 = (char *)v6;
  v8 = (char *)this + 216;
  *(_QWORD *)(v6 + 8) = v7;
  v9 = (char **)*((_QWORD *)v8 + 1);
  if ( *v9 != v8 )
    __fastfail(3u);
  *(_QWORD *)v5 = v8;
  *((_QWORD *)a2 + 53) = v9;
  *v9 = v5;
  *((_QWORD *)v8 + 1) = v5;
}
