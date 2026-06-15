/*
 * XREFs of ?AddPipeToMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x140007130
 * Callers:
 *     ?ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z @ 0x1400037B0 (-ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z.c)
 *     ?ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z @ 0x1400062A0 (-ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140004910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AddPipe@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x1400070C0 (-AddPipe@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x140009440 (-RemoveAll@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x14003045C (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140032784 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033EC4 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x14003EE9C (-ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z.c)
 */

__int64 __fastcall CSubmixImpl::AddPipeToMixSplitConnection(CSubmixImpl *this, struct CPipeInstance *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  _QWORD **v6; // rbx
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  _QWORD *v10; // rcx
  bool v11; // zf
  ATL::CAtlPlex *v12; // rcx
  __int64 (__fastcall *v13)(CSubmixImpl *, struct CPipeInstance *); // rax
  int v14; // eax
  unsigned int v15; // ebx
  const struct CPipeInstance *v17; // rdx
  int v18; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v20; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v20 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 136);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = *((_QWORD *)this + 3);
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 64);
    if ( !v5 )
      ATL::AtlThrowImpl(-2147467259);
    v6 = (_QWORD **)((char *)a2 + 240);
    v7 = (_QWORD *)*((_QWORD *)a2 + 30);
    v8 = *(_QWORD *)(*(_QWORD *)(v5 + 16) + 8LL);
    while ( v7 )
    {
      v9 = v7[2];
      v7 = (_QWORD *)*v7;
      if ( *(_QWORD *)(v9 + 8) == -1LL )
        *(_QWORD *)(v9 + 8) = v8;
    }
    while ( *((_QWORD *)a2 + 32) )
    {
      v10 = *v6;
      if ( !*v6 )
        ATL::AtlThrowImpl(-2147467259);
      *v6 = (_QWORD *)*v10;
      *v10 = *((_QWORD *)a2 + 34);
      v11 = (*((_QWORD *)a2 + 32))-- == 1LL;
      *((_QWORD *)a2 + 34) = v10;
      if ( v11 )
        ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::RemoveAll((char *)a2 + 240, v8);
    }
    v12 = (ATL::CAtlPlex *)*((_QWORD *)a2 + 33);
    *v6 = 0LL;
    *((_QWORD *)a2 + 31) = 0LL;
    *((_QWORD *)a2 + 34) = 0LL;
    if ( v12 )
    {
      ATL::CAtlPlex::FreeDataChain(v12);
      *((_QWORD *)a2 + 33) = 0LL;
    }
    goto LABEL_14;
  }
  v17 = (const struct CPipeInstance *)*((_QWORD *)this + 29);
  if ( !v17 || (v18 = CPipeInstance::ConnectToRightPipe(a2, v17), v15 = v18, v18 >= 0) )
  {
LABEL_14:
    v13 = *(__int64 (__fastcall **)(CSubmixImpl *, struct CPipeInstance *))(*(_QWORD *)this + 40LL);
    if ( v13 == CSubmixImpl::AddPipe )
      v14 = CSubmixImpl::AddPipe(this, a2);
    else
      v14 = v13(this, a2);
    v15 = v14;
    if ( v14 < 0 )
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x45D,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v14,
        (int)lpCriticalSection);
    else
      v15 = 0;
    goto LABEL_18;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x45A,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
    (const char *)(unsigned int)v18,
    (int)lpCriticalSection);
LABEL_18:
  if ( v20 )
    LeaveCriticalSection(lpCriticalSection);
  return v15;
}
