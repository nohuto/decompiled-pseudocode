/*
 * XREFs of LdrCreateEnclave @ 0x1800CFF70
 * Callers:
 *     <none>
 * Callees:
 *     ZwFreeVirtualMemory @ 0x1800A0480 (ZwFreeVirtualMemory.c)
 *     ZwCreateEnclave @ 0x1800A14F0 (ZwCreateEnclave.c)
 *     LdrpCreateSoftwareEnclave @ 0x1800D0568 (LdrpCreateSoftwareEnclave.c)
 */

__int64 __fastcall LdrCreateEnclave(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 result; // rax
  int SoftwareEnclave; // ebx
  __int64 v10; // [rsp+58h] [rbp-10h]

  v10 = *a2;
  result = ZwCreateEnclave();
  SoftwareEnclave = result;
  if ( (int)result >= 0 )
  {
    if ( a6 == 16 && (SoftwareEnclave = LdrpCreateSoftwareEnclave(v10, a4), SoftwareEnclave < 0) )
      ZwFreeVirtualMemory();
    else
      *a2 = v10;
    return (unsigned int)SoftwareEnclave;
  }
  return result;
}
