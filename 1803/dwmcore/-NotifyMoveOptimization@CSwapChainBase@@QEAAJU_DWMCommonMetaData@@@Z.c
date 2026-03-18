/*
 * XREFs of ?NotifyMoveOptimization@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x1801EBA78
 * Callers:
 *     ?NotifyMetaData@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x1801EB580 (-NotifyMetaData@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180080104 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180080200 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180080234 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0pp @ 0x18014AD40 (McTemplateU0pp.c)
 *     McTemplateU0nn @ 0x1801EBD60 (McTemplateU0nn.c)
 */

__int64 __fastcall CSwapChainBase::NotifyMoveOptimization(__int64 a1, __int64 a2)
{
  int v4; // ebx
  LONG v5; // eax
  struct tagRECT *v6; // r15
  int *v7; // r12
  int v8; // edx
  int v9; // r8d
  int v10; // r8d
  __int64 v11; // rax
  unsigned int v12; // edx
  _OWORD *v13; // rcx
  int v14; // eax
  char v15; // al
  int v16; // ecx
  struct tagRECT v17; // xmm0
  int v18; // eax
  int v19; // eax
  unsigned int v21; // [rsp+20h] [rbp-D8h]
  struct tagRECT v22; // [rsp+30h] [rbp-C8h] BYREF
  RECT rcSrc1; // [rsp+40h] [rbp-B8h] BYREF
  struct tagRECT rcDst; // [rsp+50h] [rbp-A8h] BYREF
  struct tagRECT rc; // [rsp+60h] [rbp-98h] BYREF
  void *v26[10]; // [rsp+70h] [rbp-88h] BYREF

  v4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1) )
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
        *(_QWORD *)(a2 + 40) = 0LL;
        *v6 = rcDst;
        v11 = *(unsigned int *)(a1 + 368);
        v12 = v11 + 1;
        v4 = (int)v11 + 1 < (unsigned int)v11 ? 0x80070216 : 0;
        if ( (int)v11 + 1 < (unsigned int)v11 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xB5u);
        }
        else if ( v12 > *(_DWORD *)(a1 + 364) )
        {
          v14 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 344, 0x30u, 1, a2);
          v4 = v14;
          if ( v14 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xC0u);
        }
        else
        {
          v13 = (_OWORD *)(*(_QWORD *)(a1 + 344) + 48 * v11);
          *v13 = *(_OWORD *)a2;
          v13[1] = *(_OWORD *)(a2 + 16);
          v13[2] = *(_OWORD *)(a2 + 32);
          *(_DWORD *)(a1 + 368) = v12;
        }
        if ( v4 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x145u);
        }
        else
        {
          v15 = Microsoft_Windows_Dwm_CoreEnableBits;
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          {
            McTemplateU0pp((__int64)v13, &EVTDESC_REMOTEAPP_METADATA_STATS, a1 + 344, *(unsigned int *)(a1 + 368));
            v15 = Microsoft_Windows_Dwm_CoreEnableBits;
          }
          if ( (v15 & 0x20) != 0 )
            McTemplateU0nn((_DWORD)v13, v12, v10, a2 + 32, v21, a2 + 16);
          v16 = *v7;
          v22 = *v6;
          v17 = v22;
          v22.right += v16;
          v22.left = v16 + _mm_cvtsi128_si32((__m128i)v17);
          v18 = *(_DWORD *)(a2 + 36);
          v22.top += v18;
          v22.bottom += v18;
          FastRegion::CRegion::CRegion((FastRegion::CRegion *)v26, &v22);
          v19 = FastRegion::CRegion::Union((int **)(a1 + 200), (int **)v26);
          v4 = v19;
          if ( v19 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x15Eu);
          FastRegion::CRegion::FreeMemory(v26);
        }
      }
    }
  }
  return (unsigned int)v4;
}
