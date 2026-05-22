/*
 * XREFs of ?RequestGripStatusForPanel@HeatGripServiceHost@@MEAAJPEAVBamoHeatGripServiceStub@@AEBUHeatPanelInfo@@@Z @ 0x180038F00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetGripStatus@ISMHeatFrameworkHost@@QEAAJPEBUHeatPanelInfo@@PEAUHeatGripStatus@@@Z @ 0x180039FB4 (-GetGripStatus@ISMHeatFrameworkHost@@QEAAJPEBUHeatPanelInfo@@PEAUHeatGripStatus@@@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HeatGripServiceHost::RequestGripStatusForPanel(
        HeatGripServiceHost *this,
        struct BamoHeatGripServiceStub *a2,
        const struct HeatPanelInfo *a3)
{
  ISMHeatFrameworkHost *v6; // rcx
  __int128 v7; // xmm0
  int v8; // eax
  unsigned int v9; // ebx
  int v11; // [rsp+20h] [rbp-28h] BYREF
  __int128 v12; // [rsp+28h] [rbp-20h]
  _BYTE v13[16]; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  memset_0(&v11, 0, 0x20uLL);
  v6 = (ISMHeatFrameworkHost *)*((_QWORD *)this + 7);
  LOBYTE(v11) = 0;
  if ( v6 && !(unsigned int)ISMHeatFrameworkHost::GetGripStatus(v6, a3, (struct HeatGripStatus *)v13) )
  {
    v7 = *(_OWORD *)a3;
    LOBYTE(v11) = 1;
    v12 = v7;
  }
  v8 = (*(__int64 (__fastcall **)(char *, int *))(*((_QWORD *)a2 + 1) + 24LL))((char *)a2 + 8, &v11);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2B,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\heatgripservicehost.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
