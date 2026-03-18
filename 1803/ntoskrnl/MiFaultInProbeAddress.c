/*
 * XREFs of MiFaultInProbeAddress @ 0x1400BA738
 * Callers:
 *     MiProbeAndLockPages @ 0x140020610 (MiProbeAndLockPages.c)
 *     MiLockPageLeafPageTable @ 0x140021570 (MiLockPageLeafPageTable.c)
 *     MiProbeLeafFrame @ 0x140136DB0 (MiProbeLeafFrame.c)
 * Callees:
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     MiDeliverPicoExceptionForProbedPage @ 0x140253B68 (MiDeliverPicoExceptionForProbedPage.c)
 */

__int64 __fastcall MiFaultInProbeAddress(__int64 a1)
{
  signed __int64 v1; // rdi
  __int64 v2; // rax
  unsigned int v3; // esi
  signed __int64 v4; // rdx
  char *v5; // r9
  ULONG_PTR v7; // r10
  __int64 result; // rax
  _QWORD v9[2]; // [rsp+20h] [rbp-78h] BYREF
  __int16 v10; // [rsp+30h] [rbp-68h] BYREF
  _QWORD *v11; // [rsp+38h] [rbp-60h]
  __int64 v12; // [rsp+40h] [rbp-58h]
  __int64 v13; // [rsp+48h] [rbp-50h]
  __int64 v14; // [rsp+50h] [rbp-48h]

  v1 = *(_QWORD *)a1;
  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_DWORD *)(a1 + 88);
  v4 = *(_QWORD *)a1;
  v10 = 2;
  v9[0] = v4 & 0xFFFFFFFFFFFFF000uLL;
  v9[1] = v2 - (v4 & 0xFFFFFFFFFFFFF000uLL);
  v5 = (char *)&v10 + 1;
  v12 = 1LL;
  v11 = v9;
  v13 = 0LL;
  v7 = 0LL;
  v14 = 0LL;
  if ( v3 )
  {
    v7 = 2LL;
    if ( v3 == 3 )
    {
      v7 = 0LL;
    }
    else if ( (*(_BYTE *)(a1 + 64) & 0xF0) == 0x60 && (unsigned int)MiGetSystemRegionType(v1) == 12 )
    {
      v7 = 0LL;
    }
  }
  result = MmAccessFault(v7, v1, 0, (ULONG_PTR)v5);
  if ( (int)result < 0 && (*(_DWORD *)(a1 + 64) & 0xF0) == 0x10 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 80) + 1808LL) )
      return MiDeliverPicoExceptionForProbedPage(v1, v3);
  }
  return result;
}
