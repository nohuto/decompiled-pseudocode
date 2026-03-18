/*
 * XREFs of PopRecordHibernateDiagnosticInfo @ 0x140486508
 * Callers:
 *     PopWriteHiberPages @ 0x140473A24 (PopWriteHiberPages.c)
 *     PopRequestWrite @ 0x1404743B4 (PopRequestWrite.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopRecordHibernateDiagnosticInfo(__int64 a1)
{
  int v1; // edx
  int v3; // r10d
  unsigned int v4; // r8d
  __int64 result; // rax
  __int64 v6; // rcx

  v1 = 0;
  PopHibernateDiagnosticInfo = byte_1403AAB76;
  v3 = 0;
  qword_1403AADE8 = qword_1403AA690;
  v4 = 0;
  qword_1403AADF0 = qword_1403AA698;
  qword_1403AADF8 = qword_1403AA6B8;
  qword_1403AAE00 = qword_1403AA6A8;
  qword_1403AAE08 = qword_1403AA6A0;
  qword_1403AAE10 = qword_1403AA6C0;
  qword_1403AAE18 = qword_1403AA6B0;
  qword_1403AAE20 = qword_1403AA6C8;
  dword_1403AAE28 = dword_1403AA6D0;
  result = (unsigned int)dword_1403AA1C4;
  dword_1403AAE34 = dword_1403AA1C4;
  for ( qword_1403AAE2C = 0LL; v4 < *(_DWORD *)(a1 + 256); HIDWORD(qword_1403AAE2C) = v3 )
  {
    v6 = v4++;
    v6 <<= 7;
    v1 += *(_DWORD *)(*(_QWORD *)(a1 + 264) + v6 + 120);
    LODWORD(qword_1403AAE2C) = v1;
    result = *(_QWORD *)(a1 + 264);
    v3 += *(_DWORD *)(result + v6 + 124);
  }
  return result;
}
