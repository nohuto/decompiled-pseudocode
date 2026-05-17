/*
 * XREFs of RtlSetHeapInformation @ 0x18007EF50
 * Callers:
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 *     sub_1800F0640 @ 0x1800F0640 (sub_1800F0640.c)
 *     RtlHeapTrkInitialize @ 0x1800F5D20 (RtlHeapTrkInitialize.c)
 * Callees:
 *     sub_1800059EC @ 0x1800059EC (sub_1800059EC.c)
 *     sub_180006330 @ 0x180006330 (sub_180006330.c)
 *     RtlRunOnceExecuteOnce @ 0x18001B510 (RtlRunOnceExecuteOnce.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     sub_18007F010 @ 0x18007F010 (sub_18007F010.c)
 *     sub_1800EF700 @ 0x1800EF700 (sub_1800EF700.c)
 *     sub_1800FE980 @ 0x1800FE980 (sub_1800FE980.c)
 */

__int64 __fastcall RtlSetHeapInformation(__int64 a1, int a2, __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rax

  switch ( a2 )
  {
    case -2147483646:
      if ( a3 && a4 == 48 )
      {
        result = sub_1800EF700(a1, a3);
LABEL_9:
        if ( (int)result < 0 )
          return result;
        return 0LL;
      }
      return 3221225473LL;
    case 0:
      if ( a4 < 4 )
        return 3221225507LL;
      if ( *(_DWORD *)a3 == 2 )
      {
        if ( *(_DWORD *)(a1 + 16) != -571548178 )
        {
          if ( (*(_DWORD *)(a1 + 112) & 0x75010F63) == 2 && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
          {
            result = sub_18007F010();
            goto LABEL_9;
          }
          return 3221225485LL;
        }
        return 0LL;
      }
      return 3221225473LL;
    case 1:
      dword_18015BFA4 = 0;
      return 0LL;
  }
  if ( a2 != 4 )
  {
    if ( a2 == 3 )
    {
      if ( !a3 || a4 < 4 || *(_DWORD *)a3 != 1 || a4 != 8 || *(_DWORD *)(a3 + 4) )
        return 3221225485LL;
      if ( a1 )
      {
        RtlEnterCriticalSection((__int64)&unk_180159A80);
        v6 = 208LL;
        if ( *(_DWORD *)(a1 + 16) == -571548178 )
          v6 = 36LL;
        if ( *(_WORD *)(v6 + a1) != 0xFFFF )
          sub_180006330(a1);
        RtlLeaveCriticalSection((__int64)&unk_180159A80);
      }
      else
      {
        sub_1800059EC((__int64)sub_1800062E0, 0LL, 0);
      }
    }
    else if ( a2 == 5 )
    {
      if ( !a3 || a4 < 0x10 || *(_WORD *)a3 != 1 || (*(_WORD *)(a3 + 2) & 0xFFFE) != 0 )
        return 3221225485LL;
      sub_1800FE980(a3);
    }
    return 0LL;
  }
  if ( (byte_18015BFBC & 1) == 0 )
    return 3221225485LL;
  result = RtlRunOnceExecuteOnce(
             &qword_18015C318,
             (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, __int64 *))sub_180008E70,
             (__int64)&unk_1801598C0,
             0LL);
  if ( (int)result >= 0 )
  {
    byte_18015BFBC |= 2u;
    return 0LL;
  }
  return result;
}
