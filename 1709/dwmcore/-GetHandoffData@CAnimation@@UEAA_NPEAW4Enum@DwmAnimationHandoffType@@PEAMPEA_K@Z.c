/*
 * XREFs of ?GetHandoffData@CAnimation@@UEAA_NPEAW4Enum@DwmAnimationHandoffType@@PEAMPEA_K@Z @ 0x18002CE40
 * Callers:
 *     ?UpdateAnimateValues@CAnimation@@UEAAXXZ @ 0x18002D090 (-UpdateAnimateValues@CAnimation@@UEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18000B600 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x18011BF18 (-GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 */

bool __fastcall CAnimation::GetHandoffData(
        CAnimation *this,
        enum DwmAnimationHandoffType::Enum *a2,
        float *a3,
        unsigned __int64 *a4)
{
  __int64 *v4; // rsi
  __int64 v6; // rcx
  bool AnimationValue; // di
  __int64 v12; // rcx
  float v13; // xmm0_4
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int16 v17; // [rsp+20h] [rbp-48h]
  _QWORD v18[2]; // [rsp+40h] [rbp-28h] BYREF

  v4 = (__int64 *)((char *)this + 128);
  v6 = *((_QWORD *)this + 16);
  AnimationValue = 1;
  if ( !v6 || (v15 = *((_QWORD *)this + 4), *(_QWORD *)(v6 + 136) > v15) )
  {
LABEL_2:
    *(_DWORD *)a2 = *((_DWORD *)this + 28);
    *a3 = *((float *)this + 34);
    *a4 = *((_QWORD *)this + 15);
    if ( (*((_BYTE *)this + 8) & 0x40) == 0 )
    {
      if ( *((_DWORD *)this + 49) )
      {
        v12 = *((unsigned int *)this + 48);
        if ( (_DWORD)v12 )
        {
          v13 = *((float *)this + 34);
          v18[0] = *((unsigned int *)this + 49);
          v14 = *((_QWORD *)this - 11);
          v18[1] = v12;
          v17 = 1;
          CoreUICallSend(*(_QWORD *)(*(_QWORD *)(v14 + 1288) + 56LL), v18, 2LL, 1LL, v17, &unk_1801F0516, v13);
          *((_BYTE *)this + 8) |= 0x40u;
        }
      }
    }
    return AnimationValue;
  }
  v16 = *((_QWORD *)this + 18);
  if ( (*((_BYTE *)this + 8) & 0x20) == 0 )
    v16 += v15 - *((_QWORD *)this + 19);
  AnimationValue = CAnimationInterpolator::GetAnimationValue(
                     (CAnimationInterpolator *)(v6 + 264),
                     v16,
                     (float *)this + 34,
                     0LL);
  if ( AnimationValue )
  {
    ReleaseInterface<IBitmapLock>(v4);
    goto LABEL_2;
  }
  return AnimationValue;
}
