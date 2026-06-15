/*
 * XREFs of ?ValidateStreamForStreamGroup@CBaseStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x18000DC00
 * Callers:
 *     ?CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180012310 (-CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR.c)
 *     ?CreateStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180093020 (-CreateStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRI.c)
 * Callees:
 *     ?IsFormatSensitiveClient@CAudioStream@@UEAA_NXZ @ 0x18001D350 (-IsFormatSensitiveClient@CAudioStream@@UEAA_NXZ.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x18002F298 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
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
  unsigned int v9; // edi
  const struct tWAVEFORMATEX *v10; // rbx
  const struct tWAVEFORMATEX *v11; // rax
  void *v12; // rbx
  void *v13; // rbx
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v16; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(bool (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)a2 + 144LL);
  if ( v3 == CAudioStream::IsFormatSensitiveClient )
    IsFormatSensitiveClient = CAudioStream::IsFormatSensitiveClient(a2);
  else
    IsFormatSensitiveClient = v3(a2);
  if ( !IsFormatSensitiveClient )
    return 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)this + 232LL))(this) )
    return 0LL;
  v6 = *((_QWORD *)this + 11);
  if ( !v6 || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 152LL))(v6) )
    return 0LL;
  v7 = *((_QWORD *)this + 11);
  v16 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v7 + 104LL))(v7, &v16);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = (const struct tWAVEFORMATEX *)*((_QWORD *)v16 + 3);
    v11 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)this + 112LL))(this);
    if ( !(unsigned int)CompareWaveFormat(v10, v11) )
    {
      v9 = -2004287447;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x13D,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)0x88890029LL,
        v14);
      goto LABEL_13;
    }
    v13 = v16;
    if ( v16 )
    {
      CoTaskMemFree(*((LPVOID *)v16 + 3));
      *((_QWORD *)v13 + 3) = 0LL;
      CoTaskMemFree(*((LPVOID *)v13 + 2));
      *((_QWORD *)v13 + 2) = 0LL;
      CoTaskMemFree(*(LPVOID *)v13);
      *(_QWORD *)v13 = 0LL;
      operator delete(v13, (const struct std::nothrow_t *)0x68);
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x13C,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)v8,
    v14);
LABEL_13:
  v12 = v16;
  if ( v16 )
  {
    CoTaskMemFree(*((LPVOID *)v16 + 3));
    *((_QWORD *)v12 + 3) = 0LL;
    CoTaskMemFree(*((LPVOID *)v12 + 2));
    *((_QWORD *)v12 + 2) = 0LL;
    CoTaskMemFree(*(LPVOID *)v12);
    *(_QWORD *)v12 = 0LL;
    operator delete(v12, (const struct std::nothrow_t *)0x68);
  }
  return v9;
}
