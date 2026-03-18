/*
 * XREFs of PnpGetMultiSzLength @ 0x1405BB9F8
 * Callers:
 *     PnpAllocateMultiSZ @ 0x1405BB930 (PnpAllocateMultiSZ.c)
 *     PiSwStartCreate @ 0x1406CE758 (PiSwStartCreate.c)
 *     PnpCompareMultiSz @ 0x1406D1A4C (PnpCompareMultiSz.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x1400DF440 (RtlStringCchLengthW.c)
 */

__int64 __fastcall PnpGetMultiSzLength(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v3; // r11
  NTSTATUS v6; // r8d
  size_t v7; // rcx
  size_t v8; // rdx
  size_t v9; // r9
  size_t v10; // rax
  __int64 v11; // rax
  size_t pcchLength; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v3 = a3;
  do
  {
    v6 = RtlStringCchLengthW((STRSAFE_PCNZWCH)(a1 + 2 * *v3), a2 - *v3, &pcchLength);
    if ( v6 < 0 )
      break;
    v7 = *v3;
    v8 = -1LL;
    v9 = pcchLength;
    v10 = *v3 + pcchLength;
    if ( v10 >= *v3 )
      v8 = *v3 + pcchLength;
    v6 = v10 < *v3 ? 0xC0000095 : 0;
    *v3 = v8;
    if ( v10 < v7 )
      break;
    v11 = -1LL;
    if ( v8 + 1 >= v8 )
      v11 = v8 + 1;
    v6 = v8 + 1 < v8 ? 0xC0000095 : 0;
    *v3 = v11;
    if ( v8 + 1 < v8 )
      break;
  }
  while ( v9 );
  return (unsigned int)v6;
}
