/*
 * XREFs of ?BeginFigure@GeometrySink@CDrawListEntryBuilder@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x18017A910
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

void __fastcall CDrawListEntryBuilder::GeometrySink::BeginFigure(
        CDrawListEntryBuilder::GeometrySink *this,
        struct D2D_POINT_2F a2,
        enum D2D1_FIGURE_BEGIN a3)
{
  int v3; // ebx
  char *v5; // rsi
  unsigned int v6; // eax
  unsigned int v7; // edx
  int v8; // eax
  struct D2D_POINT_2F v9; // [rsp+30h] [rbp-18h] BYREF

  v3 = *((_DWORD *)this + 4);
  v9 = a2;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xE7u);
  }
  else
  {
    v5 = (char *)this + 24;
    *((_DWORD *)this + 12) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 24, 8u);
    v6 = *((_DWORD *)v5 + 6);
    v7 = v6 + 1;
    v3 = v6 + 1 < v6 ? 0x80070216 : 0;
    if ( v6 + 1 < v6 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xB5u);
    }
    else if ( v7 > *((_DWORD *)v5 + 5) )
    {
      v8 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v5, 8u, 1, &v9);
      v3 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xC0u);
    }
    else
    {
      *(struct D2D_POINT_2F *)(*(_QWORD *)v5 + 8LL * v6) = v9;
      *((_DWORD *)v5 + 6) = v7;
    }
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xEAu);
  }
  *((_DWORD *)this + 4) = v3;
}
