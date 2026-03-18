/*
 * XREFs of PspReadIFEONodeOptions @ 0x140449578
 * Callers:
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
 * Callees:
 *     RtlQueryImageFileKeyOption @ 0x1404497B8 (RtlQueryImageFileKeyOption.c)
 */

__int64 __fastcall PspReadIFEONodeOptions(__int64 a1, void *a2, __int64 *a3)
{
  __int64 result; // rax
  unsigned int v6; // [rsp+58h] [rbp+20h]

  result = RtlQueryImageFileKeyOption(a2, 4, 0LL);
  if ( (int)result >= 0 )
  {
    result = v6;
    if ( (_BYTE)v6 )
    {
      if ( (unsigned __int8)v6 == 1 && v6 >> 8 < (unsigned __int16)KeNumberNodes && !*a3 )
      {
        result = KeNodeBlock[(unsigned __int64)v6 >> 8];
        if ( *(_QWORD *)(result + 136) )
          *a3 = result;
      }
    }
    else if ( (v6 & 0xFFFFFF00) != 0 )
    {
      *(_DWORD *)(a1 + 768) |= 0x100000u;
    }
  }
  return result;
}
