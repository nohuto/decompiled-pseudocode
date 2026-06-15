/*
 * XREFs of ?AddPipeToMixSplitConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000C080
 * Callers:
 *     ?AddPipeToMixSplitConnection@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000F780 (-AddPipeToMixSplitConnection@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?SetHandle@CConnectionInstance@@QEAAJ_K@Z @ 0x14000B4D0 (-SetHandle@CConnectionInstance@@QEAAJ_K@Z.c)
 *     ?AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000BDA0 (-AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010310 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031DE4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14003BD2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::AddPipeToMixSplitConnection(CAudioDeviceGraph *this, struct CPipeInstance *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 (__fastcall *v8)(CAudioDeviceGraph *, struct CPipeInstance *); // rax
  unsigned int v9; // eax
  unsigned int v10; // ebx
  CConnectionInstance *v12; // rcx
  int v13; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v15; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v15 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 216);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v4 = *(_QWORD *)(*((_QWORD *)this + 14) + 64LL);
  if ( !v4 )
    ATL::AtlThrowImpl(-2147467259);
  v5 = **(_QWORD **)(v4 + 16);
  if ( !v5 )
    ATL::AtlThrowImpl(-2147467259);
  v6 = *((_QWORD *)a2 + 31);
  v7 = *(_QWORD *)(*(_QWORD *)(v5 + 16) + 8LL);
  while ( v6 )
  {
    v12 = *(CConnectionInstance **)(v6 + 16);
    v6 = *(_QWORD *)(v6 + 8);
    if ( *((_QWORD *)v12 + 1) == -1LL )
    {
      v13 = CConnectionInstance::SetHandle(v12, v7);
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x119A,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
          (const char *)(unsigned int)v13,
          (int)lpCriticalSection);
    }
  }
  v8 = *(__int64 (__fastcall **)(CAudioDeviceGraph *, struct CPipeInstance *))(*(_QWORD *)this + 40LL);
  if ( v8 == CAudioDeviceGraph::AddPipe )
    v9 = CAudioDeviceGraph::AddPipe(this, a2);
  else
    v9 = v8(this, a2);
  v10 = v9;
  if ( v15 )
    LeaveCriticalSection(lpCriticalSection);
  return v10;
}
