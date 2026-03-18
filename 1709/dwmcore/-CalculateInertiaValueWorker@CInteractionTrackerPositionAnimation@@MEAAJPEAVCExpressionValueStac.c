/*
 * XREFs of ?CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180189D60
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1800053BC (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016B958 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetCurrentVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016BA00 (-GetCurrentVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetMostRecentCenterPoint@CInteractionTracker@@QEBAMW4ScrollState@@W4ScrollAxis@@@Z @ 0x18016BC78 (-GetMostRecentCenterPoint@CInteractionTracker@@QEBAMW4ScrollState@@W4ScrollAxis@@@Z.c)
 *     ?ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z @ 0x18016F248 (-ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z.c)
 *     ?ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z @ 0x180189154 (-ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z.c)
 *     ?AdvanceInertiaToTime@CPositionMotion@@QEAAMPEAVCExpressionValueStack@@_KMMMMMM@Z @ 0x18018D500 (-AdvanceInertiaToTime@CPositionMotion@@QEAAMPEAVCExpressionValueStack@@_KMMMMMM@Z.c)
 */

__int64 __fastcall CInteractionTrackerPositionAnimation::CalculateInertiaValueWorker(
        CInteractionTrackerPositionAnimation *this,
        struct CExpressionValueStack *a2,
        unsigned __int64 a3,
        float a4,
        float *a5)
{
  __int64 v5; // rax
  float *v6; // r12
  CInteractionTracker *v10; // rsi
  float MostRecentCenterPoint; // xmm0_4
  int v12; // ebx
  float CurrentVelocity; // xmm6_4
  float v14; // xmm3_4
  _DWORD *v15; // rcx
  float v16; // xmm0_4
  float v17; // xmm4_4
  float v18; // xmm0_4
  int v19; // ecx
  const wchar_t *v20; // rax
  int v21; // r10d
  LPCGUID v22; // r8
  LPCGUID v23; // r9
  float v25; // [rsp+58h] [rbp-81h] BYREF
  float v26; // [rsp+5Ch] [rbp-7Dh] BYREF
  CInteractionTrackerPositionAnimation *v27; // [rsp+60h] [rbp-79h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-71h] BYREF
  CInteractionTrackerPositionAnimation **v29; // [rsp+88h] [rbp-51h]
  int v30; // [rsp+90h] [rbp-49h]
  int v31; // [rsp+94h] [rbp-45h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp-41h] BYREF
  float *v33; // [rsp+A8h] [rbp-31h]
  int v34; // [rsp+B0h] [rbp-29h]
  int v35; // [rsp+B4h] [rbp-25h]
  float *v36; // [rsp+B8h] [rbp-21h]
  int v37; // [rsp+C0h] [rbp-19h]
  int v38; // [rsp+C4h] [rbp-15h]
  float *v39; // [rsp+C8h] [rbp-11h]
  int v40; // [rsp+D0h] [rbp-9h]
  int v41; // [rsp+D4h] [rbp-5h]
  float v42; // [rsp+150h] [rbp+77h] BYREF

  v42 = a4;
  v5 = *((_QWORD *)this + 35);
  v6 = a5;
  v25 = 0.0;
  if ( v5 )
    v10 = *(CInteractionTracker **)(v5 + 8);
  else
    v10 = 0LL;
  MostRecentCenterPoint = CInteractionTracker::GetMostRecentCenterPoint((__int64)v10, 2, *((_DWORD *)this + 69));
  v12 = *((_DWORD *)this + 69);
  v25 = MostRecentCenterPoint;
  CurrentVelocity = CInteractionTracker::GetCurrentVelocity(v10);
  CInteractionTracker::GetCurrentValue((__int64)v10, 2);
  v14 = CInteractionTracker::ValueFromBoundary(v10, 2LL, v12);
  v16 = CInteractionTracker::ValueFromBoundary(v15, 1LL, v12);
  v18 = CPositionMotion::AdvanceInertiaToTime(
          (CInteractionTrackerPositionAnimation *)((char *)this + 392),
          a2,
          a3,
          v42,
          v16,
          v14,
          v17,
          CurrentVelocity,
          v25);
  *v6 = v18;
  v26 = v18;
  if ( dword_18026D7B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 2uLL) )
  {
    v19 = *((_DWORD *)this + 69);
    v31 = 0;
    v29 = &v27;
    v27 = this;
    v30 = 8;
    v20 = ScrollAxisToString(v19);
    TlgCreateWsz(&pDesc, v20);
    v35 = 0;
    v38 = 0;
    v41 = 0;
    v36 = &v25;
    v39 = &v42;
    v33 = &v26;
    v34 = v21;
    v37 = v21;
    v40 = v21;
    TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_18021472D, v22, v23, 7u, &pData);
  }
  return 0LL;
}
