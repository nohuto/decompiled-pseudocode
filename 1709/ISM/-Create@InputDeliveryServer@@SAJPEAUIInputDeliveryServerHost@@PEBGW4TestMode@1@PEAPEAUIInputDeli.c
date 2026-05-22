/*
 * XREFs of ?Create@InputDeliveryServer@@SAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@PEAPEAUIInputDeliveryServer@@@Z @ 0x18007DDA8
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18001789C (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VInputDeliveryServer@@UIInputDeliveryServer@@AEAPEAUIInputDeliveryServerHost@@AEAPEBGAEAW4TestMode@1@@Details@WRL@Microsoft@@YAJPEAPEAUIInputDeliveryServer@@AEAPEAUIInputDeliveryServerHost@@AEAPEBGAEAW4TestMode@InputDeliveryServer@@@Z @ 0x180080940 (--$MakeAndInitialize@VInputDeliveryServer@@UIInputDeliveryServer@@AEAPEAUIInputDeliveryServerHos.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputDeliveryServer::Create(__int64 a1, __int64 a2, int a3, struct IInputDeliveryServer **a4)
{
  __int64 v5; // rcx
  struct IInputDeliveryServer *v6; // rax
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF
  int v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = a3;
  v11 = a2;
  v10 = a1;
  AcquireSRWLockExclusive(&InputDeliveryServer::s_initLock);
  v6 = InputDeliveryServer::s_pInputDeliveryServer;
  if ( !InputDeliveryServer::s_pInputDeliveryServer )
  {
    v7 = Microsoft::WRL::Details::MakeAndInitialize<InputDeliveryServer,IInputDeliveryServer,IInputDeliveryServerHost * &,unsigned short const * &,enum InputDeliveryServer::TestMode &>(
           v5,
           &v10,
           &v11,
           &v12,
           -2LL,
           &InputDeliveryServer::s_initLock);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x1E,
        (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputdeliveryserver.cpp",
        (const char *)(unsigned int)v7);
      __debugbreak();
    }
    v6 = InputDeliveryServer::s_pInputDeliveryServer;
  }
  *a4 = v6;
  ReleaseSRWLockExclusive(&InputDeliveryServer::s_initLock);
  return 0LL;
}
