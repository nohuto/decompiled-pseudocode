/*
 * XREFs of RtlLoadStringOrError @ 0x1C0060610
 * Callers:
 *     FastGetProfileIntsW @ 0x1C005F3B0 (FastGetProfileIntsW.c)
 *     FastGetProfileValue @ 0x1C005FF30 (FastGetProfileValue.c)
 *     FastGetProfileIntFromID @ 0x1C0060420 (FastGetProfileIntFromID.c)
 *     FastGetProfileStringFromIDW @ 0x1C0060570 (FastGetProfileStringFromIDW.c)
 *     CheckDesktopPolicy @ 0x1C0060D80 (CheckDesktopPolicy.c)
 *     InitScancodeMap @ 0x1C0062360 (InitScancodeMap.c)
 *     FastUpdateWinIni @ 0x1C00DED70 (FastUpdateWinIni.c)
 *     FastWriteProfileValue @ 0x1C00DEDE0 (FastWriteProfileValue.c)
 *     DriverEntry @ 0x1C01DE690 (DriverEntry.c)
 * Callees:
 *     memmove @ 0x1C00AB840 (memmove.c)
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
