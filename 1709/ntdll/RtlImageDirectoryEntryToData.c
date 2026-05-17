/*
 * XREFs of RtlImageDirectoryEntryToData @ 0x180086C60
 * Callers:
 *     <none>
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180026720 (RtlpImageDirectoryEntryToDataEx.c)
 */

unsigned __int64 __fastcall RtlImageDirectoryEntryToData(unsigned __int64 a1, char a2, unsigned __int16 a3, _DWORD *a4)
{
  int v4; // eax
  unsigned __int64 v5; // rcx
  unsigned __int64 v7[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = RtlpImageDirectoryEntryToDataEx(a1, a2, a3, a4, v7);
  v5 = v7[0];
  if ( v4 < 0 )
    return 0LL;
  return v5;
}
