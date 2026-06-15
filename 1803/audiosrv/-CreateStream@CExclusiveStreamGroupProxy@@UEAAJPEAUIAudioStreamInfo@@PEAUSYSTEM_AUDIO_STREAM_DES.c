/*
 * XREFs of ?CreateStream@CExclusiveStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800C8D20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x180063948 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?AddStream@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM@@K@Z @ 0x1800C83D4 (-AddStream@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM@@K@Z.c)
 */

__int64 __fastcall CExclusiveStreamGroupProxy::CreateStream(
        unsigned __int64 this,
        struct IAudioStreamInfo *a2,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a3,
        struct IAudioGraphCallback *a4,
        unsigned int a5,
        struct SYSTEM_AUDIO_STREAM *a6)
{
  int v10; // eax
  volatile int *v11; // rdx
  unsigned int v12; // ebp
  __int128 v14; // xmm0
  char *v15; // rsi
  __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // rax
  struct IAudioGraphCallback *v19; // rcx
  signed __int64 v20; // rax
  signed __int64 v21; // rtt
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v10 = (*(__int64 (__fastcall **)(_QWORD, struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *, struct IAudioGraphCallback *, struct SYSTEM_AUDIO_STREAM *))(**(_QWORD **)(this + 80) + 24LL))(
          *(_QWORD *)(this + 80),
          a3,
          a4,
          a6);
  v12 = v10;
  if ( v10 >= 0 )
  {
    *(_OWORD *)(this + 272) = *(_OWORD *)a3;
    *(_OWORD *)(this + 288) = *((_OWORD *)a3 + 1);
    *(_OWORD *)(this + 304) = *((_OWORD *)a3 + 2);
    *(_OWORD *)(this + 320) = *((_OWORD *)a3 + 3);
    *(_OWORD *)(this + 336) = *((_OWORD *)a3 + 4);
    *(_OWORD *)(this + 352) = *((_OWORD *)a3 + 5);
    *(_OWORD *)(this + 368) = *((_OWORD *)a3 + 6);
    v14 = *((_OWORD *)a3 + 7);
    v15 = (char *)a3 + 128;
    *(_OWORD *)(this + 384) = v14;
    *(_OWORD *)(this + 400) = *(_OWORD *)v15;
    *(_OWORD *)(this + 416) = *((_OWORD *)v15 + 1);
    *(_OWORD *)(this + 432) = *((_OWORD *)v15 + 2);
    *(_OWORD *)(this + 448) = *((_OWORD *)v15 + 3);
    *(_OWORD *)(this + 464) = *((_OWORD *)v15 + 4);
    *(_QWORD *)(this + 480) = *((_QWORD *)v15 + 10);
    v16 = *(_QWORD *)(this + 40);
    *(_QWORD *)(this + 352) = v16;
    v17 = *(unsigned __int16 *)(v16 + 16);
    v18 = *(_QWORD *)(this + 48);
    *(_DWORD *)(this + 344) = v17 + 18;
    *(_QWORD *)(this + 376) = v18;
    v19 = *(struct IAudioGraphCallback **)(this + 488);
    if ( v19 != a4 )
    {
      if ( a4 )
      {
        (*(void (__fastcall **)(struct IAudioGraphCallback *))(*(_QWORD *)a4 + 8LL))(a4);
        v19 = *(struct IAudioGraphCallback **)(this + 488);
      }
      *(_QWORD *)(this + 488) = a4;
      if ( v19 )
        (*(void (__fastcall **)(struct IAudioGraphCallback *))(*(_QWORD *)v19 + 16LL))(v19);
    }
    *((_QWORD *)a6 + 8) = this & -(__int64)(this != 8);
    v20 = *(_QWORD *)(this + 264);
    while ( v20 >= 0 )
    {
      if ( (_DWORD)v20 != 0x7FFFFFFF )
      {
        v21 = v20;
        v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(this + 264), v20 + 1, v20);
        if ( v21 != v20 )
          continue;
      }
      goto LABEL_14;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details *)(2 * v20 + 16), v11);
LABEL_14:
    CBaseStreamGroupProxy::AddStream((CBaseStreamGroupProxy *)this, a2, a6, a5);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5C7,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v10);
    return v12;
  }
}
