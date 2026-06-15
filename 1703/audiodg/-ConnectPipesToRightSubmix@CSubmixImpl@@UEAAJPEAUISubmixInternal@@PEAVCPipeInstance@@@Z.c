/*
 * XREFs of ?ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z @ 0x1400062A0
 * Callers:
 *     ?ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z @ 0x1400062A0 (-ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z.c)
 *     ?ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x1400067C0 (-ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z.c)
 * Callees:
 *     ?ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z @ 0x1400037B0 (-ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z.c)
 *     ?AddPipeToMixSplitConnection@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z @ 0x1400055E0 (-AddPipeToMixSplitConnection@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z @ 0x1400062A0 (-ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z.c)
 *     ?AddPipeToMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x140007130 (-AddPipeToMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140032784 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033EC4 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x14003EE9C (-ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z.c)
 *     ?ConnectToRightSubmix@CFormatConverterPipe@@QEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@_N@Z @ 0x140044FB8 (-ConnectToRightSubmix@CFormatConverterPipe@@QEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@_N@Z.c)
 */

__int64 __fastcall CSubmixImpl::ConnectPipesToRightSubmix(
        CSubmixImpl *this,
        struct ISubmixInternal *a2,
        struct CPipeInstance *a3)
{
  const struct CPipeInstance *v6; // rsi
  CPipeInstance *v7; // rcx
  __int64 (__fastcall *v8)(CSubmixImpl *__hidden, struct CPipeInstance *); // rax
  int v9; // eax
  unsigned int v10; // edi
  _QWORD *v11; // rbp
  _QWORD *v12; // rbx
  struct CPipeInstance *v14; // rdx
  CStreamInstance *v15; // rdi
  int v16; // eax
  unsigned int v17; // edi
  CSubmixImpl **v18; // rax
  CSubmixImpl *v19; // rcx
  __int64 (__fastcall *v20)(CSubmixImpl *__hidden, struct ISubmixInternal *, struct CPipeInstance *); // rax
  int v21; // eax
  unsigned int v22; // ebp
  int v23; // eax
  int v24; // eax
  unsigned int v25; // edi
  int v26; // eax
  unsigned int v27; // edi
  int v28; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v30; // [rsp+40h] [rbp+8h]

  if ( *((_QWORD *)this + 29) )
  {
    v23 = CFormatConverterPipe::ConnectToRightSubmix(
            (CSubmixImpl *)((char *)this + 232),
            a2,
            a3,
            *((_DWORD *)this + 54) == 2);
    v30 = v23;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x30A,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v23,
        v28);
      return v30;
    }
  }
  v6 = (const struct CPipeInstance *)*((_QWORD *)this + 29);
  if ( !v6 && a3 )
    v6 = a3;
  v7 = (CPipeInstance *)*((_QWORD *)this + 3);
  if ( v7 )
  {
    if ( v6 )
    {
      v24 = CPipeInstance::ConnectToRightPipe(v7, v6);
      v25 = v24;
      if ( v24 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x31A,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
          (const char *)(unsigned int)v24,
          v28);
        return v25;
      }
      v26 = (*(__int64 (__fastcall **)(struct ISubmixInternal *, _QWORD))(*(_QWORD *)a2 + 40LL))(
              a2,
              *((_QWORD *)this + 3));
      v27 = v26;
      if ( v26 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x31D,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
          (const char *)(unsigned int)v26,
          v28);
        return v27;
      }
    }
    else
    {
      v8 = *(__int64 (__fastcall **)(CSubmixImpl *__hidden, struct CPipeInstance *))(*(_QWORD *)a2 + 24LL);
      if ( v8 == CSystemAudioDeviceSharedBase::AddPipeToMixSplitConnection )
      {
        v9 = CSystemAudioDeviceSharedBase::AddPipeToMixSplitConnection(a2, *((struct CPipeInstance **)this + 3));
      }
      else
      {
        v14 = (struct CPipeInstance *)*((_QWORD *)this + 3);
        if ( v8 == CSubmixImpl::AddPipeToMixSplitConnection )
          v9 = CSubmixImpl::AddPipeToMixSplitConnection(a2, v14);
        else
          v9 = v8(a2, v14);
      }
      v10 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x322,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
          (const char *)(unsigned int)v9,
          v28);
        return v10;
      }
    }
    *((_BYTE *)this + 272) = 1;
  }
  v11 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v11 )
  {
    while ( 1 )
    {
      v15 = (CStreamInstance *)v11[2];
      v11 = (_QWORD *)*v11;
      (*(void (__fastcall **)(CSubmixImpl *))(*(_QWORD *)this + 64LL))(this);
      v16 = CStreamInstance::ConnectToRightSubmix(v15, a2, v6);
      v17 = v16;
      if ( v16 < 0 )
        break;
      if ( !v11 )
        goto LABEL_12;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x32E,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v16,
      v28);
    return v17;
  }
  else
  {
LABEL_12:
    v12 = (_QWORD *)*((_QWORD *)this + 10);
    if ( v12 )
    {
      while ( 1 )
      {
        v18 = (CSubmixImpl **)v12[2];
        v12 = (_QWORD *)*v12;
        v19 = *v18;
        v20 = *(__int64 (__fastcall **)(CSubmixImpl *__hidden, struct ISubmixInternal *, struct CPipeInstance *))(*(_QWORD *)*v18 + 144LL);
        v21 = v20 == CSubmixImpl::ConnectPipesToRightSubmix
            ? CSubmixImpl::ConnectPipesToRightSubmix(v19, a2, v6)
            : v20(v19, a2, v6);
        v22 = v21;
        if ( v21 < 0 )
          break;
        if ( !v12 )
          return 0LL;
      }
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x336,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v21,
        v28);
      return v22;
    }
    else
    {
      return 0LL;
    }
  }
}
