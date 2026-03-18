/*
 * XREFs of MiGetPagePrivilege @ 0x14005AE80
 * Callers:
 *     MiRevertValidPte @ 0x140036C60 (MiRevertValidPte.c)
 *     MiFlushSectionInternal @ 0x140038530 (MiFlushSectionInternal.c)
 *     MiSetProtectionOnSection @ 0x14003B7E0 (MiSetProtectionOnSection.c)
 *     MiCompleteProtoPteFault @ 0x140045530 (MiCompleteProtoPteFault.c)
 *     MiAllocateWsle @ 0x140047A60 (MiAllocateWsle.c)
 *     MiClearPfnImageVerified @ 0x140050290 (MiClearPfnImageVerified.c)
 *     MiWsleFlush @ 0x140052AC0 (MiWsleFlush.c)
 *     MiCopyPage @ 0x14005A3E0 (MiCopyPage.c)
 *     MiCombineCandidate @ 0x14005BD10 (MiCombineCandidate.c)
 *     MiStealPage @ 0x1400C81C8 (MiStealPage.c)
 *     MiMarkPfnVerified @ 0x1400CCEFC (MiMarkPfnVerified.c)
 *     MiTradeActivePage @ 0x1400CDE24 (MiTradeActivePage.c)
 *     MiReferencePageForModifiedWrite @ 0x1400EF550 (MiReferencePageForModifiedWrite.c)
 *     MiPfnCanBecomeDemandZero @ 0x14011E440 (MiPfnCanBecomeDemandZero.c)
 *     MiDbgWriteCheck @ 0x140228014 (MiDbgWriteCheck.c)
 * Callees:
 *     MiIsPfnFileOnly @ 0x140078F10 (MiIsPfnFileOnly.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiGetTopLevelPfn @ 0x1400E6BD0 (MiGetTopLevelPfn.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 */

__int64 __fastcall MiGetPagePrivilege(__int64 a1, int a2, unsigned __int64 *a3)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rbx
  unsigned int v11; // esi
  unsigned int v12; // esi
  unsigned __int64 v13; // rbx
  unsigned __int8 v14; // r15
  __int64 TopLevelPfn; // rax
  unsigned __int64 v16; // rcx
  __int64 PrototypePteDirect; // rax
  unsigned __int64 v18; // rdx
  int v19; // r9d
  __int64 v20; // r10
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  unsigned int v23; // r8d
  int v24; // eax

  if ( (MiFlags & 0x2000) == 0 || ((*(_QWORD *)(a1 + 40) >> 54) & 7) != 3 || (unsigned int)MiIsPfnFileOnly(a1) )
    return 0LL;
  if ( a3 && (v9 & 0x8000) == 0 )
    a3 = 0LL;
  v10 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  if ( (v7 & 0x200000000000000LL) != 0 )
  {
    if ( (*(_QWORD *)(a1 + 16) & 0x400LL) == 0 )
      return 16 * (((unsigned int)v9 >> 18) & 1) + 3;
    PrototypePteDirect = MiGetPrototypePteDirect(*(_QWORD *)(a1 + 16));
    v20 = *(_QWORD *)PrototypePteDirect;
    if ( (*(_DWORD *)(*(_QWORD *)PrototypePteDirect + 56LL) & 0x20) == 0 )
      return 2LL;
    v21 = *(_QWORD *)(PrototypePteDirect + 8);
    if ( v10 >= v21 && v10 < v21 + 8LL * *(unsigned int *)(PrototypePteDirect + 44) )
    {
      v22 = v18 >> 5;
      if ( (v19 & 0x40000) != 0 )
      {
        v23 = 2;
        if ( (*(_DWORD *)(v20 + 92) & 0xC0000) != 0 )
        {
          v23 = 10;
          if ( (v22 & 2) != 0 )
            v23 = 11;
        }
LABEL_43:
        if ( a3 )
        {
          a3[1] = *(_QWORD *)(*(_QWORD *)(v20 + 96) + 16LL);
          *a3 = (__int64)(v10 - *(_QWORD *)(v20 + 136)) >> 3 << 12;
        }
        return v23;
      }
      if ( (*(_DWORD *)(v20 + 92) & 0xC0000) != 0 )
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
  if ( (v9 & 0x40000) != 0 )
  {
    v11 = 17;
    if ( (unsigned __int64)((__int64)(v10 << 25) >> 16) < 0xFFFF800000000000uLL )
      return 2;
    return v11;
  }
  else
  {
    if ( *(_QWORD *)(a1 + 8) )
    {
      v13 = (__int64)(v10 << 25) >> 16;
      if ( v13 < 0xFFFF800000000000uLL )
      {
        v12 = 20;
        if ( a3 )
        {
          if ( a2 )
            v14 = 17;
          else
            v14 = MiLockPageInline(a1);
          TopLevelPfn = MiGetTopLevelPfn(a1, 0LL, v8, v9);
          v16 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( !a2 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v14);
          }
          if ( *(_QWORD *)(v16 + 720) )
          {
            *a3 = v13;
            a3[1] = *(_QWORD *)(v16 + 720);
            return 20LL;
          }
          return 0;
        }
      }
      else
      {
        v12 = 1;
        if ( a3 )
        {
          result = 1LL;
          *a3 = v13;
          a3[1] = 0LL;
          return result;
        }
      }
    }
    else
    {
      v12 = 4;
      if ( a3 )
      {
        result = 4LL;
        *a3 = 0LL;
        a3[1] = 0LL;
        return result;
      }
    }
    return v12;
  }
}
