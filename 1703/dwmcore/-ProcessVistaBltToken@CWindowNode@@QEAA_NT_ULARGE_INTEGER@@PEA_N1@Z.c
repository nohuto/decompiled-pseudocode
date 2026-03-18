/*
 * XREFs of ?ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z @ 0x1800D0400
 * Callers:
 *     ?ProcessVistaBltToken@CLegacySurfaceManager@@IEAA_NT_ULARGE_INTEGER@@PEA_N@Z @ 0x1800B0788 (-ProcessVistaBltToken@CLegacySurfaceManager@@IEAA_NT_ULARGE_INTEGER@@PEA_N@Z.c)
 *     ?ProcessUnclaimedVistBltTokensForNode@CLegacySurfaceManager@@IEAAJPEAVCWindowNode@@K@Z @ 0x180149B58 (-ProcessUnclaimedVistBltTokensForNode@CLegacySurfaceManager@@IEAAJPEAVCWindowNode@@K@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z @ 0x180083880 (-PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z.c)
 *     ?ProcessVistaBltToken@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B1304 (-ProcessVistaBltToken@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?ValidateContent@CDxAccumulationContext@@QEAAXXZ @ 0x1800CB7F8 (-ValidateContent@CDxAccumulationContext@@QEAAXXZ.c)
 *     ?ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ @ 0x1800CC130 (-ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?AddLocalDirtyRect@CWindowNode@@AEAAXAEBUMilRectF@@_N@Z @ 0x18012A814 (-AddLocalDirtyRect@CWindowNode@@AEAAXAEBUMilRectF@@_N@Z.c)
 *     ?ShiftLeft@?$DynArray@UPendingDxUpdate@CWindowNode@@$0A@@@QEAAJI@Z @ 0x1801330B8 (-ShiftLeft@-$DynArray@UPendingDxUpdate@CWindowNode@@$0A@@@QEAAJI@Z.c)
 *     ?FindElement@?$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAPEAVTokenToUpdateListRecord@CWindowNode@@K@Z @ 0x180133A70 (-FindElement@-$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAPEAVTokenToUpdateLi.c)
 *     Template_q @ 0x18013BB44 (Template_q.c)
 *     Template_xxxn @ 0x1801630F4 (Template_xxxn.c)
 */

char __fastcall CWindowNode::ProcessVistaBltToken(CWindowNode *this, union _ULARGE_INTEGER a2, bool *a3, bool *a4)
{
  DWORD LowPart; // ebx
  CWindowNode *v5; // rbp
  __int64 Element; // rax
  __int64 v8; // r13
  char i; // si
  unsigned int v10; // edx
  unsigned int v11; // edi
  bool *v12; // r15
  __int64 *v14; // r14
  __int64 v15; // r12
  __int64 v16; // rax
  unsigned int v17; // r15d
  unsigned int v18; // ebp
  __int64 v19; // rbx
  CDxAccumulationContext *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rcx
  int v24; // [rsp+28h] [rbp-80h]
  CWindowNode *v26; // [rsp+48h] [rbp-60h] BYREF
  int v27; // [rsp+50h] [rbp-58h]
  int v28; // [rsp+54h] [rbp-54h]

  LowPart = a2.LowPart;
  v26 = this;
  v5 = this;
  *a3 = 0;
  *a4 = 0;
  Element = CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::FindElement(
              (char *)this + 688,
              a2.HighPart);
  v8 = Element;
  if ( !Element )
    return 0;
  v10 = *(_DWORD *)(Element + 40);
  v11 = 0;
  for ( i = 1; v11 < v10; ++v11 )
  {
    if ( *(_DWORD *)(88LL * v11 + *(_QWORD *)(Element + 16) + 8) >= LowPart )
      break;
  }
  if ( v11 >= v10 )
    goto LABEL_5;
  v14 = (__int64 *)(Element + 16);
  v15 = 88LL * v11;
  v16 = *(_QWORD *)(Element + 16);
  if ( *(_DWORD *)(v15 + v16 + 8) != LowPart )
    goto LABEL_5;
  *(_BYTE *)(v15 + v16) = 1;
  *a4 = 1;
  if ( !v11 )
    goto LABEL_13;
  v17 = 0;
  v18 = v11;
  v22 = 0LL;
  do
  {
    v23 = *v14;
    if ( *(_DWORD *)(v22 + *v14 + 16) == *(_DWORD *)(v15 + *v14 + 16)
      && *(_DWORD *)(v22 + v23 + 20) == *(_DWORD *)(v15 + v23 + 20) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_q(v23, &EVTDESC_ETWGUID_FLUSHPENDINGDXUPDATES, v11);
      if ( v18 >= v17 )
        v18 = v17;
      *(_BYTE *)(v22 + *v14) = 1;
    }
    ++v17;
    v22 += 88LL;
  }
  while ( v17 < v11 );
  v11 = v18;
  v5 = v26;
  if ( v11 )
  {
LABEL_5:
    v12 = a3;
  }
  else
  {
LABEL_13:
    v12 = a3;
    if ( *(_DWORD *)(v8 + 40) )
    {
      do
      {
        v19 = 88LL * v11;
        if ( !*(_BYTE *)(v19 + *v14) )
          break;
        CFlipChain::ProcessVistaBltToken(
          *(struct CFlipChain **)(v8 + 8),
          *(_QWORD *)(v19 + *v14 + 8),
          *(_QWORD *)(v19 + *v14 + 24),
          v19 + *v14 + 32);
        CWindowNode::AddLocalDirtyRect(v5, (const struct MilRectF *)(v19 + *v14 + 32), 0);
        v20 = (CDxAccumulationContext *)*((_QWORD *)v5 + 122);
        if ( v20 )
          CDxAccumulationContext::ValidateContent(v20);
        if ( EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_FLIPCHAIN_Complete) )
        {
          v21 = *v14;
          LODWORD(v26) = (int)*(float *)(v19 + *v14 + 32);
          HIDWORD(v26) = (int)*(float *)(v19 + v21 + 36);
          v27 = (int)*(float *)(v19 + v21 + 40);
          v28 = (int)*(float *)(v19 + v21 + 44);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            Template_xxxn(
              (unsigned int)&v26,
              (unsigned int)&EVTDESC_ETWGUID_FLIPCHAIN_Complete,
              *(_DWORD *)(v19 + v21 + 12),
              *((_QWORD *)v5 + 72),
              *(_DWORD *)(v19 + v21 + 8),
              v24,
              (__int64)&v26);
        }
        *a3 = 1;
        CWindowNode::PendingDxUpdate::ReleaseResponses((CWindowNode::PendingDxUpdate *)(v19 + *v14));
        ++v11;
      }
      while ( v11 < *(_DWORD *)(v8 + 40) );
    }
    DynArray<CWindowNode::PendingDxUpdate,0>::ShiftLeft(v8 + 16, v11);
  }
  if ( *v12 )
    CVisual::PropagateFlags(v5, 0, 0, 1, 0, 0, 0, 0);
  return i;
}
