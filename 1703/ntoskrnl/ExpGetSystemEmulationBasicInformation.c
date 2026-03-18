/*
 * XREFs of ExpGetSystemEmulationBasicInformation @ 0x14001D704
 * Callers:
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExSystemExceptionFilter @ 0x140430F30 (ExSystemExceptionFilter.c)
 *     MmGetNumberOfPhysicalPages @ 0x140437454 (MmGetNumberOfPhysicalPages.c)
 */

__int64 __fastcall ExpGetSystemEmulationBasicInformation(__int64 a1)
{
  unsigned __int64 v2; // r8
  unsigned __int16 v3; // r11
  __int64 Group; // rcx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  unsigned __int64 NumberOfPhysicalPages; // rcx
  _DWORD *v8; // r9
  unsigned int v9; // r10d
  unsigned __int16 v10; // r11
  int v11; // r8d
  int v12; // eax
  int v13; // ecx

  v2 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[18];
  v3 = WORD2(KeGetCurrentThread()->ApcState.Process[1].SecurePid);
  Group = KeGetCurrentPrcb()->Group;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = KeMaximumIncrement;
  *(_DWORD *)(a1 + 8) = 4096;
  *(_DWORD *)(a1 + 24) = 0x10000;
  if ( (unsigned __int16)Group >= (unsigned __int16)KeActiveProcessors )
    v5 = 0LL;
  else
    v5 = qword_1403E42B8[Group];
  v6 = (unsigned int)v5 | HIDWORD(v5);
  *(_QWORD *)(a1 + 48) = v6;
  *(_BYTE *)(a1 + 56) = (0x101010101010101LL
                       * ((((v6 - ((v6 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                         + (((v6 - ((v6 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                         + ((((v6 - ((v6 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                           + (((v6 - ((v6 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  *(_QWORD *)(a1 + 32) = 0x10000LL;
  *(_QWORD *)(a1 + 40) = v2 - 1;
  NumberOfPhysicalPages = MmGetNumberOfPhysicalPages(v3);
  v11 = -1;
  v12 = -1;
  if ( NumberOfPhysicalPages <= 0xFFFFFFFF )
    v12 = NumberOfPhysicalPages;
  v8[3] = v12;
  v13 = -1;
  if ( *(_QWORD *)(*(_QWORD *)(qword_14036C8F8 + 8LL * v10) + 5568LL) <= 0xFFFFFFFFuLL )
    v13 = *(_QWORD *)(*(_QWORD *)(qword_14036C8F8 + 8LL * v10) + 5568LL);
  v8[4] = v13;
  if ( *(_QWORD *)(*(_QWORD *)(qword_14036C8F8 + 8LL * v10) + 5576LL) <= 0xFFFFFFFFuLL )
    v11 = *(_QWORD *)(*(_QWORD *)(qword_14036C8F8 + 8LL * v10) + 5576LL);
  v8[5] = v11;
  return v9;
}
