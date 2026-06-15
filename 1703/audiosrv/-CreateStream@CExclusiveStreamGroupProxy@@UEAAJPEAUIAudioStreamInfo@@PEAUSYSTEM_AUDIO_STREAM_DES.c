/*
 * XREFs of ?CreateStream@CExclusiveStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800A5690
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CExclusiveStreamGroupProxy::CreateStream(
        unsigned __int64 this,
        struct IAudioStreamInfo *a2,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a3,
        struct IAudioGraphCallback *a4,
        struct SYSTEM_AUDIO_STREAM *a5)
{
  int v8; // ebp
  __int128 v9; // xmm0
  _OWORD *v10; // rsi
  __int64 v11; // rax
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rcx
  signed __int64 v15; // rax
  signed __int64 v16; // rtt

  v8 = (*(__int64 (__fastcall **)(_QWORD, struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *, struct IAudioGraphCallback *, struct SYSTEM_AUDIO_STREAM *))(**(_QWORD **)(this + 72) + 24LL))(
         *(_QWORD *)(this + 72),
         a3,
         a4,
         a5);
  if ( v8 < 0 )
  {
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x13u,
        (__int64)&WPP_86de0deb8f5c3ae12a21c62c09dd18cb_Traceguids,
        v8);
    }
  }
  else
  {
    *(_OWORD *)(this + 240) = *(_OWORD *)a3;
    *(_OWORD *)(this + 256) = *((_OWORD *)a3 + 1);
    *(_OWORD *)(this + 272) = *((_OWORD *)a3 + 2);
    *(_OWORD *)(this + 288) = *((_OWORD *)a3 + 3);
    *(_OWORD *)(this + 304) = *((_OWORD *)a3 + 4);
    *(_OWORD *)(this + 320) = *((_OWORD *)a3 + 5);
    *(_OWORD *)(this + 336) = *((_OWORD *)a3 + 6);
    v9 = *((_OWORD *)a3 + 7);
    v10 = (_OWORD *)((char *)a3 + 128);
    v11 = *(_QWORD *)(this + 32);
    *(_OWORD *)(this + 352) = v9;
    *(_OWORD *)(this + 368) = *v10;
    *(_OWORD *)(this + 384) = v10[1];
    *(_OWORD *)(this + 400) = v10[2];
    *(_OWORD *)(this + 416) = v10[3];
    *(_OWORD *)(this + 432) = v10[4];
    *(_QWORD *)(this + 320) = v11;
    v12 = *(unsigned __int16 *)(v11 + 16);
    v13 = *(_QWORD *)(this + 40);
    *(_DWORD *)(this + 312) = v12 + 18;
    *(_QWORD *)(this + 344) = v13;
    if ( *(struct IAudioGraphCallback **)(this + 448) != a4 )
    {
      if ( a4 )
        (*(void (__fastcall **)(struct IAudioGraphCallback *))(*(_QWORD *)a4 + 8LL))(a4);
      v14 = *(_QWORD *)(this + 448);
      *(_QWORD *)(this + 448) = a4;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    *((_QWORD *)a5 + 8) = this & -(__int64)(this != 8);
    v15 = *(_QWORD *)(this - 8 + 240);
    while ( v15 >= 0 )
    {
      v16 = v15;
      v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(this - 8 + 240), v15 + 1, v15);
      if ( v16 == v15 )
        goto LABEL_12;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v15 + 16));
LABEL_12:
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x14u, (__int64)&WPP_86de0deb8f5c3ae12a21c62c09dd18cb_Traceguids);
    }
  }
  return (unsigned int)v8;
}
