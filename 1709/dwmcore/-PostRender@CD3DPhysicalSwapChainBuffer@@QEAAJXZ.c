/*
 * XREFs of ?PostRender@CD3DPhysicalSwapChainBuffer@@QEAAJXZ @ 0x1801A9094
 * Callers:
 *     ?Present@CSwapChainBase@@QEAAJAEBVCRegion@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18002F980 (-Present@CSwapChainBase@@QEAAJAEBVCRegion@@IIPEAURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180134D64 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x180151528 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     McTemplateU0pp @ 0x18016A584 (McTemplateU0pp.c)
 */

__int64 __fastcall CD3DPhysicalSwapChainBuffer::PostRender(CD3DPhysicalSwapChainBuffer *this)
{
  unsigned int v1; // ebx
  __int64 v3; // rcx
  int v4; // eax
  void *v5; // rdx
  DWORD v6; // eax
  const char *v7; // r9
  signed int LastError; // eax
  DWORD v9; // r9d
  unsigned int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = 0;
  if ( !*((_BYTE *)this + 224) )
    return v1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0pp(
      (__int64)this,
      &EVTDESC_POSTPRESENTSCRIBBLE_POSTRENDER,
      *((_QWORD *)this + 15),
      *((_QWORD *)this + 27));
  v3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 80LL) + 656LL);
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v3 + 1176LL))(
         v3,
         *((_QWORD *)this + 16),
         *((_QWORD *)this + 27));
  v1 = v4;
  if ( v4 < 0 )
  {
    v11 = 110;
    goto LABEL_16;
  }
  wil::details::ResetEvent(*((wil::details **)this + 22), v5);
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 21) + 72LL))(
         *((_QWORD *)this + 21),
         *((_QWORD *)this + 27),
         *((_QWORD *)this + 22));
  v1 = v4;
  if ( v4 < 0 )
  {
    v11 = 116;
LABEL_16:
    v9 = v4;
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, v11);
    return v1;
  }
  SetLastError(0);
  v6 = WaitForSingleObjectEx(*((HANDLE *)this + 22), 0xFFFFFFFF, 0);
  if ( v6 == 258 )
  {
    LastError = GetLastError();
    v1 = LastError;
    if ( LastError > 0 )
      v1 = (unsigned __int16)LastError | 0x80070000;
    v11 = 117;
    if ( (v1 & 0x80000000) == 0 )
      v1 = -2003304445;
    v9 = v1;
    goto LABEL_17;
  }
  if ( v6 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x93C,
      (__int64)"internal\\sdk\\inc\\wil/resource.h",
      v7);
    __debugbreak();
  }
  return v1;
}
