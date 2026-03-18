/*
 * XREFs of ?GetContextCandidates@COverlayContext@@CAJPEAV1@AEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@1@Z @ 0x180150CF4
 * Callers:
 *     ?DeriveCheckCandidatesList@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x1800C83C0 (-DeriveCheckCandidatesList@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEAV-$D.c)
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x18014FA70 (-CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEA.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall COverlayContext::GetContextCandidates(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 v4; // rdi
  unsigned int v8; // ebp
  _QWORD *v9; // r9
  __int64 v10; // rcx
  unsigned int v11; // eax
  int v12; // eax
  unsigned int v14; // [rsp+58h] [rbp+10h]

  v3 = 0;
  v4 = 0LL;
  if ( *(_DWORD *)(a2 + 24) )
  {
    v8 = v14;
    while ( 1 )
    {
      v9 = (_QWORD *)(*(_QWORD *)a2 + 8 * v4);
      if ( *(_QWORD *)*v9 == a1 )
      {
        v10 = *(unsigned int *)(a3 + 24);
        v11 = v10 + 1;
        if ( (int)v10 + 1 >= (unsigned int)v10 )
          v8 = v10 + 1;
        v3 = v11 < (unsigned int)v10 ? 0x80070216 : 0;
        if ( v11 < (unsigned int)v10 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xB5u);
        }
        else if ( v8 > *(_DWORD *)(a3 + 20) )
        {
          v12 = DynArrayImpl<0>::AddMultipleAndSet(a3, 8u, 1);
          v3 = v12;
          if ( v12 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xC0u);
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)a3 + 8 * v10) = *v9;
          *(_DWORD *)(a3 + 24) = v8;
        }
        if ( v3 < 0 )
          break;
      }
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= *(_DWORD *)(a2 + 24) )
        return (unsigned int)v3;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x1309u);
  }
  return (unsigned int)v3;
}
