/*
 * XREFs of sub_1800D76B0 @ 0x1800D76B0
 * Callers:
 *     sub_180079D70 @ 0x180079D70 (sub_180079D70.c)
 * Callees:
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 *     RtlReportException @ 0x1800DD400 (RtlReportException.c)
 */

__int64 __fastcall sub_1800D76B0(const void **a1, _DWORD *a2)
{
  char v2; // al
  int v5; // ebx
  bool v6; // sf
  __int64 result; // rax

  v2 = dword_180155A10;
  if ( (dword_180155A10 & 3) != 0 )
  {
    sub_1800D5274(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      1934,
      (unsigned int)"LdrpInitializeProcessWrapperFilter",
      0,
      "Process initialization raised exception 0x%08lx\n\tException record: .exr %p\n\tContext record: .cxr %p\n",
      *(_DWORD *)*a1,
      *a1,
      a1[1]);
    v2 = dword_180155A10;
  }
  if ( (v2 & 0x10) != 0 )
    __debugbreak();
  v5 = 0;
  if ( byte_18015B2F8 )
    __debugbreak();
  v6 = RtlReportException((PEXCEPTION_RECORD)*a1, (PCONTEXT)a1[1], 2u) < 0;
  result = 1LL;
  LOBYTE(v5) = !v6;
  *a2 = v5;
  return result;
}
