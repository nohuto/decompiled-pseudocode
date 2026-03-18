/*
 * XREFs of ?RemoveAtOrderNotPreserved@?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@QEAAJI@Z @ 0x1801445BC
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x180068110 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEAV-.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<COverlayContext::ReservedPlaneInfo,0>::RemoveAtOrderNotPreserved(
        __int64 *a1,
        unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // r10
  __int64 v5; // rax
  _OWORD *v6; // r8
  _OWORD *v7; // rax

  v2 = *((_DWORD *)a1 + 6);
  v3 = 0;
  if ( a2 >= v2 )
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x216u);
  }
  else
  {
    v4 = *a1;
    v5 = v2 - 1;
    if ( a2 < (unsigned int)v5 )
    {
      v6 = (_OWORD *)(v4 + 144LL * a2);
      v7 = (_OWORD *)(v4 + 144 * v5);
      *v6 = *v7;
      v6[1] = v7[1];
      v6[2] = v7[2];
      v6[3] = v7[3];
      v6[4] = v7[4];
      v6[5] = v7[5];
      v6[6] = v7[6];
      v6[7] = v7[7];
      v6[8] = v7[8];
    }
    --*((_DWORD *)a1 + 6);
  }
  return v3;
}
