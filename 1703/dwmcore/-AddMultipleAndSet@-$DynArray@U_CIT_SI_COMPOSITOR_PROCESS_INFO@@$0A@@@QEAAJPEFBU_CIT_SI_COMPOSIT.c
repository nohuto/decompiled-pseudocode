/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@U_CIT_SI_COMPOSITOR_PROCESS_INFO@@$0A@@@QEAAJPEFBU_CIT_SI_COMPOSITOR_PROCESS_INFO@@I@Z @ 0x18019CE38
 * Callers:
 *     ?PresentInternal@CDWMSwapChain@@UEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18003E0C0 (-PresentInternal@CDWMSwapChain@@UEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     ?SendReportToE3@CEnergyReporter@@AEAAX_K@Z @ 0x18014425C (-SendReportToE3@CEnergyReporter@@AEAAX_K@Z.c)
 *     ?PresentInternal@CDWMSwapChainDDA@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18019DBD0 (-PresentInternal@CDWMSwapChainDDA@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall DynArray<_CIT_SI_COMPOSITOR_PROCESS_INFO,0>::AddMultipleAndSet(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  __int64 v3; // rax
  unsigned int v5; // ecx
  unsigned int v6; // r8d
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // eax

  v3 = *(unsigned int *)(a1 + 24);
  v5 = v3 + 1;
  v6 = v3 + 1;
  if ( (int)v3 + 1 < (unsigned int)v3 )
    v6 = a3;
  v7 = v5 < (unsigned int)v3 ? 0x80070216 : 0;
  if ( v5 < (unsigned int)v3 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xB5u);
  }
  else if ( v6 > *(_DWORD *)(a1 + 20) )
  {
    v10 = DynArrayImpl<0>::AddMultipleAndSet(a1, 0x18u, 1, a2);
    v7 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xC0u);
  }
  else
  {
    v8 = 3 * v3;
    v9 = *(_QWORD *)a1;
    *(_OWORD *)(v9 + 8 * v8) = *(_OWORD *)a2;
    *(_QWORD *)(v9 + 8 * v8 + 16) = *(_QWORD *)(a2 + 16);
    *(_DWORD *)(a1 + 24) = v6;
  }
  return v7;
}
