/*
 * XREFs of ?WriteStreamInfo@AudioJournal@@AEAAJPEAUStreamInfo@1@@Z @ 0x180007770
 * Callers:
 *     ?ResetData@AudioJournal@@AEAAX_N@Z @ 0x1800077F0 (-ResetData@AudioJournal@@AEAAX_N@Z.c)
 *     ?Initialize@AudioJournal@@AEAAXXZ @ 0x18002A4E8 (-Initialize@AudioJournal@@AEAAXXZ.c)
 *     ?OnStopStream@AudioJournal@@QEAAJJPEAVCEndpointCharacteristics@@N@Z @ 0x1800993F8 (-OnStopStream@AudioJournal@@QEAAJJPEAVCEndpointCharacteristics@@N@Z.c)
 *     ?OnCreateStream@AudioJournal@@QEAAJJPEAVCEndpointCharacteristics@@@Z @ 0x1800DB928 (-OnCreateStream@AudioJournal@@QEAAJJPEAVCEndpointCharacteristics@@@Z.c)
 *     ?OnStartStream@AudioJournal@@QEAAJJPEAVCEndpointCharacteristics@@@Z @ 0x1800DBA5C (-OnStartStream@AudioJournal@@QEAAJJPEAVCEndpointCharacteristics@@@Z.c)
 * Callees:
 *     ?WriteValue@AudioJournal@@AEAAJPEBGKPEAEK@Z @ 0x180007694 (-WriteValue@AudioJournal@@AEAAJPEBGKPEAEK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AudioJournal::WriteStreamInfo(AudioJournal *this, struct AudioJournal::StreamInfo *a2)
{
  const unsigned __int16 *v2; // rax
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v6; // rdx
  unsigned int v7; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 == (AudioJournal *)((char *)this + 232) )
  {
    v2 = L"Render";
    v3 = 600LL;
  }
  else if ( a2 == (AudioJournal *)((char *)this + 832) )
  {
    v2 = L"Capture";
    v3 = 400LL;
  }
  else
  {
    if ( a2 != (AudioJournal *)((char *)this + 1232) )
    {
      v4 = -2147024809;
      v6 = 495LL;
      goto LABEL_11;
    }
    v2 = L"UnknownStream";
    v3 = 200LL;
  }
  v4 = AudioJournal::WriteValue((AudioJournal *)v3, v2, 3u, (unsigned __int8 *)a2, v3);
  if ( v4 >= 0 )
    return 0LL;
  v6 = 498LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
    (const char *)(unsigned int)v4,
    v7);
  return (unsigned int)v4;
}
