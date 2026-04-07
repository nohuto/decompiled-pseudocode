/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UCFlickTextFeedback@@$0A@@@QEAAJPEFBUCFlickTextFeedback@@I@Z @ 0x180088F34
 * Callers:
 *     ?StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@PEBUtagRECT@@_K_N@Z @ 0x1800704C4 (-StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactSt.c)
 *     ?PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z @ 0x18008B08C (-PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002C780 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<CFlickTextFeedback,0>::AddMultipleAndSet(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  unsigned int v5; // ecx
  unsigned int v6; // r8d
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // eax

  v3 = *(unsigned int *)(a1 + 24);
  v5 = v3 + 1;
  v6 = v3 + 1;
  if ( (int)v3 + 1 < (unsigned int)v3 )
    v6 = a3;
  v7 = v5 < (unsigned int)v3 ? 0x80070216 : 0;
  if ( v5 >= (unsigned int)v3 )
  {
    if ( v6 > *(_DWORD *)(a1 + 20) )
    {
      v10 = DynArrayImpl<0>::AddMultipleAndSet(a1, 0x18u, 1, a2);
      v7 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0xC0u);
    }
    else
    {
      v8 = 3 * v3;
      v9 = *(_QWORD *)a1;
      *(_OWORD *)(v9 + 8 * v8) = *(_OWORD *)a2;
      *(_QWORD *)(v9 + 8 * v8 + 16) = *(_QWORD *)(a2 + 16);
      *(_DWORD *)(a1 + 24) = v6;
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0xB5u);
  }
  return v7;
}
