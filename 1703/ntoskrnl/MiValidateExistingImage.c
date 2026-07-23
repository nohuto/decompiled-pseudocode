/*
 * XREFs of MiValidateExistingImage @ 0x14051108C
 * Callers:
 *     MiShareExistingControlArea @ 0x1405104F8 (MiShareExistingControlArea.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     MiValidateSectionCreate @ 0x140422CC0 (MiValidateSectionCreate.c)
 *     SeCompareSigningLevelsForAuditableProcess @ 0x140456BE0 (SeCompareSigningLevelsForAuditableProcess.c)
 *     MiRelocateImageAgain @ 0x140511290 (MiRelocateImageAgain.c)
 *     SeCompareSigningLevels @ 0x140545CB0 (SeCompareSigningLevels.c)
 *     SeGetImageRequiredSigningLevel @ 0x140546BA4 (SeGetImageRequiredSigningLevel.c)
 */

__int64 __fastcall MiValidateExistingImage(unsigned int *a1)
{
  ULONG_PTR v1; // r15
  void *v2; // r12
  __int64 v4; // rdx
  __int64 result; // rax
  unsigned int v6; // edi
  int v7; // edx
  int v8; // ecx
  __int64 v9; // r14
  int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // ebp
  bool v14; // zf
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 8);
  v2 = (void *)*((_QWORD *)a1 + 7);
  if ( (*(_DWORD *)(v1 + 56) & 0x800) != 0 && (*a1 & 0x20000) != 0 )
  {
    dword_14036BFD8 = 81;
    return 3221226547LL;
  }
  if ( (*a1 & 0x40) != 0 )
    v4 = 2LL;
  else
    v4 = (*a1 & 0x20) != 0;
  result = MiRelocateImageAgain(*((_QWORD *)a1 + 8), v4);
  v6 = result;
  if ( (int)result >= 0 )
  {
    v7 = *a1;
    if ( (*a1 & 0x100) != 0 )
    {
      v8 = 4;
    }
    else if ( (v7 & 0x20) != 0 )
    {
      v8 = 1;
    }
    else if ( (v7 & 0x10) != 0 )
    {
      v8 = (*a1 & 0x1000) != 0 ? 8 : 2;
    }
    else
    {
      v8 = 0;
    }
    v9 = *(_QWORD *)v1;
    v10 = v8 | 0x10;
    if ( (v7 & 0x800) == 0 )
      v10 = v8;
    v11 = v7 & 0xC10;
    if ( (_DWORD)v11 == 1024 && *((_BYTE *)a1 + 24) )
    {
      result = SeGetImageRequiredSigningLevel(v2, (__int64)&v15);
      v6 = result;
      if ( (int)result < 0 )
        return result;
      *((_BYTE *)a1 + 24) = v15;
    }
    v12 = *a1;
    if ( (v12 & 0x20000) != 0 )
    {
      v10 |= 0x40000000u;
      if ( !*((_BYTE *)a1 + 24) )
        *((_BYTE *)a1 + 24) = 4;
    }
    v13 = v10 | 0x20000000;
    if ( (v12 & 0x100000) == 0 )
      v13 = v10;
    if ( (v12 & 0x400) == 0 )
      return v6;
    if ( (v12 & 0x10) == 0 )
    {
      if ( !qword_140348C20 || (LOBYTE(v11) = *(_BYTE *)(v9 + 15) >> 4, !(unsigned int)qword_140348C20(v13, v11)) )
      {
        LOBYTE(v11) = *((_BYTE *)a1 + 24);
        LOBYTE(v12) = *(_BYTE *)(v9 + 15) >> 4;
        if ( (unsigned int)SeCompareSigningLevels(v12, v11) )
        {
          if ( ((v13 & 0x40000000) == 0 || (*(_DWORD *)(v1 + 92) & 0xC0000) == 0x80000)
            && ((*(_BYTE *)(v9 + 15) & 0xF0) != 0 || *(char *)(*(_QWORD *)(v9 + 56) + 46LL) >= 0) )
          {
            return v6;
          }
        }
      }
    }
    result = MiValidateSectionCreate((ULONG_PTR)v2, v1, a1[42], *((_QWORD *)a1 + 20), v13, *((_BYTE *)a1 + 24));
    v6 = result;
    if ( (int)result < 0 )
    {
      dword_14036BFD8 = 60;
      return result;
    }
    v14 = (unsigned int)SeCompareSigningLevelsForAuditableProcess(
                          (__int64)KeGetCurrentThread()->ApcState.Process,
                          (*a1 >> 11) & 1,
                          *(_BYTE *)(v9 + 15) >> 4,
                          *((_BYTE *)a1 + 24)) == 0;
    result = 3221226536LL;
    if ( !v14 )
      return v6;
  }
  return result;
}
