/*
 * XREFs of ?Create@CTransitionWindowSnapshot@@SAJPEAUIDwmChannel@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z @ 0x18000B6D8
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x1800051A0 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAUIDwmChannel@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x18000B810 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAUIDwmChannel@@PEAVCTopLevelWindow@@PEAVCVisual@@P.c)
 *     ??0CTransitionWindowSnapshot@@IEAA@XZ @ 0x18000C90C (--0CTransitionWindowSnapshot@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x180045628 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180045688 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::Create(
        struct IDwmChannel *a1,
        struct CTopLevelWindow *a2,
        struct CVisual *a3,
        const struct tagRECT *a4,
        struct CTransitionWindowSnapshot **a5)
{
  CTransitionWindowSnapshot *v9; // rax
  volatile signed __int32 *v10; // rbx
  struct tagRECT *v11; // rax
  int v12; // eax
  unsigned int v13; // edi
  struct tagRECT rc; // [rsp+30h] [rbp-58h] BYREF

  if ( dword_1800BEE20 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800BEE20);
    if ( dword_1800BEE20 == -1 )
    {
      dword_1800BEDC4 = -2147023434;
      Init_thread_footer(&dword_1800BEE20);
    }
  }
  *a5 = 0LL;
  v9 = (CTransitionWindowSnapshot *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                               + 16LL))(
                                      WPF::g_pProcessHeap,
                                      360LL);
  if ( v9 )
    v10 = (volatile signed __int32 *)CTransitionWindowSnapshot::CTransitionWindowSnapshot(v9);
  else
    v10 = 0LL;
  if ( v10 )
  {
    v11 = (struct tagRECT *)*((_QWORD *)a2 + 90);
    if ( a4 )
    {
      rc = *a4;
      OffsetRect(&rc, v11[3].left, v11[3].top);
    }
    else
    {
      rc = v11[3];
    }
    v12 = CTransitionWindowSnapshot::Initialize((CTransitionWindowSnapshot *)v10, a1, a2, a3, &rc);
    v13 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800BEDC4, 1u, v12, 0x30u);
    }
    else
    {
      *a5 = (struct CTransitionWindowSnapshot *)v10;
      _InterlockedIncrement(v10 + 2);
    }
    CBaseObject::Release((CBaseObject *)v10);
  }
  else
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800BEDC4, 1u, -2147024882, 0x22u);
  }
  return v13;
}
