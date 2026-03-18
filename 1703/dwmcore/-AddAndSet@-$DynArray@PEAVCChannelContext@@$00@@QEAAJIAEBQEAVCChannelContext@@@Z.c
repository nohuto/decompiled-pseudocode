/*
 * XREFs of ?AddAndSet@?$DynArray@PEAVCChannelContext@@$00@@QEAAJIAEBQEAVCChannelContext@@@Z @ 0x1800B1ADC
 * Callers:
 *     ?OpenChannel@CComposition@@IEAAJIK_K@Z @ 0x18005C0BC (-OpenChannel@CComposition@@IEAAJIK_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x1800B33A8 (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 */

__int64 __fastcall DynArray<CChannelContext *,1>::AddAndSet(__int64 a1, unsigned int a2, unsigned __int64 *a3)
{
  int v5; // eax
  __int64 v6; // r9
  unsigned int v7; // ebp
  unsigned __int64 *v8; // rdx
  unsigned int v9; // ecx
  unsigned __int64 *v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 *v13; // [rsp+58h] [rbp+20h] BYREF

  v5 = DynArrayImpl<1>::AddMultiple(a1, 8LL, a2, &v13);
  v6 = 0LL;
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xE5u);
  }
  else if ( a2 )
  {
    v8 = v13;
    if ( a2 >= 2 && (v13 > a3 || &v13[a2 - 1] < a3) )
    {
      v9 = a2 & 0xFFFFFFFE;
      do
        v6 = (unsigned int)(v6 + 2);
      while ( (unsigned int)v6 < v9 );
      memset64(v13, *a3, (2 * ((unsigned __int64)(v9 + 1) >> 1)) & 0x1FFFFFFFFFFFFFFFLL);
    }
    if ( (unsigned int)v6 < a2 )
    {
      v10 = &v8[v6];
      v11 = a2 - (unsigned int)v6;
      do
      {
        *v10++ = *a3;
        --v11;
      }
      while ( v11 );
    }
  }
  return v7;
}
