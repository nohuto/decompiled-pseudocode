/*
 * XREFs of Register_FindNextExtendedCapability @ 0x1C001F340
 * Callers:
 *     RootHub_PrepareHardware @ 0x1C005E13C (RootHub_PrepareHardware.c)
 * Callees:
 *     XilRegister_ReadUlong @ 0x1C001F6D0 (XilRegister_ReadUlong.c)
 */

unsigned __int64 __fastcall Register_FindNextExtendedCapability(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int16 Ulong; // ax

  v2 = a2;
  if ( a2 )
  {
    Ulong = XilRegister_ReadUlong(a1, a2);
    while ( (Ulong & 0xFF00) != 0 )
    {
      v2 += 4LL * HIBYTE(Ulong);
      if ( v2 >= *(_QWORD *)(a1 + 24) + (unsigned __int64)*(unsigned int *)(a1 + 20) )
        break;
      Ulong = XilRegister_ReadUlong(a1, v2);
      if ( (_BYTE)Ulong == 2 )
        return v2;
    }
    return 0LL;
  }
  return v2;
}
