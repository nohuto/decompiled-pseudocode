/*
 * XREFs of RtlUpcaseUnicodeString @ 0x18004A6F0
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x1800478B0 (RtlDeriveCapabilitySidsFromName.c)
 *     sub_18004A3B4 @ 0x18004A3B4 (sub_18004A3B4.c)
 *     RtlCreateServiceSid @ 0x18004D6F0 (RtlCreateServiceSid.c)
 *     RtlCreateVirtualAccountSid @ 0x180050760 (RtlCreateVirtualAccountSid.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180022070 (RtlDeleteBoundaryDescriptor.c)
 *     sub_180043FE0 @ 0x180043FE0 (sub_180043FE0.c)
 */

__int64 __fastcall RtlUpcaseUnicodeString(__int64 a1, unsigned __int16 *a2, char a3)
{
  unsigned int v5; // ebx
  unsigned int v6; // r9d
  __int64 v7; // r11
  unsigned __int16 v8; // r8
  __int16 v9; // cx
  unsigned int v11; // eax
  __int64 v12; // rax

  v5 = 0;
  if ( a3 )
  {
    v11 = *a2;
    *(_WORD *)(a1 + 2) = v11;
    v12 = sub_180043FE0(v11);
    *(_QWORD *)(a1 + 8) = v12;
    if ( !v12 )
      return 3221225495LL;
  }
  else if ( *a2 > *(_WORD *)(a1 + 2) )
  {
    return 2147483653LL;
  }
  v6 = *a2 >> 1;
  v7 = qword_180159D68;
  while ( v5 < v6 )
  {
    v8 = *(_WORD *)(*((_QWORD *)a2 + 1) + 2LL * v5);
    if ( v8 < 0x61u )
    {
      v9 = *(_WORD *)(*((_QWORD *)a2 + 1) + 2LL * v5);
    }
    else if ( v8 <= 0x7Au )
    {
      v9 = v8 - 32;
    }
    else
    {
      v9 = v8
         + *(_WORD *)(v7
                    + 2
                    * ((v8 & 0xF)
                     + (unsigned __int64)*(unsigned __int16 *)(v7
                                                             + 2LL
                                                             * (((unsigned __int8)v8 >> 4)
                                                              + (unsigned int)*(unsigned __int16 *)(v7
                                                                                                  + 2 * ((unsigned __int64)v8 >> 8))))));
    }
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 2LL * v5++) = v9;
  }
  *(_WORD *)a1 = *a2;
  return 0LL;
}
