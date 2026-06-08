/*
 * XREFs of AcpiParseRegisterOrQword @ 0x1C001AEA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000122C (WPP_RECORDER_SF_.c)
 *     memmove @ 0x1C000C080 (memmove.c)
 */

__int64 __fastcall AcpiParseRegisterOrQword(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  unsigned __int16 v4; // ax
  unsigned __int16 v5; // r9

  if ( a3 >= 0xC )
  {
    v4 = *(_WORD *)(a1 + 2);
    if ( v4 >= 0xFu || v4 == 8 )
    {
      v3 = 0;
      if ( v4 == 8 )
      {
        *(_DWORD *)a2 = 126;
        memmove((void *)(a2 + 4), (const void *)(a1 + 4), *(unsigned __int16 *)(a1 + 2));
        return v3;
      }
      if ( *(_BYTE *)(a1 + 4) == 0x82 && *(_WORD *)(a1 + 5) >= 0xCu )
      {
        *(_BYTE *)a2 = *(_BYTE *)(a1 + 7);
        *(_BYTE *)(a2 + 1) = *(_BYTE *)(a1 + 8);
        *(_BYTE *)(a2 + 2) = *(_BYTE *)(a1 + 9);
        *(_QWORD *)(a2 + 4) = *(_QWORD *)(a1 + 11);
        *(_BYTE *)(a2 + 3) = *(_BYTE *)(a1 + 10);
        return v3;
      }
      v5 = 74;
    }
    else
    {
      v5 = 73;
    }
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v5,
      (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
    return (unsigned int)-1072431096;
  }
  return (unsigned int)-1073741811;
}
