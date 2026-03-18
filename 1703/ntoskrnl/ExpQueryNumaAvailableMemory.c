/*
 * XREFs of ExpQueryNumaAvailableMemory @ 0x140599708
 * Callers:
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 * Callees:
 *     MmGetAvailablePages @ 0x140085174 (MmGetAvailablePages.c)
 *     MmGetProcessPartitionId @ 0x140085190 (MmGetProcessPartitionId.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MmGetChannelInformation @ 0x140599888 (MmGetChannelInformation.c)
 */

__int64 __fastcall ExpQueryNumaAvailableMemory(__int64 a1)
{
  unsigned int v2; // edx
  _DWORD *v3; // r8
  unsigned __int16 ProcessPartitionId; // r15
  unsigned int v5; // r9d
  unsigned int v6; // edi
  __int64 i; // rbx
  __int64 result; // rax
  __int64 v9; // rsi
  __int64 j; // r8
  unsigned __int64 v11; // [rsp+30h] [rbp-58h] BYREF
  PVOID P; // [rsp+38h] [rbp-50h] BYREF
  __int64 v13; // [rsp+40h] [rbp-48h]
  unsigned __int64 v14; // [rsp+50h] [rbp-38h]

  ProcessPartitionId = MmGetProcessPartitionId((__int64)KeGetCurrentThread()->ApcState.Process);
  if ( v2 < 4 )
  {
    if ( v3 )
      *v3 = 4;
    return 3221225476LL;
  }
  else
  {
    v5 = (unsigned __int16)KeNumberNodes;
    *(_DWORD *)a1 = (unsigned __int16)KeNumberNodes - 1;
    v6 = (v2 - 8) >> 3;
    if ( v6 > v5 )
      v6 = v5;
    if ( v2 >= 8 && v6 )
    {
      *v3 = 8 * v6 + 8;
      if ( (unsigned __int16)v5 <= 1u )
      {
        *(_QWORD *)(a1 + 8) = MmGetAvailablePages(ProcessPartitionId) << 12;
      }
      else
      {
        for ( i = 0LL; (unsigned int)i < v6; i = (unsigned int)(i + 1) )
        {
          result = MmGetChannelInformation(ProcessPartitionId, (unsigned int)i, &P, &v11);
          if ( (int)result < 0 )
            return result;
          v9 = 0LL;
          v13 = 0LL;
          v14 = v11 / 0x28;
          for ( j = 0LL; (unsigned int)j < v11 / 0x28; j = (unsigned int)(j + 1) )
          {
            v9 += *((_QWORD *)P + 5 * j + 2) + *((_QWORD *)P + 5 * j + 3);
            v13 = v9;
          }
          ExFreePoolWithTag(P, 0);
          *(_QWORD *)(a1 + 8 * i + 8) = v9 << 12;
        }
      }
      return 0LL;
    }
    else
    {
      *v3 = 4;
      return 0LL;
    }
  }
}
