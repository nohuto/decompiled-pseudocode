/*
 * XREFs of RtlNtStatusToDosErrorNoTeb @ 0x180074E40
 * Callers:
 *     sub_18002C9D0 @ 0x18002C9D0 (sub_18002C9D0.c)
 *     RtlQueryUnbiasedInterruptTime @ 0x18006CF80 (RtlQueryUnbiasedInterruptTime.c)
 *     sub_18007FCDC @ 0x18007FCDC (sub_18007FCDC.c)
 * Callees:
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 */

ULONG __cdecl RtlNtStatusToDosErrorNoTeb(NTSTATUS Status)
{
  unsigned int v1; // r8d
  ULONG result; // eax
  unsigned __int32 v3; // edx
  unsigned int v4; // r10d
  __int64 v5; // rcx
  unsigned int v6; // eax
  unsigned int v7; // r11d
  int v8; // eax

  v1 = 0;
  if ( !Status )
    return 0;
  if ( Status == 259 )
    return 997;
  result = Status;
  if ( (Status & 0x20000000) == 0 )
  {
    if ( (Status & 0xFF0000) == 0x70000 && ((HIBYTE(Status) - 128) & 0xFFFFFFBF) == 0 )
      return (unsigned __int16)Status;
    v3 = Status & 0xCFFFFFFF;
    v4 = 286;
    if ( (Status & 0xF0000000) != 0xD0000000 )
      v3 = Status;
    while ( 1 )
    {
      v5 = (v4 + v1) >> 1;
      v6 = dword_180122A70[2 * v5];
      v7 = v3 - v6;
      if ( v3 >= v6 )
      {
        if ( v7 < (unsigned __int8)byte_180122A74[8 * v5] )
        {
          v8 = (unsigned __int16)word_180122A76[4 * v5];
          if ( byte_180122A75[8 * v5] == 1 )
            return (unsigned __int16)word_180120E00[v7 + v8];
          else
            return (unsigned __int16)word_180120E00[2 * v7 + v8] | ((unsigned __int16)word_180120E00[2 * v7 + 1 + v8] << 16);
        }
        v1 = v5 + 1;
      }
      else
      {
        v4 = v5 - 1;
      }
      if ( v1 > v4 )
      {
        if ( (v3 & 0xFFFF0000) == 0xC0010000 )
          return (unsigned __int16)v3;
        DbgPrint("RTL: RtlNtStatusToDosError(0x%lx): No Valid Win32 Error Mapping\n", v3);
        DbgPrint("RTL: Edit ntos\\rtl\\generr.c to correct the problem\n");
        DbgPrint("RTL: ERROR_MR_MID_NOT_FOUND is being returned\n");
        return 317;
      }
    }
  }
  return result;
}
