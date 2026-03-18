/*
 * XREFs of ?RemoveAllTargets@CCompositionLight@@AEAAJW4LightBehavior@@@Z @ 0x1800B1318
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ??1CCompositionLight@@UEAA@XZ @ 0x1800B1520 (--1CCompositionLight@@UEAA@XZ.c)
 * Callees:
 *     ?RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x18004F068 (-RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCompositionLight::RemoveAllTargets(unsigned __int64 a1, int a2)
{
  unsigned int v2; // edi
  unsigned int v5; // ebp
  __int64 v6; // rbx
  unsigned int v7; // r14d
  __int64 v8; // rsi
  signed int v9; // eax

  v2 = 0;
  v5 = 0;
  v6 = a1 + (a2 != 0 ? 112LL : 72LL);
  v7 = *(_DWORD *)(v6 + 24);
  if ( v7 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      v9 = CVisual::RemoveLight(*(_QWORD *)(v8 + *(_QWORD *)v6), a1, a2);
      v2 = v9;
      if ( v9 < 0 )
        break;
      ++v5;
      v8 += 8LL;
      if ( v5 >= v7 )
        goto LABEL_5;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x142u);
  }
  else
  {
LABEL_5:
    *(_DWORD *)(v6 + 24) = 0;
    DynArrayImpl<0>::ShrinkToSize(v6, 8u);
  }
  return v2;
}
