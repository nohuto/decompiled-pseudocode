/*
 * XREFs of ?Pop@COcclusionContext@@UEAAJXZ @ 0x18005D7C0
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x18001E590 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Pop@?$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAA_NPEAW4StackStateType@COcclusionContext@@@Z @ 0x1800BB820 (-Pop@-$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAA_NPEAW4StackStateTyp.c)
 *     ?PopClip@COcclusionContext@@AEAAXXZ @ 0x18011D688 (-PopClip@COcclusionContext@@AEAAXXZ.c)
 */

__int64 __fastcall COcclusionContext::Pop(COcclusionContext *this)
{
  int v1; // eax
  unsigned int v2; // edi
  char *v4; // rsi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 259);
  v2 = 0;
  if ( v1 )
  {
    *((_DWORD *)this + 259) = v1 - 1;
  }
  else
  {
    v4 = (char *)this + 1048;
    v5 = *((_DWORD *)this + 262);
    if ( v5 )
    {
      v6 = *(_DWORD *)(*((_QWORD *)this + 133) + 4LL * (unsigned int)(v5 - 1));
    }
    else
    {
      v2 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147467259, 0x4DDu);
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
