/*
 * XREFs of GetAcpiTable @ 0x1C001E5D4
 * Callers:
 *     CollectAcpiBiosInfo @ 0x1C0030294 (CollectAcpiBiosInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000C200 (__security_check_cookie.c)
 *     memmove @ 0x1C000C700 (memmove.c)
 */

// local variable allocation has failed, the output may be wrong!
PVOID __stdcall GetAcpiTable(ULONG Handle, ULONG Signature, PCSTR OemId, PCSTR OemTableId)
{
  _QWORD *v4; // r15
  NTSTATUS v5; // ebx
  unsigned int *PoolWithTag; // rax
  unsigned int *v7; // rdi
  SIZE_T v8; // r14
  PVOID v9; // rax
  PVOID v10; // rsi
  ULONG ReturnLength; // [rsp+20h] [rbp-30h] BYREF
  int SystemInformation; // [rsp+28h] [rbp-28h] BYREF
  __int64 v14; // [rsp+2Ch] [rbp-24h]
  __int64 v15; // [rsp+34h] [rbp-1Ch]

  ReturnLength = 0;
  v4 = *(_QWORD **)&Signature;
  v15 = 0LL;
  v14 = 0x5043414600000001LL;
  SystemInformation = 1094930505;
  if ( ZwQuerySystemInformation(SystemFirmwareTableInformation, &SystemInformation, 0x14u, &ReturnLength) == -1073741789 )
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, ReturnLength, 0x72637250u);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = 1094930505;
      PoolWithTag[1] = 1;
      PoolWithTag[2] = 1346584902;
      PoolWithTag[3] = ReturnLength - 16;
      v5 = ZwQuerySystemInformation(SystemFirmwareTableInformation, PoolWithTag, ReturnLength, &ReturnLength);
      if ( v5 < 0 )
      {
        v5 = -1073741823;
      }
      else
      {
        v8 = v7[3];
        v9 = ExAllocatePoolWithTag(PagedPool, v8, 0x72637250u);
        v10 = v9;
        if ( v9 )
        {
          memmove(v9, v7 + 4, v8);
          *v4 = v10;
        }
        else
        {
          v5 = -1073741670;
        }
      }
      ExFreePoolWithTag(v7, 0x72637250u);
    }
    else
    {
      v5 = -1073741670;
    }
  }
  else
  {
    v5 = -1073741823;
  }
  return (PVOID)(unsigned int)v5;
}
