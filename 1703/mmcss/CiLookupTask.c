/*
 * XREFs of CiLookupTask @ 0x1C000AA20
 * Callers:
 *     CiDispatchCreateMmThreadClient @ 0x1C000A670 (CiDispatchCreateMmThreadClient.c)
 *     CiDispatchCreateTaskIndexClient @ 0x1C000AFA0 (CiDispatchCreateTaskIndexClient.c)
 * Callees:
 *     WPP_SF_Sd @ 0x1C00046AC (WPP_SF_Sd.c)
 *     CiTaskLocate @ 0x1C000AA90 (CiTaskLocate.c)
 */

__int64 __fastcall CiLookupTask(wchar_t *a1, wchar_t *a2, __int64 a3, char a4, _QWORD *a5)
{
  const wchar_t *v7; // rsi
  int v8; // ebx
  _BYTE *v9; // rdx
  _BYTE *v11; // [rsp+30h] [rbp-28h]
  _BYTE *v12; // [rsp+60h] [rbp+8h]

  a1[63] = 0;
  v7 = a1;
  v8 = CiTaskLocate(a1);
  if ( v8 >= 0 )
  {
    if ( !a4 )
    {
      v9 = v12;
LABEL_4:
      *a5 = v9;
      return (unsigned int)v8;
    }
    a2[63] = 0;
    v7 = a2;
    v8 = CiTaskLocate(a2);
    if ( v8 >= 0 )
    {
      v9 = v12;
      if ( *v11 > *v12 )
        v9 = v11;
      goto LABEL_4;
    }
  }
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    WPP_SF_Sd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xBu,
      (__int64)&WPP_dd714108735c30899653f2ca1e788838_Traceguids,
      v7,
      v8);
  return (unsigned int)v8;
}
