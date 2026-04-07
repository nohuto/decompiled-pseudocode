/*
 * XREFs of ?OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z @ 0x1800736CC
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x180073338 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _Init_thread_footer @ 0x180045628 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180045688 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?Create@CMagnifier@@SAJPEAUHWND__@@HPEAUIDwmChannel@@PEAVCVisual@@PEAPEAV1@@Z @ 0x180072570 (-Create@CMagnifier@@SAJPEAUHWND__@@HPEAUIDwmChannel@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ??1MagnifierTableElement@CMagnifierControl@@QEAA@XZ @ 0x1800731DC (--1MagnifierTableElement@CMagnifierControl@@QEAA@XZ.c)
 *     ?FindElement@?$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAPEAVMagnifierTableElement@CMagnifierControl@@PEAUHWND__@@@Z @ 0x180073240 (-FindElement@-$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAPEAV.c)
 *     ?SetIsMagnifier@CVisual@@QEAAJ_N@Z @ 0x1800798D0 (-SetIsMagnifier@CVisual@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CMagnifierControl::OnMagnifierCreate(CMagnifierControl *this, HWND a2, int a3)
{
  struct _RTL_GENERIC_TABLE *v6; // rsi
  int IsMagnifier; // eax
  unsigned int v8; // edi
  int v9; // r9d
  HWND Ancestor; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  bool v13; // dl
  CVisual *v14; // rcx
  volatile signed __int32 *v15; // rbx
  unsigned int v17; // [rsp+20h] [rbp-20h]
  _QWORD Buffer[2]; // [rsp+30h] [rbp-10h] BYREF
  CBaseObject *v19; // [rsp+60h] [rbp+20h] BYREF

  if ( dword_1800C278C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800C278C);
    if ( dword_1800C278C == -1 )
    {
      dword_1800C26C4 = -2147023728;
      Init_thread_footer(&dword_1800C278C);
    }
  }
  v19 = 0LL;
  v6 = (struct _RTL_GENERIC_TABLE *)((char *)this + 72);
  if ( CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::FindElement(
         (struct _RTL_GENERIC_TABLE *)this + 1,
         (__int64)a2) )
  {
    v8 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C26C4, 1u, -2147024809, 0x224u);
    return v8;
  }
  IsMagnifier = CMagnifier::Create(a2, a3, *((struct IDwmChannel **)this + 2), *((struct CVisual **)this + 7), &v19);
  v8 = IsMagnifier;
  if ( IsMagnifier < 0 )
  {
    v17 = 519;
LABEL_7:
    v9 = IsMagnifier;
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C26C4, 1u, v9, v17);
    goto LABEL_21;
  }
  Ancestor = GetAncestor(a2, 2u);
  v11 = (*(__int64 (__fastcall **)(_QWORD, HWND))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 6) + 8LL))(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
          Ancestor);
  if ( !v11 || (v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11)) == 0 )
  {
    v8 = -2147023728;
    v17 = 537;
    v9 = -2147023728;
    goto LABEL_20;
  }
  v14 = *(CVisual **)(v12 + 400);
  if ( v14 )
  {
    IsMagnifier = CVisual::SetIsMagnifier(v14, v13);
    v8 = IsMagnifier;
    if ( IsMagnifier < 0 )
    {
      v17 = 530;
      goto LABEL_7;
    }
  }
  else
  {
    *(_BYTE *)(v12 + 595) |= 1u;
  }
  Buffer[0] = a2;
  v15 = (volatile signed __int32 *)v19;
  Buffer[1] = v19;
  if ( v19 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v19 + 2);
    v15 = (volatile signed __int32 *)v19;
  }
  if ( !RtlInsertElementGenericTable(v6, Buffer, 0x10u, 0LL) )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C26C4, 1u, -2147024882, 0x21Eu);
    CMagnifierControl::MagnifierTableElement::~MagnifierTableElement((CMagnifierControl::MagnifierTableElement *)Buffer);
    goto LABEL_22;
  }
  _InterlockedIncrement(v15 + 2);
  CMagnifierControl::MagnifierTableElement::~MagnifierTableElement((CMagnifierControl::MagnifierTableElement *)Buffer);
LABEL_21:
  v15 = (volatile signed __int32 *)v19;
LABEL_22:
  if ( v15 )
    CBaseObject::Release((CBaseObject *)v15);
  return v8;
}
