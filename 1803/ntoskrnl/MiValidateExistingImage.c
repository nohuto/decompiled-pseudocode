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
  int v10; // r9d
  int v11; // eax
  __int64 v12; // r14
  int v13; // ebp
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // esi
  int UserDirectoryTableBase; // esi
  int v18; // eax
  unsigned __int8 v19; // r8
  char v20; // [rsp+A0h] [rbp+8h] BYREF
  BOOL v21; // [rsp+A8h] [rbp+10h]
  __int64 v22; // [rsp+B0h] [rbp+18h]

  v1 = (__int64 *)*((_QWORD *)a1 + 8);
  v2 = 0;
  v22 = *((_QWORD *)a1 + 7);
  v4 = 0;
  v5 = 0;
  v21 = 0;
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
        result = SeGetImageRequiredSigningLevel(v22, v13, v8, v10, (__int64)&v20);
        if ( (int)result < 0 )
          return result;
        *((_BYTE *)a1 + 24) = v20;
        v21 = (UserDirectoryTableBase & 0x800000) != 0;
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
    v15 = *a1;
    if ( (v15 & 0x20000) != 0 )
    {
      v13 |= 0x40000000u;
      if ( !*((_BYTE *)a1 + 24) )
        *((_BYTE *)a1 + 24) = 4;
    }
    v16 = v13 | 0x20000000;
    if ( (v15 & 0x100000) == 0 )
      v16 = v13;
    if ( (v15 & 0x400) != 0 )
    {
      if ( (v15 & 0x10) != 0 )
        goto LABEL_34;
      LOBYTE(v15) = *(_BYTE *)(v12 + 15);
      LOBYTE(v14) = *((_BYTE *)a1 + 24);
      if ( qword_1403A5D20 )
      {
        LOBYTE(v8) = (unsigned __int8)v15 >> 4;
        v18 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64))qword_1403A5D20)(v16, v14, v8, 6LL);
        LOBYTE(v14) = *((_BYTE *)a1 + 24);
        LOBYTE(v15) = *(_BYTE *)(v12 + 15);
        if ( v18 )
          goto LABEL_34;
      }
      if ( (LOBYTE(v15) = (unsigned __int8)v15 >> 4, !(unsigned int)SeCompareSigningLevels(v15, v14))
        || (v16 & 0x40000000) != 0 && (*((_DWORD *)v1 + 23) & 0xC0000) != 0x80000
        || (v19 = *(_BYTE *)(v12 + 15), (v19 & 0xF0) == 0) && *(char *)(*(_QWORD *)(v12 + 56) + 46LL) < 0 )
      {
LABEL_34:
        v19 = *(_BYTE *)(v12 + 15);
        v5 = 1;
      }
      else
      {
        v5 = 0;
      }
      LOBYTE(v14) = v4;
      LOBYTE(v15) = v19 >> 4;
      v2 = (unsigned int)SeCompareSigningLevels(v15, v14) == 0;
    }
    return MiValidateSectionSigningPolicy(
             1,
             v22,
             (_DWORD)v1,
             a1[42],
             *((_QWORD *)a1 + 20),
             (*a1 >> 11) & 1,
             v16,
             v5,
             v2,
             v21,
             *((_BYTE *)a1 + 24),
             v4);
  }
  return result;
}
