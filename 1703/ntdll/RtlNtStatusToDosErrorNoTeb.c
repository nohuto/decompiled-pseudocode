/*
 * XREFs of RtlNtStatusToDosErrorNoTeb @ 0x180077920
 * Callers:
 *     sub_180018DD8 @ 0x180018DD8 (sub_180018DD8.c)
 *     RtlQueryUnbiasedInterruptTime @ 0x180071F50 (RtlQueryUnbiasedInterruptTime.c)
 *     sub_1800845DC @ 0x1800845DC (sub_1800845DC.c)
 * Callees:
 *     DbgPrint @ 0x18005FEF0 (DbgPrint.c)
 */

ULONG __cdecl RtlNtStatusToDosErrorNoTeb(NTSTATUS Status)
{
  unsigned int v1; // r8d
  ULONG result; // eax
  unsigned __int32 v3; // edx
  unsigned int v4; // r9d
  __int64 v5; // rcx
  unsigned int v6; // eax
  unsigned int v7; // r10d
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
    v4 = 283;
    if ( (Status & 0xF0000000) != 0xD0000000 )
      v3 = Status;
    while ( 1 )
    {
      v5 = (v4 + v1) >> 1;
      v6 = dword_180122C30[2 * v5];
      v7 = v3 - v6;
      if ( v3 >= v6 )
      {
        if ( v7 < (unsigned __int8)byte_180122C34[8 * v5] )
        {
          v8 = (unsigned __int16)word_180122C36[4 * v5];
          if ( byte_180122C35[8 * v5] == 1 )
            return (unsigned __int16)word_180121020[v7 + v8];
          else
            return (unsigned __int16)word_180121020[2 * v7 + v8] | ((unsigned __int16)word_180121020[2 * v7 + 1 + v8] << 16);
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
