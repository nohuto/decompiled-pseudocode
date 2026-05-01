/*
 * XREFs of _lambda_e4dd877b4e6f860e5033763c4d7cce33_::__lambda_e4dd877b4e6f860e5033763c4d7cce33_ @ 0x18021B788
 * Callers:
 *     _CreationThreadDispatcher::RunAsync__lambda_0a797daff9b242b959bbd8d51d98a883____::_1_::dtor$2 @ 0x18021A029 (_CreationThreadDispatcher--RunAsync__lambda_0a797daff9b242b959bbd8d51d98a883____--_1_--dtor$2.c)
 *     _CreationThreadDispatcher::RunAsync__lambda_49f034628129c0f6bb6239b08c86aef5____::_1_::dtor$2 @ 0x18021A14D (_CreationThreadDispatcher--RunAsync__lambda_49f034628129c0f6bb6239b08c86aef5____--_1_--dtor$2.c)
 *     _CreationThreadDispatcher::RunAsync__lambda_8fc5e3e8e4215e3f9514c32427d8c9ae____::_1_::dtor$2 @ 0x18021A391 (_CreationThreadDispatcher--RunAsync__lambda_8fc5e3e8e4215e3f9514c32427d8c9ae____--_1_--dtor$2.c)
 *     _CreationThreadDispatcher::RunAsync__lambda_e0b48c6444b1fd29cc3c2664eb3161bf____::_1_::dtor$2 @ 0x18021A4B5 (_CreationThreadDispatcher--RunAsync__lambda_e0b48c6444b1fd29cc3c2664eb3161bf____--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18018D5B8 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_e4dd877b4e6f860e5033763c4d7cce33_::__lambda_e4dd877b4e6f860e5033763c4d7cce33_(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(a1 + 1);
  v3 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
