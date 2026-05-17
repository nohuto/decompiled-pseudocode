/*
 * XREFs of LdrDeleteEnclave @ 0x1800C9790
 * Callers:
 *     <none>
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     sub_18001EE04 @ 0x18001EE04 (sub_18001EE04.c)
 *     ZwFreeVirtualMemory @ 0x18009AE80 (ZwFreeVirtualMemory.c)
 *     sub_1800C9D70 @ 0x1800C9D70 (sub_1800C9D70.c)
 *     sub_1800C9DEC @ 0x1800C9DEC (sub_1800C9DEC.c)
 */

__int64 __fastcall LdrDeleteEnclave(unsigned __int64 a1)
{
  __int64 *v1; // rax
  __int64 *v2; // rbx
  int v3; // edi

  v1 = sub_18001EE04(a1, 1);
  v2 = v1;
  if ( v1 && (v3 = sub_1800C9D70(v1), RtlLeaveCriticalSection((__int64)(v2 + 2)), sub_1800C9DEC(v2), v3 < 0) )
    return (unsigned int)v3;
  else
    return ZwFreeVirtualMemory();
}
