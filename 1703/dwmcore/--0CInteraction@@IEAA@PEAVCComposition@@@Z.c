/*
 * XREFs of ??0CInteraction@@IEAA@PEAVCComposition@@@Z @ 0x18004B56C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18005A0F8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ?GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z @ 0x18007E21C (-GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ?GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z @ 0x18007F63C (-GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x18009A95C (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     ??0CInteractionProcessor@@QEAA@XZ @ 0x1800B29C0 (--0CInteractionProcessor@@QEAA@XZ.c)
 *     Template_x @ 0x18013BE18 (Template_x.c)
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
  *((_DWORD *)this + 48) = 0;
  *((_BYTE *)this + 200) &= ~8u;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  CMILMatrix::GetD3DMatrix((CMILMatrix *)&CMILMatrix::Identity, (struct _D3DMATRIX *)((char *)this + 296));
  CInteractionProcessor::CInteractionProcessor((CInteraction *)((char *)this + 360));
  *((_QWORD *)this + 168) = 0LL;
  *((_DWORD *)this + 328) = 0;
  AcquireSRWLockExclusive(&CInteraction::s_InteractionHandleTableLock);
  if ( (int)HANDLE_TABLE::GetNewEntry(
              (HANDLE_TABLE *)&CInteraction::s_InteractionHandleTable,
              0x6Bu,
              (unsigned int *)this + 328) >= 0 )
    *((_QWORD *)CInteraction::GetEntry(*((_DWORD *)this + 328)) + 1) = this;
  ReleaseSRWLockExclusive(&CInteraction::s_InteractionHandleTableLock);
  QueryPerformanceCounter(&PerformanceCount);
  *((LARGE_INTEGER *)this + 165) = PerformanceCount;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_x(v4, &INTERACTION_CREATED, v2);
  return this;
}
