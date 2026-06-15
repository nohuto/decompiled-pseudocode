/*
 * XREFs of ?AddPipeToLoopbackConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x140044EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140004910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?ResolvePendingConnections@CPipeInstance@@QEAAJ_KW4PIPE_CONNECTION_RESOLUTION_OPTIONS@@@Z @ 0x1400307D8 (-ResolvePendingConnections@CPipeInstance@@QEAAJ_KW4PIPE_CONNECTION_RESOLUTION_OPTIONS@@@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033EC4 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x14003EE9C (-ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z.c)
 *     ?GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ @ 0x14003F8C4 (-GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ.c)
 */

__int64 __fastcall CSubmixImpl::AddPipeToLoopbackConnection(CSubmixImpl *this, struct CPipeInstance *a2)
{
  CPipeInstance *v4; // rcx
  const struct CConnectionInstance *LoopbackConnection; // rax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  const struct CPipeInstance *v9; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v12; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 136);
  v12 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = (CPipeInstance *)*((_QWORD *)this + 3);
  if ( v4 )
  {
    LoopbackConnection = CPipeInstance::GetLoopbackConnection(v4);
    v6 = CPipeInstance::ResolvePendingConnections(a2, *((_QWORD *)LoopbackConnection + 1), 1);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 1133LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v8,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v6);
      goto LABEL_11;
    }
  }
  else
  {
    v9 = (const struct CPipeInstance *)*((_QWORD *)this + 29);
    if ( v9 )
    {
      v6 = CPipeInstance::ConnectToRightPipe(a2, v9);
      v7 = v6;
      if ( v6 < 0 )
      {
        v8 = 1137LL;
        goto LABEL_9;
      }
    }
  }
  v6 = (*(__int64 (__fastcall **)(CSubmixImpl *, struct CPipeInstance *))(*(_QWORD *)this + 40LL))(this, a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 1140LL;
    goto LABEL_9;
  }
  v7 = 0;
LABEL_11:
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  return v7;
}
