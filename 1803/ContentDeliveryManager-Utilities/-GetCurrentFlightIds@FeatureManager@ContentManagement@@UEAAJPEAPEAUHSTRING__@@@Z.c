/*
 * XREFs of ?GetCurrentFlightIds@FeatureManager@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180011830
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031B4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContentManagement::FeatureManager::GetCurrentFlightIds(
        ContentManagement::FeatureManager *this,
        HSTRING *a2)
{
  HRESULT v3; // eax
  unsigned int v4; // ebx
  HRESULT String; // eax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  LPVOID v9; // rcx
  PCNZWCH sourceString[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  int v13; // [rsp+68h] [rbp+28h] BYREF
  __int64 v14; // [rsp+70h] [rbp+30h] BYREF
  LPVOID ppv; // [rsp+78h] [rbp+38h] BYREF

  sourceString[1] = (PCNZWCH)-2LL;
  *a2 = 0LL;
  ppv = 0LL;
  v3 = CoCreateInstance(&CLSID_FlightClientAPI, 0LL, 1u, &GUID_79588f37_5be1_4a35_b23d_29832257cada, &ppv);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x369,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_16;
  }
  v14 = 0LL;
  String = (*(__int64 (__fastcall **)(LPVOID, __int64 *))(*(_QWORD *)ppv + 32LL))(ppv, &v14);
  v4 = String;
  if ( String < 0 )
  {
    v6 = 876LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)String);
    goto LABEL_14;
  }
  sourceString[0] = 0LL;
  v13 = 0;
  String = (*(__int64 (__fastcall **)(__int64, PCNZWCH *, int *))(*(_QWORD *)v14 + 32LL))(v14, sourceString, &v13);
  v4 = String;
  if ( String < 0 )
  {
    v6 = 880LL;
    goto LABEL_12;
  }
  if ( v13 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( sourceString[0][v7] );
    String = WindowsCreateString(sourceString[0], v7, a2);
    v4 = String;
    if ( String < 0 )
    {
      v6 = 884LL;
      goto LABEL_12;
    }
  }
  v4 = 0;
LABEL_14:
  v8 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
LABEL_16:
  v9 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v4;
}
