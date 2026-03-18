/*
 * XREFs of ?EnterClippingScope@CScopedClipStack@@QEAAJ_NPEBVCMILMatrix@@@Z @ 0x18006331C
 * Callers:
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@1@Z @ 0x18006C62C (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@1@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CScopedClipStack::EnterClippingScope(CScopedClipStack *this, char a2, const struct CMILMatrix *a3)
{
  __int64 v4; // rax
  unsigned int v5; // edx
  int v6; // ebx
  _OWORD *v7; // rcx
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  int v13; // eax
  _BYTE v14[80]; // [rsp+30h] [rbp-50h] BYREF

  *(_DWORD *)&v14[76] = 0;
  *(_QWORD *)&v14[4] = 0LL;
  v14[0] = a2;
  if ( a3 )
  {
    v9 = *(_OWORD *)a3;
    v10 = *((_OWORD *)a3 + 1);
    *(_DWORD *)&v14[76] = *((_DWORD *)a3 + 16);
    *(_OWORD *)&v14[12] = v9;
    v11 = *((_OWORD *)a3 + 2);
    *(_OWORD *)&v14[28] = v10;
    v12 = *((_OWORD *)a3 + 3);
    *(_OWORD *)&v14[44] = v11;
    *(_OWORD *)&v14[60] = v12;
  }
  else
  {
    *(_OWORD *)&v14[12] = _xmm;
    *(_WORD *)&v14[76] = 32085;
    *(_OWORD *)&v14[28] = _xmm;
    *(_OWORD *)&v14[44] = _xmm;
    *(_OWORD *)&v14[60] = _xmm;
  }
  v4 = *((unsigned int *)this + 6);
  v5 = v4 + 1;
  v6 = (int)v4 + 1 < (unsigned int)v4 ? 0x80070216 : 0;
  if ( (int)v4 + 1 < (unsigned int)v4 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xB5u);
  }
  else if ( v5 > *((_DWORD *)this + 5) )
  {
    v13 = DynArrayImpl<0>::AddMultipleAndSet(this, 80LL, 1LL, v14);
    v6 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xC0u);
  }
  else
  {
    v7 = (_OWORD *)(*(_QWORD *)this + 80 * v4);
    *v7 = *(_OWORD *)v14;
    v7[1] = *(_OWORD *)&v14[16];
    v7[2] = *(_OWORD *)&v14[32];
    v7[3] = *(_OWORD *)&v14[48];
    v7[4] = *(_OWORD *)&v14[64];
    *((_DWORD *)this + 6) = v5;
  }
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x3Cu);
  return (unsigned int)v6;
}
