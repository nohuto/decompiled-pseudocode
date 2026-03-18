/*
 * XREFs of ExpGetSystemBasicInformation @ 0x140114C10
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExSystemExceptionFilter @ 0x140515700 (ExSystemExceptionFilter.c)
 *     MmGetNumberOfPhysicalPages @ 0x14056E6E0 (MmGetNumberOfPhysicalPages.c)
 */

__int64 __fastcall ExpGetSystemBasicInformation(__int64 a1)
{
  unsigned __int16 v2; // r11
  int Group; // ecx
  unsigned __int64 v4; // rcx
  unsigned __int64 NumberOfPhysicalPages; // rcx
  _DWORD *v6; // r9
  unsigned int v7; // r10d
  unsigned __int16 v8; // r11
  int v9; // r8d
  int v10; // eax
  int v11; // ecx

  v2 = *((_WORD *)&KeGetCurrentThread()->ApcState.Process[1].SecureState.Flags + 2);
  Group = KeGetCurrentPrcb()->Group;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = KeMaximumIncrement;
  *(_DWORD *)(a1 + 8) = 4096;
  *(_DWORD *)(a1 + 24) = 0x10000;
  *(_QWORD *)(a1 + 32) = 0x10000LL;
  *(_QWORD *)(a1 + 40) = 0x7FFFFFFEFFFFLL;
  if ( (unsigned __int16)Group >= LOWORD(KeActiveProcessors[0]) )
    v4 = 0LL;
  else
    v4 = qword_140401408[Group];
  *(_QWORD *)(a1 + 48) = v4;
  *(_BYTE *)(a1 + 56) = (0x101010101010101LL
                       * ((((v4 - ((v4 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                         + (((v4 - ((v4 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                         + ((((v4 - ((v4 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                           + (((v4 - ((v4 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  NumberOfPhysicalPages = MmGetNumberOfPhysicalPages(v2);
  v9 = -1;
  v10 = -1;
  if ( NumberOfPhysicalPages <= 0xFFFFFFFF )
    v10 = NumberOfPhysicalPages;
  v6[3] = v10;
  v11 = -1;
  if ( *(_QWORD *)(*(_QWORD *)(qword_140388AF0 + 8LL * v8) + 5760LL) <= 0xFFFFFFFFuLL )
    v11 = *(_QWORD *)(*(_QWORD *)(qword_140388AF0 + 8LL * v8) + 5760LL);
  v6[4] = v11;
  if ( *(_QWORD *)(*(_QWORD *)(qword_140388AF0 + 8LL * v8) + 5768LL) <= 0xFFFFFFFFuLL )
    v9 = *(_QWORD *)(*(_QWORD *)(qword_140388AF0 + 8LL * v8) + 5768LL);
  v6[5] = v9;
  return v7;
}
