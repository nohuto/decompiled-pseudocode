/*
 * XREFs of ?AddPipeToMixSplitConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000F1A0
 * Callers:
 *     ?AddPipeToMixSplitConnection@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z @ 0x1400055E0 (-AddPipeToMixSplitConnection@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140004910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000EDF0 (-AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140032784 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::AddPipeToMixSplitConnection(CAudioDeviceGraph *this, struct CPipeInstance *a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  __int64 (__fastcall *v7)(CAudioDeviceGraph *, struct CPipeInstance *); // rax
  unsigned int v8; // eax
  unsigned int v9; // ebx
  __int64 v11; // r8
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v13; // [rsp+28h] [rbp-10h]

  v13 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 216);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = *(_QWORD *)(*((_QWORD *)this + 14) + 64LL);
  if ( !v4 )
    ATL::AtlThrowImpl(-2147467259);
  v5 = (_QWORD *)*((_QWORD *)a2 + 30);
  v6 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 8LL);
  while ( v5 )
  {
    v11 = v5[2];
    v5 = (_QWORD *)*v5;
    if ( *(_QWORD *)(v11 + 8) == -1LL )
      *(_QWORD *)(v11 + 8) = v6;
  }
  v7 = *(__int64 (__fastcall **)(CAudioDeviceGraph *, struct CPipeInstance *))(*(_QWORD *)this + 40LL);
  if ( v7 == CAudioDeviceGraph::AddPipe )
    v8 = CAudioDeviceGraph::AddPipe(this, a2);
  else
    v8 = v7(this, a2);
  v9 = v8;
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  return v9;
}
