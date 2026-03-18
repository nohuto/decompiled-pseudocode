/*
 * XREFs of CmpAdjustSecurityCacheSize @ 0x1404580D8
 * Callers:
 *     CmpValidateHiveSecurityDescriptors @ 0x1404BF6E4 (CmpValidateHiveSecurityDescriptors.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 */

char __fastcall CmpAdjustSecurityCacheSize(__int64 a1)
{
  unsigned int v2; // ecx
  void *v3; // rax
  void *v4; // rdi

  v2 = *(_DWORD *)(a1 + 3040);
  if ( v2 >= *(_DWORD *)(a1 + 3044) )
    goto LABEL_4;
  v3 = (void *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(a1 + 24))(16 * v2, 0LL, 1666403651LL);
  v4 = v3;
  if ( v3 )
  {
    memmove(v3, *(const void **)(a1 + 3056), 16LL * *(unsigned int *)(a1 + 3040));
    (*(void (__fastcall **)(_QWORD, _QWORD))(a1 + 32))(
      *(_QWORD *)(a1 + 3056),
      (unsigned int)(16 * *(_DWORD *)(a1 + 3044)));
    *(_DWORD *)(a1 + 3044) = *(_DWORD *)(a1 + 3040);
    *(_QWORD *)(a1 + 3056) = v4;
LABEL_4:
    LOBYTE(v3) = 1;
  }
  return (char)v3;
}
