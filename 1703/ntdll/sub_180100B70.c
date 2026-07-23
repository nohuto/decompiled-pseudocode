/*
 * XREFs of sub_180100B70 @ 0x180100B70
 * Callers:
 *     RtlProtectHeap @ 0x18000D6A0 (RtlProtectHeap.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x1800A5760 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x1800A5D00 (ZwProtectVirtualMemory.c)
 *     sub_180102C1C @ 0x180102C1C (sub_180102C1C.c)
 */

__int64 __fastcall sub_180100B70(char *BaseAddress, ULONG NewProtect)
{
  __int64 v2; // r15
  __int64 v4; // r8
  NTSTATUS v5; // eax
  char *i; // rbx
  char *v7; // rax
  NTSTATUS VirtualMemory; // eax
  NTSTATUS v9; // eax
  unsigned __int64 v10; // rbx
  int v12; // eax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  char v15; // dl
  unsigned __int64 v16; // rcx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-40h] BYREF
  _BYTE MemoryInformation[24]; // [rsp+38h] [rbp-38h] BYREF
  ULONG_PTR v19; // [rsp+50h] [rbp-20h]
  int v20; // [rsp+58h] [rbp-18h]
  ULONG OldProtect; // [rsp+B0h] [rbp+40h] BYREF
  PVOID BaseAddressa; // [rsp+B8h] [rbp+48h] BYREF

  v2 = NewProtect;
  LODWORD(v4) = ZwQueryVirtualMemory(
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  BaseAddress,
                  MemoryBasicInformation,
                  MemoryInformation,
                  0x30uLL,
                  0LL);
  if ( (int)v4 < 0 )
    return (unsigned int)v4;
  RegionSize = v19;
  BaseAddressa = BaseAddress;
  v5 = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &RegionSize, v2, &OldProtect);
  v4 = (unsigned int)v5;
  if ( v5 < 0 )
    return (unsigned int)v4;
  for ( i = (char *)*((_QWORD *)BaseAddress + 12); ; i = *(char **)i )
  {
    if ( i == BaseAddress + 96 )
    {
      v10 = *((_QWORD *)BaseAddress + 7);
      if ( !v10 )
      {
        LODWORD(v4) = 0;
        return (unsigned int)v4;
      }
      while ( 1 )
      {
LABEL_14:
        v12 = sub_180102C1C(v10, v2, v4);
        v4 = (unsigned int)v12;
        if ( v12 < 0 )
          return (unsigned int)v4;
        v13 = *(_QWORD *)v10;
        if ( !*(_QWORD *)v10 )
        {
          v13 = *(_QWORD *)(v10 + 8);
          if ( !v13 )
            break;
        }
        if ( (BaseAddress[64] & 1) != 0 )
          v10 ^= v13;
        else
          v10 = v13;
      }
      v14 = v10;
      v15 = BaseAddress[64] & 1;
      while ( 1 )
      {
        v14 = *(_QWORD *)(v14 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v15 )
        {
          if ( !v14 )
            return (unsigned int)v4;
          v14 ^= v10;
        }
        if ( !v14 )
          return (unsigned int)v4;
        v16 = *(_QWORD *)(v14 + 8);
        if ( v15 )
        {
          if ( !v16 )
            goto LABEL_29;
          v16 ^= v14;
        }
        if ( v16 && v16 != v10 )
        {
          v10 = v16;
          goto LABEL_14;
        }
LABEL_29:
        v10 = v14;
      }
    }
    BaseAddressa = i;
    v7 = i;
    if ( i < i + 0x100000 )
      break;
LABEL_9:
    ;
  }
  while ( 1 )
  {
    VirtualMemory = ZwQueryVirtualMemory(
                      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                      v7,
                      MemoryBasicInformation,
                      MemoryInformation,
                      0x30uLL,
                      0LL);
    v4 = (unsigned int)VirtualMemory;
    if ( VirtualMemory < 0 )
      break;
    if ( v20 == 4096 )
    {
      RegionSize = v19;
      v9 = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &RegionSize, v2, &OldProtect);
      v4 = (unsigned int)v9;
      if ( v9 < 0 )
        break;
    }
    v7 = (char *)BaseAddressa + v19;
    BaseAddressa = v7;
    if ( v7 >= i + 0x100000 )
      goto LABEL_9;
  }
  return (unsigned int)v4;
}
