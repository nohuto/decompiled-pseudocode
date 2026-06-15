/*
 * XREFs of HAUDIOEFFECTSWATCHER_rundown @ 0x18006FA70
 * Callers:
 *     <none>
 * Callees:
 *     s_afxCloseAudioEffectsWatcher @ 0x180009CC0 (s_afxCloseAudioEffectsWatcher.c)
 */

void __fastcall HAUDIOEFFECTSWATCHER_rundown(struct AudioEffectsWatcher **a1)
{
  struct AudioEffectsWatcher **v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1;
  s_afxCloseAudioEffectsWatcher(&v1);
}
