/*
 * XREFs of ?RemoveAtOrderNotPreserved@?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@QEAAJI@Z @ 0x1801676F8
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x180079180 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEAV-.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<COverlayContext::ReservedPlaneInfo,0>::RemoveAtOrderNotPreserved(
        __int64 *a1,
        unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx
  __int64 v5; // r10
  __int64 v6; // rcx
  _OWORD *v7; // r8
  _OWORD *v8; // rax

  v2 = *((_DWORD *)a1 + 6);
  v3 = 0;
  if ( a2 >= v2 )
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x21Fu);
  }
  else
  {
    v5 = *a1;
    v6 = v2 - 1;
    if ( a2 < (unsigned int)v6 )
    {
      v7 = (_OWORD *)(v5 + 144LL * a2);
      v8 = (_OWORD *)(v5 + 144 * v6);
      *v7 = *v8;
      v7[1] = v8[1];
      v7[2] = v8[2];
      v7[3] = v8[3];
      v7[4] = v8[4];
      v7[5] = v8[5];
      v7[6] = v8[6];
      v7[7] = v8[7];
      v7[8] = v8[8];
      v2 = *((_DWORD *)a1 + 6);
    }
    *((_DWORD *)a1 + 6) = v2 - 1;
  }
  return v3;
}
