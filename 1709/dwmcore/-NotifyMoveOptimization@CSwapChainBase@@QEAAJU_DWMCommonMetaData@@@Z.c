/*
 * XREFs of ?NotifyMoveOptimization@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x1801B2F94
 * Callers:
 *     ?NotifyMetaData@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x1801B2C8C (-NotifyMetaData@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800894CC (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180089680 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x1800896B4 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xx @ 0x180126DF8 (McTemplateU0xx.c)
 *     ?AddMultipleAndSet@?$DynArray@U_DWMIndirectMetaData@@$0A@@@QEAAJPEFBU_DWMIndirectMetaData@@I@Z @ 0x1801B27B8 (-AddMultipleAndSet@-$DynArray@U_DWMIndirectMetaData@@$0A@@@QEAAJPEFBU_DWMIndirectMetaData@@I@Z.c)
 *     McTemplateU0nn @ 0x1801B3724 (McTemplateU0nn.c)
 */

__int64 __fastcall CSwapChainBase::NotifyMoveOptimization(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  LONG v5; // eax
  struct tagRECT *v6; // r14
  int *v7; // r15
  int v8; // edx
  int v9; // r8d
  struct tagRECT v10; // xmm0
  unsigned int v11; // r8d
  signed int v12; // eax
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  char v16; // al
  int v17; // ecx
  struct tagRECT v18; // xmm0
  int v19; // eax
  signed int v20; // eax
  struct tagRECT v22; // [rsp+30h] [rbp-C8h] BYREF
  RECT rcSrc1; // [rsp+40h] [rbp-B8h] BYREF
  struct tagRECT rcDst; // [rsp+50h] [rbp-A8h] BYREF
  struct tagRECT rc; // [rsp+60h] [rbp-98h] BYREF
  void *v26[10]; // [rsp+70h] [rbp-88h] BYREF

  v4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 72LL))(a1) )
  {
    v5 = *(_DWORD *)(a1 + 120);
    v6 = (struct tagRECT *)(a2 + 16);
    rcSrc1.top = 0;
    rcSrc1.left = 0;
    rcSrc1.right = v5;
    rcSrc1.bottom = *(_DWORD *)(a1 + 124);
    if ( IntersectRect(&rcDst, &rcSrc1, (const RECT *)(a2 + 16)) )
    {
      v7 = (int *)(a2 + 32);
      v8 = *(_DWORD *)(a2 + 32);
      v9 = *(_DWORD *)(a2 + 36);
      rc = rcDst;
      OffsetRect(&rc, v8, v9);
      if ( IntersectRect(&rcDst, &rcSrc1, &rc) )
      {
        OffsetRect(&rcDst, -*v7, -*(_DWORD *)(a2 + 36));
        v10 = rcDst;
        *(_QWORD *)(a2 + 40) = 0LL;
        *v6 = v10;
        v12 = DynArray<_DWMIndirectMetaData,0>::AddMultipleAndSet(a1 + 344, (_OWORD *)a2, v11);
        v4 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x18Au);
        }
        else
        {
          v16 = Microsoft_Windows_Dwm_CoreEnableBits;
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          {
            McTemplateU0xx(
              Microsoft_Windows_Dwm_Core_Provider_Context,
              &EVTDESC_REMOTEAPP_METADATA_STATS,
              a1 + 344,
              *(unsigned int *)(a1 + 368));
            v16 = Microsoft_Windows_Dwm_CoreEnableBits;
          }
          if ( (v16 & 0x20) != 0 )
            McTemplateU0nn(v14, v13, v15, a2 + 32);
          v17 = *v7;
          v22 = *v6;
          v18 = v22;
          v22.right += v17;
          v22.left = v17 + _mm_cvtsi128_si32((__m128i)v18);
          v19 = *(_DWORD *)(a2 + 36);
          v22.top += v19;
          v22.bottom += v19;
          FastRegion::CRegion::CRegion((FastRegion::CRegion *)v26, &v22);
          v20 = FastRegion::CRegion::Union(
                  (const struct FastRegion::Internal::CRgnData **)(a1 + 200),
                  (const struct FastRegion::Internal::CRgnData **)v26);
          v4 = v20;
          if ( v20 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v20, 0x1A3u);
          FastRegion::CRegion::FreeMemory(v26);
        }
      }
    }
  }
  return v4;
}
