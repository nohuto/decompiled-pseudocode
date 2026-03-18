/*
 * XREFs of ?Append_Convert_BetweenInterchange@ScanPipelineBuilder@@IEAAJW4DXGI_FORMAT@@0W4Subpipe@1@@Z @ 0x1801C6A04
 * Callers:
 *     ?Append_Convert@ScanPipelineBuilder@@QEAAJAEBUPixelFormatInfo@@0W4Subpipe@1@@Z @ 0x1801C6778 (-Append_Convert@ScanPipelineBuilder@@QEAAJAEBUPixelFormatInfo@@0W4Subpipe@1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddOp_Binary@ScanPipelineBuilder@@QEAAJP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZPEAUOpSpecificData@@W4Subpipe@1@@Z @ 0x1801C6648 (-AddOp_Binary@ScanPipelineBuilder@@QEAAJP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZPEAUOpSpecif.c)
 */

__int64 __fastcall ScanPipelineBuilder::Append_Convert_BetweenInterchange(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  signed int v4; // eax
  unsigned int v6; // [rsp+20h] [rbp-18h]

  v3 = 0;
  if ( (_DWORD)a3 != a2 )
  {
    switch ( (_DWORD)a3 )
    {
      case 2:
        if ( a2 == 11 )
        {
          v4 = ScanPipelineBuilder::AddOp_Binary(a1, (__int64)GammaConvert_128bppABGR_64bppABGR, a3);
          v3 = v4;
          if ( v4 >= 0 )
            return v3;
          v6 = 395;
        }
        else
        {
          if ( a2 != 87 )
          {
            v3 = -2003304320;
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88980080, 0x190u);
            return v3;
          }
          v4 = ScanPipelineBuilder::AddOp_Binary(a1, (__int64)GammaConvert_128bppABGR_32bppARGB, a3);
          v3 = v4;
          if ( v4 >= 0 )
            return v3;
          v6 = 389;
        }
        goto LABEL_26;
      case 0xB:
        if ( a2 == 2 )
        {
          v4 = ScanPipelineBuilder::AddOp_Binary(a1, (__int64)GammaConvert_64bppABGR_128bppABGR, a3);
          v3 = v4;
          if ( v4 >= 0 )
            return v3;
          v6 = 373;
        }
        else
        {
          if ( a2 != 87 )
          {
            v3 = -2003304320;
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88980080, 0x17Au);
            return v3;
          }
          v4 = ScanPipelineBuilder::AddOp_Binary(a1, (__int64)Convert_64bppABGR_32bppARGB, a3);
          v3 = v4;
          if ( v4 >= 0 )
            return v3;
          v6 = 367;
        }
        goto LABEL_26;
      case 0x57:
        if ( a2 == 2 )
        {
          v4 = ScanPipelineBuilder::AddOp_Binary(a1, (__int64)GammaConvert_32bppARGB_128bppABGR, a3);
          v3 = v4;
          if ( v4 >= 0 )
            return v3;
          v6 = 351;
        }
        else
        {
          if ( a2 != 11 )
          {
            v3 = -2003304320;
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88980080, 0x164u);
            return v3;
          }
          v4 = ScanPipelineBuilder::AddOp_Binary(a1, (__int64)Convert_32bppARGB_64bppABGR, a3);
          v3 = v4;
          if ( v4 >= 0 )
            return v3;
          v6 = 345;
        }
LABEL_26:
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, v6);
        break;
    }
  }
  return v3;
}
