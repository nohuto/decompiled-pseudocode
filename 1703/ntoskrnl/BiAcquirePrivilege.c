/*
 * XREFs of BiAcquirePrivilege @ 0x14058D184
 * Callers:
 *     BiUnloadHiveByName @ 0x14057BA0C (BiUnloadHiveByName.c)
 *     BiLoadHive @ 0x14058CF74 (BiLoadHive.c)
 *     BiAddBootEntry @ 0x140735E8C (BiAddBootEntry.c)
 *     BiDeleteBootEntry @ 0x140737354 (BiDeleteBootEntry.c)
 *     BiDeleteEfiVariable @ 0x14073739C (BiDeleteEfiVariable.c)
 *     BiEnumerateBootEntries @ 0x14073747C (BiEnumerateBootEntries.c)
 *     BiModifyBootEntry @ 0x1407381C8 (BiModifyBootEntry.c)
 *     BiQueryBootEntryOrder @ 0x140738214 (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x1407382CC (BiQueryBootOptions.c)
 *     BiSetBootEntryOrder @ 0x140738388 (BiSetBootEntryOrder.c)
 *     BiSetBootOptions @ 0x1407383E0 (BiSetBootOptions.c)
 *     BiTranslateFilePath @ 0x140738574 (BiTranslateFilePath.c)
 *     SiGetEspFromFirmware @ 0x1407393DC (SiGetEspFromFirmware.c)
 * Callees:
 *     ZwSetInformationThread @ 0x14017E0E0 (ZwSetInformationThread.c)
 *     RtlImpersonateSelfEx @ 0x14044BCE4 (RtlImpersonateSelfEx.c)
 *     BiAdjustPrivilege @ 0x14058D208 (BiAdjustPrivilege.c)
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
