/*
 * XREFs of RtlNtStatusToDosErrorNoTeb @ 0x180078CE0
 * Callers:
 *     TppSetTimer @ 0x18000FBB4 (TppSetTimer.c)
 *     RtlQueryUnbiasedInterruptTime @ 0x180071050 (RtlQueryUnbiasedInterruptTime.c)
 *     LdrpRedirectDelayloadFailure @ 0x180083A48 (LdrpRedirectDelayloadFailure.c)
 * Callees:
 *     DbgPrint @ 0x18006C5C0 (DbgPrint.c)
 */

__int64 __fastcall RtlNtStatusToDosErrorNoTeb(unsigned int a1)
{
  unsigned int v1; // r8d
  __int64 result; // rax
  unsigned int v3; // edx
  unsigned int v4; // r10d
  __int64 v5; // rcx
  unsigned int v6; // eax
  unsigned int v7; // r11d
  int v8; // eax

  v1 = 0;
  if ( !a1 )
    return 0LL;
  if ( a1 == 259 )
    return 997LL;
  result = a1;
  if ( (a1 & 0x20000000) == 0 )
  {
    if ( (a1 & 0xFF0000) == 0x70000 && ((HIBYTE(a1) - 128) & 0xFFFFFFBF) == 0 )
      return (unsigned __int16)a1;
    v3 = a1 & 0xCFFFFFFF;
    v4 = 284;
    if ( (a1 & 0xF0000000) != 0xD0000000 )
      v3 = a1;
    while ( 1 )
    {
      v5 = (v4 + v1) >> 1;
      v6 = RtlpRunTable[2 * v5];
      v7 = v3 - v6;
      if ( v3 < v6 )
      {
        v4 = v5 - 1;
      }
      else
      {
        if ( v7 < (unsigned __int8)byte_180125C14[8 * v5] )
        {
          v8 = (unsigned __int16)word_180125C16[4 * v5];
          if ( byte_180125C15[8 * v5] == 1 )
            return (unsigned __int16)RtlpStatusTable[v7 + v8];
          else
            return (unsigned __int16)RtlpStatusTable[2 * v7 + v8] | ((unsigned __int16)RtlpStatusTable[2 * v7 + 1 + v8] << 16);
        }
        v1 = v5 + 1;
      }
      if ( v1 > v4 )
      {
        if ( (v3 & 0xFFFF0000) == 0xC0010000 )
          return (unsigned __int16)v3;
        DbgPrint("RTL: RtlNtStatusToDosError(0x%lx): No Valid Win32 Error Mapping\n", v3);
        DbgPrint("RTL: Edit ntos\\rtl\\generr.c to correct the problem\n");
        DbgPrint("RTL: ERROR_MR_MID_NOT_FOUND is being returned\n");
        return 317LL;
      }
    }
  }
  return result;
}
