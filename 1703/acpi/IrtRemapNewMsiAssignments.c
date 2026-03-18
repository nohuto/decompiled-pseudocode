/*
 * XREFs of IrtRemapNewMsiAssignments @ 0x1C0088BBC
 * Callers:
 *     IrqArbCommitAllocation @ 0x1C0086A90 (IrqArbCommitAllocation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 *     PcisuppGetBusSlotNumber @ 0x1C008FD68 (PcisuppGetBusSlotNumber.c)
 */

__int64 __fastcall IrtRemapNewMsiAssignments(__int64 a1)
{
  _DWORD *UserData; // rbx
  int v2; // eax
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 result; // rax
  char v7; // [rsp+40h] [rbp+7h] BYREF
  unsigned int v8; // [rsp+44h] [rbp+Bh] BYREF
  unsigned int v9; // [rsp+48h] [rbp+Fh] BYREF
  PRTL_RANGE Range; // [rsp+50h] [rbp+17h] BYREF
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+58h] [rbp+1Fh] BYREF
  __int64 v12; // [rsp+78h] [rbp+3Fh] BYREF
  int v13; // [rsp+80h] [rbp+47h]

  RtlGetFirstRange(*(PRTL_RANGE_LIST *)(a1 + 48), &Iterator, &Range);
  while ( Range )
  {
    if ( Range->Owner )
    {
      if ( (Range->Attributes & 1) == 0 )
      {
        UserData = Range->UserData;
        if ( UserData )
        {
          v2 = UserData[1];
          if ( (v2 & 4) != 0 && UserData[2] == 3 )
          {
            UserData[1] = v2 & 0xFFFFFFFB;
            if ( (int)PcisuppGetBusSlotNumber(
                        Range->Owner,
                        (unsigned int)&v9,
                        (unsigned int)&v8,
                        (unsigned int)&v7,
                        (__int64)&v12) < 0 )
            {
              v5 = 0LL;
              v4 = 0LL;
              LOBYTE(v3) = 0;
              v9 = 0;
              v8 = 0;
              v12 = 0LL;
              v13 = 0;
              v7 = 0;
            }
            else
            {
              LOBYTE(v3) = v7;
              v4 = v8;
              v5 = v9;
            }
            result = ((__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64, _DWORD *, _DWORD))HalPrivateDispatchTable[64])(
                       v5,
                       v4,
                       &v12,
                       v3,
                       UserData + 8,
                       *((unsigned __int8 *)UserData + 26));
            if ( (int)result < 0 )
              return result;
          }
        }
      }
    }
    RtlGetNextRange(&Iterator, &Range, 1u);
  }
  return 0LL;
}
