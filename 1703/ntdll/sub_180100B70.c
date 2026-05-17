/*
 * XREFs of sub_180100B70 @ 0x180100B70
 * Callers:
 *     RtlProtectHeap @ 0x18000D6A0 (RtlProtectHeap.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x1800A5760 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x1800A5D00 (ZwProtectVirtualMemory.c)
 *     sub_180102C1C @ 0x180102C1C (sub_180102C1C.c)
 */

__int64 __fastcall sub_180100B70(__int64 a1, unsigned int a2)
{
  __int64 v2; // r15
  __int64 v4; // r8
  int v5; // eax
  _QWORD *i; // rbx
  int VirtualMemory; // eax
  int v8; // eax
  unsigned __int64 v9; // rbx
  int v11; // eax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  char v14; // dl
  unsigned __int64 v15; // rcx
  __int64 v16; // [rsp+50h] [rbp-20h]
  int v17; // [rsp+58h] [rbp-18h]
  unsigned __int64 v18; // [rsp+B8h] [rbp+48h]

  v2 = a2;
  LODWORD(v4) = ZwQueryVirtualMemory();
  if ( (int)v4 < 0 )
    return (unsigned int)v4;
  v5 = ZwProtectVirtualMemory();
  v4 = (unsigned int)v5;
  if ( v5 < 0 )
    return (unsigned int)v4;
  for ( i = *(_QWORD **)(a1 + 96); ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)(a1 + 96) )
    {
      v9 = *(_QWORD *)(a1 + 56);
      if ( !v9 )
      {
        LODWORD(v4) = 0;
        return (unsigned int)v4;
      }
      while ( 1 )
      {
LABEL_14:
        v11 = sub_180102C1C(v9, v2, v4);
        v4 = (unsigned int)v11;
        if ( v11 < 0 )
          return (unsigned int)v4;
        v12 = *(_QWORD *)v9;
        if ( !*(_QWORD *)v9 )
        {
          v12 = *(_QWORD *)(v9 + 8);
          if ( !v12 )
            break;
        }
        if ( (*(_BYTE *)(a1 + 64) & 1) != 0 )
          v9 ^= v12;
        else
          v9 = v12;
      }
      v13 = v9;
      v14 = *(_BYTE *)(a1 + 64) & 1;
      while ( 1 )
      {
        v13 = *(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v14 )
        {
          if ( !v13 )
            return (unsigned int)v4;
          v13 ^= v9;
        }
        if ( !v13 )
          return (unsigned int)v4;
        v15 = *(_QWORD *)(v13 + 8);
        if ( v14 )
        {
          if ( !v15 )
            goto LABEL_29;
          v15 ^= v13;
        }
        if ( v15 && v15 != v9 )
        {
          v9 = v15;
          goto LABEL_14;
        }
LABEL_29:
        v9 = v13;
      }
    }
    v18 = (unsigned __int64)i;
    if ( i < i + 0x20000 )
      break;
LABEL_9:
    ;
  }
  while ( 1 )
  {
    VirtualMemory = ZwQueryVirtualMemory();
    v4 = (unsigned int)VirtualMemory;
    if ( VirtualMemory < 0 )
      break;
    if ( v17 == 4096 )
    {
      v8 = ZwProtectVirtualMemory();
      v4 = (unsigned int)v8;
      if ( v8 < 0 )
        break;
    }
    v18 += v16;
    if ( v18 >= (unsigned __int64)(i + 0x20000) )
      goto LABEL_9;
  }
  return (unsigned int)v4;
}
