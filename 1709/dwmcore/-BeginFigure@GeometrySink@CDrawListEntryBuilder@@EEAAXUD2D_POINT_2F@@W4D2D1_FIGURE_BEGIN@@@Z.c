/*
 * XREFs of ?BeginFigure@GeometrySink@CDrawListEntryBuilder@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x1801518B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

void __fastcall CDrawListEntryBuilder::GeometrySink::BeginFigure(
        CDrawListEntryBuilder::GeometrySink *this,
        struct D2D_POINT_2F a2,
        enum D2D1_FIGURE_BEGIN a3)
{
  signed int v3; // ebx
  char *v5; // rsi
  __int64 v6; // rcx
  unsigned int v7; // edx
  unsigned int v8; // eax
  signed int v9; // eax
  struct D2D_POINT_2F v10; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v11; // [rsp+50h] [rbp+8h]

  v3 = *((_DWORD *)this + 4);
  v10 = a2;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0xE7u);
  }
  else
  {
    v5 = (char *)this + 24;
    *((_DWORD *)this + 12) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 24, 8u);
    v6 = *((unsigned int *)v5 + 6);
    v7 = v11;
    v8 = v6 + 1;
    if ( (int)v6 + 1 >= (unsigned int)v6 )
      v7 = v6 + 1;
    v3 = v8 < (unsigned int)v6 ? 0x80070216 : 0;
    if ( v8 < (unsigned int)v6 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0xB5u);
    }
    else if ( v7 > *((_DWORD *)v5 + 5) )
    {
      v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v5, 8u, 1, &v10);
      v3 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0xC0u);
    }
    else
    {
      *(struct D2D_POINT_2F *)(*(_QWORD *)v5 + 8 * v6) = v10;
      *((_DWORD *)v5 + 6) = v7;
    }
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0xEAu);
  }
  *((_DWORD *)this + 4) = v3;
}
