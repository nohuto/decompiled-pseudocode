/*
 * XREFs of NtGdiGetOutlineTextMetricsInternalW @ 0x1C00388A0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetOutlineTextMetricsInternalW @ 0x1C00384F8 (GreGetOutlineTextMetricsInternalW.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall NtGdiGetOutlineTextMetricsInternalW(HDC a1, size_t Size, char *a3, unsigned __int64 a4)
{
  size_t v6; // rsi
  void *v8; // rbx
  unsigned int OutlineTextMetricsInternalW; // r15d
  char *v10; // rax
  __int64 v12[4]; // [rsp+28h] [rbp-20h] BYREF

  v6 = (unsigned int)Size;
  v8 = 0LL;
  v12[0] = 0LL;
  if ( (_DWORD)Size && a3 )
  {
    if ( (unsigned int)Size <= 0x2710000 )
      v8 = (void *)AllocFreeTmpBuffer((unsigned int)Size);
    if ( !v8 )
      return 0LL;
    memset(v8, 0, v6);
  }
  else
  {
    LODWORD(v6) = 0;
  }
  OutlineTextMetricsInternalW = GreGetOutlineTextMetricsInternalW(a1, (unsigned int)v6, (char *)v8, v12);
  if ( OutlineTextMetricsInternalW == -1 )
    OutlineTextMetricsInternalW = 0;
  if ( OutlineTextMetricsInternalW )
  {
    if ( a4 + 8 > MmUserProbeAddress || a4 + 8 <= a4 || (a4 & 3) != 0 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_QWORD *)a4 = v12[0];
    if ( (_DWORD)v6 )
    {
      v10 = &a3[(unsigned int)v6];
      if ( (unsigned __int64)v10 > MmUserProbeAddress || v10 <= a3 || ((unsigned __int8)a3 & 3) != 0 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(a3, v8, (unsigned int)v6);
    }
  }
  if ( v8 )
    FreeTmpBuffer(v8);
  return OutlineTextMetricsInternalW;
}
