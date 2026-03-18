/*
 * XREFs of PspApplyIFEOPerfOptions @ 0x14048CE04
 * Callers:
 *     PspAllocateProcess @ 0x1404ED888 (PspAllocateProcess.c)
 * Callees:
 *     MmGetDefaultPagePriority @ 0x140005EA0 (MmGetDefaultPagePriority.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     PspSetProcessPriorityClass @ 0x14057EB98 (PspSetProcessPriorityClass.c)
 */

__int64 __fastcall PspApplyIFEOPerfOptions(__int64 a1, unsigned __int64 a2, KPROCESSOR_MODE a3, __int64 a4)
{
  __int64 result; // rax
  int *v6; // rbx
  int v8; // ecx
  unsigned int v9; // r8d
  unsigned int v10; // r8d
  unsigned int v11; // edi
  unsigned int v12; // edi

  result = *(unsigned int *)a2;
  v6 = (int *)a2;
  if ( (result & 1) != 0 )
  {
    v11 = *(_DWORD *)(a2 + 8);
    if ( v11 < 4 )
    {
      if ( v11 <= 2 || (result = SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, a3) & 1, (_DWORD)result) )
      {
        LODWORD(result) = *(_DWORD *)(a1 + 772);
        v12 = v11 << 27;
        do
        {
          a2 = (unsigned int)result;
          result = (unsigned int)_InterlockedCompareExchange(
                                   (volatile signed __int32 *)(a1 + 772),
                                   v12 | result & 0xC7FFFFFF,
                                   result);
        }
        while ( (_DWORD)result != (_DWORD)a2 );
      }
    }
  }
  v8 = *v6;
  if ( (*v6 & 2) != 0 )
  {
    result = MmGetDefaultPagePriority();
    if ( v9 < (unsigned int)result )
    {
      LODWORD(result) = *(_DWORD *)(a1 + 768);
      v10 = v9 << 12;
      do
      {
        a2 = (unsigned int)result;
        result = (unsigned int)_InterlockedCompareExchange(
                                 (volatile signed __int32 *)(a1 + 768),
                                 v10 | result & 0xFFFF8FFF,
                                 result);
      }
      while ( (_DWORD)result != (_DWORD)a2 );
      v8 = *v6;
    }
  }
  if ( (v8 & 4) != 0 )
  {
    result = (unsigned int)v6[4];
    if ( (unsigned int)result <= 0xFF )
    {
      LOBYTE(a4) = a3;
      LOBYTE(a2) = v6[4];
      return PspSetProcessPriorityClass(a1, a2, 0LL, a4);
    }
  }
  return result;
}
