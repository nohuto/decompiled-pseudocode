/*
 * XREFs of sub_1800026FC @ 0x1800026FC
 * Callers:
 *     PssNtCaptureSnapshot @ 0x1800019F0 (PssNtCaptureSnapshot.c)
 * Callees:
 *     sub_180002898 @ 0x180002898 (sub_180002898.c)
 *     ZwQueryInformationProcess @ 0x1800A5620 (ZwQueryInformationProcess.c)
 */

__int64 __fastcall sub_1800026FC(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 16) = 64LL;
  result = ZwQueryInformationProcess(a2, 0LL, a1 + 16, 64LL, 0LL);
  if ( (int)result >= 0 )
  {
    result = ZwQueryInformationProcess(a2, 4LL, a1 + 80, 32LL, 0LL);
    if ( (int)result >= 0 )
    {
      result = ZwQueryInformationProcess(a2, 18LL, a1 + 112, 2LL, 0LL);
      if ( (int)result >= 0 )
      {
        result = ZwQueryInformationProcess(a2, 3LL, a1 + 120, 112LL, 0LL);
        if ( (int)result >= 0 )
        {
          if ( (int)ZwQueryInformationProcess(a2, 69LL, a1 + 232, 40LL, 0LL) >= 0 )
            *(_DWORD *)(a1 + 4) |= 8u;
          if ( (int)ZwQueryInformationProcess(a2, 34LL, a1 + 272, 4LL, 0LL) < 0 )
            *(_DWORD *)(a1 + 272) = 0;
          if ( (int)ZwQueryInformationProcess(a2, 36LL, a1 + 276, 4LL, 0LL) < 0 )
            *(_DWORD *)(a1 + 276) = 0;
          if ( (a3 & 0x40) != 0 )
            sub_180002898(a1, a2);
          *(_WORD *)(a1 + 282) = 256;
          *(_WORD *)(a1 + 280) = 0;
          *(_QWORD *)(a1 + 288) = a1 + 296;
          if ( (int)ZwQueryInformationProcess(a2, 43LL, a1 + 280, 272LL, 0LL) < 0 )
          {
            *(_QWORD *)(a1 + 280) = 0LL;
            *(_QWORD *)(a1 + 288) = 0LL;
          }
          return 0LL;
        }
      }
    }
  }
  return result;
}
