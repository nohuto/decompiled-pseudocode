/*
 * XREFs of ?GetContextCandidates@COverlayContext@@CAJPEAV1@AEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@1@Z @ 0x180142C1C
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@AEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x180140E68 (-CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEA.c)
 *     ?DeriveCheckCandidatesList@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@AEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x180141A60 (-DeriveCheckCandidatesList@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEAV-$D.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall COverlayContext::GetContextCandidates(__int64 a1, __int64 a2, __int64 a3)
{
  DWORD v3; // ebx
  __int64 v4; // rdi
  unsigned int v8; // esi
  unsigned int v9; // edx
  _QWORD *v10; // r9
  __int64 v11; // rcx
  unsigned int v12; // eax
  signed int v13; // eax
  unsigned int v15; // [rsp+58h] [rbp+10h]

  v3 = 0;
  v4 = 0LL;
  if ( *(_DWORD *)(a2 + 24) )
  {
    v8 = v15;
    while ( 1 )
    {
      v9 = v8;
      v10 = (_QWORD *)(*(_QWORD *)a2 + 8 * v4);
      if ( *(_QWORD *)*v10 == a1 )
      {
        v11 = *(unsigned int *)(a3 + 24);
        v12 = v11 + 1;
        v8 = v11 + 1;
        if ( (int)v11 + 1 < (unsigned int)v11 )
          v8 = v9;
        v3 = v12 < (unsigned int)v11 ? 0x80070216 : 0;
        if ( v12 < (unsigned int)v11 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0xB5u);
        }
        else if ( v8 > *(_DWORD *)(a3 + 20) )
        {
          v13 = DynArrayImpl<0>::AddMultipleAndSet(a3, 8u, 1);
          v3 = v13;
          if ( v13 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0xC0u);
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)a3 + 8 * v11) = *v10;
          *(_DWORD *)(a3 + 24) = v8;
        }
        if ( (v3 & 0x80000000) != 0 )
          break;
      }
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= *(_DWORD *)(a2 + 24) )
        return v3;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x13CFu);
  }
  return v3;
}
