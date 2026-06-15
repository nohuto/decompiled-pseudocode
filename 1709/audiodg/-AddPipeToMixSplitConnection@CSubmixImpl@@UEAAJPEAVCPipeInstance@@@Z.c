/*
 * XREFs of ?AddPipeToMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x1400110C0
 * Callers:
 *     ?ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z @ 0x140001E70 (-ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z.c)
 *     ?ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z @ 0x140010340 (-ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140005A18 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x140005A34 (-RemoveAll@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXX.c)
 *     ?SetHandle@CConnectionInstance@@QEAAJ_K@Z @ 0x14000B4D0 (-SetHandle@CConnectionInstance@@QEAAJ_K@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010310 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AddPipe@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x140011050 (-AddPipe@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?ResolvePendingConnections@CPipeInstance@@QEAAJ_K0W4PIPE_CONNECTION_RESOLUTION_OPTIONS@@@Z @ 0x1400303E4 (-ResolvePendingConnections@CPipeInstance@@QEAAJ_K0W4PIPE_CONNECTION_RESOLUTION_OPTIONS@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031DE4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400336E4 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14003BD2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x14003F99C (-ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z.c)
 */

__int64 __fastcall CSubmixImpl::AddPipeToMixSplitConnection(CSubmixImpl *this, struct CPipeInstance *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 *v7; // rbx
  __int64 v8; // rbp
  CConnectionInstance *v9; // rcx
  _QWORD **v10; // r15
  __int64 *v11; // r14
  int v12; // eax
  __int64 v13; // rax
  _QWORD *v14; // rax
  bool v15; // zf
  _QWORD *v16; // rcx
  __int64 (__fastcall *v17)(CSubmixImpl *, struct CPipeInstance *); // rax
  int v18; // eax
  unsigned int v19; // ebx
  __int64 v21; // r8
  __int64 v22; // r8
  int v23; // eax
  const struct CPipeInstance *v24; // rdx
  int v25; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-28h] BYREF
  char v27; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v27 = 0;
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
    v7 = (__int64 *)*((_QWORD *)a2 + 31);
    v8 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 8LL);
    while ( v7 )
    {
      v9 = (CConnectionInstance *)v7[2];
      v10 = (_QWORD **)(v7 + 1);
      v11 = v7;
      v7 = (__int64 *)v7[1];
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
        v13 = *v11;
        if ( v11 == *((__int64 **)a2 + 30) )
          *((_QWORD *)a2 + 30) = v13;
        else
          **v10 = v13;
        v14 = *v10;
        if ( v11 == *((__int64 **)a2 + 31) )
          *((_QWORD *)a2 + 31) = v14;
        else
          *(_QWORD *)(*v11 + 8) = v14;
        *v11 = *((_QWORD *)a2 + 34);
        v15 = (*((_QWORD *)a2 + 32))-- == 1LL;
        *((_QWORD *)a2 + 34) = v11;
        if ( v15 )
          ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAll((__int64)a2 + 240);
      }
    }
    v16 = (_QWORD *)(*((_QWORD *)this + 3) + 64LL);
    if ( !*v16 )
      ATL::AtlThrowImpl(-2147467259);
    if ( *(_QWORD *)(*(_QWORD *)(*v16 + 16LL) + 16LL) == 2LL )
    {
      v21 = *(_QWORD *)(*(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead(v16) + 8LL);
      if ( !v21 )
        ATL::AtlThrowImpl(-2147467259);
      v22 = *(_QWORD *)(v21 + 16);
      if ( v22 )
      {
        v23 = CPipeInstance::ResolvePendingConnections(a2, -2LL, *(_QWORD *)(v22 + 8), 1LL);
        v19 = v23;
        if ( v23 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x46D,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
            (const char *)(unsigned int)v23,
            (int)lpCriticalSection);
          goto LABEL_21;
        }
      }
    }
LABEL_17:
    v17 = *(__int64 (__fastcall **)(CSubmixImpl *, struct CPipeInstance *))(*(_QWORD *)this + 40LL);
    if ( v17 == CSubmixImpl::AddPipe )
      v18 = CSubmixImpl::AddPipe(this, a2);
    else
      v18 = v17(this, a2);
    v19 = v18;
    if ( v18 < 0 )
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x475,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v18,
        (int)lpCriticalSection);
    else
      v19 = 0;
    goto LABEL_21;
  }
  v24 = (const struct CPipeInstance *)*((_QWORD *)this + 29);
  if ( !v24 )
    goto LABEL_17;
  v25 = CPipeInstance::ConnectToRightPipe(a2, v24);
  v19 = v25;
  if ( v25 >= 0 )
    goto LABEL_17;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x472,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
    (const char *)(unsigned int)v25,
    (int)lpCriticalSection);
LABEL_21:
  if ( v27 )
    LeaveCriticalSection(lpCriticalSection);
  return v19;
}
