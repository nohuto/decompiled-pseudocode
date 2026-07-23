/*
 * XREFs of BiAcquirePrivilege @ 0x1405B1738
 * Callers:
 *     BiLoadHive @ 0x1405B1528 (BiLoadHive.c)
 *     BiUnloadHiveByName @ 0x140779940 (BiUnloadHiveByName.c)
 *     BiAddBootEntry @ 0x14077A2D0 (BiAddBootEntry.c)
 *     BiDeleteBootEntry @ 0x14077B8DC (BiDeleteBootEntry.c)
 *     BiDeleteEfiVariable @ 0x14077B954 (BiDeleteEfiVariable.c)
 *     BiEnumerateBootEntries @ 0x14077BA34 (BiEnumerateBootEntries.c)
 *     BiModifyBootEntry @ 0x14077C840 (BiModifyBootEntry.c)
 *     BiQueryBootEntryOrder @ 0x14077C88C (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x14077C944 (BiQueryBootOptions.c)
 *     BiSetBootEntryOrder @ 0x14077CAAC (BiSetBootEntryOrder.c)
 *     BiSetBootOptions @ 0x14077CB04 (BiSetBootOptions.c)
 *     BiTranslateFilePath @ 0x14077CCC8 (BiTranslateFilePath.c)
 *     SiGetEspFromFirmware @ 0x14077DC34 (SiGetEspFromFirmware.c)
 * Callees:
 *     ZwSetInformationThread @ 0x14017DA60 (ZwSetInformationThread.c)
 *     RtlImpersonateSelfEx @ 0x140585C08 (RtlImpersonateSelfEx.c)
 *     BiAdjustPrivilege @ 0x1405B17BC (BiAdjustPrivilege.c)
 */

NTSTATUS __fastcall BiAcquirePrivilege(unsigned int a1, __int64 a2)
{
  __int64 v2; // rdi
  int v4; // esi
  NTSTATUS result; // eax
  int v6; // ebx
  char v7; // [rsp+50h] [rbp+18h] BYREF
  __int64 ThreadInformation; // [rsp+58h] [rbp+20h] BYREF

  v2 = a2;
  v4 = *(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 8;
  if ( v4 || (result = RtlImpersonateSelfEx(SecurityImpersonation, 0, 0LL), result >= 0) )
  {
    LOBYTE(a2) = 1;
    v6 = BiAdjustPrivilege(a1, a2, &v7);
    if ( v6 < 0 )
    {
      if ( !v4 )
      {
        ThreadInformation = 0LL;
        ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
      }
    }
    else
    {
      *(_BYTE *)(v2 + 4) = v7;
      *(_BYTE *)(v2 + 5) = v4 != 0;
      *(_DWORD *)v2 = a1;
    }
    return v6;
  }
  return result;
}
