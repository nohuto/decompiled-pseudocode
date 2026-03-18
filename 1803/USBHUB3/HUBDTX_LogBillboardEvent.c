/*
 * XREFs of HUBDTX_LogBillboardEvent @ 0x1C0026190
 * Callers:
 *     HUBDSM_CheckingIfBillboardStringDescriptorShouldBeQueried @ 0x1C001C640 (HUBDSM_CheckingIfBillboardStringDescriptorShouldBeQueried.c)
 *     HUBDSM_ValidatingAndLoggingBillboardStringDescriptor @ 0x1C001CC60 (HUBDSM_ValidatingAndLoggingBillboardStringDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x1C0001E98 (WPP_RECORDER_SF_dD.c)
 *     McTemplateK0pcchz @ 0x1C0022C3C (McTemplateK0pcchz.c)
 *     __security_check_cookie @ 0x1C00396C0 (__security_check_cookie.c)
 *     memmove @ 0x1C0039BC0 (memmove.c)
 *     memset @ 0x1C0039F00 (memset.c)
 */

NTSTATUS __fastcall HUBDTX_LogBillboardEvent(__int64 a1, _BYTE *a2)
{
  __int64 v4; // rbp
  __int64 v5; // rbx
  NTSTATUS result; // eax
  __int64 v7; // rdx
  __int64 v8; // [rsp+20h] [rbp-148h]
  __int64 v9; // [rsp+28h] [rbp-140h]
  __int64 v10; // [rsp+30h] [rbp-138h]
  _BYTE v11[256]; // [rsp+40h] [rbp-128h] BYREF

  v4 = **(_QWORD **)(a1 + 2640);
  if ( a2 )
  {
    v5 = (unsigned __int8)(*a2 - 2);
    memset(v11, 0, v5 + 2);
    memmove(v11, a2 + 2, (unsigned int)v5);
  }
  result = WPP_RECORDER_SF_dD(
             *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
             4u,
             5u,
             0x54u,
             (__int64)&WPP_0a0f952dc11639804361b505720162cd_Traceguids,
             *(unsigned __int8 *)(v4 + 4),
             *(unsigned __int8 *)(v4 + 5));
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
  {
    LOWORD(v10) = *(_WORD *)(v4 + 6);
    LOBYTE(v9) = *(_BYTE *)(v4 + 5);
    LOBYTE(v8) = *(_BYTE *)(v4 + 4);
    return McTemplateK0pcchz(
             (__int64)v11,
             v7,
             (const GUID *)(a1 + 1516),
             *(_QWORD *)(a1 + 24),
             v8,
             v9,
             v10,
             (unsigned __int64)v11 & -(__int64)(a2 != 0LL));
  }
  return result;
}
