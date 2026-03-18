/*
 * XREFs of ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801728A0
 * Callers:
 *     ?CalculateValueWorker@CNaturalAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180172BF0 (-CalculateValueWorker@CNaturalAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800A188C (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x1800A1CD0 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?CalculateAnimationElapsedTimeInSeconds@CNaturalAnimation@@AEAAMXZ @ 0x180172838 (-CalculateAnimationElapsedTimeInSeconds@CNaturalAnimation@@AEAAMXZ.c)
 *     ?GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ @ 0x180172EF4 (-GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ.c)
 *     ?GetStopValue@CNaturalAnimation@@AEAA?ATInternalValue@1@XZ @ 0x180173460 (-GetStopValue@CNaturalAnimation@@AEAA-ATInternalValue@1@XZ.c)
 *     ?PeekStackValue@CNaturalAnimation@@AEAA?ATInternalValue@1@PEAVCExpressionValueStack@@@Z @ 0x180173B04 (-PeekStackValue@CNaturalAnimation@@AEAA-ATInternalValue@1@PEAVCExpressionValueStack@@@Z.c)
 *     ?PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z @ 0x180173F38 (-PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z.c)
 *     ?IsInMotion@CScalarForceEvaluator@@QEBA_NXZ @ 0x1801932D8 (-IsInMotion@CScalarForceEvaluator@@QEBA_NXZ.c)
 *     ?IsInMotion@CVector3Force@@QEBA_NXZ @ 0x1801936D4 (-IsInMotion@CVector3Force@@QEBA_NXZ.c)
 *     ?Update@CVector3Force@@QEAA?AUD2DVector3@@MPEAVCExpressionValueStack@@_K@Z @ 0x180193720 (-Update@CVector3Force@@QEAA-AUD2DVector3@@MPEAVCExpressionValueStack@@_K@Z.c)
 *     ?ChangeBasis@CVector3ForceEvaluator@@QEAAXAEBUD2DMatrix@@@Z @ 0x18019398C (-ChangeBasis@CVector3ForceEvaluator@@QEAAXAEBUD2DMatrix@@@Z.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x1801CA300 (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 */

