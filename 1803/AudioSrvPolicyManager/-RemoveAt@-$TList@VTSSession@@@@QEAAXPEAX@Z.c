/*
 * XREFs of ?RemoveAt@?$TList@VTSSession@@@@QEAAXPEAX@Z @ 0x1800279EC
 * Callers:
 *     ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z @ 0x180025D1C (-TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z.c)
 *     ?TsSessionIdDeleteNotify@@YAJKPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x180025F68 (-TsSessionIdDeleteNotify@@YAJKPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x1800264C4 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 *     TS_AudioProtocolNotifyRundown @ 0x1800276B0 (TS_AudioProtocolNotifyRundown.c)
 * Callees:
 *     <none>
 */

void __fastcall TList<TSSession>::RemoveAt(__int64 a1, _QWORD *a2)
{
  if ( a2 == qword_18004F0E8 )
    qword_18004F0E8 = (void *)*a2;
  else
    *(_QWORD *)a2[1] = *a2;
  if ( a2 == (_QWORD *)qword_18004F0F0 )
    qword_18004F0F0 = a2[1];
  else
    *(_QWORD *)(*a2 + 8LL) = a2[1];
  --dword_18004F0F8;
  *a2 = 0LL;
  a2[1] = 0LL;
  operator delete(a2, (const struct std::nothrow_t *)0x18);
}
