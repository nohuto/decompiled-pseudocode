/*
 * XREFs of sub_1800CFF48 @ 0x1800CFF48
 * Callers:
 *     sub_180075000 @ 0x180075000 (sub_180075000.c)
 * Callees:
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 *     RtlReportException @ 0x1800D6920 (RtlReportException.c)
 */

__int64 __fastcall sub_1800CFF48(const void **a1, _DWORD *a2)
{
  char v2; // al
  int v5; // ebx
  bool v6; // sf
  __int64 result; // rax

  v2 = dword_180156A70;
  if ( (dword_180156A70 & 3) != 0 )
  {
    sub_1800CA554(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      1909,
      (unsigned int)"LdrpInitializeProcessWrapperFilter",
      0,
      "Process initialization raised exception 0x%08lx\n\tException record: .exr %p\n\tContext record: .cxr %p\n",
      *(_DWORD *)*a1,
      *a1,
      a1[1]);
    v2 = dword_180156A70;
  }
  if ( (v2 & 0x10) != 0 )
    __debugbreak();
  v5 = 0;
  if ( byte_18015C328 )
    __debugbreak();
  v6 = RtlReportException((PEXCEPTION_RECORD)*a1, (PCONTEXT)a1[1], 2u) < 0;
  result = 1LL;
  LOBYTE(v5) = !v6;
  *a2 = v5;
  return result;
}
