/*
 * XREFs of ?RemoveAllTargets@CCompositionLight@@AEAAJW4LightBehavior@@@Z @ 0x18002A378
 * Callers:
 *     ??1CCompositionLight@@UEAA@XZ @ 0x18002A5B8 (--1CCompositionLight@@UEAA@XZ.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x18004E984 (-RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

__int64 __fastcall CCompositionLight::RemoveAllTargets(__int64 a1, unsigned int a2)
{
  unsigned int v2; // edi
  unsigned int v5; // ebp
  __int64 v6; // rbx
  unsigned int v7; // r14d
  __int64 v8; // rsi
  int v9; // eax

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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x159u);
  }
  else
  {
LABEL_5:
    *(_DWORD *)(v6 + 24) = 0;
    DynArrayImpl<0>::ShrinkToSize(v6, 8LL);
  }
  return v2;
}
