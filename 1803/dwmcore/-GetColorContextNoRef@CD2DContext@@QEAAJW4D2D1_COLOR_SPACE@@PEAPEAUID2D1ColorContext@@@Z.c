/*
 * XREFs of ?GetColorContextNoRef@CD2DContext@@QEAAJW4D2D1_COLOR_SPACE@@PEAPEAUID2D1ColorContext@@@Z @ 0x1801E383C
 * Callers:
 *     ?GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x1801F4AB0 (-GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::GetColorContextNoRef(CD2DContext *this, unsigned int a2, struct ID2D1ColorContext **a3)
{
  int v3; // ebx
  char v4; // bp
  __int64 v5; // rsi
  __int64 v9; // rcx
  int v10; // eax
  _QWORD *v11; // r10
  unsigned int v12; // eax
  unsigned int v13; // edx
  int v14; // eax
  struct ID2D1ColorContext *v16; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  v4 = 0;
  v16 = 0LL;
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
            &v16);
    v3 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x7AFu);
    }
    else
    {
      v11 = (_QWORD *)((char *)this + 256);
      v12 = *((_DWORD *)this + 70);
      v13 = v12 + 1;
      v3 = v12 + 1 < v12 ? 0x80070216 : 0;
      if ( v12 + 1 < v12 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xB5u);
      }
      else if ( v13 > *((_DWORD *)this + 69) )
      {
        v14 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v11, 8u, 1, &v16);
        v3 = v14;
        if ( v14 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*v11 + 8LL * v12) = v16;
        *((_DWORD *)this + 70) = v13;
      }
      if ( v3 >= 0 )
      {
        *a3 = v16;
        return (unsigned int)v3;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x7B1u);
    }
  }
  if ( v16 )
    (*(void (__fastcall **)(struct ID2D1ColorContext *))(*(_QWORD *)v16 + 16LL))(v16);
  return (unsigned int)v3;
}
