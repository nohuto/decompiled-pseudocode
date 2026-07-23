/*
 * XREFs of ExpGenuinePolicyPostProcess @ 0x14059B6E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x1401801E0 (ZwQueryLicenseValue.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ExpOsProductCacheProviderHelper @ 0x1405DED04 (ExpOsProductCacheProviderHelper.c)
 *     sub_140757628 @ 0x140757628 (sub_140757628.c)
 */

__int64 __fastcall ExpGenuinePolicyPostProcess(__int64 a1, _BYTE *a2, int a3, __int64 a4, _BYTE *a5)
{
  int v5; // esi
  NTSTATUS v7; // ebx
  int v8; // r12d
  PVOID PoolWithTag; // r14
  int v11; // eax
  bool v12; // zf
  ULONG v13; // [rsp+40h] [rbp-40h] BYREF
  SIZE_T NumberOfBytes; // [rsp+44h] [rbp-3Ch] BYREF
  int v15; // [rsp+4Ch] [rbp-34h] BYREF
  ULONG ResultDataSize; // [rsp+50h] [rbp-30h] BYREF
  __int64 v17; // [rsp+58h] [rbp-28h]
  __int64 v18; // [rsp+60h] [rbp-20h]
  __int64 v19; // [rsp+68h] [rbp-18h]
  __int64 v20; // [rsp+70h] [rbp-10h]

  v5 = (int)a2;
  v18 = a1;
  v17 = a4;
  v15 = 0;
  v12 = off_1407F3028 == 0LL;
  ResultDataSize = 4;
  v7 = 0;
  v8 = 0;
  v19 = 0LL;
  v20 = 0LL;
  PoolWithTag = 0LL;
  NumberOfBytes = 0LL;
  *a5 = 0;
  if ( !v12 )
  {
    v7 = sub_140757628(a1, (_DWORD)a2, a3, a4, 2);
    *a5 = 1;
    return (unsigned int)v7;
  }
  if ( !a2 )
    goto LABEL_7;
  if ( a3 == 1 )
  {
    v12 = *a2 == 1;
LABEL_28:
    if ( v12 )
      return (unsigned int)v7;
    goto LABEL_7;
  }
  if ( a3 == 2 )
  {
    v12 = *(_WORD *)a2 == 1;
    goto LABEL_28;
  }
  if ( *(_DWORD *)a2 == 1 )
    return (unsigned int)v7;
LABEL_7:
  v7 = ZwQueryLicenseValue((PUNICODE_STRING)&stru_14078D398, 0LL, (char *)&NumberOfBytes + 4, 4u, &ResultDataSize);
  if ( v7 < 0 || HIDWORD(NumberOfBytes) != 1 )
  {
    v7 = qword_1407F33E8 ? qword_1407F33E8(&v15) : -1073741637;
    if ( v7 >= 0 )
    {
      if ( qword_1407F33A8 )
      {
        v7 = ExpOsProductCacheProviderHelper((PUNICODE_STRING)&stru_14078CB58, (__int64)&NumberOfBytes, (ULONG)&v13);
        if ( v7 == -1073741789 )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x20534C53u);
          if ( !PoolWithTag )
            return (unsigned int)-1073741801;
          v7 = ExpOsProductCacheProviderHelper((PUNICODE_STRING)&stru_14078CB58, (__int64)&NumberOfBytes, (ULONG)&v13);
        }
        if ( v7 < 0 )
          goto LABEL_21;
        v11 = ((__int64 (__fastcall *)(__int64, PVOID, _QWORD))qword_1407F33A8)(3LL, PoolWithTag, 0LL);
        v7 = v11;
        if ( v11 >= 0 && (v19 & 0x40) != 0 )
        {
          v8 = 1;
          goto LABEL_18;
        }
        if ( v11 == -1073741198 )
        {
LABEL_18:
          v7 = 0;
          goto LABEL_19;
        }
      }
      else
      {
        v7 = -1073741637;
      }
      if ( v7 < 0 )
      {
LABEL_21:
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0);
        return (unsigned int)v7;
      }
LABEL_19:
      if ( !v15 || v8 )
      {
        v7 = sub_140757628(v18, v5, a3, v17, 2);
        *a5 = 1;
      }
      goto LABEL_21;
    }
  }
  return (unsigned int)v7;
}
