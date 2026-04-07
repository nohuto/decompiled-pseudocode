/*
 * XREFs of ?SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ @ 0x180065800
 * Callers:
 *     ?RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z @ 0x180078EA4 (-RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z.c)
 * Callees:
 *     ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x1800196FC (-GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::SendBoundsToSwapchainTarget(CTopLevelWindow *this)
{
  unsigned int v1; // ebx
  unsigned int cxLeftWidth; // r10d
  unsigned int cyTopHeight; // r11d
  __int64 v5; // rax
  unsigned __int64 v6; // xmm0_8
  int v7; // r9d
  int v8; // r8d
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 v11; // xmm0_8
  int v12; // eax
  struct _MARGINS v14; // [rsp+40h] [rbp-18h] BYREF

  v1 = 0;
  if ( *((_QWORD *)this + 97) )
  {
    cxLeftWidth = 0;
    cyTopHeight = 0;
    if ( *((_BYTE *)this + 768) )
    {
      *(_QWORD *)&v14.cxLeftWidth = 0LL;
      *(_QWORD *)&v14.cyTopHeight = 0LL;
      CTopLevelWindow::GetOutsideMargins(this, &v14);
      cxLeftWidth = v14.cxLeftWidth;
      cyTopHeight = v14.cyTopHeight;
      v5 = *(_QWORD *)(*((_QWORD *)this + 90) + 48LL);
      v6 = _mm_srli_si128(*(__m128i *)(*((_QWORD *)this + 90) + 48LL), 8).m128i_u64[0];
      v7 = v6 - v14.cxRightWidth - v5 - v14.cxLeftWidth;
      v8 = HIDWORD(v6) - HIDWORD(v5) - v14.cyBottomHeight - v14.cyTopHeight;
    }
    else
    {
      v9 = *((_QWORD *)this + 90);
      v10 = *(_QWORD *)(v9 + 204);
      v11 = _mm_srli_si128(*(__m128i *)(v9 + 204), 8).m128i_u64[0];
      v7 = (int)(float)((float)((int)v11 - v10) * *(float *)(v9 + 172));
      v8 = (int)(float)((float)(HIDWORD(v11) - HIDWORD(v10)) * *(float *)(v9 + 176));
    }
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, int))(**(_QWORD **)(*((_QWORD *)this + 97)
                                                                                            + 16LL)
                                                                              + 816LL))(
            *(_QWORD *)(*((_QWORD *)this + 97) + 16LL),
            *(unsigned int *)(*((_QWORD *)this + 97) + 24LL),
            cxLeftWidth,
            cyTopHeight,
            v7,
            v8);
    v1 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x15CEu);
  }
  return v1;
}
