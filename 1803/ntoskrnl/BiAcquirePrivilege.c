/*
 * XREFs of BiAcquirePrivilege @ 0x140606A48
 * Callers:
 *     BiUnloadHiveByName @ 0x1405EE3C0 (BiUnloadHiveByName.c)
 *     BiLoadHive @ 0x140606838 (BiLoadHive.c)
 *     BiAddBootEntry @ 0x1407E2CA0 (BiAddBootEntry.c)
 *     BiDeleteBootEntry @ 0x1407E42EC (BiDeleteBootEntry.c)
 *     BiDeleteEfiVariable @ 0x1407E4364 (BiDeleteEfiVariable.c)
 *     BiEnumerateBootEntries @ 0x1407E446C (BiEnumerateBootEntries.c)
 *     BiModifyBootEntry @ 0x1407E5290 (BiModifyBootEntry.c)
 *     BiQueryBootEntryOrder @ 0x1407E52F8 (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x1407E53CC (BiQueryBootOptions.c)
 *     BiSetBootEntryOrder @ 0x1407E5550 (BiSetBootEntryOrder.c)
 *     BiSetBootOptions @ 0x1407E55C0 (BiSetBootOptions.c)
 *     BiTranslateFilePath @ 0x1407E579C (BiTranslateFilePath.c)
 *     SiGetEspFromFirmware @ 0x1407E6630 (SiGetEspFromFirmware.c)
 * Callees:
 *     ZwSetInformationThread @ 0x1401A7660 (ZwSetInformationThread.c)
 *     RtlImpersonateSelfEx @ 0x140574D34 (RtlImpersonateSelfEx.c)
 *     BiAdjustPrivilege @ 0x140606ACC (BiAdjustPrivilege.c)
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
