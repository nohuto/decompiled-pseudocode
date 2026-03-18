/*
 * XREFs of HvlpFastFlushListTb @ 0x1401412D4
 * Callers:
 *     HvlpFlushRangeListTb @ 0x1401411D8 (HvlpFlushRangeListTb.c)
 * Callees:
 *     HvlpCopyFlushVaList @ 0x1401413A0 (HvlpCopyFlushVaList.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x14018AA70 (HvcallpExtendedFastHypercall.c)
 *     VslFastFlushSecureRangeList @ 0x1401F1BD4 (VslFastFlushSecureRangeList.c)
 */

__int64 __fastcall HvlpFastFlushListTb(__int128 *a1, char a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v6; // ebx
  __int64 v7; // xmm1_8
  __int64 result; // rax
  __int64 v10; // [rsp+20h] [rbp-51h]
  __int128 v11; // [rsp+30h] [rbp-41h] BYREF
  __int64 v12; // [rsp+40h] [rbp-31h]
  _BYTE v13[88]; // [rsp+48h] [rbp-29h] BYREF

  v6 = a3;
  v7 = *((_QWORD *)a1 + 2);
  v11 = *a1;
  v12 = v7;
  if ( (((unsigned int)HvlpFlags >> 13) & 1) == 0 )
    *((_QWORD *)&v11 + 1) |= 8uLL;
  LOBYTE(a3) = (HvlpFlags & 0x2000) != 0;
  HvlpCopyFlushVaList(v6, a4, a3, v13);
  HIDWORD(v10) = a5 & 0xFFF;
  LODWORD(v10) = 65539;
  result = HvcallpExtendedFastHypercall(v10, &v11, (unsigned int)(8 * a5 + 24));
  if ( a2 )
    return VslFastFlushSecureRangeList(a4, v6);
  return result;
}
