/*
 * XREFs of MiValidateExistingImage @ 0x1404F12F4
 * Callers:
 *     MiShareExistingControlArea @ 0x1404C11C4 (MiShareExistingControlArea.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     MiValidateSectionSigningPolicy @ 0x1404F1598 (MiValidateSectionSigningPolicy.c)
 *     MiRelocateImageAgain @ 0x1404F16CC (MiRelocateImageAgain.c)
 *     SeCompareSigningLevels @ 0x1404F1880 (SeCompareSigningLevels.c)
 *     SeGetImageRequiredSigningLevel @ 0x1405626F0 (SeGetImageRequiredSigningLevel.c)
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
  int v10; // eax
  __int64 v11; // r14
  int v12; // ebp
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // esi
  int UserDirectoryTableBase; // esi
  int v17; // eax
  unsigned __int8 v18; // r8
  __int64 v19; // [rsp+A0h] [rbp+8h] BYREF
  BOOL v20; // [rsp+A8h] [rbp+10h]
  PVOID Object; // [rsp+B0h] [rbp+18h]

  v1 = (__int64 *)*((_QWORD *)a1 + 8);
  v2 = 0;
  Object = (PVOID)*((_QWORD *)a1 + 7);
  v4 = 0;
  v5 = 0;
  v20 = 0;
  if ( (v1[7] & 0x800) != 0 && (*a1 & 0x20000) != 0 )
  {
    dword_1403CB498 = 81;
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
    v11 = *v1;
    v12 = v10 | 0x10;
    v13 = (v9 >> 11) & 1;
    if ( ((v9 >> 11) & 1) == 0 )
      v12 = v10;
    if ( (v9 & 0x400) != 0 && (v9 & 0x10) == 0 && !(_DWORD)v13 )
    {
      UserDirectoryTableBase = KeGetCurrentThread()->ApcState.Process[2].UserDirectoryTableBase;
      if ( *((_BYTE *)a1 + 24) )
      {
        result = SeGetImageRequiredSigningLevel(Object, (__int64)&v19);
        if ( (int)result < 0 )
          return result;
        *((_BYTE *)a1 + 24) = v19;
        v20 = (UserDirectoryTableBase & 0x800000) != 0;
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
    if ( (v14 & 0x400) != 0 )
    {
      if ( (v14 & 0x10) != 0 )
        goto LABEL_34;
      LOBYTE(v14) = *(_BYTE *)(v11 + 15);
      LOBYTE(v13) = *((_BYTE *)a1 + 24);
      if ( qword_1403A5D20 )
      {
        LOBYTE(v8) = (unsigned __int8)v14 >> 4;
        v17 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64))qword_1403A5D20)(v15, v13, v8, 6LL);
        LOBYTE(v13) = *((_BYTE *)a1 + 24);
        LOBYTE(v14) = *(_BYTE *)(v11 + 15);
        if ( v17 )
          goto LABEL_34;
      }
      if ( (LOBYTE(v14) = (unsigned __int8)v14 >> 4, !(unsigned int)SeCompareSigningLevels(v14, v13))
        || (v15 & 0x40000000) != 0 && (*((_DWORD *)v1 + 23) & 0xC0000) != 0x80000
        || (v18 = *(_BYTE *)(v11 + 15), (v18 & 0xF0) == 0) && *(char *)(*(_QWORD *)(v11 + 56) + 46LL) < 0 )
      {
LABEL_34:
        v18 = *(_BYTE *)(v11 + 15);
        v5 = 1;
      }
      else
      {
        v5 = 0;
      }
      LOBYTE(v13) = v4;
      LOBYTE(v14) = v18 >> 4;
      v2 = (unsigned int)SeCompareSigningLevels(v14, v13) == 0;
    }
    return MiValidateSectionSigningPolicy(
             1,
             (_DWORD)Object,
             (_DWORD)v1,
             a1[42],
             *((_QWORD *)a1 + 20),
             (*a1 >> 11) & 1,
             v15,
             v5,
             v2,
             v20,
             *((_BYTE *)a1 + 24),
             v4);
  }
  return result;
}
