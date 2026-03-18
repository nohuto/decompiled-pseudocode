/*
 * XREFs of ?GetFloatAnimatableProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C0149170
 * Callers:
 *     <none>
 * Callees:
 *     ?PropertyIdToColorChannelAndIndex@CTableTransferEffectMarshaler@DirectComposition@@IEBAJIPEAI0@Z @ 0x1C01491F4 (-PropertyIdToColorChannelAndIndex@CTableTransferEffectMarshaler@DirectComposition@@IEBAJIPEAI0@Z.c)
 */

__int64 __fastcall DirectComposition::CTableTransferEffectMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CTableTransferEffectMarshaler *this,
        unsigned int a2,
        float *a3)
{
  __int64 result; // rax
  unsigned int v6[6]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v7; // [rsp+58h] [rbp+20h] BYREF

  result = DirectComposition::CTableTransferEffectMarshaler::PropertyIdToColorChannelAndIndex(this, a2, &v7, v6);
  if ( (int)result < 0 )
    return 3221225485LL;
  *a3 = *(float *)(*((_QWORD *)this + 2 * v7 + 11) + 4LL * v6[0]);
  return result;
}