void __fastcall CNaturalAnimation::CalculateValue(
        CNaturalAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        bool *a4)
{
  int v7; // eax
  int v8; // eax
  __int64 v9; // rdx
  float v10; // xmm0_4
  __int64 v11; // rcx
  bool v12; // al
  int v13; // eax
  int v14; // eax
  __int64 v15; // xmm0_8
  int v16; // eax
  __int64 StopValue; // rax
  __int64 v18; // xmm0_8
  int TracingCookie; // eax
  __int64 v20; // r10
  LPCGUID v21; // r8
  LPCGUID v22; // r9
  __int64 v23; // [rsp+30h] [rbp-D0h] BYREF
  int v24; // [rsp+38h] [rbp-C8h]
  int v25; // [rsp+40h] [rbp-C0h] BYREF
  float v26; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v27; // [rsp+50h] [rbp-B0h] BYREF
  int v28; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v29[16]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  int *v31; // [rsp+90h] [rbp-70h]
  int v32; // [rsp+98h] [rbp-68h]
  int v33; // [rsp+9Ch] [rbp-64h]
  float *v34; // [rsp+A0h] [rbp-60h]
  int v35; // [rsp+A8h] [rbp-58h]
  int v36; // [rsp+ACh] [rbp-54h]
  __int64 *v37; // [rsp+B0h] [rbp-50h]
  int v38; // [rsp+B8h] [rbp-48h]
  int v39; // [rsp+BCh] [rbp-44h]
  char *v40; // [rsp+C0h] [rbp-40h]
  int v41; // [rsp+C8h] [rbp-38h]
  int v42; // [rsp+CCh] [rbp-34h]
  int *v43; // [rsp+D0h] [rbp-30h]
  int v44; // [rsp+D8h] [rbp-28h]
  int v45; // [rsp+DCh] [rbp-24h]
  __int64 v46; // [rsp+E0h] [rbp-20h]
  int v47; // [rsp+E8h] [rbp-18h]
  int v48; // [rsp+ECh] [rbp-14h]
  __int64 v49; // [rsp+F0h] [rbp-10h]
  int v50; // [rsp+F8h] [rbp-8h]
  int v51; // [rsp+FCh] [rbp-4h]
  __int64 v52; // [rsp+100h] [rbp+0h]
  int v53; // [rsp+108h] [rbp+8h]
  int v54; // [rsp+10Ch] [rbp+Ch]
  bool *v55; // [rsp+110h] [rbp+10h]
  int v56; // [rsp+118h] [rbp+18h]
  int v57; // [rsp+11Ch] [rbp+1Ch]

  *a4 = 0;
  if ( a3 == *((_QWORD *)this + 46) )
  {
    *a4 = (*((_BYTE *)this + 524) & 0x40) != 0;
    v7 = *((_DWORD *)this + 73);
    v27 = *(_QWORD *)((char *)this + 284);
    v28 = v7;
    CNaturalAnimation::PushValueToStack(this, &v27, a2);
  }
  else
  {
    v8 = *((_DWORD *)this + 34);
    if ( v8 == 18 || v8 == 35 || v8 == 52 )
    {
      if ( CScalarForceEvaluator::IsInMotion((CScalarForceEvaluator *)(*((_QWORD *)this + 47) + 16LL))
        || CScalarForceEvaluator::IsInMotion((CScalarForceEvaluator *)(v9 + 84)) )
      {
        *((_BYTE *)this + 524) |= 4u;
      }
      if ( CNaturalAnimation::GenerateVector3Basis(this) )
        CVector3ForceEvaluator::ChangeBasis(
          (CVector3ForceEvaluator *)(*((_QWORD *)this + 47) + 16LL),
          (CNaturalAnimation *)((char *)this + 396));
      v10 = CNaturalAnimation::CalculateAnimationElapsedTimeInSeconds(this);
      v11 = *((_QWORD *)this + 47);
      v26 = v10;
      CVector3Force::Update(v11, &v27);
      v12 = CVector3Force::IsInMotion(*((CVector3Force **)this + 47));
      *a4 = v12;
      if ( !v12 || (*((_BYTE *)this + 524) & 8) != 0 )
      {
        v15 = *((_QWORD *)this + 37);
        v16 = *((_DWORD *)this + 76);
        *((_BYTE *)this + 524) |= 8u;
        *(_QWORD *)((char *)this + 284) = v15;
        *((_DWORD *)this + 73) = v16;
        StopValue = CNaturalAnimation::GetStopValue(this, v29);
        v18 = *(_QWORD *)StopValue;
        LODWORD(StopValue) = *(_DWORD *)(StopValue + 8);
        v23 = v18;
        v24 = StopValue;
        CNaturalAnimation::PushValueToStack(this, &v23, a2);
        if ( (*((_BYTE *)this + 192) & 2) != 0 )
          CBaseExpression::NotifyAnimationCompleted(this);
        *((_BYTE *)this + 192) &= ~1u;
      }
      else
      {
        D3DXVec3TransformCoord(
          (struct D2DVector3 *)&v23,
          (const struct D2DVector3 *)&v27,
          (CNaturalAnimation *)((char *)this + 460));
        v13 = v24;
        *(_QWORD *)((char *)this + 284) = v23;
        *((_DWORD *)this + 73) = v13;
        *((float *)this + 71) = *((float *)this + 74) + *((float *)this + 71);
        *((float *)this + 72) = *((float *)this + 75) + *((float *)this + 72);
        *((float *)this + 73) = *((float *)this + 76) + *((float *)this + 73);
        v14 = *((_DWORD *)this + 73);
        v23 = *(_QWORD *)((char *)this + 284);
        v24 = v14;
        CNaturalAnimation::PushValueToStack(this, &v23, a2);
      }
      if ( (*(_DWORD *)(*((_QWORD *)this + 33) + 4LL) & 0x40000000) != 0 )
      {
        CNaturalAnimation::PeekStackValue(this, v29, a2);
        if ( dword_18026D7B0 > 4u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 4uLL) )
          {
            TracingCookie = CBaseExpression::GetTracingCookie(this);
            v33 = 0;
            v36 = 0;
            v39 = 0;
            v42 = 0;
            v45 = 0;
            v48 = 0;
            v51 = 0;
            v54 = 0;
            v57 = 0;
            v25 = TracingCookie;
            v31 = &v25;
            v34 = &v26;
            v37 = &v27;
            v40 = (char *)&v27 + 4;
            v43 = &v28;
            v49 = v20 + 4;
            v52 = v20 + 8;
            v32 = 4;
            v35 = 4;
            v38 = 4;
            v41 = 4;
            v44 = 4;
            v46 = v20;
            v47 = 4;
            v50 = 4;
            v53 = 4;
            v55 = a4;
            v56 = 1;
            TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_180213F1D, v21, v22, 0xBu, &pData);
          }
        }
      }
    }
  }
}
