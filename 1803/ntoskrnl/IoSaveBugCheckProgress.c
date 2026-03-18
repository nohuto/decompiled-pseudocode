/*
 * XREFs of IoSaveBugCheckProgress @ 0x140233B00
 * Callers:
 *     IoWriteCrashDump @ 0x140233E8C (IoWriteCrashDump.c)
 *     KeBugCheck2 @ 0x1402429F0 (KeBugCheck2.c)
 *     KiDisplayBlueScreen @ 0x140243D14 (KiDisplayBlueScreen.c)
 *     BgpFwDisplayBugCheckScreen @ 0x1402C7278 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     IoUpdateBugCheckProgressEnvVariable @ 0x140233D9C (IoUpdateBugCheckProgressEnvVariable.c)
 */

__int64 __fastcall IoSaveBugCheckProgress(unsigned __int16 a1)
{
  int v1; // r8d
  __int64 result; // rax

  if ( CrashdmpDumpBlock )
  {
    v1 = *(_DWORD *)(CrashdmpDumpBlock + 1404);
    if ( (v1 & 0x60000) == 0 )
    {
      *(_DWORD *)(CrashdmpDumpBlock + 1404) = v1 ^ (a1 ^ (unsigned __int16)v1) & 0x1FF;
      return IoUpdateBugCheckProgressEnvVariable();
    }
  }
  return result;
}
