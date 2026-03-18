/*
 * XREFs of RtlLoadStringOrError @ 0x1C0073FB0
 * Callers:
 *     InitScancodeMap @ 0x1C0070380 (InitScancodeMap.c)
 *     CheckDesktopPolicy @ 0x1C00719E0 (CheckDesktopPolicy.c)
 *     FastGetProfileIntsW @ 0x1C0072A30 (FastGetProfileIntsW.c)
 *     FastGetProfileValue @ 0x1C00735B0 (FastGetProfileValue.c)
 *     FastGetProfileIntFromID @ 0x1C0073AA0 (FastGetProfileIntFromID.c)
 *     FastGetProfileStringFromIDW @ 0x1C0073C00 (FastGetProfileStringFromIDW.c)
 *     FastUpdateWinIni @ 0x1C00D8A40 (FastUpdateWinIni.c)
 *     FastWriteProfileValue @ 0x1C00D8AB0 (FastWriteProfileValue.c)
 *     DriverEntry @ 0x1C01D5780 (DriverEntry.c)
 * Callees:
 *     memmove @ 0x1C00A21C0 (memmove.c)
 */

__int64 __fastcall RtlLoadStringOrError(ULONG MessageId, void *a2, int a3, unsigned __int16 a4)
{
  int v5; // ebx
  int v6; // edi
  BYTE *Text; // rdx
  __int64 v8; // rax
  __int64 result; // rax
  PMESSAGE_RESOURCE_ENTRY v10; // [rsp+48h] [rbp+10h] BYREF

  if ( !a2 )
    return 0LL;
  v5 = a3 - 1;
  if ( !a3 )
    return 0LL;
  v6 = 0;
  if ( RtlFindMessage(hModuleWinKernel, 0xBu, a4, MessageId, &v10) >= 0 )
  {
    Text = v10->Text;
    v8 = -1LL;
    do
      ++v8;
    while ( *(_WORD *)&Text[2 * v8] );
    v6 = v5;
    if ( (int)v8 - 2 <= v5 )
      v6 = v8 - 2;
    memmove(a2, Text, 2LL * v6);
  }
  result = (unsigned int)v6;
  *((_WORD *)a2 + v6) = 0;
  return result;
}
