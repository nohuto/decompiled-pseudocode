/*
 * XREFs of ??0CInteraction@@IEAA@PEAVCComposition@@@Z @ 0x180091B04
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800930B8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ?GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z @ 0x180010248 (-GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x18005ACD4 (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     ??0CInteractionProcessor@@QEAA@XZ @ 0x180091DB8 (--0CInteractionProcessor@@QEAA@XZ.c)
 *     ?GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z @ 0x1800BDAB4 (-GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     McTemplateU0p @ 0x180145834 (McTemplateU0p.c)
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
  *((_DWORD *)this + 52) = 0;
  *((_BYTE *)this + 216) &= ~8u;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  CMILMatrix::GetD3DMatrix((struct _D3DMATRIX *)&CMILMatrix::Identity, (struct _D3DMATRIX *)((char *)this + 312));
  CInteractionProcessor::CInteractionProcessor((CInteraction *)((char *)this + 376));
  *((_QWORD *)this + 194) = 0LL;
  *((_DWORD *)this + 380) = 0;
  AcquireSRWLockExclusive(&CInteraction::s_InteractionHandleTableLock);
  if ( (int)HANDLE_TABLE::GetNewEntry(
              (HANDLE_TABLE *)&CInteraction::s_InteractionHandleTable,
              76,
              (unsigned int *)this + 380) >= 0 )
    *((_QWORD *)CInteraction::GetEntry(*((_DWORD *)this + 380)) + 1) = this;
  ReleaseSRWLockExclusive(&CInteraction::s_InteractionHandleTableLock);
  QueryPerformanceCounter(&PerformanceCount);
  *((LARGE_INTEGER *)this + 191) = PerformanceCount;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0p(v4, &INTERACTION_CREATED, v2);
  return this;
}
