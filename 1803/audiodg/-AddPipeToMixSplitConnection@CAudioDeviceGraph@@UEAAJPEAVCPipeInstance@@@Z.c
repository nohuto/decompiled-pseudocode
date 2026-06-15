/*
 * XREFs of ?AddPipeToMixSplitConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000DE60
 * Callers:
 *     ?AddPipeToMixSplitConnection@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z @ 0x140012770 (-AddPipeToMixSplitConnection@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?SetHandle@CConnectionInstance@@QEAAJ_K@Z @ 0x14000D3D0 (-SetHandle@CConnectionInstance@@QEAAJ_K@Z.c)
 *     ?AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000DBF0 (-AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140033DE8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14003A72C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::AddPipeToMixSplitConnection(CAudioDeviceGraph *this, struct CPipeInstance *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 (__fastcall *v9)(CAudioDeviceGraph *, struct CPipeInstance *); // rax
  unsigned int v10; // eax
  unsigned int v11; // ebx
  CConnectionInstance *v13; // rcx
  int v14; // eax
  int v15; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 248);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
  v5 = *(_QWORD *)(*((_QWORD *)this + 18) + 64LL);
  if ( !v5 )
    ATL::AtlThrowImpl(-2147467259);
  v6 = **(_QWORD **)(v5 + 16);
  if ( !v6 )
    ATL::AtlThrowImpl(-2147467259);
  v7 = *((_QWORD *)a2 + 31);
  v8 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 8LL);
  while ( v7 )
  {
    v13 = *(CConnectionInstance **)(v7 + 16);
    v7 = *(_QWORD *)(v7 + 8);
    if ( *((_QWORD *)v13 + 1) == -1LL )
    {
      v14 = CConnectionInstance::SetHandle(v13, v8);
      if ( v14 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x119A,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
          (const char *)(unsigned int)v14,
          v15);
    }
  }
  v9 = *(__int64 (__fastcall **)(CAudioDeviceGraph *, struct CPipeInstance *))(*(_QWORD *)this + 40LL);
  if ( v9 == CAudioDeviceGraph::AddPipe )
    v10 = CAudioDeviceGraph::AddPipe(this, a2);
  else
    v10 = v9(this, a2);
  v11 = v10;
  if ( v2 )
    LeaveCriticalSection(v2);
  return v11;
}
