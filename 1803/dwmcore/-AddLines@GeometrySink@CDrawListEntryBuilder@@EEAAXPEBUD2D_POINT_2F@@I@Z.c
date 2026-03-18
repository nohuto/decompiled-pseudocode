/*
 * XREFs of ?AddLines@GeometrySink@CDrawListEntryBuilder@@EEAAXPEBUD2D_POINT_2F@@I@Z @ 0x18017A6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800794F0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

void __fastcall CDrawListEntryBuilder::GeometrySink::AddLines(
        CDrawListEntryBuilder::GeometrySink *this,
        const struct D2D_POINT_2F *a2,
        unsigned int a3)
{
  int v3; // ebx
  char *v7; // rdi
  int v8; // eax
  __int64 v9; // rbp
  unsigned int v10; // r15d
  __int64 v11; // rcx
  const struct D2D_POINT_2F *v12; // r9
  unsigned int v13; // eax
  int v14; // eax
  unsigned int v15; // [rsp+20h] [rbp-38h]
  unsigned int v16; // [rsp+60h] [rbp+8h]

  v3 = *((_DWORD *)this + 4);
  if ( v3 < 0 )
  {
    v15 = 247;
LABEL_19:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, v15);
    goto LABEL_20;
  }
  v7 = (char *)this + 24;
  v8 = DynArrayImpl<0>::Grow((__int64)this + 24, 8u, a3, 0, 0LL);
  v3 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xF9u);
  }
  else
  {
    v9 = 0LL;
    if ( a3 )
    {
      v10 = v16;
      while ( 1 )
      {
        v11 = *((unsigned int *)v7 + 6);
        v12 = &a2[v9];
        v13 = v11 + 1;
        if ( (int)v11 + 1 >= (unsigned int)v11 )
          v10 = v11 + 1;
        v3 = v13 < (unsigned int)v11 ? 0x80070216 : 0;
        if ( v13 < (unsigned int)v11 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xB5u);
        }
        else if ( v10 > *((_DWORD *)v7 + 5) )
        {
          v14 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v7, 8u, 1, v12);
          v3 = v14;
          if ( v14 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xC0u);
        }
        else
        {
          *(struct D2D_POINT_2F *)(*(_QWORD *)v7 + 8 * v11) = *v12;
          *((_DWORD *)v7 + 6) = v10;
        }
        if ( v3 < 0 )
          break;
        v9 = (unsigned int)(v9 + 1);
        if ( (unsigned int)v9 >= a3 )
          goto LABEL_20;
      }
      v15 = 252;
      goto LABEL_19;
    }
  }
LABEL_20:
  *((_DWORD *)this + 4) = v3;
}
