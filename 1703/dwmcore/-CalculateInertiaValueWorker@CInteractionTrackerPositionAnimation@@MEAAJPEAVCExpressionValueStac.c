/*
 * XREFs of ?CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180182CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _TlgCreateWsz @ 0x1800B1408 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016CB54 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetCurrentVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016CBFC (-GetCurrentVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z @ 0x18016EE48 (-ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z.c)
 *     ?ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z @ 0x180181E10 (-ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z.c)
 *     ?GetCenterPoint@CInteractionTrackerPositionAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180182F00 (-GetCenterPoint@CInteractionTrackerPositionAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?AdvanceInertiaToTime@CPositionMotion@@QEAAMPEAVCExpressionValueStack@@_KMMMMMM@Z @ 0x1801853F8 (-AdvanceInertiaToTime@CPositionMotion@@QEAAMPEAVCExpressionValueStack@@_KMMMMMM@Z.c)
 */

__int64 __fastcall CInteractionTrackerPositionAnimation::CalculateInertiaValueWorker(
        CInteractionTrackerPositionAnimation *this,
        struct CExpressionValueStack *a2,
        unsigned __int64 a3,
        float a4,
        float *a5)
{
  CInteractionTracker *v5; // rsi
  float *v6; // r12
  float v10; // xmm6_4
  int CenterPoint; // eax
  unsigned int v12; // ebx
  int v13; // ebx
  float CurrentVelocity; // xmm6_4
  float v15; // xmm3_4
  _DWORD *v16; // rcx
  float v17; // xmm0_4
  float v18; // xmm4_4
  float v19; // xmm0_4
  int v20; // ecx
  const wchar_t *v21; // rax
  int v22; // r10d
  LPCGUID v23; // r8
  LPCGUID v24; // r9
  float v26[2]; // [rsp+58h] [rbp-91h] BYREF
  CInteractionTrackerPositionAnimation *v27; // [rsp+60h] [rbp-89h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-81h] BYREF
  CInteractionTrackerPositionAnimation **v29; // [rsp+88h] [rbp-61h]
  int v30; // [rsp+90h] [rbp-59h]
  int v31; // [rsp+94h] [rbp-55h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp-51h] BYREF
  float *v33; // [rsp+A8h] [rbp-41h]
  int v34; // [rsp+B0h] [rbp-39h]
  int v35; // [rsp+B4h] [rbp-35h]
  float *v36; // [rsp+B8h] [rbp-31h]
  int v37; // [rsp+C0h] [rbp-29h]
  int v38; // [rsp+C4h] [rbp-25h]
  float *v39; // [rsp+C8h] [rbp-21h]
  int v40; // [rsp+D0h] [rbp-19h]
  int v41; // [rsp+D4h] [rbp-15h]
  float v42; // [rsp+160h] [rbp+77h] BYREF

  v42 = a4;
  v5 = (CInteractionTracker *)*((_QWORD *)this + 29);
  v6 = a5;
  v26[0] = 0.0;
  if ( v5 )
    v5 = (CInteractionTracker *)*((_QWORD *)v5 + 1);
  v10 = *((float *)this + 136);
  if ( v10 == CInteractionTracker::GetCurrentValue((__int64)v5, 2)
    || (CenterPoint = CInteractionTrackerPositionAnimation::GetCenterPoint(this, a2, a3, v26),
        v12 = CenterPoint,
        CenterPoint >= 0) )
  {
    v13 = *((_DWORD *)this + 57);
    CurrentVelocity = CInteractionTracker::GetCurrentVelocity(v5);
    CInteractionTracker::GetCurrentValue((__int64)v5, 2);
    v15 = CInteractionTracker::ValueFromBoundary(v5, 2LL, v13);
    v17 = CInteractionTracker::ValueFromBoundary(v16, 1LL, v13);
    v19 = CPositionMotion::AdvanceInertiaToTime(
            (CInteractionTrackerPositionAnimation *)((char *)this + 336),
            a2,
            a3,
            v42,
            v17,
            v15,
            v18,
            CurrentVelocity,
            v26[0]);
    *v6 = v19;
    v26[1] = v19;
    if ( dword_18023D7F0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 2uLL) )
    {
      v20 = *((_DWORD *)this + 57);
      v31 = 0;
      v29 = &v27;
      v27 = this;
      v30 = 8;
      v21 = ScrollAxisToString(v20);
      TlgCreateWsz(&pDesc, v21);
      v35 = 0;
      v38 = 0;
      v41 = 0;
      v36 = v26;
      v39 = &v42;
      v33 = &v26[1];
      v34 = v22;
      v37 = v22;
      v40 = v22;
      TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F7DBB, v23, v24, 7u, &pData);
    }
    return 0;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, CenterPoint, 0x154u);
  }
  return v12;
}
