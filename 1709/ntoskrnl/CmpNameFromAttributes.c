/*
 * XREFs of CmpNameFromAttributes @ 0x1404E3564
 * Callers:
 *     CmLoadDifferencingKey @ 0x1404E2048 (CmLoadDifferencingKey.c)
 *     NtReplaceKey @ 0x14068866C (NtReplaceKey.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140060B70 (ExAllocatePoolWithQuotaTag.c)
 *     RtlAppendUnicodeStringToString @ 0x1400DE270 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwQueryObject @ 0x14017DAC0 (ZwQueryObject.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     IoConvertFileHandleToKernelHandle @ 0x1406B71C0 (IoConvertFileHandleToKernelHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall CmpNameFromAttributes(_OWORD *a1, char a2, UNICODE_STRING *a3, __int64 a4)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  unsigned __int16 v8; // si
  char *v9; // r8
  wchar_t *PoolWithQuotaTag; // rax
  __int64 result; // rax
  NTSTATUS v12; // r12d
  __m128i v13; // xmm0
  unsigned int v14; // edx
  wchar_t *v15; // rax
  _WORD *v16; // r8
  void *Src[2]; // [rsp+38h] [rbp-2A0h] BYREF
  ULONG ReturnLength[2]; // [rsp+48h] [rbp-290h] BYREF
  UNICODE_STRING *v19; // [rsp+50h] [rbp-288h]
  HANDLE Handle[2]; // [rsp+58h] [rbp-280h] BYREF
  __int128 v21; // [rsp+68h] [rbp-270h]
  __int128 v22; // [rsp+78h] [rbp-260h]
  UNICODE_STRING Source; // [rsp+88h] [rbp-250h] BYREF
  UNICODE_STRING ObjectInformation; // [rsp+A0h] [rbp-238h] BYREF

  v19 = a3;
  v6 = 0;
  a3->Buffer = 0LL;
  if ( a2 == 1 )
  {
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = 0x7FFFFFFF0000LL;
  }
  else
  {
    v7 = 0x7FFFFFFF0000LL;
  }
  *(_OWORD *)Handle = *a1;
  v21 = a1[1];
  v22 = a1[2];
  *(_OWORD *)Src = *(_OWORD *)v21;
  v8 = (unsigned __int16)Src[0];
  if ( a2 == 1 && LOWORD(Src[0]) )
  {
    if ( ((__int64)Src[1] & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = (char *)Src[1] + LOWORD(Src[0]);
    if ( (unsigned __int64)v9 > 0x7FFFFFFF0000LL || v9 < Src[1] )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  if ( ((__int64)Src[0] & 1) != 0 )
    return 3221225531LL;
  if ( !Handle[1] )
  {
    if ( !LOWORD(Src[0]) )
      return 3221225531LL;
    a3->Length = (unsigned __int16)Src[0];
    a3->MaximumLength = v8;
    PoolWithQuotaTag = (wchar_t *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v8, 0x6E664D43u);
    a3->Buffer = PoolWithQuotaTag;
    if ( PoolWithQuotaTag )
      memmove(PoolWithQuotaTag, Src[1], v8);
    else
      return (unsigned int)-1073741670;
    return v6;
  }
  if ( SLODWORD(Handle[1]) < 0 && a2 == 1 )
    return 3221225480LL;
  if ( Src[1] && LOWORD(Src[0]) >= 2u && *(_WORD *)Src[1] == 92 )
    return 3221225531LL;
  LOBYTE(a4) = 1;
  LOBYTE(v7) = a2;
  result = IoConvertFileHandleToKernelHandle(Handle[1], v7, 32LL, a4, &Handle[1]);
  if ( (int)result >= 0 )
  {
    v12 = ZwQueryObject(Handle[1], ObjectNameInformation, &ObjectInformation, 0x200u, ReturnLength);
    ZwClose(Handle[1]);
    if ( v12 < 0 )
      return (unsigned int)v12;
    v13 = (__m128i)ObjectInformation;
    Source = ObjectInformation;
    a3->Length = 0;
    v14 = (unsigned __int16)_mm_cvtsi128_si32(v13) + 2 + v8;
    ReturnLength[1] = v14;
    if ( v14 > 0xFFFF )
      return 3221225529LL;
    a3->MaximumLength = v14;
    v15 = (wchar_t *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, (unsigned __int16)v14, 0x6E664D43u);
    a3->Buffer = v15;
    if ( !v15 )
      return 3221225626LL;
    RtlAppendUnicodeStringToString(a3, &Source);
    if ( a3->Length )
    {
      v16 = (wchar_t *)((char *)a3->Buffer + a3->Length);
      if ( *(v16 - 1) != 92 )
      {
        *v16 = 92;
        a3->Length += 2;
      }
    }
    return (unsigned int)RtlAppendUnicodeStringToString(a3, (PCUNICODE_STRING)Src);
  }
  return result;
}
