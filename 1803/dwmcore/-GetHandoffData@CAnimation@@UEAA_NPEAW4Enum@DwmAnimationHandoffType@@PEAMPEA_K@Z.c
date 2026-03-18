/*
 * XREFs of ?GetHandoffData@CAnimation@@UEAA_NPEAW4Enum@DwmAnimationHandoffType@@PEAMPEA_K@Z @ 0x18003FA70
 * Callers:
 *     ?UpdateAnimateValues@CAnimation@@UEAAXXZ @ 0x18003FCC0 (-UpdateAnimateValues@CAnimation@@UEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180021410 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x18013EC00 (-GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
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
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  _QWORD v16[2]; // [rsp+40h] [rbp-28h] BYREF

  v4 = (__int64 *)((char *)this + 128);
  v6 = *((_QWORD *)this + 16);
  AnimationValue = 1;
  if ( !v6 || (v14 = *((_QWORD *)this + 4), *(_QWORD *)(v6 + 136) > v14) )
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
          v16[0] = *((unsigned int *)this + 49);
          v13 = *((_QWORD *)this - 11);
          v16[1] = v12;
          CoreUICallSend(*(_QWORD *)(*(_QWORD *)(v13 + 1312) + 56LL), v16, 2LL, 1LL, 1, &unk_180239C7B);
          *((_BYTE *)this + 8) |= 0x40u;
        }
      }
    }
    return AnimationValue;
  }
  v15 = *((_QWORD *)this + 18);
  if ( (*((_BYTE *)this + 8) & 0x20) == 0 )
    v15 += v14 - *((_QWORD *)this + 19);
  AnimationValue = CAnimationInterpolator::GetAnimationValue(
                     (CAnimationInterpolator *)(v6 + 264),
                     v15,
                     (float *)this + 34,
                     0LL);
  if ( AnimationValue )
  {
    ReleaseInterface<IBitmapLock>(v4);
    goto LABEL_2;
  }
  return AnimationValue;
}
