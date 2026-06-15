/*
 * XREFs of ?ValidateStreamForStreamGroup@CBaseStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x18001EDA0
 * Callers:
 *     ?CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001CEE0 (-CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR.c)
 *     ?CreateStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800C8EF0 (-CreateStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x180097CB0 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x1800C8550 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::ValidateStreamForStreamGroup(
        CBaseStreamGroupProxy *this,
        struct IAudioStreamInfo *a2)
{
  bool (__fastcall *v3)(CAudioStream *__hidden); // rax
  char v4; // al
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // r9
  __int64 v11; // rdx
  const struct tWAVEFORMATEX *v12; // rbx
  const struct tWAVEFORMATEX *v13; // rax
  unsigned int v14; // edx
  unsigned int v15; // edx
  int v16; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  SaDeviceParams *v18; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(bool (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)a2 + 144LL);
  if ( v3 == CAudioStream::IsFormatSensitiveClient )
    v4 = *((_BYTE *)a2 + 556);
  else
    v4 = v3(a2);
  if ( !v4 )
    return 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)this + 232LL))(this) )
    return 0LL;
  v6 = *((_QWORD *)this + 11);
  if ( !v6 || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 152LL))(v6) )
    return 0LL;
  v7 = *((_QWORD *)this + 11);
  v18 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, SaDeviceParams **))(*(_QWORD *)v7 + 104LL))(v7, &v18);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v12 = (const struct tWAVEFORMATEX *)*((_QWORD *)v18 + 3);
    v13 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)this + 112LL))(this);
    if ( !(unsigned int)CompareWaveFormat(v12, v13) )
    {
      v9 = -2004287447;
      v11 = 311LL;
      v10 = 2290679849LL;
      goto LABEL_13;
    }
    if ( v18 )
      SaDeviceParams::`scalar deleting destructor'(v18, v14);
    return 0LL;
  }
  v10 = (unsigned int)v8;
  v11 = 310LL;
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)v10,
    v16);
  if ( v18 )
    SaDeviceParams::`scalar deleting destructor'(v18, v15);
  return v9;
}
