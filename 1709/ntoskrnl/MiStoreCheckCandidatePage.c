/*
 * XREFs of MiStoreCheckCandidatePage @ 0x14022C1C4
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x14022CE80 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     MiGetPfnPriority @ 0x14004BD90 (MiGetPfnPriority.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     MiIsStoreProcess @ 0x1400E6B90 (MiIsStoreProcess.c)
 *     MiGetTopLevelPfn @ 0x1400E6BD0 (MiGetTopLevelPfn.c)
 */

__int64 __fastcall MiStoreCheckCandidatePage(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 *a3,
        _OWORD *a4,
        __int64 *a5)
{
  unsigned int v5; // esi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rdx
  __int64 TopLevelPfn; // rax
  __int64 v14; // rdx
  int v15; // edi
  char PfnPriority; // al
  char v17; // cl
  _QWORD *v18; // rdx
  __int128 v20; // [rsp+20h] [rbp-10h]
  __int64 v21; // [rsp+60h] [rbp+30h]

  v5 = 0;
  v9 = a2 | ((unsigned __int64)*(unsigned int *)(*(_QWORD *)(qword_140388AF0
                                                           + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL))
                                               + 1140LL) << 60);
  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0 )
  {
    *(_QWORD *)&v20 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
    *((_QWORD *)&v20 + 1) = 3LL;
LABEL_20:
    v21 = *a5;
    PfnPriority = MiGetPfnPriority(a1);
    v17 = *(_BYTE *)(a1 + 34) & 0xC0;
    *a3 = v9;
    *a4 = v20;
    LODWORD(v21) = v21 & 0xFFFD0C00 | (((v17 != 64 ? 0x10 : 0) | PfnPriority & 7) << 13) | 0xC00;
    *v18 = v21;
    return v5;
  }
  v10 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  if ( (((unsigned int)MiGetSystemRegionType(v10) - 5) & 0xFFFFFFF7) == 0 )
  {
    *(_QWORD *)&v20 = v10 - 1088;
    *((_QWORD *)&v20 + 1) = 0xFFFFF6FB7DBED000uLL;
    goto LABEL_20;
  }
  v11 = (__int64)(v10 << 25) >> 16;
  HIDWORD(v20) = HIDWORD(v11);
  if ( (unsigned int)MiGetSystemRegionType(v11) != 1
    && v11 > 0x7FFFFFFEFFFFLL
    && (v11 < qword_140389B40 || v11 > qword_140388958)
    && (v11 < v12 || v11 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    *(_QWORD *)&v20 = 0LL;
    DWORD2(v20) = v11 & 0xFFFFFFFC | 2;
    goto LABEL_20;
  }
  TopLevelPfn = MiGetTopLevelPfn(a1, 0LL);
  if ( TopLevelPfn != a1 )
  {
    *(_QWORD *)&v20 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
    _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned int)MiGetSystemRegionType(v11) == 1 )
    {
      v15 = v11 & 0xFFFFFFFC | 1;
    }
    else
    {
      if ( (unsigned int)MiIsStoreProcess(v14) )
        return (unsigned int)-1073741401;
      v15 = v11 & 0xFFFFFFFC;
    }
    DWORD2(v20) = v15;
    goto LABEL_20;
  }
  return (unsigned int)-1073741253;
}
