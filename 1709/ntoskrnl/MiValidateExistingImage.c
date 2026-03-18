/*
 * XREFs of MiValidateExistingImage @ 0x140503E04
 * Callers:
 *     MiShareExistingControlArea @ 0x14049C820 (MiShareExistingControlArea.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     SeCompareSigningLevels @ 0x1405040A0 (SeCompareSigningLevels.c)
 *     MiValidateSectionSigningPolicy @ 0x1405040C8 (MiValidateSectionSigningPolicy.c)
 *     MiRelocateImageAgain @ 0x140504210 (MiRelocateImageAgain.c)
 *     SeGetImageRequiredSigningLevel @ 0x140504F5C (SeGetImageRequiredSigningLevel.c)
 */

__int64 __fastcall MiValidateExistingImage(unsigned int *a1)
{
  __int64 *v1; // r12
  char v2; // bl
  char v4; // r15
  char v5; // r13
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // r8
  unsigned int v9; // ecx
  int v10; // r9d
  int v11; // eax
  __int64 v12; // r14
  int v13; // ebp
  __int64 v14; // rdx
  int UserDirectoryTableBase; // esi
  __int64 v16; // rcx
  unsigned int v17; // esi
  char v18; // [rsp+A0h] [rbp+8h] BYREF
  BOOL v19; // [rsp+A8h] [rbp+10h]
  __int64 v20; // [rsp+B0h] [rbp+18h]

  v1 = (__int64 *)*((_QWORD *)a1 + 8);
  v2 = 0;
  v20 = *((_QWORD *)a1 + 7);
  v4 = 0;
  v5 = 0;
  v19 = 0;
  if ( (v1[7] & 0x800) != 0 && (*a1 & 0x20000) != 0 )
  {
    dword_1403882F8 = 81;
    return 3221226547LL;
  }
  if ( (*a1 & 0x40) != 0 )
    v6 = 2LL;
  else
    v6 = (*a1 & 0x20) != 0;
  result = MiRelocateImageAgain(v1, v6);
  if ( (int)result >= 0 )
  {
    v9 = *a1;
    v10 = 6;
    if ( (*a1 & 0x100) != 0 )
    {
      v11 = 4;
    }
    else if ( (v9 & 0x20) != 0 )
    {
      v11 = 1;
    }
    else if ( (v9 & 0x10) != 0 )
    {
      v11 = (*a1 & 0x1000) != 0 ? 8 : 2;
    }
    else
    {
      v11 = 0;
    }
    v12 = *v1;
    v13 = v11 | 0x10;
    v14 = (v9 >> 11) & 1;
    if ( ((v9 >> 11) & 1) == 0 )
      v13 = v11;
    if ( (v9 & 0x400) != 0 && (v9 & 0x10) == 0 && !(_DWORD)v14 )
    {
      UserDirectoryTableBase = KeGetCurrentThread()->ApcState.Process[2].UserDirectoryTableBase;
      LOBYTE(v8) = *((_BYTE *)a1 + 24);
      if ( (_BYTE)v8 )
      {
        LOBYTE(v10) = *(_BYTE *)(v12 + 15) >> 4;
        result = SeGetImageRequiredSigningLevel(v20, v13, v8, v10, (__int64)&v18);
        if ( (int)result < 0 )
          return result;
        *((_BYTE *)a1 + 24) = v18;
        v19 = (UserDirectoryTableBase & 0x800000) != 0;
      }
      if ( (UserDirectoryTableBase & 0x1000000) != 0 )
      {
        v4 = 8;
      }
      else
      {
        v4 = 0;
        if ( (UserDirectoryTableBase & 0x2000000) != 0 )
          v4 = 6;
      }
    }
    v16 = *a1;
    if ( (v16 & 0x20000) != 0 )
    {
      v13 |= 0x40000000u;
      if ( !*((_BYTE *)a1 + 24) )
        *((_BYTE *)a1 + 24) = 4;
    }
    v17 = v13 | 0x20000000;
    if ( (v16 & 0x100000) == 0 )
      v17 = v13;
    if ( (v16 & 0x400) != 0 )
    {
      v5 = 1;
      if ( (v16 & 0x10) == 0 )
      {
        if ( !qword_1403626C0
          || (LOBYTE(v14) = *((_BYTE *)a1 + 24),
              LOBYTE(v8) = *(_BYTE *)(v12 + 15) >> 4,
              !(unsigned int)qword_1403626C0(v17, v14, v8, 6LL)) )
        {
          LOBYTE(v14) = *((_BYTE *)a1 + 24);
          LOBYTE(v16) = *(_BYTE *)(v12 + 15) >> 4;
          if ( (unsigned int)SeCompareSigningLevels(v16, v14) )
          {
            if ( ((v17 & 0x40000000) == 0 || (*((_DWORD *)v1 + 23) & 0xC0000) == 0x80000)
              && ((*(_BYTE *)(v12 + 15) & 0xF0) != 0 || *(char *)(*(_QWORD *)(v12 + 56) + 46LL) >= 0) )
            {
              v5 = 0;
            }
          }
        }
      }
      LOBYTE(v14) = v4;
      LOBYTE(v16) = *(_BYTE *)(v12 + 15) >> 4;
      v2 = (unsigned int)SeCompareSigningLevels(v16, v14) == 0;
    }
    return MiValidateSectionSigningPolicy(
             1,
             v20,
             (_DWORD)v1,
             a1[42],
             *((_QWORD *)a1 + 20),
             (*a1 >> 11) & 1,
             v17,
             v5,
             v2,
             v19,
             *((_BYTE *)a1 + 24),
             v4);
  }
  return result;
}
