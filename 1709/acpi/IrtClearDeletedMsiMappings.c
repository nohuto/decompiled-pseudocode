/*
 * XREFs of IrtClearDeletedMsiMappings @ 0x1C008B3C0
 * Callers:
 *     IrqArbCommitAllocation @ 0x1C0089410 (IrqArbCommitAllocation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 *     PcisuppGetBusSlotNumber @ 0x1C008BC64 (PcisuppGetBusSlotNumber.c)
 */

NTSTATUS __fastcall IrtClearDeletedMsiMappings(__int64 a1)
{
  NTSTATUS result; // eax
  PVOID Owner; // r10
  _DWORD *UserData; // rbx
  int v4; // edi
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // [rsp+40h] [rbp+7h] BYREF
  unsigned int v9; // [rsp+44h] [rbp+Bh] BYREF
  unsigned int v10; // [rsp+48h] [rbp+Fh] BYREF
  PRTL_RANGE Range; // [rsp+50h] [rbp+17h] BYREF
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+58h] [rbp+1Fh] BYREF
  __int64 v13; // [rsp+78h] [rbp+3Fh] BYREF
  int v14; // [rsp+80h] [rbp+47h]

  result = RtlGetFirstRange(*(PRTL_RANGE_LIST *)(a1 + 40), &Iterator, &Range);
  while ( Range )
  {
    Owner = Range->Owner;
    if ( Owner )
    {
      if ( (Range->Attributes & 1) == 0 )
      {
        UserData = Range->UserData;
        if ( UserData )
        {
          if ( (UserData[1] & 8) != 0 && UserData[2] == 3 )
          {
            v4 = *((unsigned __int8 *)UserData + 26);
            if ( (int)PcisuppGetBusSlotNumber(
                        (_DWORD)Owner,
                        (unsigned int)&v10,
                        (unsigned int)&v9,
                        (unsigned int)&v8,
                        (__int64)&v13) < 0 )
            {
              v7 = 0LL;
              v6 = 0LL;
              LOBYTE(v5) = 0;
              v10 = 0;
              v9 = 0;
              v13 = 0LL;
              v14 = 0;
              v8 = 0;
            }
            else
            {
              LOBYTE(v5) = v8;
              v6 = v9;
              v7 = v10;
            }
            ((void (__fastcall *)(__int64, __int64, __int64 *, __int64, _DWORD *, int))HalPrivateDispatchTable[65])(
              v7,
              v6,
              &v13,
              v5,
              UserData + 8,
              v4);
          }
        }
      }
    }
    result = RtlGetNextRange(&Iterator, &Range, 1u);
  }
  return result;
}
