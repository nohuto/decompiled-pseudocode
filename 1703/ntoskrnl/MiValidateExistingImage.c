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
  ULONG_PTR v2; // r12
  __int64 v4; // rdx
  __int64 result; // rax
  int v6; // r8d
  int v7; // r9d
  unsigned int v8; // edi
  int v9; // edx
  int v10; // ecx
  __int64 v11; // r14
  int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // ebp
  bool v16; // zf
  char v17; // [rsp+60h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 8);
  v2 = *((_QWORD *)a1 + 7);
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
  v8 = result;
  if ( (int)result >= 0 )
  {
    v9 = *a1;
    if ( (*a1 & 0x100) != 0 )
    {
      v10 = 4;
    }
    else if ( (v9 & 0x20) != 0 )
    {
      v10 = 1;
    }
    else if ( (v9 & 0x10) != 0 )
    {
      v10 = (*a1 & 0x1000) != 0 ? 8 : 2;
    }
    else
    {
      v10 = 0;
    }
    v11 = *(_QWORD *)v1;
    v12 = v10 | 0x10;
    if ( (v9 & 0x800) == 0 )
      v12 = v10;
    v13 = v9 & 0xC10;
    if ( (_DWORD)v13 == 1024 )
    {
      LOBYTE(v6) = *((_BYTE *)a1 + 24);
      if ( (_BYTE)v6 )
      {
        LOBYTE(v7) = *(_BYTE *)(v11 + 15) >> 4;
        result = SeGetImageRequiredSigningLevel(v2, v12, v6, v7, (__int64)&v17);
        v8 = result;
        if ( (int)result < 0 )
          return result;
        *((_BYTE *)a1 + 24) = v17;
      }
    }
    v14 = *a1;
    if ( (v14 & 0x20000) != 0 )
    {
      v12 |= 0x40000000u;
      if ( !*((_BYTE *)a1 + 24) )
        *((_BYTE *)a1 + 24) = 4;
    }
    v15 = v12 | 0x20000000;
    if ( (v14 & 0x100000) == 0 )
      v15 = v12;
    if ( (v14 & 0x400) == 0 )
      return v8;
    if ( (v14 & 0x10) == 0 )
    {
      if ( !qword_140348C20 || (LOBYTE(v13) = *(_BYTE *)(v11 + 15) >> 4, !(unsigned int)qword_140348C20(v15, v13)) )
      {
        LOBYTE(v13) = *((_BYTE *)a1 + 24);
        LOBYTE(v14) = *(_BYTE *)(v11 + 15) >> 4;
        if ( (unsigned int)SeCompareSigningLevels(v14, v13) )
        {
          if ( ((v15 & 0x40000000) == 0 || (*(_DWORD *)(v1 + 92) & 0xC0000) == 0x80000)
            && ((*(_BYTE *)(v11 + 15) & 0xF0) != 0 || *(char *)(*(_QWORD *)(v11 + 56) + 46LL) >= 0) )
          {
            return v8;
          }
        }
      }
    }
    result = MiValidateSectionCreate(v2, v1, a1[42], *((_QWORD *)a1 + 20), v15, *((_BYTE *)a1 + 24));
    v8 = result;
    if ( (int)result < 0 )
    {
      dword_14036BFD8 = 60;
      return result;
    }
    v16 = (unsigned int)SeCompareSigningLevelsForAuditableProcess(
                          (__int64)KeGetCurrentThread()->ApcState.Process,
                          (*a1 >> 11) & 1,
                          *(_BYTE *)(v11 + 15) >> 4,
                          *((_BYTE *)a1 + 24)) == 0;
    result = 3221226536LL;
    if ( !v16 )
      return v8;
  }
  return result;
}
