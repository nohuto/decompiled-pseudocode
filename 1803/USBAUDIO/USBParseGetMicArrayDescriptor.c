/*
 * XREFs of USBParseGetMicArrayDescriptor @ 0x1C0021B90
 * Callers:
 *     USBParseTerminalUnit @ 0x1C00225D0 (USBParseTerminalUnit.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00089A0 (__security_check_cookie.c)
 *     USBHwAllocateAndBag @ 0x1C001FC9C (USBHwAllocateAndBag.c)
 *     USBHwGetSetMemory @ 0x1C0020110 (USBHwGetSetMemory.c)
 */

__int64 __fastcall USBParseGetMicArrayDescriptor(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int16 v3; // di
  unsigned int v4; // ebp
  _WORD *v7; // rsi
  __int64 v8; // r15
  int SetMemory; // eax
  _WORD *PoolWithTag; // rbx
  int v11; // edi
  void *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  _WORD *v16; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v17[2]; // [rsp+48h] [rbp-60h] BYREF
  unsigned __int16 v18; // [rsp+58h] [rbp-50h]

  v3 = *(unsigned __int8 *)(a2 + 3);
  v4 = 0;
  v7 = 0LL;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  SetMemory = USBHwGetSetMemory(a1, 0x85u, 0, v3, *(unsigned __int8 *)(*(_QWORD *)(v8 + 48) + 2LL), 0, 0x12u, v17);
  if ( SetMemory < 0 )
  {
    if ( SetMemory == -1073741823 )
      SetMemory = -1073741275;
    v11 = SetMemory;
  }
  else if ( v17[0] == USBAUDIO_MIC_ARRAY_DESCRIPTOR && v17[1] == 0x14D34A2D16C584B1LL )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v18, 0x41627845u);
    if ( PoolWithTag )
    {
      v11 = USBHwGetSetMemory(a1, 0x85u, 0, v3, *(unsigned __int8 *)(*(_QWORD *)(v8 + 48) + 2LL), 0, v18, PoolWithTag);
      if ( v11 >= 0 )
        goto LABEL_13;
      ExFreePool(PoolWithTag);
    }
    else
    {
      v11 = -1073741670;
    }
  }
  else
  {
    v11 = -1073741275;
  }
  PoolWithTag = v16;
LABEL_13:
  if ( v11 >= 0 )
  {
    v12 = *(void **)(a1 + 8);
    v16 = ExAllocatePoolWithTag(PagedPool, 12 * (unsigned int)(unsigned __int16)PoolWithTag[17] + 18, 0x41627845u);
    v7 = v16;
    if ( v16 )
      v11 = USBHwAllocateAndBag((PVOID *)&v16, v12);
    else
      v11 = -1073741670;
    if ( v11 >= 0 )
    {
      *v7 = PoolWithTag[9];
      v7[1] = PoolWithTag[10];
      v7[2] = PoolWithTag[11];
      v7[3] = PoolWithTag[12];
      v7[4] = PoolWithTag[13];
      v7[5] = PoolWithTag[14];
      v7[6] = PoolWithTag[15];
      v7[7] = PoolWithTag[16];
      v7[8] = PoolWithTag[17];
      if ( PoolWithTag[17] )
      {
        do
        {
          v13 = v4++;
          v14 = 3 * v13;
          v7[2 * v14 + 9] = PoolWithTag[6 * v13 + 18];
          v7[2 * v14 + 10] = PoolWithTag[6 * v13 + 19];
          v7[2 * v14 + 11] = PoolWithTag[6 * v13 + 20];
          v7[2 * v14 + 12] = PoolWithTag[6 * v13 + 21];
          v7[2 * v14 + 13] = PoolWithTag[6 * v13 + 22];
          v7[2 * v14 + 14] = PoolWithTag[6 * v13 + 23];
        }
        while ( v4 < (unsigned __int16)PoolWithTag[17] );
      }
    }
    ExFreePool(PoolWithTag);
  }
  *a3 = v7;
  return (unsigned int)v11;
}
