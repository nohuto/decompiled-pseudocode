/*
 * XREFs of _anonymous_namespace_::SendFramesReports @ 0x1800079D0
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::SendFramesReport @ 0x180005B04 (_anonymous_namespace_--SendFramesReport.c)
 *     std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Tidy @ 0x180008A5C (std--vector__anonymous_namespace_--FrameSequenceInfo_std--allocator__anonymous_name_ea_180008A5C.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall anonymous_namespace_::SendFramesReports(PTP_CALLBACK_INSTANCE Instance, PVOID Context, PTP_WORK Work)
{
  _QWORD *v3; // rbx
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  void *v8; // rax
  _QWORD *v9; // rdi
  DWORD CurrentThreadId; // eax
  _QWORD *v12; // rbx
  void *v13; // rcx
  void *v14; // rcx
  void *lpMem; // [rsp+48h] [rbp+20h] BYREF

  AcquireSRWLockExclusive(&SRWLock);
  dword_18026EE70 = GetCurrentThreadId();
  while ( 1 )
  {
    v3 = qword_180272758;
    if ( !*((_QWORD *)qword_180272758 + 10) )
      break;
    v4 = (__int64 *)*((_QWORD *)qword_180272758 + 6);
    v5 = 0LL;
    if ( v4 )
      v5 = *v4;
    v6 = *((_QWORD *)qword_180272758 + 9) & 1LL;
    v7 = *(_QWORD *)(*(_QWORD *)(v5 + 8) + 8 * ((*((_QWORD *)qword_180272758 + 9) >> 1) & (*(_QWORD *)(v5 + 16) - 1LL)));
    v8 = *(void **)(v7 + 8 * v6);
    *(_QWORD *)(v7 + 8 * v6) = 0LL;
    lpMem = v8;
    if ( v3[10] )
    {
      v9 = *(_QWORD **)(*(_QWORD *)(v3[7] + 8 * ((v3[8] - 1LL) & (v3[9] >> 1))) + 8 * (v3[9] & 1LL));
      if ( v9 )
      {
        v14 = (void *)v9[12];
        if ( v14 )
        {
          WPF::ProcessHeapImpl::Free(v14);
          v9[12] = 0LL;
          v9[13] = 0LL;
          v9[14] = 0LL;
        }
        std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Tidy(v9);
        WPF::ProcessHeapImpl::Free(v9);
      }
      if ( v3[10]-- == 1LL )
        v3[9] = 0LL;
      else
        ++v3[9];
    }
    dword_18026EE70 = 0;
    ReleaseSRWLockExclusive(&SRWLock);
    anonymous_namespace_::SendFramesReport((__int64 **)&lpMem);
    AcquireSRWLockExclusive(&SRWLock);
    CurrentThreadId = GetCurrentThreadId();
    v12 = lpMem;
    dword_18026EE70 = CurrentThreadId;
    if ( lpMem )
    {
      v13 = (void *)*((_QWORD *)lpMem + 12);
      if ( v13 )
      {
        WPF::ProcessHeapImpl::Free(v13);
        v12[12] = 0LL;
        v12[13] = 0LL;
        v12[14] = 0LL;
      }
      std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Tidy(v12);
      WPF::ProcessHeapImpl::Free(v12);
    }
  }
  byte_18026EB88 = 0;
  dword_18026EE70 = 0;
  ReleaseSRWLockExclusive(&SRWLock);
}
