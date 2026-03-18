/*
 * XREFs of ?EnsureAvailableStackSpace@CExpressionValueStack@@QEAAJI@Z @ 0x18001EFBC
 * Callers:
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x180030E90 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x1800B33A8 (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

__int64 __fastcall CExpressionValueStack::EnsureAvailableStackSpace(CExpressionValueStack *this, unsigned int a2)
{
  int v2; // edi
  __int64 v5; // rdi
  int v6; // eax
  int v7; // ebx
  _OWORD *v8; // rsi
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  _OWORD *v13; // [rsp+30h] [rbp-78h] BYREF
  _OWORD v14[4]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v15; // [rsp+80h] [rbp-28h]

  v2 = *((_DWORD *)this + 4);
  if ( a2 > ~v2 )
  {
    v7 = -2147418113;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0x40u);
  }
  else
  {
    if ( *((_DWORD *)this + 12) - v2 >= a2 )
      return 0;
    memset_0(v14, 0, sizeof(v14));
    v5 = a2 + v2 - *((_DWORD *)this + 12);
    LODWORD(v15) = 18;
    BYTE4(v15) = 0;
    v6 = DynArrayImpl<1>::AddMultiple((char *)this + 24, 72LL, (unsigned int)v5, &v13);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xE5u);
    }
    else if ( (_DWORD)v5 )
    {
      v8 = v13;
      v9 = v14[1];
      *v13 = v14[0];
      v10 = v14[2];
      v8[1] = v9;
      v11 = v14[3];
      v8[2] = v10;
      *(_QWORD *)&v10 = v15;
      v8[3] = v11;
      *((_QWORD *)v8 + 8) = v10;
      qmemcpy((char *)v8 + 72, v8, 8 * ((unsigned __int64)(72 * v5 - 72) >> 3));
    }
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x48u);
    else
      return 0;
  }
  return (unsigned int)v7;
}
