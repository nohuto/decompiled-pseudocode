/*
 * XREFs of ?GetAppSubmixClientContext@CProcessSubmixManager@@UEAAJKW4ProcessSubmixCapture@@PEAUIAudioProcess@@PEAPEAVCAppSubmixClient@@@Z @ 0x18009F510
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIAudioProcess@@PEAPEAVCAppSubmixClient@@@Z @ 0x18009F5E4 (-GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIA.c)
 */

__int64 __fastcall CProcessSubmixManager::GetAppSubmixClientContext(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 result; // rax
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  try
  {
    result = CProcessSubmixManager::GetAppSubmixClientContextHelper(a1, a2, a3, &word_180104218, a4, a5);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x140,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
                           v6);
  }
  return result;
}
