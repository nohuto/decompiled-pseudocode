/*
 * XREFs of sub_1800C8ACC @ 0x1800C8ACC
 * Callers:
 *     sub_1800C8808 @ 0x1800C8808 (sub_1800C8808.c)
 *     RtlQueryProcessHeapInformation @ 0x1800D27B0 (RtlQueryProcessHeapInformation.c)
 *     sub_1800EC9CC @ 0x1800EC9CC (sub_1800EC9CC.c)
 * Callees:
 *     _vsnwprintf @ 0x18008C9D0 (_vsnwprintf.c)
 */

__int64 sub_1800C8ACC(wchar_t *Buffer, unsigned __int64 a2, const wchar_t *a3, ...)
{
  unsigned __int64 v3; // rdx
  int v5; // esi
  unsigned __int64 v6; // rbx
  int v7; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, a3);
  v3 = a2 >> 1;
  v5 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v5 = -1073741811;
  if ( v5 < 0 )
  {
    if ( v3 )
      *Buffer = 0;
  }
  else
  {
    v6 = v3 - 1;
    v5 = 0;
    v7 = vsnwprintf(Buffer, v3 - 1, a3, Args);
    if ( v7 < 0 || v7 > v6 )
    {
      Buffer[v6] = 0;
      return (unsigned int)-2147483643;
    }
    else if ( v7 == v6 )
    {
      Buffer[v6] = 0;
    }
  }
  return (unsigned int)v5;
}
