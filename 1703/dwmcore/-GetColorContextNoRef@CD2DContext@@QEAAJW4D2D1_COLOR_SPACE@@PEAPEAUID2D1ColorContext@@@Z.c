/*
 * XREFs of ?GetColorContextNoRef@CD2DContext@@QEAAJW4D2D1_COLOR_SPACE@@PEAPEAUID2D1ColorContext@@@Z @ 0x1801990FC
 * Callers:
 *     ?GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x18004D470 (-GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::GetColorContextNoRef(CD2DContext *this, unsigned int a2, struct ID2D1ColorContext **a3)
{
  int v3; // ebx
  char v4; // bp
  __int64 v5; // rsi
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // edx
  _QWORD *v12; // r10
  __int64 v13; // rcx
  unsigned int v14; // eax
  int v15; // eax
  struct ID2D1ColorContext *v17; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  v4 = 0;
  v17 = 0LL;
  v5 = 0LL;
  *a3 = 0LL;
  if ( !*((_DWORD *)this + 76) )
    goto LABEL_6;
  do
  {
    v9 = *(_QWORD *)(*((_QWORD *)this + 35) + 8 * v5);
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9) == a2 )
    {
      v4 = 1;
      *a3 = *(struct ID2D1ColorContext **)(*((_QWORD *)this + 35) + 8 * v5);
    }
    v5 = (unsigned int)(v5 + 1);
  }
  while ( (unsigned int)v5 < *((_DWORD *)this + 76) );
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x9AFu);
    }
    else
    {
      v11 = (unsigned int)v17;
      v12 = (_QWORD *)((char *)this + 280);
      v13 = *((unsigned int *)this + 76);
      v14 = v13 + 1;
      if ( (int)v13 + 1 >= (unsigned int)v13 )
        v11 = v13 + 1;
      v3 = v14 < (unsigned int)v13 ? 0x80070216 : 0;
      if ( v14 < (unsigned int)v13 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xB5u);
      }
      else if ( v11 > *((_DWORD *)this + 75) )
      {
        v15 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v12, 8u, 1, &v17);
        v3 = v15;
        if ( v15 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*v12 + 8 * v13) = v17;
        *((_DWORD *)this + 76) = v11;
      }
      if ( v3 >= 0 )
      {
        *a3 = v17;
        return (unsigned int)v3;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x9B1u);
    }
  }
  if ( v17 )
    (*(void (__fastcall **)(struct ID2D1ColorContext *))(*(_QWORD *)v17 + 16LL))(v17);
  return (unsigned int)v3;
}
