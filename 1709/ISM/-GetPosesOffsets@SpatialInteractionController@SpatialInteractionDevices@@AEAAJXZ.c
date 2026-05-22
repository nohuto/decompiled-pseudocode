/*
 * XREFs of ?GetPosesOffsets@SpatialInteractionController@SpatialInteractionDevices@@AEAAJXZ @ 0x1800C679C
 * Callers:
 *     ?EndPrepareParsing@SpatialInteractionController@SpatialInteractionDevices@@QEAAJXZ @ 0x1800C4510 (-EndPrepareParsing@SpatialInteractionController@SpatialInteractionDevices@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialInteractionDevices::SpatialInteractionController::GetPosesOffsets(
        SpatialInteractionDevices::SpatialInteractionController *this)
{
  __int64 v2; // rcx
  char v3; // bl
  int v4; // esi
  __int64 v5; // rdx
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v9; // [rsp+30h] [rbp+8h] BYREF
  char v10; // [rsp+38h] [rbp+10h] BYREF

  v2 = *((_QWORD *)this + 106);
  v3 = 0;
  v9 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, char *, char *))(*(_QWORD *)v2 + 128LL))(v2, (char *)this + 412, &v9);
  if ( v4 < 0 )
  {
    v5 = 1358LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractioncontroller.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v7 = *((_QWORD *)this + 106);
  v10 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, char *, char *))(*(_QWORD *)v7 + 136LL))(v7, (char *)this + 444, &v10);
  if ( v4 < 0 )
  {
    v5 = 1361LL;
    goto LABEL_3;
  }
  if ( *((_BYTE *)this + 800) || v9 || v10 )
    v3 = 1;
  *((_BYTE *)this + 401) = v3;
  return 0LL;
}
