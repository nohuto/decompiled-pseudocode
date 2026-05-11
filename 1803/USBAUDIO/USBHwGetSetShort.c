/*
 * XREFs of USBHwGetSetShort @ 0x1C0020050
 * Callers:
 *     <none>
 * Callees:
 *     USBHwGetSetProperty @ 0x1C001FE40 (USBHwGetSetProperty.c)
 */

__int64 __fastcall USBHwGetSetShort(__int64 a1, __int16 a2, __int16 a3, __int16 a4, _WORD *a5, UCHAR a6)
{
  _DWORD *v6; // rbx
  __int64 v8; // rcx
  char v9; // di
  __int64 result; // rax
  unsigned __int16 v11; // [rsp+70h] [rbp+8h] BYREF

  v6 = a5;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v11 = 0;
  v9 = a6 & 0x80;
  if ( (a6 & 0x80u) == 0 )
    v11 = *a5;
  result = USBHwGetSetProperty(
             a1,
             0x1Bu,
             a6 >> 7,
             a6,
             a4,
             a3,
             a2,
             *(unsigned __int8 *)(*(_QWORD *)(v8 + 48) + 2LL),
             &v11,
             2u);
  if ( v9 )
  {
    if ( (int)result >= 0 )
      *v6 = v11;
  }
  return result;
}
