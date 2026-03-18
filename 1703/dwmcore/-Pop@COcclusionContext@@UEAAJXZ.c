/*
 * XREFs of ?Pop@COcclusionContext@@UEAAJXZ @ 0x18009B5B0
 * Callers:
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x180083B90 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAA_NPEAW4StackStateType@COcclusionContext@@@Z @ 0x18004D7A4 (-Pop@-$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAA_NPEAW4StackStateTyp.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PopClip@COcclusionContext@@AEAAXXZ @ 0x180134788 (-PopClip@COcclusionContext@@AEAAXXZ.c)
 */

__int64 __fastcall COcclusionContext::Pop(COcclusionContext *this)
{
  int v1; // eax
  unsigned int v2; // edi
  int *v4; // rsi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 237);
  v2 = 0;
  if ( v1 )
  {
    *((_DWORD *)this + 237) = v1 - 1;
  }
  else
  {
    v4 = (int *)((char *)this + 952);
    v5 = *((_DWORD *)this + 238);
    if ( v5 )
    {
      v6 = *(_DWORD *)(*((_QWORD *)this + 121) + 4LL * (unsigned int)(v5 - 1));
    }
    else
    {
      v2 = -2147467259;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x4F1u);
      v6 = v9;
    }
    if ( v6 )
    {
      CWatermarkStack<enum COcclusionContext::StackStateType,64,2,10>::Pop(v4, &v9);
      v7 = *((_DWORD *)this + 2);
      if ( v7 )
        *((_DWORD *)this + 2) = v7 - 1;
    }
    else
    {
      COcclusionContext::PopClip(this);
    }
  }
  return v2;
}
