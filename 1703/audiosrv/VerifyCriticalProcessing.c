/*
 * XREFs of VerifyCriticalProcessing @ 0x180039234
 * Callers:
 *     ReconsiderSpatialOnComboEndpoints @ 0x180039894 (ReconsiderSpatialOnComboEndpoints.c)
 * Callees:
 *     GetPackedSysFx2List @ 0x18003931C (GetPackedSysFx2List.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180039790 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?LogSpatialCriticalProcessingList@@YAXPEBGKK_N@Z @ 0x1800397D0 (-LogSpatialCriticalProcessingList@@YAXPEBGKK_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VerifyCriticalProcessing(__int64 a1, __int64 a2, bool *a3)
{
  int PackedSysFx2List; // ebx
  unsigned int v7; // esi
  int v8; // eax
  unsigned int v9; // r8d
  __int64 v11; // rdx
  LPVOID pv[2]; // [rsp+20h] [rbp-20h] BYREF
  GUID v13; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  int v15; // [rsp+70h] [rbp+30h] BYREF
  int v16; // [rsp+78h] [rbp+38h] BYREF

  pv[1] = (LPVOID)-2LL;
  *a3 = 0;
  v13 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  PackedSysFx2List = GetPackedSysFx2List(a1, &v13, &v16);
  if ( PackedSysFx2List < 0 )
  {
    v11 = 188LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v11,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
      (const char *)(unsigned int)PackedSysFx2List,
      (int)pv[0]);
    return (unsigned int)PackedSysFx2List;
  }
  v13 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  PackedSysFx2List = GetPackedSysFx2List(a1, &v13, &v15);
  if ( PackedSysFx2List < 0 )
  {
    v11 = 191LL;
    goto LABEL_10;
  }
  v7 = v16 | v15;
  *a3 = ((v16 | v15) & 0x28800) == 0;
  pv[0] = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
    pv,
    0LL);
  v8 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)a2 + 40LL))(a2, pv);
  PackedSysFx2List = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xC9,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
      (const char *)(unsigned int)v8,
      (int)pv[0]);
  }
  else
  {
    LogSpatialCriticalProcessingList((const unsigned __int16 *)pv[0], v7, v9, *a3);
    PackedSysFx2List = 0;
  }
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  return (unsigned int)PackedSysFx2List;
}
