/*
 * XREFs of sub_18004ADC0 @ 0x18004ADC0
 * Callers:
 *     sub_180024910 @ 0x180024910 (sub_180024910.c)
 *     sub_180049D20 @ 0x180049D20 (sub_180049D20.c)
 *     sub_18004A8A8 @ 0x18004A8A8 (sub_18004A8A8.c)
 *     sub_18004ABB4 @ 0x18004ABB4 (sub_18004ABB4.c)
 * Callees:
 *     ZwAlertThreadByThreadId @ 0x18009B890 (ZwAlertThreadByThreadId.c)
 */

NTSTATUS __fastcall sub_18004ADC0(__int64 a1)
{
  unsigned __int64 v1; // rcx
  unsigned __int64 v2; // rbx
  NTSTATUS result; // eax

  v1 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v1 )
  {
    do
    {
      v2 = *(_QWORD *)(v1 + 16);
      result = _InterlockedExchange((volatile __int32 *)(v1 + 40), 2);
      if ( !result )
        result = ZwAlertThreadByThreadId(*(HANDLE *)(v1 + 8));
      v1 = v2;
    }
    while ( v2 );
  }
  return result;
}
