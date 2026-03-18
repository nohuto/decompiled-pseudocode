/*
 * XREFs of IrtRemapNewMsiAssignments @ 0x1C0092EA0
 * Callers:
 *     IrqArbCommitAllocation @ 0x1C0090430 (IrqArbCommitAllocation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     PcisuppGetBusSlotNumber @ 0x1C008C21C (PcisuppGetBusSlotNumber.c)
 */

__int64 __fastcall IrtRemapNewMsiAssignments(__int64 a1)
{
  _DWORD *UserData; // rbx
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 result; // rax
  _BYTE v6[4]; // [rsp+40h] [rbp+7h] BYREF
  unsigned int v7; // [rsp+44h] [rbp+Bh] BYREF
  unsigned int v8; // [rsp+48h] [rbp+Fh] BYREF
  PRTL_RANGE Range; // [rsp+50h] [rbp+17h] BYREF
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+58h] [rbp+1Fh] BYREF
  __int64 v11; // [rsp+78h] [rbp+3Fh] BYREF
  int v12; // [rsp+80h] [rbp+47h]

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
            if ( (int)PcisuppGetBusSlotNumber((__int64)Range->Owner, (int *)&v8, (int *)&v7, (__int64)v6, (__int64)&v11) >= 0 )
            {
              v4 = v7;
              v3 = v8;
            }
            else
            {
              v3 = 0LL;
              v4 = 0LL;
              v8 = 0;
              v7 = 0;
              v11 = 0LL;
              v12 = 0;
              v6[0] = 0;
            }
            result = ((__int64 (__fastcall *)(__int64, __int64, __int64 *))HalPrivateDispatchTable[64])(v3, v4, &v11);
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
