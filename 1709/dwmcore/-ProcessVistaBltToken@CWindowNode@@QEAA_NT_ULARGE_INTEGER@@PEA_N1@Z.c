/*
 * XREFs of ?ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z @ 0x180179680
 * Callers:
 *     ?ProcessUnclaimedVistBltTokensForNode@CLegacySurfaceManager@@IEAAJPEAVCWindowNode@@K@Z @ 0x18013B4DC (-ProcessUnclaimedVistBltTokensForNode@CLegacySurfaceManager@@IEAAJPEAVCWindowNode@@K@Z.c)
 *     ?ProcessVistaBltToken@CLegacySurfaceManager@@IEAA_NT_ULARGE_INTEGER@@PEA_N@Z @ 0x18013B5B8 (-ProcessVistaBltToken@CLegacySurfaceManager@@IEAA_NT_ULARGE_INTEGER@@PEA_N@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180051190 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?AddLocalDirtyRect@CWindowNode@@AEAAXAEBUMilRectF@@_N@Z @ 0x18009BB64 (-AddLocalDirtyRect@CWindowNode@@AEAAXAEBUMilRectF@@_N@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     McTemplateU0d @ 0x180126994 (McTemplateU0d.c)
 *     ?ProcessVistaBltToken@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180165A80 (-ProcessVistaBltToken@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?FindElement@?$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAPEAVTokenToUpdateListRecord@CWindowNode@@K@Z @ 0x180178990 (-FindElement@-$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAPEAVTokenToUpdateLi.c)
 *     ?ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ @ 0x1801798FC (-ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ.c)
 *     ?ShiftLeft@?$DynArray@UPendingDxUpdate@CWindowNode@@$0A@@@QEAAJI@Z @ 0x180179D6C (-ShiftLeft@-$DynArray@UPendingDxUpdate@CWindowNode@@$0A@@@QEAAJI@Z.c)
 *     McTemplateU0xxxn @ 0x18017A01C (McTemplateU0xxxn.c)
 */

char __fastcall CWindowNode::ProcessVistaBltToken(CWindowNode *this, union _ULARGE_INTEGER a2, bool *a3, bool *a4)
{
  DWORD LowPart; // ebx
  CWindowNode *v5; // rbp
  char *Element; // rax
  struct CFlipChain **v8; // r13
  unsigned int v9; // edx
  char v10; // si
  unsigned int i; // edi
  _QWORD *v12; // r14
  __int64 v13; // r12
  __int64 v14; // rax
  unsigned int v15; // r15d
  unsigned int v16; // ebp
  __int64 v17; // rbx
  bool *v18; // r15
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rcx

  LowPart = a2.LowPart;
  *a3 = 0;
  v5 = this;
  *a4 = 0;
  Element = (char *)CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::FindElement(
                      (struct _RTL_GENERIC_TABLE *)((char *)this + 712),
                      a2.HighPart);
  v8 = (struct CFlipChain **)Element;
  if ( !Element )
    return 0;
  v9 = *((_DWORD *)Element + 10);
  v10 = 1;
  for ( i = 0; i < v9; ++i )
  {
    if ( *(_DWORD *)(88LL * i + *((_QWORD *)Element + 2) + 8) >= LowPart )
      break;
  }
  if ( i < v9
    && (v12 = Element + 16, v13 = 88LL * i, v14 = *((_QWORD *)Element + 2), *(_DWORD *)(v13 + v14 + 8) == LowPart) )
  {
    *(_BYTE *)(v13 + v14) = 1;
    *a4 = 1;
    if ( i )
    {
      v15 = 0;
      v16 = i;
      v17 = 0LL;
      do
      {
        if ( *(_DWORD *)(v17 + *v12 + 16) == *(_DWORD *)(*v12 + v13 + 16)
          && *(_DWORD *)(v17 + *v12 + 20) == *(_DWORD *)(*v12 + v13 + 20) )
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_FLUSHPENDINGDXUPDATES, i);
          if ( v16 >= v15 )
            v16 = v15;
          *(_BYTE *)(v17 + *v12) = 1;
        }
        ++v15;
        v17 += 88LL;
      }
      while ( v15 < i );
      i = v16;
      v5 = this;
    }
    v18 = a3;
    if ( !i )
    {
      if ( *((_DWORD *)v8 + 10) )
      {
        do
        {
          v19 = 88LL * i;
          if ( !*(_BYTE *)(v19 + *v12) )
            break;
          CFlipChain::ProcessVistaBltToken(
            v8[1],
            *(_QWORD *)(v19 + *v12 + 8),
            *(_QWORD *)(v19 + *v12 + 24),
            v19 + *v12 + 32LL);
          CWindowNode::AddLocalDirtyRect(v5, (const struct MilRectF *)(v19 + *v12 + 32LL), 0);
          v20 = *((_QWORD *)v5 + 125);
          if ( v20 && !*(_BYTE *)(v20 + 16) )
          {
            *(_BYTE *)(v20 + 16) = 1;
            v21 = *(_QWORD *)v20;
            *(_BYTE *)(v21 + 1008) = 0;
            CVisual::PropagateFlags(v21, 5u, 0);
          }
          if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_FLIPCHAIN_Complete)
            && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          {
            McTemplateU0xxxn(
              (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
              (unsigned int)&EVTDESC_ETWGUID_FLIPCHAIN_Complete,
              *(_DWORD *)(v19 + *v12 + 12),
              *((_QWORD *)v5 + 74),
              *(_DWORD *)(v19 + *v12 + 8));
          }
          *a3 = 1;
          CWindowNode::PendingDxUpdate::ReleaseResponses((CWindowNode::PendingDxUpdate *)(v19 + *v12));
          ++i;
        }
        while ( i < *((_DWORD *)v8 + 10) );
      }
      DynArray<CWindowNode::PendingDxUpdate,0>::ShiftLeft(v8 + 2, i);
    }
  }
  else
  {
    v18 = a3;
  }
  if ( *v18 )
    CVisual::PropagateFlags((__int64)v5, 8u, 0);
  return v10;
}
