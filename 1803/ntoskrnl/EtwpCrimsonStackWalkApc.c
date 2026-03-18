/*
 * XREFs of EtwpCrimsonStackWalkApc @ 0x1402AD290
 * Callers:
 *     <none>
 * Callees:
 *     EtwpEventWriteFull @ 0x1400EFAB0 (EtwpEventWriteFull.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCrimsonStackWalkApc(void *a1, _QWORD *a2, _WORD *a3, _DWORD *a4, _DWORD *a5)
{
  __int64 v8; // [rsp+90h] [rbp-1C8h]
  _OWORD v9[25]; // [rsp+A0h] [rbp-1B8h] BYREF

  *a2 = 0LL;
  ExFreePoolWithTag(a1, 0);
  LODWORD(v8) = *a4;
  HIDWORD(v8) = *a5;
  memset(v9, 0, sizeof(v9));
  *(_QWORD *)&v9[4] = v8;
  *((_QWORD *)&v9[23] + 1) = EtwpHostSiloState;
  WORD3(v9[7]) = *a3;
  *(GUID *)((char *)&v9[1] + 8) = EventTracingProvGuid;
  LODWORD(v9[7]) = 1;
  DWORD2(v9[7]) = 68;
  BYTE4(v9[7]) = -1;
  v9[8] = _mm_load_si128((const __m128i *)&_xmm);
  return EtwpEventWriteFull(
           (__int64)v9,
           1u,
           0LL,
           0,
           (__int64)&ETW_EVENT_USER_STACK_TRACE,
           0,
           0,
           0LL,
           0LL,
           0,
           0LL,
           0LL,
           0LL,
           0LL,
           0,
           0LL,
           0LL);
}
