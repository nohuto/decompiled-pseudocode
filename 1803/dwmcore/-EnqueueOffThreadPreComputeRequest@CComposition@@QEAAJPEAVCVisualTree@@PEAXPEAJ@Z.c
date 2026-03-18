/*
 * XREFs of ?EnqueueOffThreadPreComputeRequest@CComposition@@QEAAJPEAVCVisualTree@@PEAXPEAJ@Z @ 0x1800D9CB8
 * Callers:
 *     ?PreComputeAndLockForRead@CVisualTree@@QEAAJXZ @ 0x1800410E4 (-PreComputeAndLockForRead@CVisualTree@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::EnqueueOffThreadPreComputeRequest(
        CComposition *this,
        struct _SLIST_ENTRY *a2,
        void *a3,
        struct _SLIST_ENTRY *a4)
{
  unsigned int v4; // ebx
  struct _SLIST_ENTRY *v9; // rax
  struct _SLIST_ENTRY *v10; // rdi

  v4 = 0;
  if ( *((_BYTE *)this + 1348) )
  {
    v4 = -2147467260;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147467260, 0xC04u);
  }
  else
  {
    v9 = (struct _SLIST_ENTRY *)HeapAlloc(WPF::g_processHeap, 0, 0x30uLL);
    v10 = v9;
    if ( v9 )
      memset_0(v9, 0, 0x30uLL);
    else
      v10 = 0LL;
    if ( v10 )
    {
      v10[1].Next = a2;
      *((_QWORD *)&v10[1].Next + 1) = a3;
      v10[2].Next = a4;
      if ( !InterlockedPushEntrySList((PSLIST_HEADER)this + 83, v10) )
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 69) + 104LL))(
          *((_QWORD *)this + 69),
          0LL,
          0x100000LL);
    }
    else
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xC08u);
    }
  }
  return v4;
}
