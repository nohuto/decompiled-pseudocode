/*
 * XREFs of ??0CInteraction@@IEAA@PEAVCComposition@@@Z @ 0x1800286F4
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002BD94 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CInteractionProcessor@@QEAA@XZ @ 0x180028D2C (--0CInteractionProcessor@@QEAA@XZ.c)
 *     ?GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z @ 0x180088984 (-GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x1800A3E2C (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     ?GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z @ 0x1800C47A8 (-GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     McTemplateU0p @ 0x18016CFBC (McTemplateU0p.c)
 */

CInteraction *__fastcall CInteraction::CInteraction(CInteraction *this, struct CComposition *a2)
{
  char *v2; // rdi
  __int64 v4; // rcx
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  v2 = (char *)this + 8;
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 1) = &CResource::`vftable';
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)this = &CInteraction::`vftable'{for `IInteractionResource'};
  *((_QWORD *)this + 1) = &CInteraction::`vftable'{for `CResource'};
  *((_DWORD *)this + 44) = 0;
  *((_BYTE *)this + 184) &= ~8u;
  *((_DWORD *)this + 47) = 4;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  CMILMatrix::GetD3DMatrix((CMILMatrix *)&CMILMatrix::Identity, (struct _D3DMATRIX *)((char *)this + 280));
  CInteractionProcessor::CInteractionProcessor((CInteraction *)((char *)this + 344));
  *((_QWORD *)this + 216) = 0LL;
  *((_DWORD *)this + 424) = 0;
  AcquireSRWLockExclusive(&CInteraction::s_InteractionHandleTableLock);
  if ( (int)HANDLE_TABLE::GetNewEntry(
              (HANDLE_TABLE *)&CInteraction::s_InteractionHandleTable,
              0x52u,
              (unsigned int *)this + 424) >= 0 )
    *((_QWORD *)CInteraction::GetEntry(*((_DWORD *)this + 424)) + 1) = this;
  ReleaseSRWLockExclusive(&CInteraction::s_InteractionHandleTableLock);
  QueryPerformanceCounter(&PerformanceCount);
  *((LARGE_INTEGER *)this + 213) = PerformanceCount;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0p(v4, &INTERACTION_CREATED, v2);
  return this;
}
