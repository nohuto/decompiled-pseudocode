/*
 * XREFs of AdtpBuildRegistryValueString @ 0x140777414
 * Callers:
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140728B88 (SeAdtRegistryValueChangedAuditAlarm.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     AdtpBuildHexInt64String @ 0x140776E10 (AdtpBuildHexInt64String.c)
 *     AdtpBuildUlongString @ 0x140777E20 (AdtpBuildUlongString.c)
 *     AdtpBuildReplacementString @ 0x140778790 (AdtpBuildReplacementString.c)
 */

__int64 __fastcall AdtpBuildRegistryValueString(
        int a1,
        unsigned int a2,
        unsigned int *a3,
        UNICODE_STRING *a4,
        _BYTE *a5)
{
  _BYTE *v5; // r15
  size_t v6; // rbx
  unsigned int *v8; // r14
  unsigned int v9; // edi
  int v10; // r9d
  const WCHAR *v11; // r12
  unsigned __int32 v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // ebx
  unsigned int v15; // ecx
  __int64 v16; // rdx
  unsigned int *v17; // rdx
  __int64 v18; // r8
  __int16 v19; // cx
  int v20; // eax
  unsigned int v21; // ebp
  unsigned int v22; // r8d
  unsigned int v23; // ecx
  WCHAR v24; // dx
  __int64 v25; // rax
  wchar_t *v26; // rax
  bool v27; // cf
  unsigned __int64 v28; // rbp
  WCHAR *PoolWithTag; // rax
  const WCHAR *v30; // r12
  unsigned __int16 Length; // cx
  unsigned __int16 MaximumLength; // ax
  wchar_t *Buffer; // rcx
  int v35; // [rsp+20h] [rbp-38h]

  v5 = a5;
  v6 = a2;
  v8 = a3;
  v9 = 0;
  v10 = 0;
  v11 = 0LL;
  *a5 = 0;
  switch ( a1 )
  {
    case 4:
      if ( a2 >= 4 )
      {
        v12 = *a3;
LABEL_7:
        v13 = AdtpBuildUlongString(v12, 0LL, (__int64)a5);
LABEL_39:
        v9 = v13;
        goto LABEL_53;
      }
      goto LABEL_37;
    case 5:
      if ( a2 >= 4 )
      {
        v12 = _byteswap_ulong(*a3);
        goto LABEL_7;
      }
      goto LABEL_37;
    case 11:
      if ( a2 >= 8 )
      {
        v13 = AdtpBuildHexInt64String((__int64 *)a3, (__int64)a4, (__int64)a3, 0LL, v35, a5);
        goto LABEL_39;
      }
      goto LABEL_37;
  }
  if ( (unsigned int)(a1 - 1) <= 1 )
  {
    v27 = a2 < 2;
    if ( a2 >= 2 )
    {
      v28 = (unsigned __int64)a2 >> 1;
      if ( *((_WORD *)a3 + v28 - 1) )
      {
        PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, a2 + 2LL, 0x6B416553u);
        v30 = PoolWithTag;
        if ( !PoolWithTag )
          goto LABEL_24;
        memmove(PoolWithTag, v8, v6);
        v30[v28] = 0;
        RtlInitUnicodeString(a4, v30);
        *a5 = 1;
LABEL_48:
        Length = v6;
        if ( a4->Length < (unsigned __int16)v6 )
          Length = a4->Length;
        MaximumLength = a4->MaximumLength;
        a4->Length = Length;
        if ( MaximumLength < (unsigned __int16)v6 )
          LOWORD(v6) = MaximumLength;
        a4->MaximumLength = v6;
LABEL_53:
        if ( (v9 & 0x80000000) == 0 )
          return v9;
        goto LABEL_54;
      }
      v27 = a2 < 2;
    }
    if ( v27 )
      v8 = 0LL;
    RtlInitUnicodeString(a4, (PCWSTR)v8);
    *a5 = 0;
    goto LABEL_48;
  }
  if ( a1 != 7 )
  {
LABEL_37:
    v26 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x1AuLL, 0x6B416553u);
    a4->Buffer = v26;
    if ( v26 )
    {
      *a5 = 1;
      *(_DWORD *)&a4->Length = 1703936;
      v13 = AdtpBuildReplacementString(1800LL, a4);
      goto LABEL_39;
    }
LABEL_24:
    v9 = -1073741801;
LABEL_54:
    if ( *a5 )
    {
      Buffer = a4->Buffer;
      if ( Buffer )
        ExFreePoolWithTag(Buffer, 0);
    }
    *a5 = 0;
    return v9;
  }
  v14 = a2 >> 1;
  v15 = 0;
  if ( a2 >> 1 )
  {
    do
    {
      v16 = v14 - 1;
      if ( *((_WORD *)a3 + v16) )
        break;
      if ( v15 >= 2 )
        break;
      ++v15;
      --v14;
    }
    while ( (_DWORD)v16 );
  }
  if ( v14 )
  {
    v17 = a3;
    v18 = v14;
    do
    {
      v19 = *(_WORD *)v17;
      v20 = v10 + 1;
      v17 = (unsigned int *)((char *)v17 + 2);
      if ( v19 != 42 )
        v20 = v10;
      v10 = v20;
      --v18;
    }
    while ( v18 );
    v21 = v20 + v14;
    v11 = (const WCHAR *)ExAllocatePoolWithTag(PagedPool, 2LL * (v20 + v14 + 1), 0x6B416553u);
    if ( !v11 )
      goto LABEL_24;
    v22 = 0;
    v23 = 0;
    do
    {
      if ( v23 >= v21 )
        break;
      v24 = *(_WORD *)v8;
      v25 = v23;
      if ( *(_WORD *)v8 )
      {
        if ( v24 == 42 )
        {
          ++v23;
          v11[v25] = 42;
          v11[v23] = 42;
        }
        else
        {
          v11[v23] = v24;
        }
      }
      else
      {
        v11[v23] = 42;
      }
      ++v22;
      v8 = (unsigned int *)((char *)v8 + 2);
      ++v23;
    }
    while ( v22 < v14 );
    v5 = a5;
    v11[v23] = 0;
  }
  RtlInitUnicodeString(a4, v11);
  if ( v11 )
    *v5 = 1;
  return v9;
}
