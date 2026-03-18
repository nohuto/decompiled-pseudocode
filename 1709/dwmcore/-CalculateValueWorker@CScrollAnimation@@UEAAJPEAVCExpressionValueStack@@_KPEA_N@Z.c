/*
 * XREFs of ?CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180188B30
 * Callers:
 *     <none>
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJM@Z @ 0x1800A885C (-PushConstant@CExpressionValueStack@@QEAAJM@Z.c)
 *     ?CalculateValueForState@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@PEAM@Z @ 0x180188AC0 (-CalculateValueForState@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@PEAM@.c)
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ @ 0x180188D10 (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ.c)
 */

__int64 __fastcall CScrollAnimation::CalculateValueWorker(
        CScrollAnimation *this,
        struct CExpressionValueStack *a2,
        unsigned __int64 a3,
        bool *a4)
{
  __int64 v4; // rsi
  int v5; // eax
  signed int v10; // eax
  unsigned int v11; // ebx
  struct CInteractionTracker *InteractionTracker; // rax
  signed int v13; // eax
  signed int v14; // eax
  float v16; // [rsp+60h] [rbp+8h] BYREF
  float v17; // [rsp+68h] [rbp+10h] BYREF

  *a4 = 0;
  v4 = 0LL;
  v5 = *((_DWORD *)this + 90) - 1;
  v16 = 0.0;
  *((_QWORD *)this + 39) = a2;
  *((_QWORD *)this + 40) = a3;
  if ( v5 <= 0 )
  {
LABEL_4:
    *((_DWORD *)this + 90) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 336, 4u);
    InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
    v13 = CScrollAnimation::CalculateValueForState(this, a2, a3, *((_DWORD *)InteractionTracker + 38), &v16);
    v11 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0xFAu);
    }
    else
    {
      v14 = CExpressionValueStack::PushConstant(a2, v16);
      v11 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0x106u);
    }
  }
  else
  {
    while ( 1 )
    {
      v10 = CScrollAnimation::CalculateValueForState(this, a2, a3, *(_DWORD *)(*((_QWORD *)this + 42) + 4 * v4), &v17);
      v11 = v10;
      if ( v10 < 0 )
        break;
      v4 = (unsigned int)(v4 + 1);
      if ( (int)v4 >= *((_DWORD *)this + 90) - 1 )
        goto LABEL_4;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0xF1u);
  }
  *a4 = *((_BYTE *)this + 296) & 1;
  return v11;
}
