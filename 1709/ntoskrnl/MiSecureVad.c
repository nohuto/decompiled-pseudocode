/*
 * XREFs of MiSecureVad @ 0x1404D52C0
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1404965C0 (MiAllocateVirtualMemory.c)
 *     MiMapViewOfDataSection @ 0x1404CEDF0 (MiMapViewOfDataSection.c)
 *     MmSecureVirtualMemory @ 0x1405795A0 (MmSecureVirtualMemory.c)
 * Callees:
 *     MiComparePteProtections @ 0x14017BE48 (MiComparePteProtections.c)
 *     MiAddSecureEntry @ 0x1404D3274 (MiAddSecureEntry.c)
 */

__int64 __fastcall MiSecureVad(ULONG_PTR a1, __int64 a2, __int64 a3, int a4, _QWORD *a5)
{
  unsigned __int64 v5; // rdi
  __int64 v6; // rsi
  unsigned int v7; // ebx
  int v10; // r9d
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdx
  __int64 result; // rax
  _DWORD *v14; // rax

  v5 = a2 & 0xFFFFFFFFFFFFF000uLL;
  v6 = (a2 + a3 - 1) | 0xFFF;
  v7 = 0;
  if ( (a4 & 1) != 0 )
    goto LABEL_5;
  v10 = 1;
  v11 = (a2 + a3 - 1) | 0xFFF;
  v12 = a2 & 0xFFFFFFFFFFFFF000uLL;
  if ( a4 != 2 )
    v10 = 4;
  result = MiComparePteProtections(a1, v12, v11, v10, 0);
  if ( (int)result >= 0 )
  {
LABEL_5:
    v14 = MiAddSecureEntry(a1, v5, v6, a4, 0);
    *a5 = v14;
    if ( !v14 )
      return (unsigned int)-1073741670;
    return v7;
  }
  return result;
}
