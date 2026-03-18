/*
 * XREFs of ?CreateSharedObject@@YAJPEBGU_GENERIC_MAPPING@@P6AJW4_OB_OPEN_REASON@@DPEAU_EPROCESS@@PEAXPEAKK@ZP6AX34_K7@ZP6AX4@ZPEAPEAU_OBJECT_TYPE@@W4_POOL_TYPE@@@Z @ 0x1C0120400
 * Callers:
 *     CreateDxgkSharedObjectTypes @ 0x1C01201A4 (CreateDxgkSharedObjectTypes.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 */

__int64 __fastcall CreateSharedObject(
        PCWSTR SourceString,
        __m128i *a2,
        int (__high *a3)(enum _OB_OPEN_REASON, char, struct _EPROCESS *, void *, unsigned int *, unsigned int),
        void (*a4)(struct _EPROCESS *, void *, unsigned __int64, unsigned __int64),
        void (*a5)(void *),
        struct _OBJECT_TYPE **a6,
        enum _POOL_TYPE a7)
{
  __m128i v7; // xmm6
  struct _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-A1h] BYREF
  _QWORD v13[16]; // [rsp+38h] [rbp-91h] BYREF

  v7 = *a2;
  memset(v13, 0, 0x78uLL);
  *(__m128i *)((char *)&v13[1] + 4) = v7;
  LOWORD(v13[0]) = 120;
  v13[7] = a3;
  v13[8] = a4;
  v13[9] = a5;
  HIDWORD(v13[3]) = _mm_srli_si128(v7, 8).m128i_i32[1];
  HIDWORD(v13[4]) = a7;
  BYTE2(v13[0]) = (a3 != 0LL ? 17 : 1) | BYTE2(v13[0]) & 0x8D | (a3 != 0LL ? 12 : 14) & 0x8F;
  *(_QWORD *)((char *)v13 + 4) = 0x10000000000LL;
  v13[5] = 0LL;
  v13[6] = 0LL;
  memset(&v13[10], 0, 32);
  RtlInitUnicodeString(&DestinationString, SourceString);
  return ObCreateObjectType(&DestinationString, v13, 0LL, a6);
}
