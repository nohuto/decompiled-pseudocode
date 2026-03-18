/*
 * XREFs of SdbpCheckAllAttributes @ 0x1407D8878
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x14061E740 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x1407D60E0 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     SdbReadDWORDTag @ 0x1405FCF24 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x1405FD310 (SdbFindFirstTag.c)
 *     AslAlloc @ 0x1405FDD00 (AslAlloc.c)
 *     SdbReadQWORDTag @ 0x14061DF68 (SdbReadQWORDTag.c)
 *     SdbGetStringTagPtr @ 0x14061F404 (SdbGetStringTagPtr.c)
 *     SdbpCheckAttribute @ 0x1407D8B54 (SdbpCheckAttribute.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 *     AslFileAllocAndGetAttributes @ 0x1407DC024 (AslFileAllocAndGetAttributes.c)
 */

__int64 __fastcall SdbpCheckAllAttributes(int *a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned int v6; // ebx
  unsigned int v7; // r15d
  __int64 v8; // r14
  int v9; // edi
  BOOL v10; // eax
  char *v11; // rbp
  unsigned int v12; // r13d
  int *v13; // r12
  __int16 v14; // bx
  unsigned int FirstTag; // eax
  __int64 *p_DWORDTag; // r14
  int v17; // ecx
  unsigned int v18; // r15d
  __int64 StringTagPtr; // rax
  __int64 v20; // rcx
  int Attributes; // eax
  void (__fastcall *v22)(_QWORD, __int64 *, _QWORD, _QWORD); // rax
  char *v23; // rdi
  __int64 v24; // rsi
  int v25; // eax
  __int64 v27; // [rsp+20h] [rbp-68h]
  unsigned int v28; // [rsp+30h] [rbp-58h] BYREF
  int DWORDTag; // [rsp+34h] [rbp-54h] BYREF
  __int64 QWORDTag; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int16 v35; // [rsp+B0h] [rbp+28h]

  v6 = 0;
  *a1 = 0;
  v7 = a4;
  v8 = a3;
  v9 = 1;
  v28 = 1;
  if ( !a5 )
    return v6;
  if ( *(_DWORD *)(a5 + 80) )
  {
    v10 = *(_QWORD *)(a5 + 32) != 0LL;
    goto LABEL_6;
  }
  if ( !*(_QWORD *)(a5 + 8) )
  {
    v10 = 0;
LABEL_6:
    if ( !v10 )
      return v6;
  }
  v11 = (char *)AslAlloc((__int64)a1, 0x420uLL);
  if ( !v11 )
    return (unsigned int)-1073741801;
  v12 = 0;
  v13 = dword_14039D1D4;
  while ( 1 )
  {
    v14 = *((_WORD *)v13 - 2);
    v35 = v14;
    FirstTag = SdbFindFirstTag(v8, v7, v14);
    if ( !FirstTag )
      goto LABEL_26;
    p_DWORDTag = 0LL;
    v17 = v14 & 0xF000;
    v18 = 0;
    switch ( v17 )
    {
      case 16384:
        DWORDTag = SdbReadDWORDTag(a3, FirstTag, 0);
        p_DWORDTag = (__int64 *)&DWORDTag;
        v18 = 4;
        break;
      case 20480:
        QWORDTag = SdbReadQWORDTag(a3, FirstTag, 0LL);
        p_DWORDTag = &QWORDTag;
        v18 = 8;
        break;
      case 24576:
        StringTagPtr = SdbGetStringTagPtr(a3, FirstTag);
        v20 = -1LL;
        p_DWORDTag = (__int64 *)StringTagPtr;
        do
          ++v20;
        while ( *(_WORD *)(StringTagPtr + 2 * v20) );
        v18 = 2 * v20 + 2;
        break;
    }
    Attributes = AslFileAllocAndGetAttributes(v11, a5, 1LL << *v13);
    v6 = Attributes;
    if ( Attributes < 0 )
      break;
    if ( (*(_DWORD *)&v11[32 * *v13 + 24] & 1) == 0 )
      goto LABEL_28;
    if ( !(unsigned int)SdbpCheckAttribute((unsigned int)&v28, v35, (_DWORD)p_DWORDTag, v18, (__int64)&v11[32 * *v13]) )
    {
      v6 = -1073741595;
      LODWORD(v27) = -1073741595;
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpCheckAllAttributes",
        756,
        (unsigned int)"SdbpCheckAttribute failed [%x]",
        v27);
      goto LABEL_29;
    }
    v9 = v28;
    v22 = *(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD))(a2 + 976);
    if ( v22 )
      v22(v35, p_DWORDTag, v18, v28);
    if ( !v9 )
    {
LABEL_27:
      *a1 = v9;
LABEL_28:
      v6 = 0;
      goto LABEL_29;
    }
    v8 = a3;
    v7 = a4;
LABEL_26:
    ++v12;
    v13 += 2;
    if ( v12 >= 0x22 )
      goto LABEL_27;
  }
  LODWORD(v27) = dword_14039D1D4[2 * v12];
  AslLogCallPrintf(
    1,
    (unsigned int)"SdbpCheckAllAttributes",
    733,
    (unsigned int)"Failed to get attribute %d [%x]",
    v27,
    Attributes);
LABEL_29:
  v23 = v11 + 16;
  v24 = 33LL;
  do
  {
    v25 = *((_DWORD *)v23 + 2);
    if ( (v25 & 1) != 0 && *((_DWORD *)v23 - 4) == 4 && (v25 & 4) != 0 && *(_QWORD *)v23 )
      ExFreePoolWithTag(*(PVOID *)v23, 0x74705041u);
    v23 += 32;
    --v24;
  }
  while ( v24 );
  memset(v11, 0, 0x420uLL);
  ExFreePoolWithTag(v11, 0x74705041u);
  return v6;
}
