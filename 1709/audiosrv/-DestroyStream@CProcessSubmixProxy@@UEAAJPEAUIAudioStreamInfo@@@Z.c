/*
 * XREFs of ?DestroyStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800121F0
 * Callers:
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z @ 0x18000F710 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ?RemoveStream@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x180011FE4 (-RemoveStream@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?IsLazyPeriodicityClient@CAudioStream@@UEAA_NXZ @ 0x18001D340 (-IsLazyPeriodicityClient@CAudioStream@@UEAA_NXZ.c)
 *     ?IsFormatSensitiveClient@CAudioStream@@UEAA_NXZ @ 0x18001D350 (-IsFormatSensitiveClient@CAudioStream@@UEAA_NXZ.c)
 *     ?IsStrictPeriodicityClient@CAudioStream@@UEAA_NXZ @ 0x18001D360 (-IsStrictPeriodicityClient@CAudioStream@@UEAA_NXZ.c)
 *     ?GetType@CAudioStream@@UEAA?AW4SYSTEM_AUDIO_STREAM_TYPE@@XZ @ 0x18001D380 (-GetType@CAudioStream@@UEAA-AW4SYSTEM_AUDIO_STREAM_TYPE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateCountOfFormatSensitiveClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x180094FB4 (-UpdateCountOfFormatSensitiveClients@CProcessSubmixProxy@@IEAAXH@Z.c)
 *     ?UpdateCountOfLazyRequestClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x18009503C (-UpdateCountOfLazyRequestClients@CProcessSubmixProxy@@IEAAXH@Z.c)
 *     ?UpdateCountOfPeriodicitySensitiveClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x1800950C0 (-UpdateCountOfPeriodicitySensitiveClients@CProcessSubmixProxy@@IEAAXH@Z.c)
 */

__int64 __fastcall CProcessSubmixProxy::DestroyStream(CProcessSubmixProxy *this, struct IAudioStreamInfo *a2)
{
  __int64 *v2; // rdi
  __int64 v5; // rbx
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  bool (__fastcall *v9)(CAudioStream *__hidden); // rax
  bool IsStrictPeriodicityClient; // al
  bool (__fastcall *v11)(CAudioStream *__hidden); // rax
  bool IsFormatSensitiveClient; // al
  bool (__fastcall *v13)(CAudioStream *__hidden); // rax
  bool IsLazyPeriodicityClient; // al
  __int64 (__fastcall *v15)(struct IAudioStreamInfo *); // rax
  int Type; // eax
  int v18; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (__int64 *)*((_QWORD *)this + 5);
  v5 = *v2;
  v6 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 40LL))(a2);
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v5 + 32))(v2, v6);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xABB,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v7,
      v18);
    return v8;
  }
  else
  {
    v9 = *(bool (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)a2 + 136LL);
    if ( v9 == CAudioStream::IsStrictPeriodicityClient )
      IsStrictPeriodicityClient = CAudioStream::IsStrictPeriodicityClient(a2);
    else
      IsStrictPeriodicityClient = v9(a2);
    if ( IsStrictPeriodicityClient )
      CProcessSubmixProxy::UpdateCountOfPeriodicitySensitiveClients((CProcessSubmixProxy *)((char *)this - 8), -1);
    v11 = *(bool (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)a2 + 144LL);
    if ( v11 == CAudioStream::IsFormatSensitiveClient )
      IsFormatSensitiveClient = CAudioStream::IsFormatSensitiveClient(a2);
    else
      IsFormatSensitiveClient = v11(a2);
    if ( IsFormatSensitiveClient )
      CProcessSubmixProxy::UpdateCountOfFormatSensitiveClients((CProcessSubmixProxy *)((char *)this - 8), -1);
    v13 = *(bool (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)a2 + 152LL);
    if ( v13 == CAudioStream::IsLazyPeriodicityClient )
      IsLazyPeriodicityClient = CAudioStream::IsLazyPeriodicityClient(a2);
    else
      IsLazyPeriodicityClient = v13(a2);
    if ( IsLazyPeriodicityClient )
      CProcessSubmixProxy::UpdateCountOfLazyRequestClients((CProcessSubmixProxy *)((char *)this - 8), -1);
    v15 = *(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 56LL);
    if ( (char *)v15 == (char *)CAudioStream::GetType )
      Type = CAudioStream::GetType(a2);
    else
      Type = v15(a2);
    if ( Type != 2 )
      --*((_DWORD *)this + 28);
    CProcessSubmixProxy::RemoveStream((CProcessSubmixProxy *)((char *)this - 8), a2);
    return 0LL;
  }
}
