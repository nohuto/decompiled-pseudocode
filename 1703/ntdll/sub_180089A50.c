/*
 * XREFs of sub_180089A50 @ 0x180089A50
 * Callers:
 *     RtlRaiseException @ 0x180030AC0 (RtlRaiseException.c)
 *     sub_1800313E0 @ 0x1800313E0 (sub_1800313E0.c)
 *     RtlUnwindEx @ 0x180033870 (RtlUnwindEx.c)
 *     sub_180034E60 @ 0x180034E60 (sub_180034E60.c)
 *     RtlVirtualUnwind @ 0x1800377A0 (RtlVirtualUnwind.c)
 *     sub_1800A4C00 @ 0x1800A4C00 (sub_1800A4C00.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 */

__int64 __fastcall sub_180089A50(unsigned __int16 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = HIBYTE(a1) & 0xF;
  if ( (unsigned int)v1 >= 0xB )
    RtlRaiseStatus(-1073741569);
  result = byte_18011A6E0[v1];
  if ( (_DWORD)v1 == 1 && (a1 & 0xF000u) != 0 )
    return (unsigned int)(result + 1);
  return result;
}
