/*
 * XREFs of ??1CChannel@@AEAA@XZ @ 0x180138C30
 * Callers:
 *     ?Release@CChannel@@UEAAKXZ @ 0x180082FB0 (-Release@CChannel@@UEAAKXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z @ 0x1800B01A4 (--$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z.c)
 *     ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x180133304 (--_GCCommandBatch@@QEAAPEAXI@Z.c)
 */

void __fastcall CChannel::~CChannel(CChannel *this)
{
  void *v2; // rcx
  __int64 **v3; // rdi
  __int64 *v4; // rcx
  __int64 v5; // rax
  void **v6; // rcx
  void *v7; // rcx

  *(_QWORD *)this = &CChannel::`vftable';
  ReleaseInterface<CConnection>((CMILRefCountBase **)this + 6);
  v2 = (void *)*((_QWORD *)this + 10);
  if ( v2 )
    CloseHandle(v2);
  v3 = (__int64 **)((char *)this + 64);
  while ( *v3 != (__int64 *)v3 )
  {
    v4 = *v3;
    v5 = **v3;
    if ( (__int64 **)(*v3)[1] != v3 || *(__int64 **)(v5 + 8) != v4 )
      __fastfail(3u);
    *v3 = (__int64 *)v5;
    *(_QWORD *)(v5 + 8) = v3;
    WPF::ProcessHeapImpl::Free(v4);
  }
  v6 = (void **)*((_QWORD *)this + 20);
  if ( v6 )
    CCommandBatch::`scalar deleting destructor'(v6);
  *((_QWORD *)this + 20) = 0LL;
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  v7 = (void *)*((_QWORD *)this + 5);
  *((_QWORD *)this + 2) = &HANDLE_TABLE::`vftable';
  WPF::ProcessHeapImpl::Free(v7);
}
