/*
 * XREFs of ?GetPrimaryDisplayDimensions@CComposition@@QEAAJPEAH0@Z @ 0x18013F6A0
 * Callers:
 *     ?ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUMILCMD_SNAPSHOT@@@Z @ 0x18012DBC0 (-ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUMILCMD_SNAPSHOT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18007F234 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x1800B76D8 (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x1800B7768 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::GetPrimaryDisplayDimensions(CComposition *this, int *a2, int *a3)
{
  struct CDisplay *v4; // rbx
  int CurrentDisplaySet; // eax
  unsigned int v7; // edi
  int PrimaryDisplay; // eax
  __int64 v9; // rcx
  unsigned __int64 v10; // xmm0_8
  CDisplaySet *v12; // [rsp+30h] [rbp-28h] BYREF
  struct CDisplay *v13; // [rsp+38h] [rbp-20h] BYREF

  v12 = 0LL;
  v4 = 0LL;
  v13 = 0LL;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v12);
  v7 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801FC660, 2u, CurrentDisplaySet, 0xDC0u);
  }
  else
  {
    PrimaryDisplay = CDisplaySet::GetPrimaryDisplay(v12, &v13);
    v7 = PrimaryDisplay;
    if ( PrimaryDisplay < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801FC660, 2u, PrimaryDisplay, 0xDC2u);
      v4 = v13;
    }
    else
    {
      v4 = v13;
      v9 = *((_QWORD *)v13 + 12);
      v10 = _mm_srli_si128(*((__m128i *)v13 + 6), 8).m128i_u64[0];
      *a2 = v10 - v9;
      *a3 = HIDWORD(v10) - HIDWORD(v9);
    }
  }
  if ( v12 )
    CDisplaySet::Release(v12);
  if ( v4 )
    (*(void (__fastcall **)(struct CDisplay *))(*(_QWORD *)v4 + 8LL))(v4);
  return v7;
}
