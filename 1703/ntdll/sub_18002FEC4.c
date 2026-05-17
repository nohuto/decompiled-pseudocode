/*
 * XREFs of sub_18002FEC4 @ 0x18002FEC4
 * Callers:
 *     sub_18002FC7C @ 0x18002FC7C (sub_18002FC7C.c)
 *     LdrAccessResource_0 @ 0x1800380F8 (LdrAccessResource_0.c)
 * Callees:
 *     sub_18002F924 @ 0x18002F924 (sub_18002F924.c)
 *     RtlImageNtHeaderEx @ 0x180033760 (RtlImageNtHeaderEx.c)
 *     ZwQueryVirtualMemory @ 0x1800A5760 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall sub_18002FEC4(__int64 a1, __int64 *a2)
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
  RtlImageNtHeaderEx(1LL, a1 & 0xFFFFFFFFFFFFFFFCuLL, 0LL, &v10);
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
  v6 = sub_18002F924(a1);
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
