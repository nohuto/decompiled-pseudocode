/*
 * XREFs of PspApplyIFEOPerfOptions @ 0x14044CC7C
 * Callers:
 *     PspAllocateProcess @ 0x140489D0C (PspAllocateProcess.c)
 * Callees:
 *     MmGetDefaultPagePriority @ 0x140126770 (MmGetDefaultPagePriority.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     PspSetProcessPriorityClass @ 0x140595250 (PspSetProcessPriorityClass.c)
 */

__int64 __fastcall PspApplyIFEOPerfOptions(__int64 a1, unsigned int *a2, KPROCESSOR_MODE a3, __int64 a4)
{
  unsigned int *v5; // rbx
  unsigned int DefaultPagePriority; // eax
  unsigned int v8; // r8d
  unsigned __int32 v9; // eax
  int v10; // r8d
  __int64 result; // rax
  unsigned int v12; // edi
  unsigned __int32 v13; // eax
  unsigned int v14; // edi

  v5 = a2;
  if ( (*a2 & 1) != 0 )
  {
    v12 = a2[2];
    if ( v12 < 4 && (v12 <= 2 || (SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, a3) & 1) != 0) )
    {
      v13 = *(_DWORD *)(a1 + 772);
      v14 = v12 << 27;
      do
      {
        a2 = (unsigned int *)v13;
        v13 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 772), v14 | v13 & 0xC7FFFFFF, v13);
      }
      while ( v13 != (_DWORD)a2 );
    }
  }
  if ( (*v5 & 2) != 0 )
  {
    DefaultPagePriority = MmGetDefaultPagePriority();
    if ( v8 < DefaultPagePriority )
    {
      v9 = *(_DWORD *)(a1 + 768);
      v10 = v8 << 12;
      do
      {
        a2 = (unsigned int *)v9;
        v9 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 768), v10 | v9 & 0xFFFF8FFF, v9);
      }
      while ( v9 != (_DWORD)a2 );
    }
  }
  result = *v5;
  if ( (result & 4) != 0 && v5[4] <= 0xFF )
  {
    LOBYTE(a2) = *((_BYTE *)v5 + 16);
    LOBYTE(a4) = a3;
    return PspSetProcessPriorityClass(a1, a2, 0LL, a4);
  }
  return result;
}
