/*
 * XREFs of ExpGenuinePolicyPostProcess @ 0x140549E30
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x1401A9E20 (ZwQueryLicenseValue.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ExpOsProductCacheProviderHelper @ 0x140549CD4 (ExpOsProductCacheProviderHelper.c)
 *     ExpGetVMActivationStatus @ 0x1405F36F0 (ExpGetVMActivationStatus.c)
 *     sub_1405F3CBC @ 0x1405F3CBC (sub_1405F3CBC.c)
 */

__int64 __fastcall ExpGenuinePolicyPostProcess(int a1, _BYTE *a2, int a3, __int64 a4, _BYTE *a5)
{
  int v7; // esi
  int VMActivationStatus; // ebx
  PVOID PoolWithTag; // r14
  bool v10; // zf
  int v11; // eax
  ULONG v13; // [rsp+40h] [rbp-31h] BYREF
  SIZE_T NumberOfBytes; // [rsp+44h] [rbp-2Dh] BYREF
  int v15; // [rsp+4Ch] [rbp-25h] BYREF
  int v16; // [rsp+50h] [rbp-21h] BYREF
  __int64 v17; // [rsp+58h] [rbp-19h]
  __int64 v18; // [rsp+60h] [rbp-11h]
  __int64 v19; // [rsp+68h] [rbp-9h]

  v17 = a4;
  HIDWORD(NumberOfBytes) = 4;
  v10 = off_140861030 == 0LL;
  *a5 = 0;
  v7 = (int)a2;
  VMActivationStatus = 0;
  v16 = 0;
  v15 = 0;
  PoolWithTag = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  if ( !v10 )
  {
    VMActivationStatus = sub_1405F3CBC(a1, (_DWORD)a2, a3, a4, 2);
    *a5 = 1;
    return (unsigned int)VMActivationStatus;
  }
  if ( a2 )
  {
    if ( a3 == 1 )
    {
      v10 = *a2 == 1;
    }
    else
    {
      if ( a3 != 2 )
      {
        if ( *(_DWORD *)a2 == 1 )
          return (unsigned int)VMActivationStatus;
        goto LABEL_11;
      }
      v10 = *(_WORD *)a2 == 1;
    }
    if ( v10 )
      return (unsigned int)VMActivationStatus;
  }
LABEL_11:
  VMActivationStatus = ExpGetVMActivationStatus(a1, (_DWORD)a2, a3, a4, (__int64)a5);
  if ( VMActivationStatus < 0 || *a5 != 1 )
  {
    VMActivationStatus = ZwQueryLicenseValue((__int64)L"JL", 0LL, (__int64)&v15);
    if ( VMActivationStatus < 0 || v15 != 1 )
    {
      VMActivationStatus = qword_1408613E8 ? qword_1408613E8(&v16) : -1073741637;
      if ( VMActivationStatus >= 0 )
      {
        if ( qword_1408613A8 )
        {
          VMActivationStatus = ExpOsProductCacheProviderHelper(
                                 (PUNICODE_STRING)&stru_1407F90D0,
                                 0LL,
                                 0LL,
                                 0,
                                 &NumberOfBytes,
                                 &v13);
          if ( VMActivationStatus == -1073741789 )
          {
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x20534C53u);
            if ( !PoolWithTag )
              return (unsigned int)-1073741801;
            VMActivationStatus = ExpOsProductCacheProviderHelper(
                                   (PUNICODE_STRING)&stru_1407F90D0,
                                   0LL,
                                   PoolWithTag,
                                   NumberOfBytes,
                                   &NumberOfBytes,
                                   &v13);
          }
          if ( VMActivationStatus < 0 )
            goto LABEL_34;
          v11 = ((__int64 (__fastcall *)(__int64, PVOID, _QWORD))qword_1408613A8)(3LL, PoolWithTag, 0LL);
          VMActivationStatus = v11;
          if ( v11 >= 0 && (v18 & 0x40) != 0 || v11 == -1073741198 )
          {
            VMActivationStatus = 0;
            goto LABEL_32;
          }
        }
        else
        {
          VMActivationStatus = -1073741637;
        }
        if ( VMActivationStatus < 0 )
        {
LABEL_34:
          if ( PoolWithTag )
            ExFreePoolWithTag(PoolWithTag, 0);
          return (unsigned int)VMActivationStatus;
        }
LABEL_32:
        if ( !v16 )
        {
          VMActivationStatus = sub_1405F3CBC(a1, v7, a3, v17, 2);
          *a5 = 1;
        }
        goto LABEL_34;
      }
    }
  }
  return (unsigned int)VMActivationStatus;
}
