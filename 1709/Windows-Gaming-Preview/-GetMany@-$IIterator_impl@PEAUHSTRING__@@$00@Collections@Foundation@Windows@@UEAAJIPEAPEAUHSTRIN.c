/*
 * XREFs of ?GetMany@?$IIterator_impl@PEAUHSTRING__@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAUHSTRING__@@PEAI@Z @ 0x180014210
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x18004207E (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::IIterator_impl<HSTRING__ *,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        HSTRING *a3,
        _DWORD *a4)
{
  HSTRING *v4; // rbx
  __int64 v8; // rsi
  int v9; // edi
  __int64 v10; // rsi
  char v12; // [rsp+48h] [rbp+10h] BYREF

  v4 = a3;
  v12 = 0;
  v8 = 0LL;
  memset(a3, 0, 8LL * a2);
  *a4 = 0;
  v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 56LL))(a1, &v12);
  if ( v9 < 0 )
    goto LABEL_8;
  do
  {
    if ( !v12 || (unsigned int)v8 >= a2 )
      break;
    v9 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 48LL))(a1, &v4[v8]);
    if ( v9 < 0 )
      goto LABEL_8;
    v8 = (unsigned int)(v8 + 1);
    v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 64LL))(a1, &v12);
  }
  while ( v9 >= 0 );
  if ( v9 < 0 )
  {
LABEL_8:
    if ( *a4 )
    {
      v10 = (unsigned int)*a4;
      do
      {
        WindowsDeleteString(*v4);
        *v4++ = 0LL;
        --v10;
      }
      while ( v10 );
    }
  }
  else
  {
    *a4 = v8;
  }
  return (unsigned int)v9;
}
