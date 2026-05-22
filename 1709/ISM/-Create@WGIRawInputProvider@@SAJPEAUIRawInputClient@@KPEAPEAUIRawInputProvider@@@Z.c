/*
 * XREFs of ?Create@WGIRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x18009D530
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Release@GazeProcessor@@UEAAKXZ @ 0x180003410 (-Release@GazeProcessor@@UEAAKXZ.c)
 *     ??0WGIRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z @ 0x18009D120 (--0WGIRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z.c)
 *     ?Initialize@WGIRawInputProvider@@AEAAJXZ @ 0x18009D69C (-Initialize@WGIRawInputProvider@@AEAAJXZ.c)
 *     memset @ 0x1800CAA5E (memset.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WGIRawInputProvider::Create(
        struct IRawInputClient *a1,
        __int64 a2,
        struct IRawInputProvider **a3,
        const char *a4)
{
  wil::details::in1diag3 *v6; // rcx
  GazeProcessor *v7; // rbx
  unsigned int v8; // esi
  int v9; // r9d
  WGIRawInputProvider *v10; // rax
  WGIRawInputProvider *v11; // rbx
  volatile signed __int32 *v12; // rdi
  int v13; // eax
  __int64 v14; // rcx
  GazeProcessor *v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = retaddr;
  if ( WGIRawInputProvider::s_spInstance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x38,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
      a4);
    __debugbreak();
  }
  v7 = 0LL;
  if ( !a3 )
  {
    v8 = -2147467261;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_26;
    v9 = 61;
LABEL_6:
    McTemplateU0qqq((__int64)v6, &MinInput_Warning_CheckResult, 0, v9, v8);
    goto LABEL_26;
  }
  *a3 = 0LL;
  if ( !a1 )
  {
    v8 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_26;
    v9 = 63;
    goto LABEL_6;
  }
  v10 = (WGIRawInputProvider *)malloc(0xA8uLL);
  v11 = v10;
  if ( v10 )
    memset(v10, 0, 0xA8uLL);
  if ( v11 )
    v12 = (volatile signed __int32 *)WGIRawInputProvider::WGIRawInputProvider(v11, a1);
  else
    v12 = 0LL;
  v7 = (GazeProcessor *)v12;
  if ( !v12 )
  {
    v8 = -2147024882;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_26;
    v9 = 66;
    goto LABEL_6;
  }
  v13 = WGIRawInputProvider::Initialize((WGIRawInputProvider *)v12);
  v8 = v13;
  if ( v13 >= 0 )
  {
    if ( WGIRawInputProvider::s_spInstance != (GazeProcessor *)v12 )
    {
      _InterlockedIncrement(v12 + 6);
      v15 = WGIRawInputProvider::s_spInstance;
      WGIRawInputProvider::s_spInstance = (GazeProcessor *)v12;
      if ( v15 )
        GazeProcessor::Release(v15);
    }
    v7 = 0LL;
    *a3 = (struct IRawInputProvider *)v12;
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    McTemplateU0qqq(v14, &MinInput_Warning_CheckResult, 0, 67, v13);
  }
LABEL_26:
  if ( v7 )
    GazeProcessor::Release(v7);
  return v8;
}
