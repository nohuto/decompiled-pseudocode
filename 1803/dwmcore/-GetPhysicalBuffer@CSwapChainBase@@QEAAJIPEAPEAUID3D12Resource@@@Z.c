/*
 * XREFs of ?GetPhysicalBuffer@CSwapChainBase@@QEAAJIPEAPEAUID3D12Resource@@@Z @ 0x1801EB370
 * Callers:
 *     ?Initialize@CComputeScribbleRenderer@@AEAAJXZ @ 0x180218C10 (-Initialize@CComputeScribbleRenderer@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800CD5B4 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800CD620 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ShareToD3D12@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@PEAPEAUID3D12Resource@@@Z @ 0x1801E0EB0 (-ShareToD3D12@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@PEAPEAUID3D12Resource@@@Z.c)
 */

__int64 __fastcall CSwapChainBase::GetPhysicalBuffer(CSwapChainBase *this, unsigned int a2, struct ID3D12Resource **a3)
{
  char *v3; // rsi
  __int64 v4; // r13
  int v8; // eax
  unsigned __int64 v9; // rbp
  int v10; // r15d
  __int64 v11; // rax
  bool v12; // cf
  SIZE_T v13; // rax
  _QWORD *v14; // rax
  char *v15; // rdi
  unsigned int v16; // ecx
  __int64 v17; // r14
  struct ID3D12Resource **v18; // r15
  struct ID3D12Resource *v19; // rcx
  int v20; // eax
  unsigned int v21; // ebp
  char *v22; // rcx
  __int64 *v23; // rbx
  struct ID3D12Resource *v24; // rcx
  char v25; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v27; // [rsp+60h] [rbp+8h]

  v3 = (char *)this + 416;
  v4 = a2;
  if ( *((_QWORD *)this + 52) )
    goto LABEL_25;
  if ( (*((_DWORD *)this + 39) & 0x2000000) == 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB8,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\swapchainbase.cpp",
      (const char *)0x88982F81LL);
    return 2291675009LL;
  }
  v8 = (*(__int64 (__fastcall **)(CSwapChainBase *))(*(_QWORD *)this + 72LL))(this);
  v9 = *((unsigned int *)this + 40);
  v10 = v8;
  v27 = v8;
  v11 = 8 * v9;
  if ( !is_mul_ok(v9, 8uLL) )
    v11 = -1LL;
  v12 = __CFADD__(v11, 8LL);
  v13 = v11 + 8;
  if ( v12 )
    v13 = -1LL;
  v14 = operator new(v13);
  if ( v14 )
  {
    v15 = (char *)(v14 + 1);
    *v14 = v9;
    `vector constructor iterator'(
      (CInputSinkStruct::InputQueueInfo *)(v14 + 1),
      8LL,
      (unsigned int)v9,
      (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))wil::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>);
  }
  else
  {
    v15 = 0LL;
  }
  v16 = *((_DWORD *)this + 40);
  v17 = 0LL;
  if ( !v16 )
  {
LABEL_16:
    if ( v3 == &v25 )
    {
      if ( v15 )
      {
        v23 = (__int64 *)(v15 - 8);
        v22 = v15;
        goto LABEL_24;
      }
    }
    else
    {
      v22 = *(char **)v3;
      *(_QWORD *)v3 = v15;
      if ( v22 )
      {
        v23 = (__int64 *)(v22 - 8);
LABEL_24:
        `vector destructor iterator'(
          v22,
          8LL,
          *v23,
          (void (__fastcall *)(KeyframeSequence::Keyframe *__hidden))wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>);
        operator delete(v23);
      }
    }
LABEL_25:
    v24 = *(struct ID3D12Resource **)(*(_QWORD *)v3 + 8 * v4);
    *a3 = v24;
    ((void (__fastcall *)(struct ID3D12Resource *))v24->lpVtbl->AddRef)(v24);
    return 0LL;
  }
  while ( 1 )
  {
    v18 = (struct ID3D12Resource **)&v15[8 * (((int)v17 + v10) % v16)];
    v19 = *v18;
    *v18 = 0LL;
    if ( v19 )
      ((void (__fastcall *)(struct ID3D12Resource *))v19->lpVtbl->Release)(v19);
    v20 = CD3DDeviceLevel1::ShareToD3D12(
            *(CD3DDeviceLevel1 **)(*((_QWORD *)this + 2) + 80LL),
            *(struct ID3D11Texture2D **)(*(_QWORD *)(*((_QWORD *)this + 48) + 8 * v17) + 128LL),
            v18);
    v21 = v20;
    if ( v20 < 0 )
      break;
    v16 = *((_DWORD *)this + 40);
    v17 = (unsigned int)(v17 + 1);
    v10 = v27;
    if ( (unsigned int)v17 >= v16 )
      goto LABEL_16;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC8,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\swapchainbase.cpp",
    (const char *)(unsigned int)v20);
  if ( v15 )
  {
    `vector destructor iterator'(
      v15,
      8LL,
      *((_QWORD *)v15 - 1),
      (void (__fastcall *)(KeyframeSequence::Keyframe *__hidden))wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>);
    operator delete(v15 - 8);
  }
  return v21;
}
