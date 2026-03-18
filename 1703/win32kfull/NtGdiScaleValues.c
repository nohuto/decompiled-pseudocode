/*
 * XREFs of NtGdiScaleValues @ 0x1C028E910
 * Callers:
 *     <none>
 * Callees:
 *     GreScaleValues @ 0x1C027D8CC (GreScaleValues.c)
 */

__int64 __fastcall NtGdiScaleValues(HDC a1, char *Address, unsigned int a3)
{
  unsigned int v6; // ebx
  SIZE_T v7; // rdx
  HANDLE v8; // rdi

  v6 = 0;
  v7 = 4LL * a3;
  if ( v7 )
  {
    if ( ((unsigned __int8)Address & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&Address[v7] > W32UserProbeAddress || &Address[v7] < Address )
      *W32UserProbeAddress = 0;
  }
  v8 = MmSecureVirtualMemory(Address, v7, 4u);
  if ( v8 )
  {
    v6 = GreScaleValues(a1, (int *)Address, a3);
    MmUnsecureVirtualMemory(v8);
  }
  return v6;
}
