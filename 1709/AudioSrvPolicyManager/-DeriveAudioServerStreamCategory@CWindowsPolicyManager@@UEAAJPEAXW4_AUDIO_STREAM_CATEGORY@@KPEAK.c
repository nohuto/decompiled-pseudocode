/*
 * XREFs of ?DeriveAudioServerStreamCategory@CWindowsPolicyManager@@UEAAJPEAXW4_AUDIO_STREAM_CATEGORY@@KPEAK@Z @ 0x1800057E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowsPolicyManager::DeriveAudioServerStreamCategory(
        CWindowsPolicyManager *this,
        void *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int *a5)
{
  __int64 result; // rax
  bool v6; // zf

  result = 0LL;
  if ( a3 > 0xB || a4 >= 0x15 )
    return 2147942487LL;
  v6 = a3 == 0;
  if ( a3 )
  {
    if ( a4 )
      return 2147942487LL;
    v6 = a3 == 0;
  }
  if ( v6 )
    a3 = a4;
  *a5 = a3;
  return result;
}
