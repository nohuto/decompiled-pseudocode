/*
 * XREFs of ?SendBoundsToSwapchainTarget@CTopLevelWindow@@QEAAJXZ @ 0x18006FC74
 * Callers:
 *     ?SetSwapchainTarget@CTopLevelWindow@@QEAAJI_NPEAVCResource@@@Z @ 0x180081190 (-SetSwapchainTarget@CTopLevelWindow@@QEAAJI_NPEAVCResource@@@Z.c)
 * Callees:
 *     ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x18003E33C (-GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::SendBoundsToSwapchainTarget(CTopLevelWindow *this)
{
  unsigned int v1; // edi
  unsigned int cxLeftWidth; // r10d
  unsigned int cyTopHeight; // r11d
  __int64 v5; // rax
  unsigned __int64 v6; // xmm0_8
  int v7; // r9d
  int v8; // r8d
  __int64 v9; // rax
  unsigned __int64 v10; // xmm1_8
  int v11; // eax
  struct _MARGINS v13; // [rsp+40h] [rbp-18h] BYREF
  __int64 v14; // [rsp+60h] [rbp+8h]

  v1 = 0;
  if ( *((_QWORD *)this + 97) )
  {
    cxLeftWidth = 0;
    cyTopHeight = 0;
    if ( *((_BYTE *)this + 772) )
    {
      *(_QWORD *)&v13.cxLeftWidth = 0LL;
      *(_QWORD *)&v13.cyTopHeight = 0LL;
      CTopLevelWindow::GetOutsideMargins(this, &v13);
      cxLeftWidth = v13.cxLeftWidth;
      cyTopHeight = v13.cyTopHeight;
      v5 = *(_QWORD *)(*((_QWORD *)this + 90) + 48LL);
      v6 = _mm_srli_si128(*(__m128i *)(*((_QWORD *)this + 90) + 48LL), 8).m128i_u64[0];
      v7 = v6 - v13.cxRightWidth - v5 - v13.cxLeftWidth;
      v8 = HIDWORD(v6) - HIDWORD(v5) - v13.cyBottomHeight - v13.cyTopHeight;
    }
    else
    {
      v9 = *((_QWORD *)this + 90);
      v14 = *(_QWORD *)(v9 + 172);
      v10 = _mm_srli_si128(*(__m128i *)(v9 + 204), 8).m128i_u64[0];
      v7 = (int)(float)((float)(int)(v10 - *(_OWORD *)(v9 + 204)) * *(float *)&v14);
      v8 = (int)(float)((float)(int)(HIDWORD(v10) - HIDWORD(*(_QWORD *)(v9 + 204))) * *((float *)&v14 + 1));
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, int))(**(_QWORD **)(*((_QWORD *)this + 97)
                                                                                            + 16LL)
                                                                              + 816LL))(
            *(_QWORD *)(*((_QWORD *)this + 97) + 16LL),
            *(unsigned int *)(*((_QWORD *)this + 97) + 24LL),
            cxLeftWidth,
            cyTopHeight,
            v7,
            v8);
    v1 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0x1571u);
  }
  return v1;
}
