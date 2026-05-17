/*
 * XREFs of sub_1800C98F0 @ 0x1800C98F0
 * Callers:
 *     sub_180075968 @ 0x180075968 (sub_180075968.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     sub_18001EE04 @ 0x18001EE04 (sub_18001EE04.c)
 *     ZwQueryVirtualMemory @ 0x18009AF20 (ZwQueryVirtualMemory.c)
 *     sub_1800C9DEC @ 0x1800C9DEC (sub_1800C9DEC.c)
 */

char __fastcall sub_1800C98F0(unsigned __int64 a1)
{
  __int64 *v2; // rax
  bool v3; // bl
  __int64 *v4; // rdi
  __int64 v5; // rax
  char v7; // [rsp+3Ch] [rbp-1Ch]

  v2 = sub_18001EE04(a1, 0);
  v3 = 0;
  v4 = v2;
  if ( v2 )
  {
    v5 = v2[13];
    if ( v5 && a1 == *(_QWORD *)(v5 + 184) && (int)ZwQueryVirtualMemory() >= 0 )
      v3 = (v7 & 0x40) != 0;
    RtlLeaveCriticalSection((__int64)(v4 + 2));
    sub_1800C9DEC(v4);
    LOBYTE(v2) = v3;
  }
  return (char)v2;
}
