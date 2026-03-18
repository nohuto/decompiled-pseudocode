/*
 * XREFs of HvlpFastFlushListTb @ 0x140159EE0
 * Callers:
 *     HvlpFlushRangeListTb @ 0x140159DCC (HvlpFlushRangeListTb.c)
 * Callees:
 *     HvlpCopyFlushVaList @ 0x140159FE4 (HvlpCopyFlushVaList.c)
 *     VslFastFlushSecureRangeList @ 0x14015A0E4 (VslFastFlushSecureRangeList.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x1401B4720 (HvcallpExtendedFastHypercall.c)
 */

__int64 __fastcall HvlpFastFlushListTb(__int128 *a1, char a2, __int64 a3, unsigned int a4, __int64 a5, int a6)
{
  __int64 v8; // xmm1_8
  __int64 result; // rax
  __int64 v10; // [rsp+20h] [rbp-59h]
  __int128 v11; // [rsp+30h] [rbp-49h] BYREF
  __int64 v12; // [rsp+40h] [rbp-39h]
  _BYTE v13[88]; // [rsp+48h] [rbp-31h] BYREF

  if ( (_BYTE)a3 )
  {
    v8 = *((_QWORD *)a1 + 2);
    v11 = *a1;
    v12 = v8;
    if ( (((unsigned int)HvlpFlags >> 13) & 1) == 0 )
      *((_QWORD *)&v11 + 1) |= 8uLL;
    LOBYTE(a3) = (HvlpFlags & 0x2000) != 0;
    HvlpCopyFlushVaList(a4, a5, a3, v13);
    HIDWORD(v10) = a6 & 0xFFF;
    LODWORD(v10) = 65539;
    result = HvcallpExtendedFastHypercall(v10, &v11, (unsigned int)(8 * a6 + 24));
  }
  if ( a2 )
    return VslFastFlushSecureRangeList(a5, a4);
  return result;
}
