/*
 * XREFs of ?RuntimeClassInitialize@TabletModePositionerHandoffContext@@QEAAJPEAUIAppLayout@@_N@Z @ 0x1802D3D84
 * Callers:
 *     ??$MakeAndInitialize@VTabletModePositionerHandoffContext@@V1@AEAPEAUIAppLayout@@AEA_N@Details@WRL@Microsoft@@YAJPEAPEAVTabletModePositionerHandoffContext@@AEAPEAUIAppLayout@@AEA_N@Z @ 0x1802D3C10 (--$MakeAndInitialize@VTabletModePositionerHandoffContext@@V1@AEAPEAUIAppLayout@@AEA_N@Details@WR.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabletModePositionerHandoffContext::RuntimeClassInitialize(
        TabletModePositionerHandoffContext *this,
        struct IAppLayout *a2,
        char a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 2);
  v6 = (*(__int64 (__fastcall **)(struct IAppLayout *, GUID *, char *))(*(_QWORD *)a2 + 192LL))(
         a2,
         &GUID_7baad876_2fc5_4561_93e1_17e868a174ed,
         (char *)this + 16);
  v7 = v6;
  if ( v6 >= 0 )
  {
    *((_BYTE *)this + 24) = a3;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\handoffcontext.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
}
