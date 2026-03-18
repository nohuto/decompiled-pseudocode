/*
 * XREFs of ?GetColorContextNoRef@CD2DContext@@QEAAJW4D2D1_COLOR_SPACE@@PEAPEAUID2D1ColorContext@@@Z @ 0x1801AA72C
 * Callers:
 *     ?GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x1800862E0 (-GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::GetColorContextNoRef(CD2DContext *this, unsigned int a2, struct ID2D1ColorContext **a3)
{
  DWORD v3; // ebx
  char v4; // bp
  __int64 v5; // rsi
  __int64 v9; // rcx
  signed int v10; // eax
  unsigned int v11; // edx
  _QWORD *v12; // r10
  __int64 v13; // rcx
  unsigned int v14; // eax
  signed int v15; // eax
  struct ID2D1ColorContext *v17; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  v4 = 0;
  v17 = 0LL;
  v5 = 0LL;
  *a3 = 0LL;
  if ( !*((_DWORD *)this + 70) )
    goto LABEL_6;
  do
  {
    v9 = *(_QWORD *)(*((_QWORD *)this + 32) + 8 * v5);
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9) == a2 )
    {
      v4 = 1;
      *a3 = *(struct ID2D1ColorContext **)(*((_QWORD *)this + 32) + 8 * v5);
    }
    v5 = (unsigned int)(v5 + 1);
  }
  while ( (unsigned int)v5 < *((_DWORD *)this + 70) );
  if ( !v4 )
  {
LABEL_6:
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, struct ID2D1ColorContext **))(**((_QWORD **)this + 22)
                                                                                                 + 472LL))(
            *((_QWORD *)this + 22),
            a2,
            0LL,
            0LL,
            &v17);
    v3 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x763u);
    }
    else
    {
      v11 = (unsigned int)v17;
      v12 = (_QWORD *)((char *)this + 256);
      v13 = *((unsigned int *)this + 70);
      v14 = v13 + 1;
      if ( (int)v13 + 1 >= (unsigned int)v13 )
        v11 = v13 + 1;
      v3 = v14 < (unsigned int)v13 ? 0x80070216 : 0;
      if ( v14 < (unsigned int)v13 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0xB5u);
      }
      else if ( v11 > *((_DWORD *)this + 69) )
      {
        v15 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v12, 8u, 1, &v17);
        v3 = v15;
        if ( v15 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*v12 + 8 * v13) = v17;
        *((_DWORD *)this + 70) = v11;
      }
      if ( (v3 & 0x80000000) == 0 )
      {
        *a3 = v17;
        return v3;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x765u);
    }
  }
  if ( v17 )
    (*(void (__fastcall **)(struct ID2D1ColorContext *))(*(_QWORD *)v17 + 16LL))(v17);
  return v3;
}
