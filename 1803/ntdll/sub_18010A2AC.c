/*
 * XREFs of sub_18010A2AC @ 0x18010A2AC
 * Callers:
 *     PssNtCaptureSnapshot @ 0x180109790 (PssNtCaptureSnapshot.c)
 * Callees:
 *     ZwQueryInformationProcess @ 0x18009ADE0 (ZwQueryInformationProcess.c)
 *     sub_180109F60 @ 0x180109F60 (sub_180109F60.c)
 */

__int64 __fastcall sub_18010A2AC(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 16) = 64LL;
  result = ZwQueryInformationProcess();
  if ( (int)result >= 0 )
  {
    result = ZwQueryInformationProcess();
    if ( (int)result >= 0 )
    {
      result = ZwQueryInformationProcess();
      if ( (int)result >= 0 )
      {
        result = ZwQueryInformationProcess();
        if ( (int)result >= 0 )
        {
          if ( (int)ZwQueryInformationProcess() >= 0 )
            *(_DWORD *)(a1 + 4) |= 8u;
          if ( (int)ZwQueryInformationProcess() < 0 )
            *(_DWORD *)(a1 + 272) = 0;
          if ( (int)ZwQueryInformationProcess() < 0 )
            *(_DWORD *)(a1 + 276) = 0;
          if ( (a3 & 0x40) != 0 )
            sub_180109F60(a1);
          *(_WORD *)(a1 + 282) = 256;
          *(_WORD *)(a1 + 280) = 0;
          *(_QWORD *)(a1 + 288) = a1 + 296;
          if ( (int)ZwQueryInformationProcess() < 0 )
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
