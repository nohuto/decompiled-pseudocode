/*
 * XREFs of MiGetPagePrivilege @ 0x1400303C0
 * Callers:
 *     MiAllocateWsle @ 0x1400161C0 (MiAllocateWsle.c)
 *     MiCompleteProtoPteFault @ 0x140019F00 (MiCompleteProtoPteFault.c)
 *     MiPageMightBeZero @ 0x140025F10 (MiPageMightBeZero.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiCopyPage @ 0x14002ED70 (MiCopyPage.c)
 *     MiCombineCandidate @ 0x140030060 (MiCombineCandidate.c)
 *     MiStealPage @ 0x14003B400 (MiStealPage.c)
 *     MiClearPfnImageVerified @ 0x140054A44 (MiClearPfnImageVerified.c)
 *     MiProtectPrivateMemory @ 0x1401139F0 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 *     MiFlushSectionInternal @ 0x1401187E0 (MiFlushSectionInternal.c)
 *     MiRevertValidPte @ 0x140125BF0 (MiRevertValidPte.c)
 *     MiReferencePageForModifiedWrite @ 0x140131E00 (MiReferencePageForModifiedWrite.c)
 *     MiMarkPfnVerified @ 0x1401380B4 (MiMarkPfnVerified.c)
 *     MiTradeActivePage @ 0x140162634 (MiTradeActivePage.c)
 *     MiDbgWriteCheck @ 0x140261220 (MiDbgWriteCheck.c)
 * Callees:
 *     MiGetTopLevelPfn @ 0x1400D5C50 (MiGetTopLevelPfn.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiIsPfnFileOnly @ 0x140121930 (MiIsPfnFileOnly.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 */

__int64 __fastcall MiGetPagePrivilege(ULONG_PTR BugCheckParameter2, int a2, unsigned __int64 *a3)
{
  __int64 result; // rax
  __int64 v7; // rdx
  unsigned int v8; // r9d
  unsigned __int64 v9; // rbx
  unsigned int v10; // esi
  unsigned int v11; // esi
  unsigned __int64 v12; // rbx
  unsigned __int8 v13; // r15
  __int64 TopLevelPfn; // rax
  unsigned __int64 v15; // rcx
  __int64 PrototypePteDirect; // rax
  unsigned __int64 v17; // rdx
  int v18; // r9d
  __int64 v19; // r10
  unsigned __int64 v20; // rcx
  int v21; // eax
  unsigned __int64 v22; // rdx
  unsigned int v23; // r8d
  int v24; // eax

  if ( (MiFlags & 0x2000) == 0
    || ((*(_QWORD *)(BugCheckParameter2 + 40) >> 54) & 7) != 3
    || (unsigned int)MiIsPfnFileOnly(BugCheckParameter2) )
  {
    return 0LL;
  }
  if ( a3 && (v8 & 0x8000) == 0 )
    a3 = 0LL;
  v9 = *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL;
  if ( (v7 & 0x200000000000000LL) != 0 )
  {
    if ( (*(_QWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0 )
      return 16 * ((v8 >> 18) & 1) + 3;
    PrototypePteDirect = MiGetPrototypePteDirect(*(_QWORD *)(BugCheckParameter2 + 16));
    v19 = *(_QWORD *)PrototypePteDirect;
    if ( (*(_DWORD *)(*(_QWORD *)PrototypePteDirect + 56LL) & 0x20) == 0 )
      return 2LL;
    v20 = *(_QWORD *)(PrototypePteDirect + 8);
    if ( v9 >= v20 && v9 < v20 + 8LL * *(unsigned int *)(PrototypePteDirect + 44) )
    {
      v21 = *(_DWORD *)(v19 + 92) & 0xC0000;
      v22 = v17 >> 5;
      if ( (v18 & 0x40000) != 0 )
      {
        v23 = 2;
        if ( v21 )
        {
          v23 = 10;
          if ( (v22 & 2) != 0 )
            v23 = 11;
        }
LABEL_43:
        if ( a3 )
        {
          a3[1] = *(_QWORD *)(*(_QWORD *)(v19 + 96) + 48LL);
          *a3 = (__int64)(v9 - *(_QWORD *)(v19 + 136)) >> 3 << 12;
        }
        return v23;
      }
      if ( v21 )
      {
        v24 = 8;
        if ( (v22 & 2) != 0 )
          v24 = 11;
        v23 = v24;
        goto LABEL_43;
      }
    }
    return 0LL;
  }
  if ( (v8 & 0x40000) != 0 )
  {
    v10 = 17;
    if ( (unsigned __int64)((__int64)(v9 << 25) >> 16) < 0xFFFF800000000000uLL )
      return 2;
    return v10;
  }
  else
  {
    if ( *(_QWORD *)(BugCheckParameter2 + 8) )
    {
      v12 = (__int64)(v9 << 25) >> 16;
      if ( v12 < 0xFFFF800000000000uLL )
      {
        v11 = 20;
        if ( a3 )
        {
          if ( a2 )
            v13 = 17;
          else
            v13 = MiLockPageInline(BugCheckParameter2);
          TopLevelPfn = MiGetTopLevelPfn(BugCheckParameter2);
          v15 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( !a2 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v13);
          }
          if ( *(_QWORD *)(v15 + 720) )
          {
            *a3 = v12;
            a3[1] = *(_QWORD *)(v15 + 720);
            return 20LL;
          }
          return 0;
        }
      }
      else
      {
        v11 = 1;
        if ( a3 )
        {
          result = 1LL;
          *a3 = v12;
          a3[1] = 0LL;
          return result;
        }
      }
    }
    else
    {
      v11 = 4;
      if ( a3 )
      {
        result = 4LL;
        *a3 = 0LL;
        a3[1] = 0LL;
        return result;
      }
    }
    return v11;
  }
}
