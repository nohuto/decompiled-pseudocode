/*
 * XREFs of _lambda_497cdd3be1990e13318bbe793e150545_::operator() @ 0x1801158C4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_497cdd3be1990e13318bbe793e150545___::Run @ 0x1801161A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_497cdd3be1990e13318bbe793e150545___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIImmersiveApplicationNotification@@@WRL@Microsoft@@IEAAKXZ @ 0x180087710 (-InternalRelease@-$ComPtr@UIImmersiveApplicationNotification@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_497cdd3be1990e13318bbe793e150545_::operator()(_QWORD *a1)
{
  __int64 result; // rax
  unsigned int i; // esi
  __int64 v4; // rbx
  unsigned int j; // edi
  __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v9[3]; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v10; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v11; // [rsp+88h] [rbp+38h] BYREF
  __int64 v12; // [rsp+90h] [rbp+40h] BYREF
  __int64 v13; // [rsp+98h] [rbp+48h] BYREF

  v9[1] = -2LL;
  result = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)a1[1] + 24LL))(a1[1], &v11);
  for ( i = 0; i < v11; ++i )
  {
    v8 = 0LL;
    v4 = a1[1];
    Microsoft::WRL::ComPtr<IImmersiveApplicationNotification>::InternalRelease(&v8);
    if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v4 + 32LL))(
           v4,
           i,
           &GUID_e23730be_13f1_4f0b_88ab_76d5e3beb5b7,
           &v8) >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*a1 + 24LL))(*a1, &v10);
      for ( j = 0; j < v10; ++j )
      {
        v12 = 0LL;
        v6 = *a1;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
        if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v6 + 32LL))(
               v6,
               j,
               &GUID_8b14e88b_5663_4caf_b196_c31479262831,
               &v12) >= 0 )
        {
          v13 = 0LL;
          v7 = v12;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
          if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v7 + 24LL))(
                 v7,
                 0LL,
                 &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
                 &v13) >= 0 )
          {
            (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v13 + 32LL))(v13, v9);
            (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v8 + 24LL))(
              v8,
              v12,
              *((unsigned int *)a1 + 4),
              v9[0]);
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
      }
    }
    result = Microsoft::WRL::ComPtr<IImmersiveApplicationNotification>::InternalRelease(&v8);
  }
  return result;
}
