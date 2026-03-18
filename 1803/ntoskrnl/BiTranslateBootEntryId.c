/*
 * XREFs of BiTranslateBootEntryId @ 0x1407E5630
 * Callers:
 *     BiBindEfiBootManager @ 0x1407E2F44 (BiBindEfiBootManager.c)
 *     BiTranslateBootOrder @ 0x1407E5690 (BiTranslateBootOrder.c)
 * Callees:
 *     BiLogMessage @ 0x140609614 (BiLogMessage.c)
 *     BiLookupObjectByBootEntry @ 0x1407E5204 (BiLookupObjectByBootEntry.c)
 */

__int64 __fastcall BiTranslateBootEntryId(__int64 **a1, int a2)
{
  __int64 result; // rax
  _OWORD *v3; // r10
  int v4; // edx
  __int64 v5; // [rsp+48h] [rbp+20h] BYREF

  result = BiLookupObjectByBootEntry(a1, a2, &v5);
  if ( (int)result >= 0 )
  {
    v4 = *(_DWORD *)(v5 + 48);
    if ( (v4 & 4) != 0 )
    {
      if ( (v4 & 0x10) != 0 )
      {
        BiLogMessage(3LL, L"Translated a DontSync entry with ID 0x%x", *(unsigned int *)(v5 + 32));
        return 3221225508LL;
      }
      else
      {
        *v3 = *(_OWORD *)(v5 + 16);
      }
    }
    else
    {
      return 3221226021LL;
    }
  }
  return result;
}
