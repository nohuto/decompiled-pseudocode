/*
 * XREFs of StorEtwProtocolCommandCompletion @ 0x1C0041C6C
 * Callers:
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C002E28C (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidUnitSendSrbProtocolCommandSynchronously @ 0x1C003E800 (RaidUnitSendSrbProtocolCommandSynchronously.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 *     Template_pqtqcccqqqqt @ 0x1C0041F9C (Template_pqtqcccqqqqt.c)
 */

__int64 __fastcall StorEtwProtocolCommandCompletion(__int64 a1, __int64 a2, char a3)
{
  _DWORD *v3; // r13
  char v7; // bp
  char v8; // r14
  char v9; // r15
  __int64 v10; // rdx
  __int64 result; // rax
  _BYTE *v12; // rcx
  _QWORD v13[2]; // [rsp+80h] [rbp-48h] BYREF

  v3 = *(_DWORD **)(a2 + 24);
  v13[0] = 0LL;
  v13[1] = 0LL;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  IoGetActivityIdIrp(a2, v13);
  v10 = *(_QWORD *)(a1 + 64);
  result = *(_QWORD *)(a2 + 184);
  if ( *(_DWORD *)v10 == 1 )
  {
    v12 = *(_BYTE **)(a1 + 64);
    v10 = *(_QWORD *)(v10 + 24);
    v7 = v12[88];
    v8 = v12[89];
    v9 = v12[90];
  }
  else
  {
    v12 = 0LL;
  }
  if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x1000000) != 0 )
    return Template_pqtqcccqqqqt(
             (_DWORD)v12,
             v10,
             (unsigned int)v13,
             a2,
             *(_DWORD *)(result + 24),
             v12 == 0LL,
             *(_DWORD *)(v10 + 56),
             v7,
             v8,
             v9,
             v3[2],
             v3[20],
             v3[4],
             v3[5],
             a3);
  return result;
}
