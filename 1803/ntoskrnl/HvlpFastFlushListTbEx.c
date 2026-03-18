/*
 * XREFs of HvlpFastFlushListTbEx @ 0x14022E598
 * Callers:
 *     HvlpFlushRangeListTbEx @ 0x14022E700 (HvlpFlushRangeListTbEx.c)
 * Callees:
 *     HvlpCopyFlushVaList @ 0x140159FE4 (HvlpCopyFlushVaList.c)
 *     VslFastFlushSecureRangeList @ 0x14015A0E4 (VslFastFlushSecureRangeList.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x1401B4720 (HvcallpExtendedFastHypercall.c)
 *     HvlpAffinityToHvProcessorSet @ 0x14022DD70 (HvlpAffinityToHvProcessorSet.c)
 */

int __fastcall HvlpFastFlushListTbEx(
        __int64 *a1,
        __int64 a2,
        char a3,
        char a4,
        unsigned int a5,
        unsigned __int64 *a6,
        int a7)
{
  _UNKNOWN **v7; // rax
  __int64 v10; // rdx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v14; // [rsp+28h] [rbp-51h]
  __int64 v15; // [rsp+38h] [rbp-41h] BYREF
  __int64 v16; // [rsp+40h] [rbp-39h]
  _QWORD v17[12]; // [rsp+48h] [rbp-31h] BYREF
  _UNKNOWN *retaddr; // [rsp+C0h] [rbp+47h] BYREF

  v7 = &retaddr;
  if ( a4 )
  {
    v10 = a1[1];
    v15 = *a1;
    v16 = v10;
    if ( (HvlpFlags & 0x2000) == 0 )
      v16 = v10 | 8;
    v11 = HvlpAffinityToHvProcessorSet(a2, v17, 0x50u);
    v12 = v11 + 32 + 8 * a7;
    LODWORD(v14) = ((v11 + 7) << 14) & 0x3FE0000 | 0x14;
    HIDWORD(v14) = a7 & 0xFFF;
    HvlpCopyFlushVaList(a5, a6, (HvlpFlags & 0x2000) != 0, (__int64 *)((char *)&v15 + (unsigned int)(v11 + 32)));
    LODWORD(v14) = v14 | 0x10000;
    LODWORD(v7) = HvcallpExtendedFastHypercall(v14, (__int64)&v15, v12);
  }
  if ( a3 )
    LODWORD(v7) = VslFastFlushSecureRangeList(a6, a5);
  return (int)v7;
}
