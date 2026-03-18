/*
 * XREFs of ?PreRender@CD3DPhysicalSwapChainBuffer@@QEAAJXZ @ 0x1801A9230
 * Callers:
 *     ?Present@CSwapChainBase@@QEAAJAEBVCRegion@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18002F980 (-Present@CSwapChainBase@@QEAAJAEBVCRegion@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     ?GetCurrentPhysicalBackBuffer@CSwapChainBase@@QEAAJPEAPEAVCD3DPhysicalSwapChainBuffer@@@Z @ 0x1801B2858 (-GetCurrentPhysicalBackBuffer@CSwapChainBase@@QEAAJPEAPEAVCD3DPhysicalSwapChainBuffer@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180134D64 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x180151528 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     McTemplateU0pp @ 0x18016A584 (McTemplateU0pp.c)
 */

__int64 __fastcall CD3DPhysicalSwapChainBuffer::PreRender(CD3DPhysicalSwapChainBuffer *this)
{
  unsigned int v1; // ebx
  unsigned __int64 v3; // rsi
  void *v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  DWORD v7; // eax
  const char *v8; // r9
  signed int LastError; // eax
  DWORD v10; // r9d
  unsigned int v12; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v1 = 0;
  if ( !*((_BYTE *)this + 224) )
    goto LABEL_17;
  v3 = *((_QWORD *)this + 27);
  if ( (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 64LL))(*((_QWORD *)this + 21)) >= v3 )
  {
LABEL_16:
    *((_BYTE *)this + 224) = 0;
LABEL_17:
    *((_BYTE *)this + 208) = 0;
    *(_OWORD *)((char *)this + 184) = 0uLL;
    return v1;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0pp(v5, &EVTDESC_POSTPRESENTSCRIBBLE_BLOCKEDNEWFRAME, *((_QWORD *)this + 15), v3);
  wil::details::ResetEvent(*((wil::details **)this + 22), v4);
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 21) + 72LL))(
         *((_QWORD *)this + 21),
         *((_QWORD *)this + 27),
         *((_QWORD *)this + 22));
  v1 = v6;
  if ( v6 < 0 )
  {
    v12 = 77;
    v10 = v6;
  }
  else
  {
    SetLastError(0);
    v7 = WaitForSingleObjectEx(*((HANDLE *)this + 22), 0xFFFFFFFF, 0);
    if ( v7 != 258 )
    {
      if ( v7 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x93C,
          (__int64)"internal\\sdk\\inc\\wil/resource.h",
          v8);
        __debugbreak();
      }
      goto LABEL_16;
    }
    LastError = GetLastError();
    v1 = LastError;
    if ( LastError > 0 )
      v1 = (unsigned __int16)LastError | 0x80070000;
    v12 = 78;
    if ( (v1 & 0x80000000) == 0 )
      v1 = -2003304445;
    v10 = v1;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, v12);
  return v1;
}
