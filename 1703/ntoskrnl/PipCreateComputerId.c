/*
 * XREFs of PipCreateComputerId @ 0x14080FDB0
 * Callers:
 *     PipInitComputerIds @ 0x14080F160 (PipInitComputerIds.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwSetValueKey @ 0x14017EB40 (ZwSetValueKey.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     _PnpStringFromGuid @ 0x1404E2F18 (_PnpStringFromGuid.c)
 *     RtlGenerateClass5Guid @ 0x1405B6EC0 (RtlGenerateClass5Guid.c)
 */

__int64 __fastcall PipCreateComputerId(HANDLE KeyHandle, unsigned __int16 **a2, unsigned int a3, int *a4)
{
  unsigned int v4; // ebp
  unsigned __int16 **v7; // r14
  unsigned __int16 v9; // bx
  unsigned int v10; // r9d
  unsigned __int16 *v11; // rax
  unsigned __int16 v12; // cx
  unsigned __int16 v13; // bx
  UCHAR *PoolWithTag; // rax
  UCHAR *Data; // rdi
  UCHAR *v16; // rsi
  unsigned __int16 v17; // ax
  ULONG DataSize; // esi
  int Class5Guid; // ebx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-A8h] BYREF
  WCHAR SourceString[40]; // [rsp+40h] [rbp-98h] BYREF

  v4 = 0;
  v7 = a2;
  v9 = 0;
  v10 = 0;
  if ( !a3 )
    return (unsigned int)-1073741811;
  do
  {
    v11 = *a2;
    v12 = v9 + 2;
    ++a2;
    if ( !v10 )
      v12 = v9;
    ++v10;
    v9 = *v11 + v12;
  }
  while ( v10 < a3 );
  if ( v9 > 2u )
  {
    v13 = v9 + 2;
    PoolWithTag = (UCHAR *)ExAllocatePoolWithTag(PagedPool, v13, 0x6E697050u);
    Data = PoolWithTag;
    if ( PoolWithTag )
    {
      v16 = PoolWithTag;
      do
      {
        if ( v4 )
        {
          *(_WORD *)v16 = 38;
          v16 += 2;
        }
        v17 = **v7;
        if ( v17 )
        {
          memmove(v16, *((const void **)*v7 + 1), v17);
          v16 += 2 * ((unsigned __int64)**v7 >> 1);
        }
        ++v4;
        ++v7;
      }
      while ( v4 < a3 );
      *(_WORD *)v16 = 0;
      DataSize = v13;
      Class5Guid = RtlGenerateClass5Guid((__int64)&PnpComputerIdNamespaceGuid, Data, (unsigned int)v13 - 2, (__int64)a4);
      if ( Class5Guid >= 0 )
      {
        Class5Guid = PnpStringFromGuid(a4, SourceString);
        if ( Class5Guid >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, SourceString);
          Class5Guid = ZwSetValueKey(KeyHandle, &DestinationString, 0, 1u, Data, DataSize);
        }
      }
      ExFreePoolWithTag(Data, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)Class5Guid;
}
