/*
 * XREFs of ?GetPrimaryDisplayDimensions@CComposition@@QEAAJPEAH0@Z @ 0x18014A31C
 * Callers:
 *     ?ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUMILCMD_SNAPSHOT@@@Z @ 0x1801A3F10 (-ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUMILCMD_SNAPSHOT@@@Z.c)
 * Callees:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18001F1FC (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x1800B6AB0 (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x1800B6AE8 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802ACDB8, 2u, CurrentDisplaySet, 0xC9Fu);
  }
  else
  {
    PrimaryDisplay = CDisplaySet::GetPrimaryDisplay(v12, &v13);
    v7 = PrimaryDisplay;
    if ( PrimaryDisplay < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802ACDB8, 2u, PrimaryDisplay, 0xCA1u);
      v4 = v13;
    }
    else
    {
      v4 = v13;
      v9 = *((_QWORD *)v13 + 15);
      v10 = _mm_srli_si128(*(__m128i *)((char *)v13 + 120), 8).m128i_u64[0];
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
