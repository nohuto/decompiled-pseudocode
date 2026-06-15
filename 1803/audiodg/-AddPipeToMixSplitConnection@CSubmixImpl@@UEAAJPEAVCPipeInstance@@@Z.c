/*
 * XREFs of ?AddPipeToMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x140005560
 * Callers:
 *     ?ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z @ 0x140003190 (-ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z.c)
 *     ?ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z @ 0x1400047E0 (-ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x140003790 (-RemoveAll@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@.c)
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140003800 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140003CF0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AddPipe@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x1400054F0 (-AddPipe@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?SetHandle@CConnectionInstance@@QEAAJ_K@Z @ 0x14000D3D0 (-SetHandle@CConnectionInstance@@QEAAJ_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?ResolvePendingConnections@CPipeInstance@@QEAAJ_K0W4PIPE_CONNECTION_RESOLUTION_OPTIONS@@@Z @ 0x14002F418 (-ResolvePendingConnections@CPipeInstance@@QEAAJ_K0W4PIPE_CONNECTION_RESOLUTION_OPTIONS@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140032528 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140033DE8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14003A72C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x14003D95C (-ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z.c)
 */

__int64 __fastcall CSubmixImpl::AddPipeToMixSplitConnection(CSubmixImpl *this, struct CPipeInstance *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // rbp
  CConnectionInstance *v9; // rcx
  __int64 **v10; // r15
  __int64 *v11; // r14
  int v12; // eax
  __int64 *v13; // rcx
  __int64 v14; // rdx
  __int64 *v15; // rdx
  bool v16; // zf
  _QWORD *v17; // rcx
  __int64 (__fastcall *v18)(CSubmixImpl *, struct CPipeInstance *); // rax
  int v19; // eax
  unsigned int v20; // ebx
  __int64 v22; // r8
  __int64 v23; // r8
  int v24; // eax
  const struct CPipeInstance *v25; // rdx
  int v26; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-28h] BYREF
  char v28; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v28 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 136);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = *((_QWORD *)this + 3);
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 64);
    if ( !v5 )
      ATL::AtlThrowImpl(-2147467259);
    v6 = **(_QWORD **)(v5 + 16);
    if ( !v6 )
      ATL::AtlThrowImpl(-2147467259);
    v7 = *((_QWORD *)a2 + 31);
    v8 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 8LL);
    while ( v7 )
    {
      v9 = *(CConnectionInstance **)(v7 + 16);
      v10 = (__int64 **)(v7 + 8);
      v11 = (__int64 *)v7;
      v7 = *(_QWORD *)(v7 + 8);
      if ( *((_QWORD *)v9 + 1) == -1LL )
      {
        v12 = CConnectionInstance::SetHandle(v9, v8);
        if ( v12 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x119A,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
            (const char *)(unsigned int)v12,
            (int)lpCriticalSection);
        v13 = (__int64 *)((char *)a2 + 240);
        v14 = *v11;
        if ( v11 == *((__int64 **)a2 + 30) )
          *v13 = v14;
        else
          **v10 = v14;
        v15 = *v10;
        if ( v11 == *((__int64 **)a2 + 31) )
          *((_QWORD *)a2 + 31) = v15;
        else
          *(_QWORD *)(*v11 + 8) = v15;
        *v11 = *((_QWORD *)a2 + 34);
        v16 = (*((_QWORD *)a2 + 32))-- == 1LL;
        *((_QWORD *)a2 + 34) = v11;
        if ( v16 )
          ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::RemoveAll(v13);
      }
    }
    v17 = (_QWORD *)(*((_QWORD *)this + 3) + 64LL);
    if ( !*v17 )
      ATL::AtlThrowImpl(-2147467259);
    if ( *(_QWORD *)(*(_QWORD *)(*v17 + 16LL) + 16LL) == 2LL )
    {
      v22 = *(_QWORD *)(*(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead(v17) + 8LL);
      if ( !v22 )
        ATL::AtlThrowImpl(-2147467259);
      v23 = *(_QWORD *)(v22 + 16);
      if ( v23 )
      {
        v24 = CPipeInstance::ResolvePendingConnections(a2, -2LL, *(_QWORD *)(v23 + 8), 1LL);
        v20 = v24;
        if ( v24 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x46E,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
            (const char *)(unsigned int)v24,
            (int)lpCriticalSection);
          goto LABEL_21;
        }
      }
    }
LABEL_17:
    v18 = *(__int64 (__fastcall **)(CSubmixImpl *, struct CPipeInstance *))(*(_QWORD *)this + 40LL);
    if ( v18 == CSubmixImpl::AddPipe )
      v19 = CSubmixImpl::AddPipe(this, a2);
    else
      v19 = v18(this, a2);
    v20 = v19;
    if ( v19 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x476,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v19,
        (int)lpCriticalSection);
    else
      v20 = 0;
    goto LABEL_21;
  }
  v25 = (const struct CPipeInstance *)*((_QWORD *)this + 29);
  if ( !v25 )
    goto LABEL_17;
  v26 = CPipeInstance::ConnectToRightPipe(a2, v25);
  v20 = v26;
  if ( v26 >= 0 )
    goto LABEL_17;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x473,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
    (const char *)(unsigned int)v26,
    (int)lpCriticalSection);
LABEL_21:
  if ( v28 )
    LeaveCriticalSection(lpCriticalSection);
  return v20;
}
