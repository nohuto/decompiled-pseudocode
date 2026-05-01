/*
 * XREFs of ?GetMany@?$IIterator_impl@I$00@Collections@Foundation@Windows@@UEAAJIPEAI0@Z @ 0x1801C7540
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::IIterator_impl<unsigned int,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        void *a3,
        _DWORD *a4)
{
  __int64 v8; // rbx
  __int64 result; // rax
  char v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0;
  v8 = 0LL;
  memset(a3, 0, 4LL * a2);
  *a4 = 0;
  result = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 56LL))(a1, &v10);
  if ( (int)result >= 0 )
  {
    do
    {
      if ( !v10 || (unsigned int)v8 >= a2 )
        break;
      result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, (__int64)a3 + 4 * v8);
      if ( (int)result < 0 )
        return result;
      v8 = (unsigned int)(v8 + 1);
      result = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 64LL))(a1, &v10);
    }
    while ( (int)result >= 0 );
    if ( (int)result >= 0 )
      *a4 = v8;
  }
  return result;
}
