/*
 * XREFs of ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180019168
 * Callers:
 *     ?OnDisconnected@InputSiteElementProxy@@MEAAJXZ @ 0x18000E410 (-OnDisconnected@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x180019264 (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ?Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x180039208 (-Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     ?Create@DragNDropProcessor@@SAJAEBV?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@PEAPEAV1@@Z @ 0x180063E10 (-Create@DragNDropProcessor@@SAJAEBV-$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@PEAPEAV1.c)
 *     ?Initialize@EdgyConnection@@QEAAJXZ @ 0x18006791C (-Initialize@EdgyConnection@@QEAAJXZ.c)
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18007BDCC (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?HitTestRequestWithRetry@HitTestHelper@@CA?AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@@Z @ 0x180083400 (-HitTestRequestWithRetry@HitTestHelper@@CA-AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUID.c)
 *     ?UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAX@Z @ 0x1800B3B3C (-UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAX@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@InputSystemServerConnection@@SA?AV?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x18001E85C (-Create@InputSystemServerConnection@@SA-AV-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
struct InputSystemServerConnection *ISMStatics::GetBamoServerConnection(void)
{
  int v0; // eax
  char *v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  void (__fastcall ***v4)(_QWORD); // rax
  __int64 v5; // rcx
  void (__fastcall ***v6)(_QWORD); // rax
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF
  char v12; // [rsp+50h] [rbp+18h] BYREF

  if ( !ISMStatics::s_inputSystemBamoConnection )
  {
    v10 = 0LL;
    v0 = CoreUICreate(&v10);
    if ( v0 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x29,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismstatics.cpp",
        (const char *)(unsigned int)v0);
      JUMPOUT(0x180019262LL);
    }
    v1 = (char *)InputSystemServerConnection::Create(&v11, v10);
    v2 = 0LL;
    if ( &v12 != v1 )
    {
      v2 = *(_QWORD *)v1;
      *(_QWORD *)v1 = 0LL;
    }
    v3 = ISMStatics::s_inputSystemBamoConnection;
    ISMStatics::s_inputSystemBamoConnection = v2;
    if ( v3 )
    {
      v4 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3);
      (**v4)(v4);
    }
    v5 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      v6 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 40LL))(v5);
      (**v6)(v6);
    }
    v7 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  return (struct InputSystemServerConnection *)ISMStatics::s_inputSystemBamoConnection;
}
