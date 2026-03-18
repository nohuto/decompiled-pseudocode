/*
 * XREFs of MiGetPagePrivilege @ 0x1400A3660
 * Callers:
 *     MiMarkPfnVerified @ 0x140005D80 (MiMarkPfnVerified.c)
 *     MiTradeActivePage @ 0x140027F94 (MiTradeActivePage.c)
 *     MiFlushSectionInternal @ 0x140094CA0 (MiFlushSectionInternal.c)
 *     MiCopyPage @ 0x1400A0320 (MiCopyPage.c)
 *     MiCombineCandidate @ 0x1400A33A0 (MiCombineCandidate.c)
 *     MiCompleteProtoPteFault @ 0x1400B9890 (MiCompleteProtoPteFault.c)
 *     MiAllocateWsle @ 0x1400BCCF0 (MiAllocateWsle.c)
 *     MiClearPfnImageVerified @ 0x1400C7700 (MiClearPfnImageVerified.c)
 *     MiSetProtectionOnSection @ 0x1400CEFC0 (MiSetProtectionOnSection.c)
 *     MiRevertValidPte @ 0x1400F9CF0 (MiRevertValidPte.c)
 *     MiStealPage @ 0x14010C28C (MiStealPage.c)
 *     MiReferencePageForModifiedWrite @ 0x14010EC0C (MiReferencePageForModifiedWrite.c)
 *     MiDbgWriteCheck @ 0x14021B75C (MiDbgWriteCheck.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiGetTopLevelPfn @ 0x140079090 (MiGetTopLevelPfn.c)
 *     MiIsPfnFileOnly @ 0x1400CB1E0 (MiIsPfnFileOnly.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
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
  unsigned __int8 v14; // r14
  __int64 TopLevelPfn; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 PrototypePteDirect; // rax
  unsigned __int64 v19; // rdx
  int v20; // r9d
  __int64 v21; // r10
  unsigned __int64 v22; // rcx
  __int64 v23; // rdx
  unsigned int v24; // r8d
  int v25; // eax

  if ( (MiFlags & 0x2000) == 0 || ((*(_QWORD *)(a1 + 40) >> 54) & 7) != 3 || (unsigned int)MiIsPfnFileOnly(a1) )
    return 0LL;
  if ( a3 && (v9 & 0x8000) == 0 )
    a3 = 0LL;
  v10 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  if ( (v7 & 0x200000000000000LL) != 0 )
  {
    v17 = *(_QWORD *)(a1 + 16);
    if ( (v17 & 0x400) == 0 )
      return 16 * (((unsigned int)v9 >> 18) & 1) + 3;
    PrototypePteDirect = MiGetPrototypePteDirect(*(_QWORD *)(a1 + 16), v17, v8, v9);
    v21 = *(_QWORD *)PrototypePteDirect;
    if ( (*(_DWORD *)(*(_QWORD *)PrototypePteDirect + 56LL) & 0x20) == 0 )
      return 2LL;
    v22 = *(_QWORD *)(PrototypePteDirect + 8);
    if ( v10 >= v22 && v10 < v22 + 8LL * *(unsigned int *)(PrototypePteDirect + 44) )
    {
      v23 = (v19 >> 5) & 0x1F;
      if ( (v20 & 0x40000) != 0 )
      {
        v24 = 2;
        if ( (*(_DWORD *)(v21 + 92) & 0xC0000) != 0 )
        {
          v24 = 10;
          if ( (v23 & 2) != 0 )
            v24 = 11;
        }
LABEL_43:
        if ( a3 )
        {
          a3[1] = *(_QWORD *)(*(_QWORD *)(v21 + 96) + 16LL);
          *a3 = (__int64)(v10 - *(_QWORD *)(v21 + 136)) >> 3 << 12;
        }
        return v24;
      }
      if ( (*(_DWORD *)(v21 + 92) & 0xC0000) != 0 )
      {
        v25 = 8;
        if ( (v23 & 2) != 0 )
          v25 = 11;
        v24 = v25;
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
          TopLevelPfn = MiGetTopLevelPfn(a1, 0LL);
          v16 = *(_QWORD *)TopLevelPfn;
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
