/*
 * XREFs of IrqpAllocateInstancePath @ 0x1C00858D0
 * Callers:
 *     IrqTraceAffinityPolicy @ 0x1C0085740 (IrqTraceAffinityPolicy.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall IrqpAllocateInstancePath(PDEVICE_OBJECT Pdo, __int64 a2)
{
  PVOID Data; // rdi
  ULONG Size; // eax
  __int64 v6; // rcx
  const wchar_t *v7; // rax
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
    *(_DWORD *)a2 = 0;
    *(_QWORD *)(a2 + 8) = 0LL;
    v6 = 0x7FFFLL;
    v7 = &word_1C00682B8;
    while ( *v7 )
    {
      ++v7;
      if ( !--v6 )
        return (__int16)v7;
    }
    *(_QWORD *)(a2 + 8) = &word_1C00682B8;
    goto LABEL_19;
  }
  *(_DWORD *)a2 = 0;
  v6 = 0x7FFFLL;
  *(_QWORD *)(a2 + 8) = 0LL;
  v7 = (const wchar_t *)Data;
  while ( *v7 )
  {
    ++v7;
    if ( !--v6 )
      return (__int16)v7;
  }
  *(_QWORD *)(a2 + 8) = Data;
LABEL_19:
  *(_WORD *)a2 = 2 * (0x7FFF - v6);
  LOWORD(v7) = 2 * (0x7FFF - v6) + 2;
  *(_WORD *)(a2 + 2) = (_WORD)v7;
  return (__int16)v7;
}
