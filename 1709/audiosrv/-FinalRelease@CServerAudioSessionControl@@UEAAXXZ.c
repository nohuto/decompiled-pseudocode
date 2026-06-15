/*
 * XREFs of ?FinalRelease@CServerAudioSessionControl@@UEAAXXZ @ 0x180017030
 * Callers:
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x180016D70 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 * Callees:
 *     WPP_SF_S @ 0x180064B48 (WPP_SF_S.c)
 */

void __fastcall CServerAudioSessionControl::FinalRelease(CServerAudioSessionControl *this)
{
  void (*v2)(void); // rax

  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_f31bef8187753e0293a3e215cbf500b3_Traceguids, 0LL);
  }
  v2 = *(void (**)(void))(*((_QWORD *)this - 1) + 104LL);
  if ( (char *)v2 == (char *)CServerAudioSessionControl::Dispose )
    CServerAudioSessionControl::Dispose((CServerAudioSessionControl *)((char *)this - 8));
  else
    v2();
}
