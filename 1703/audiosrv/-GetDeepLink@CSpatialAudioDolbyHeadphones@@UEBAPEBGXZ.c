/*
 * XREFs of ?GetDeepLink@CSpatialAudioDolbyHeadphones@@UEBAPEBGXZ @ 0x18003D930
 * Callers:
 *     <none>
 * Callees:
 *     ?IsMatEncoderEnabled@AtmosCheck@@QEAA_NXZ @ 0x18003CDAC (-IsMatEncoderEnabled@AtmosCheck@@QEAA_NXZ.c)
 */

const unsigned __int16 *__fastcall CSpatialAudioDolbyHeadphones::GetDeepLink(CSpatialAudioDolbyHeadphones *this)
{
  AtmosCheck *v2; // rcx
  bool v3; // zf
  const unsigned __int16 *result; // rax

  v2 = (AtmosCheck *)*((_QWORD *)this + 1);
  if ( !v2 )
    return (const unsigned __int16 *)((char *)this + 288);
  v3 = !AtmosCheck::IsMatEncoderEnabled(v2);
  result = (const unsigned __int16 *)((char *)this + 800);
  if ( v3 )
    return (const unsigned __int16 *)((char *)this + 288);
  return result;
}
