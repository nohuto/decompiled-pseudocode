/*
 * XREFs of RtlUpcaseUnicodeString @ 0x180040B10
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x1800380F0 (RtlDeriveCapabilitySidsFromName.c)
 *     sub_180040650 @ 0x180040650 (sub_180040650.c)
 *     RtlCreateServiceSid @ 0x1800445F0 (RtlCreateServiceSid.c)
 *     RtlCreateVirtualAccountSid @ 0x180049350 (RtlCreateVirtualAccountSid.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180013CA0 (RtlDeleteBoundaryDescriptor.c)
 *     sub_18003B5E0 @ 0x18003B5E0 (sub_18003B5E0.c)
 */

__int64 __fastcall RtlUpcaseUnicodeString(__int64 a1, unsigned __int16 *a2, char a3)
{
  unsigned __int16 v5; // ax
  unsigned int v6; // ebx
  __int64 v7; // r11
  unsigned __int16 v8; // r8
  __int64 v10; // rax

  v5 = *a2;
  v6 = 0;
  if ( a3 )
  {
    *(_WORD *)(a1 + 2) = v5;
    v10 = sub_18003B5E0(v5);
    *(_QWORD *)(a1 + 8) = v10;
    if ( !v10 )
      return 3221225495LL;
    v5 = *a2;
  }
  else if ( v5 > *(_WORD *)(a1 + 2) )
  {
    return 2147483653LL;
  }
  v7 = qword_18015B238;
  while ( v6 < v5 >> 1 )
  {
    v8 = *(_WORD *)(*((_QWORD *)a2 + 1) + 2LL * v6);
    if ( v8 >= 0x61u )
    {
      if ( v8 <= 0x7Au )
        v8 -= 32;
      else
        v8 += *(_WORD *)(v7
                       + 2LL
                       * ((v8 & 0xF)
                        + (unsigned int)*(unsigned __int16 *)(v7
                                                            + 2LL
                                                            * (((v8 >> 4) & 0xF)
                                                             + (unsigned int)*(unsigned __int16 *)(v7
                                                                                                 + 2
                                                                                                 * ((unsigned __int64)v8 >> 8))))));
    }
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 2LL * v6++) = v8;
  }
  *(_WORD *)a1 = *a2;
  return 0LL;
}
