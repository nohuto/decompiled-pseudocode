/*
 * XREFs of ?ValidateStreamForStreamGroup@CBaseStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x18000A3D0
 * Callers:
 *     ?CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180007F30 (-CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR.c)
 *     ?CreateStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800A5880 (-CreateStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRI.c)
 * Callees:
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x180003C10 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?IsFormatSensitiveClient@CAudioStream@@UEAA_NXZ @ 0x180019DD0 (-IsFormatSensitiveClient@CAudioStream@@UEAA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004B548 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x18007B774 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::ValidateStreamForStreamGroup(
        CBaseStreamGroupProxy *this,
        struct IAudioStreamInfo *a2)
{
  bool (__fastcall *v3)(CAudioStream *__hidden); // rax
  bool IsFormatSensitiveClient; // al
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // edx
  const struct tWAVEFORMATEX *v11; // rbx
  const struct tWAVEFORMATEX *v12; // rax
  unsigned int v13; // edx
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  SaDeviceParams *v16; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(bool (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)a2 + 136LL);
  if ( v3 == CAudioStream::IsFormatSensitiveClient )
    IsFormatSensitiveClient = CAudioStream::IsFormatSensitiveClient(a2);
  else
    IsFormatSensitiveClient = v3(a2);
  if ( !IsFormatSensitiveClient )
    return 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)this + 240LL))(this) )
    return 0LL;
  v6 = *((_QWORD *)this + 10);
  if ( !v6 || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 152LL))(v6) )
    return 0LL;
  v7 = *((_QWORD *)this + 10);
  v16 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, SaDeviceParams **))(*(_QWORD *)v7 + 104LL))(v7, &v16);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v11 = (const struct tWAVEFORMATEX *)*((_QWORD *)v16 + 3);
    v12 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)this + 112LL))(this);
    if ( !(unsigned int)CompareWaveFormat(v11, v12) )
    {
      v9 = -2004287447;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x147,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)0x88890029LL,
        v14);
      goto LABEL_13;
    }
    if ( v16 )
      SaDeviceParams::`scalar deleting destructor'(v16, v13);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x146,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)v8,
    v14);
LABEL_13:
  if ( v16 )
    SaDeviceParams::`scalar deleting destructor'(v16, v10);
  return v9;
}
