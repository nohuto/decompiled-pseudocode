/*
 * XREFs of ?EnterClippingScope@CScopedClipStack@@QEAAJ_NPEBVCMILMatrix@@@Z @ 0x18000F9B0
 * Callers:
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@1@Z @ 0x18000D8F8 (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@1@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CScopedClipStack::EnterClippingScope(CScopedClipStack *this, char a2, const struct CMILMatrix *a3)
{
  __int64 v4; // rcx
  unsigned int v5; // edx
  unsigned int v6; // eax
  int v7; // ebx
  _OWORD *v8; // rcx
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  int v14; // eax
  _BYTE v15[80]; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v16; // [rsp+98h] [rbp+18h]

  *(_DWORD *)&v15[76] = 0;
  *(_QWORD *)&v15[4] = 0LL;
  v15[0] = a2;
  if ( a3 )
  {
    v10 = *(_OWORD *)a3;
    v11 = *((_OWORD *)a3 + 1);
    *(_DWORD *)&v15[76] = *((_DWORD *)a3 + 16);
    *(_OWORD *)&v15[12] = v10;
    v12 = *((_OWORD *)a3 + 2);
    *(_OWORD *)&v15[28] = v11;
    v13 = *((_OWORD *)a3 + 3);
    *(_OWORD *)&v15[44] = v12;
    *(_OWORD *)&v15[60] = v13;
  }
  else
  {
    *(_OWORD *)&v15[12] = _xmm;
    *(_WORD *)&v15[76] = 32085;
    *(_OWORD *)&v15[28] = _xmm;
    *(_OWORD *)&v15[44] = _xmm;
    *(_OWORD *)&v15[60] = _xmm;
  }
  v4 = *((unsigned int *)this + 6);
  v5 = v16;
  v6 = v4 + 1;
  if ( (int)v4 + 1 >= (unsigned int)v4 )
    v5 = v4 + 1;
  v7 = v6 < (unsigned int)v4 ? 0x80070216 : 0;
  if ( v6 < (unsigned int)v4 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xB5u);
  }
  else if ( v5 > *((_DWORD *)this + 5) )
  {
    v14 = DynArrayImpl<0>::AddMultipleAndSet(this, 80LL, 1LL, v15);
    v7 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xC0u);
  }
  else
  {
    v8 = (_OWORD *)(*(_QWORD *)this + 80 * v4);
    *v8 = *(_OWORD *)v15;
    v8[1] = *(_OWORD *)&v15[16];
    v8[2] = *(_OWORD *)&v15[32];
    v8[3] = *(_OWORD *)&v15[48];
    v8[4] = *(_OWORD *)&v15[64];
    *((_DWORD *)this + 6) = v5;
  }
  if ( v7 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x3Cu);
  return (unsigned int)v7;
}
