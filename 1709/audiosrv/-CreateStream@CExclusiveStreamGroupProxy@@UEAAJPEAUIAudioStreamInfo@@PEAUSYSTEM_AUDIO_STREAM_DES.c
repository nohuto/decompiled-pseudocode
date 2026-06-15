/*
 * XREFs of ?CreateStream@CExclusiveStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180092E70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddStream@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x180092A90 (-AddStream@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 */

__int64 __fastcall CExclusiveStreamGroupProxy::CreateStream(
        unsigned __int64 this,
        struct IAudioStreamInfo *a2,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a3,
        struct IAudioGraphCallback *a4,
        struct SYSTEM_AUDIO_STREAM *a5)
{
  int v9; // eax
  unsigned int v10; // ebp
  __int128 v12; // xmm0
  char *v13; // rsi
  __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // rcx
  signed __int64 v18; // rax
  signed __int64 v19; // rtt
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v9 = (*(__int64 (__fastcall **)(_QWORD, struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *, struct IAudioGraphCallback *, struct SYSTEM_AUDIO_STREAM *))(**(_QWORD **)(this + 80) + 24LL))(
         *(_QWORD *)(this + 80),
         a3,
         a4,
         a5);
  v10 = v9;
  if ( v9 >= 0 )
  {
    *(_OWORD *)(this + 272) = *(_OWORD *)a3;
    *(_OWORD *)(this + 288) = *((_OWORD *)a3 + 1);
    *(_OWORD *)(this + 304) = *((_OWORD *)a3 + 2);
    *(_OWORD *)(this + 320) = *((_OWORD *)a3 + 3);
    *(_OWORD *)(this + 336) = *((_OWORD *)a3 + 4);
    *(_OWORD *)(this + 352) = *((_OWORD *)a3 + 5);
    *(_OWORD *)(this + 368) = *((_OWORD *)a3 + 6);
    v12 = *((_OWORD *)a3 + 7);
    v13 = (char *)a3 + 128;
    *(_OWORD *)(this + 384) = v12;
    *(_OWORD *)(this + 400) = *(_OWORD *)v13;
    *(_OWORD *)(this + 416) = *((_OWORD *)v13 + 1);
    *(_OWORD *)(this + 432) = *((_OWORD *)v13 + 2);
    *(_OWORD *)(this + 448) = *((_OWORD *)v13 + 3);
    *(_OWORD *)(this + 464) = *((_OWORD *)v13 + 4);
    *(_QWORD *)(this + 480) = *((_QWORD *)v13 + 10);
    v14 = *(_QWORD *)(this + 40);
    *(_QWORD *)(this + 352) = v14;
    v15 = *(unsigned __int16 *)(v14 + 16);
    v16 = *(_QWORD *)(this + 48);
    *(_DWORD *)(this + 344) = v15 + 18;
    *(_QWORD *)(this + 376) = v16;
    if ( *(struct IAudioGraphCallback **)(this + 488) != a4 )
    {
      if ( a4 )
        (*(void (__fastcall **)(struct IAudioGraphCallback *))(*(_QWORD *)a4 + 8LL))(a4);
      v17 = *(_QWORD *)(this + 488);
      *(_QWORD *)(this + 488) = a4;
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    *((_QWORD *)a5 + 8) = this & -(__int64)(this != 8);
    v18 = *(_QWORD *)(this + 264);
    while ( v18 >= 0 )
    {
      v19 = v18;
      v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(this + 264), v18 + 1, v18);
      if ( v19 == v18 )
        goto LABEL_13;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v18 + 16));
LABEL_13:
    CBaseStreamGroupProxy::AddStream((const void **)this, a2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x5C5,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v9);
    return v10;
  }
}
