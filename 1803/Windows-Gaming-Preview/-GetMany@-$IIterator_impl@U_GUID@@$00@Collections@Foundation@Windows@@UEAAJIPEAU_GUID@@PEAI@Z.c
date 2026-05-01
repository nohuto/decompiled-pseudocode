/*
 * XREFs of ?GetMany@?$IIterator_impl@U_GUID@@$00@Collections@Foundation@Windows@@UEAAJIPEAU_GUID@@PEAI@Z @ 0x180036FD0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180042FEC (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::IIterator_impl<_GUID,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        void *a3,
        unsigned int *a4)
{
  unsigned int v8; // ebx
  __int64 result; // rax
  char v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0;
  v8 = 0;
  memset_0(a3, 0, 16LL * a2);
  *a4 = 0;
  result = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 56LL))(a1, &v10);
  if ( (int)result >= 0 )
  {
    do
    {
      if ( !v10 || v8 >= a2 )
        break;
      result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, (__int64)a3 + 16 * v8);
      if ( (int)result < 0 )
        return result;
      ++v8;
      result = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 64LL))(a1, &v10);
    }
    while ( (int)result >= 0 );
    if ( (int)result >= 0 )
      *a4 = v8;
  }
  return result;
}
