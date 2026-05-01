/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d190757c23000f52f2ae5d43357c90b2___::Run @ 0x18001C2E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d190757c23000f52f2ae5d43357c90b2___::Run(
        __int64 a1)
{
  __int64 result; // rax
  unsigned int i; // ebx
  unsigned int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 16LL) + 24LL))(
             *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL),
             &v7);
  if ( (int)result >= 0 )
  {
    for ( i = 0; i < v7; ++i )
    {
      v8 = 0LL;
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 16LL)
                                                                            + 32LL))(
                 *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL),
                 i,
                 &GUID_e23730be_13f1_4f0b_88ab_76d5e3beb5b7,
                 &v8);
      if ( (int)result >= 0 )
      {
        v4 = 0;
        v5 = *(_QWORD *)(a1 + 16);
        if ( *(_DWORD *)(v5 + 40) )
        {
          do
          {
            result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v8 + 32LL))(
                       v8,
                       *(_QWORD *)(v5 + 8),
                       *(_QWORD *)(v5 + 32) + 16LL * v4++,
                       *(unsigned int *)(v5 + 24));
            v5 = *(_QWORD *)(a1 + 16);
          }
          while ( v4 < *(_DWORD *)(v5 + 40) );
        }
      }
      v6 = v8;
      if ( v8 )
      {
        v8 = 0LL;
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
    }
  }
  return result;
}
