/*
 * XREFs of ?ResetData@AudioJournal@@AEAAX_N@Z @ 0x1800077F0
 * Callers:
 *     ?CheckAndLogTelemetry@AudioJournal@@AEAAXXZ @ 0x18002A440 (-CheckAndLogTelemetry@AudioJournal@@AEAAXXZ.c)
 *     ?Initialize@AudioJournal@@AEAAXXZ @ 0x18002A4E8 (-Initialize@AudioJournal@@AEAAXXZ.c)
 * Callees:
 *     ?WriteValue@AudioJournal@@AEAAJPEBGKPEAEK@Z @ 0x180007694 (-WriteValue@AudioJournal@@AEAAJPEBGKPEAEK@Z.c)
 *     ?WriteStreamInfo@AudioJournal@@AEAAJPEAUStreamInfo@1@@Z @ 0x180007770 (-WriteStreamInfo@AudioJournal@@AEAAJPEAUStreamInfo@1@@Z.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 */

void __fastcall AudioJournal::ResetData(AudioJournal *this, char a2)
{
  struct AudioJournal::StreamInfo *v2; // rsi
  AudioJournal *v5; // rcx
  AudioJournal *v6; // rcx
  struct _FILETIME SystemTimeAsFileTime; // [rsp+60h] [rbp+8h] BYREF
  int v8; // [rsp+68h] [rbp+10h] BYREF

  v2 = (AudioJournal *)((char *)this + 232);
  memset_0((char *)this + 232, 0, 0x258uLL);
  memset_0((char *)this + 832, 0, 0x190uLL);
  memset_0((char *)this + 1232, 0, 0xC8uLL);
  *((_DWORD *)this + 344) = 100;
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  *((struct _FILETIME *)this + 28) = SystemTimeAsFileTime;
  if ( a2 )
  {
    v8 = 1;
    AudioJournal::WriteValue(v5, L"Version", 4u, (unsigned __int8 *)&v8, 4u);
    AudioJournal::WriteValue(v6, L"LastLogTime", 0xBu, (unsigned __int8 *)this + 224, 8u);
    AudioJournal::WriteStreamInfo(this, v2);
    AudioJournal::WriteStreamInfo(this, (AudioJournal *)((char *)this + 832));
    AudioJournal::WriteStreamInfo(this, (AudioJournal *)((char *)this + 1232));
  }
}
