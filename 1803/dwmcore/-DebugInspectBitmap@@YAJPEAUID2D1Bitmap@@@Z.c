/*
 * XREFs of ?DebugInspectBitmap@@YAJPEAUID2D1Bitmap@@@Z @ 0x1801C5B2C
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x18005BBB0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C5B90 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x1801C6138 (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 */

__int64 __fastcall DebugInspectBitmap(__int64 (__fastcall ***a1)(struct ID2D1Bitmap *, GUID *, __int64 *))
{
  __int64 (__fastcall **v1)(struct ID2D1Bitmap *, GUID *, __int64 *); // rax
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // eax
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  struct ID3D11Texture2D *v11; // [rsp+30h] [rbp+10h] BYREF
  __int64 (__fastcall ***v12)(_QWORD, GUID *, struct ID3D11Texture2D **); // [rsp+38h] [rbp+18h] BYREF
  __int64 v13; // [rsp+40h] [rbp+20h] BYREF

  v1 = *a1;
  v13 = 0LL;
  v2 = (*v1)((struct ID2D1Bitmap *)a1, &GUID_a898a84c_3873_4588_b08b_ebbf978df041, &v13);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v12 = 0LL;
    v4 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, struct ID3D11Texture2D **)))(*(_QWORD *)v13 + 104LL))(
           v13,
           &v12);
    v3 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA8,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
        (const char *)(unsigned int)v4);
LABEL_12:
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v12);
      goto LABEL_13;
    }
    v11 = 0LL;
    v5 = (**v12)(v12, &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v11);
    v3 = v5;
    if ( v5 >= 0 )
    {
      v8 = DebugInspectTexture(v11, 0);
      v3 = v8;
      if ( v8 >= 0 )
      {
        v3 = 0;
        goto LABEL_11;
      }
      v6 = (unsigned int)v8;
      v7 = 173LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x161F,
        (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
        (const char *)(unsigned int)v5);
      v6 = v3;
      v7 = 171LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
      (const char *)v6);
LABEL_11:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v11);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA5,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
    (const char *)(unsigned int)v2);
LABEL_13:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v13);
  return v3;
}
