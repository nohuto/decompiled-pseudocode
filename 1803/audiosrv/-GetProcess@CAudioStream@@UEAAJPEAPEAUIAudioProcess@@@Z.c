/*
 * XREFs of ?GetProcess@CAudioStream@@UEAAJPEAPEAUIAudioProcess@@@Z @ 0x18002F730
 * Callers:
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z @ 0x1800452B0 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z.c)
 *     ?StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x180048360 (-StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z.c)
 *     ?GetProcess@CAudioStream@@W7EAAJPEAPEAUIAudioProcess@@@Z @ 0x180065A70 (-GetProcess@CAudioStream@@W7EAAJPEAPEAUIAudioProcess@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::GetProcess(CAudioStream *this, struct IAudioProcess **a2)
{
  struct IAudioProcess *v2; // rcx

  v2 = (struct IAudioProcess *)*((_QWORD *)this + 9);
  *a2 = v2;
  (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v2 + 8LL))(v2);
  return 0LL;
}
