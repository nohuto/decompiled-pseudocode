/*
 * XREFs of sub_180010BE4 @ 0x180010BE4
 * Callers:
 *     sub_180010CB4 @ 0x180010CB4 (sub_180010CB4.c)
 *     LdrAccessResource_0 @ 0x180010F9C (LdrAccessResource_0.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180010300 (RtlImageNtHeaderEx.c)
 *     sub_18001F834 @ 0x18001F834 (sub_18001F834.c)
 *     ZwQueryVirtualMemory @ 0x18009AF20 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall sub_180010BE4(__int64 a1, __int64 *a2)
{
  int VirtualMemory; // ebx
  unsigned __int64 v5; // rbp
  __int64 v6; // rdi
  _BYTE v8[16]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v9; // [rsp+40h] [rbp-28h]
  __int64 v10; // [rsp+70h] [rbp+8h] BYREF

  VirtualMemory = 0;
  v10 = 0LL;
  v5 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
  v6 = 0LL;
  RtlImageNtHeaderEx(1, a1 & 0xFFFFFFFFFFFFFFFCuLL, 0LL, &v10);
  if ( !v10 )
    goto LABEL_11;
  if ( (a1 & 1) == 0 )
  {
    if ( *(_WORD *)(v10 + 24) == 267 || *(_WORD *)(v10 + 24) == 523 )
    {
      v6 = *(unsigned int *)(v10 + 80);
      goto LABEL_6;
    }
LABEL_11:
    VirtualMemory = -1073741701;
    goto LABEL_6;
  }
  v6 = sub_18001F834(a1);
  if ( !v6 )
  {
    VirtualMemory = ZwQueryVirtualMemory(-1LL, v5, 3LL, v8, 32LL, 0LL);
    if ( VirtualMemory < 0 )
      VirtualMemory = -1073741793;
    else
      v6 = v9;
  }
LABEL_6:
  *a2 = v6;
  return (unsigned int)VirtualMemory;
}
