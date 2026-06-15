/*
 * XREFs of ?GetAppSubmixClientContext@CProcessSubmixManager@@UEAAJPEBGPEAUIAudioProcess@@PEAPEAVCAppSubmixClient@@@Z @ 0x18009F580
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIAudioProcess@@PEAPEAVCAppSubmixClient@@@Z @ 0x18009F5E4 (-GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIA.c)
 */

__int64 __fastcall CProcessSubmixManager::GetAppSubmixClientContext(
        CProcessSubmixManager *this,
        const unsigned __int16 *a2,
        struct IAudioProcess *a3,
        struct CAppSubmixClient **a4)
{
  __int64 result; // rax
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  try
  {
    result = CProcessSubmixManager::GetAppSubmixClientContextHelper(this, 0LL, 0LL, a2, a3, a4);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x147,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
                           v5);
  }
  return result;
}
