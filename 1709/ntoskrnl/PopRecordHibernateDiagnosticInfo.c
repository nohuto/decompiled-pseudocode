/*
 * XREFs of PopRecordHibernateDiagnosticInfo @ 0x14043407C
 * Callers:
 *     PopRequestWrite @ 0x140434590 (PopRequestWrite.c)
 *     PopWriteHiberPages @ 0x140435F04 (PopWriteHiberPages.c)
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
  PopHibernateDiagnosticInfo = byte_140366316;
  v3 = 0;
  qword_140366688 = qword_140365DF0;
  v4 = 0;
  qword_140366690 = qword_140365DF8;
  qword_140366698 = qword_140365E18;
  qword_1403666A0 = qword_140365E08;
  qword_1403666A8 = qword_140365E00;
  qword_1403666B0 = qword_140365E20;
  qword_1403666B8 = qword_140365E10;
  qword_1403666C0 = qword_140365E28;
  dword_1403666C8 = dword_140365E30;
  result = (unsigned int)dword_140365B44;
  dword_1403666D4 = dword_140365B44;
  for ( qword_1403666CC = 0LL; v4 < *(_DWORD *)(a1 + 264); HIDWORD(qword_1403666CC) = v3 )
  {
    v6 = v4++;
    v6 <<= 7;
    v1 += *(_DWORD *)(*(_QWORD *)(a1 + 272) + v6 + 120);
    LODWORD(qword_1403666CC) = v1;
    result = *(_QWORD *)(a1 + 272);
    v3 += *(_DWORD *)(result + v6 + 124);
  }
  return result;
}
