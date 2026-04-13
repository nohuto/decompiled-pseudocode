/*
 * XREFs of ??0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV1_t@@@Z @ 0x18005CA9C
 * Callers:
 *     ?Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z @ 0x18005CBCC (-Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z.c)
 * Callees:
 *     ??$Base64Encode@$0IB@@TLV@@YAXPEBE_KAEAY0IB@D@Z @ 0x18003BDA0 (--$Base64Encode@$0IB@@TLV@@YAXPEBE_KAEAY0IB@D@Z.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C1147 (memset_0.c)
 */

__int64 __fastcall TraceLoggingCorrelationVector::TraceLoggingCorrelationVector(__int64 a1)
{
  __int64 result; // rax
  GUID v3; // [rsp+20h] [rbp-38h] BYREF
  GUID pguid; // [rsp+30h] [rbp-28h] BYREF

  *(_BYTE *)(a1 + 130) = 65;
  *(_QWORD *)&pguid.Data1 = 0LL;
  *(_QWORD *)pguid.Data4 = 0LL;
  CoCreateGuid(&pguid);
  v3 = pguid;
  *(_BYTE *)(a1 + 129) = 17;
  *(_QWORD *)(a1 + 136) = 0x1300000000LL;
  memset_0((void *)a1, 0, 0x81uLL);
  TLV::Base64Encode<129>((unsigned __int8 *)&v3, 0xCuLL, a1);
  result = a1;
  *(_WORD *)(a1 + 16) = 46;
  return result;
}
