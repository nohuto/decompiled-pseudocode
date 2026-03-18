/*
 * XREFs of ?UpdateConfigurationIfDirty@CChainingHelper@@QEAAXPEAVCInteraction@@@Z @ 0x1801889B8
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x18002CE40 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?ReleaseManipulations@CInteractionTracker@@AEAAXXZ @ 0x18016D548 (-ReleaseManipulations@CInteractionTracker@@AEAAXXZ.c)
 *     _lambda_2ee6e74848a4ca29603542c81c185b92_::operator() @ 0x180188754 (_lambda_2ee6e74848a4ca29603542c81c185b92_--operator().c)
 * Callees:
 *     CChainingHelper::RunForAllAxes__lambda_1e5d9756e7d7dec37c99f750d2178ac8___ @ 0x1801885EC (CChainingHelper--RunForAllAxes__lambda_1e5d9756e7d7dec37c99f750d2178ac8___.c)
 *     CChainingHelper::RunForAllAxes__lambda_23f88ebc045d49f831271d5759945fa1___ @ 0x180188674 (CChainingHelper--RunForAllAxes__lambda_23f88ebc045d49f831271d5759945fa1___.c)
 *     CChainingHelper::RunForAllAxes__lambda_408235350fb3fde3f1635dd6a9cd52f4___ @ 0x1801886D0 (CChainingHelper--RunForAllAxes__lambda_408235350fb3fde3f1635dd6a9cd52f4___.c)
 */

void __fastcall CChainingHelper::UpdateConfigurationIfDirty(
        CChainingHelper *this,
        struct CInteraction *a2,
        __int64 a3,
        __int64 a4)
{
  CChainingHelper *v4; // rbx
  int v5; // eax
  CChainingHelper *v6; // rdx
  __int64 v7; // r10
  struct CInteraction **v8; // [rsp+20h] [rbp-20h] BYREF
  CChainingHelper *v9; // [rsp+28h] [rbp-18h]
  int *v10; // [rsp+30h] [rbp-10h]
  char v11; // [rsp+50h] [rbp+10h] BYREF
  struct CInteraction *v12; // [rsp+58h] [rbp+18h] BYREF
  int v13; // [rsp+60h] [rbp+20h] BYREF

  v12 = a2;
  v4 = this;
  if ( (*((_BYTE *)this + 36) & 1) != 0 )
  {
    v5 = 0;
    LOBYTE(a3) = 0;
    v13 = 0;
    LOBYTE(a4) = 0;
    v11 = 0;
    v6 = this;
    v7 = 3LL;
    do
    {
      LOBYTE(this) = *(_BYTE *)v6;
      if ( (*(_BYTE *)v6 & 1) != 0 )
      {
        v5 |= *((_DWORD *)v6 + 1);
        LOBYTE(a4) = 1;
        LOBYTE(this) = ((unsigned __int8)this & 2) != 0;
        LOBYTE(a3) = (unsigned __int8)this | a3;
      }
      v6 = (CChainingHelper *)((char *)v6 + 12);
      --v7;
    }
    while ( v7 );
    v13 = v5;
    v8 = &v12;
    v11 = a3;
    if ( (_BYTE)a4 )
    {
      v9 = (CChainingHelper *)&v11;
      v10 = &v13;
      CChainingHelper::RunForAllAxes__lambda_23f88ebc045d49f831271d5759945fa1___((__int64)this, (__int64)&v8);
    }
    else
    {
      v9 = v4;
      CChainingHelper::RunForAllAxes__lambda_408235350fb3fde3f1635dd6a9cd52f4___((__int64)this, (__int64)&v8, a3, a4);
    }
    *((_BYTE *)v4 + 36) &= ~1u;
  }
  if ( (*((_BYTE *)v4 + 36) & 2) != 0 )
  {
    v9 = v4;
    v8 = &v12;
    CChainingHelper::RunForAllAxes__lambda_1e5d9756e7d7dec37c99f750d2178ac8___((__int64)this, (__int64)&v8, a3, a4);
    *((_BYTE *)v4 + 36) &= ~2u;
  }
}
