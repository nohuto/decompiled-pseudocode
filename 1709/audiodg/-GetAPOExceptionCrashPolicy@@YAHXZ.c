/*
 * XREFs of ?GetAPOExceptionCrashPolicy@@YAHXZ @ 0x1400486A8
 * Callers:
 *     ?APOProcess@CSystemEffectWrapper@@UEAAXIPEAPEAUAPO_CONNECTION_PROPERTY@@I0@Z @ 0x140048190 (-APOProcess@CSystemEffectWrapper@@UEAAXIPEAPEAUAPO_CONNECTION_PROPERTY@@I0@Z.c)
 *     ?AcceptInput@CSystemEffectWrapper@@UEAAXIPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x140048360 (-AcceptInput@CSystemEffectWrapper@@UEAAXIPEBUAPO_CONNECTION_PROPERTY@@@Z.c)
 *     ?CalcInputFrames@CSystemEffectWrapper@@UEAAII@Z @ 0x1400484E0 (-CalcInputFrames@CSystemEffectWrapper@@UEAAII@Z.c)
 *     ?CalcOutputFrames@CSystemEffectWrapper@@UEAAII@Z @ 0x140048590 (-CalcOutputFrames@CSystemEffectWrapper@@UEAAII@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 GetAPOExceptionCrashPolicy(void)
{
  DWORD v1; // [rsp+50h] [rbp+8h] BYREF
  int v2; // [rsp+58h] [rbp+10h] BYREF
  DWORD v3; // [rsp+60h] [rbp+18h] BYREF

  v1 = 4;
  return !RegGetValueW(
            HKEY_LOCAL_MACHINE,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
            L"PreventAudioDGCrashOrReportOnAPOException",
            0x18u,
            &v3,
            &v2,
            &v1)
      && v2;
}
