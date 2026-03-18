/*
 * XREFs of IrqpAllocateInstancePath @ 0x1C0092C34
 * Callers:
 *     IrqTraceAffinityPolicy @ 0x1C0092A9C (IrqTraceAffinityPolicy.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall IrqpAllocateInstancePath(PDEVICE_OBJECT Pdo, __int64 a2)
{
  PVOID Data; // rdi
  ULONG Size; // eax
  __int16 result; // ax
  __int64 v7; // rcx
  const wchar_t *i; // rdx
  _WORD *j; // rdx
  __int16 v10; // ax
  ULONG RequiredSize; // [rsp+60h] [rbp+8h] BYREF
  ULONG Type; // [rsp+70h] [rbp+18h] BYREF

  RequiredSize = 0;
  Data = 0LL;
  if ( !Pdo )
    goto LABEL_8;
  if ( IoGetDevicePropertyData(Pdo, &DEVPKEY_Device_InstanceId, 0, 0, 0, 0LL, &RequiredSize, &Type) == -1073741789 )
  {
    Size = RequiredSize;
    if ( RequiredSize >= 0xFFFE )
      goto LABEL_6;
    Data = ExAllocatePoolWithTag(PagedPool, RequiredSize, 0x49706341u);
    if ( !Data )
      goto LABEL_8;
  }
  Size = RequiredSize;
LABEL_6:
  if ( IoGetDevicePropertyData(Pdo, &DEVPKEY_Device_InstanceId, 0, 0, Size, Data, &RequiredSize, &Type) < 0 )
  {
    ExFreePoolWithTag(Data, 0);
    goto LABEL_8;
  }
  if ( !Data )
  {
LABEL_8:
    result = 0x7FFF;
    *(_DWORD *)a2 = 0;
    *(_QWORD *)(a2 + 8) = 0LL;
    v7 = 0x7FFFLL;
    for ( i = &word_1C005B288; *i; ++i )
    {
      if ( !--v7 )
        return result;
    }
    *(_QWORD *)(a2 + 8) = &word_1C005B288;
    goto LABEL_19;
  }
  result = 0x7FFF;
  *(_DWORD *)a2 = 0;
  v7 = 0x7FFFLL;
  *(_QWORD *)(a2 + 8) = 0LL;
  for ( j = Data; *j; ++j )
  {
    if ( !--v7 )
      return result;
  }
  *(_QWORD *)(a2 + 8) = Data;
LABEL_19:
  v10 = 2 * (0x7FFF - v7);
  *(_WORD *)a2 = v10;
  result = v10 + 2;
  *(_WORD *)(a2 + 2) = result;
  return result;
}
