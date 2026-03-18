/*
 * XREFs of SdbpCheckAllAttributes @ 0x14072DD80
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x1405BB5C0 (SdbpCheckMatchingFiles.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SdbReadDWORDTag @ 0x1404AFD04 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x1404AFF40 (SdbFindFirstTag.c)
 *     AslAlloc @ 0x1404B5F00 (AslAlloc.c)
 *     SdbGetStringTagPtr @ 0x1405BC274 (SdbGetStringTagPtr.c)
 *     SdbReadQWORDTag @ 0x1405DA234 (SdbReadQWORDTag.c)
 *     SdbpCheckAttribute @ 0x14072E05C (SdbpCheckAttribute.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
 *     AslFileAllocAndGetAttributes @ 0x14072F250 (AslFileAllocAndGetAttributes.c)
 */

__int64 __fastcall SdbpCheckAllAttributes(int *a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned int Attributes; // ebx
  unsigned int v7; // r15d
  __int64 v8; // r14
  int v9; // edi
  BOOL v10; // eax
  _DWORD *v11; // rbp
  unsigned int v12; // r13d
  int *v13; // r12
  __int16 v14; // bx
  unsigned int FirstTag; // eax
  __int64 *p_DWORDTag; // r14
  int v17; // ecx
  unsigned int v18; // r15d
  __int64 StringTagPtr; // rax
  __int64 v20; // rcx
  void (__fastcall *v21)(_QWORD, __int64 *, _QWORD, _QWORD); // rax
  _DWORD *v22; // rdi
  __int64 v23; // rsi
  void *v24; // rcx
  unsigned int v26; // [rsp+30h] [rbp-58h] BYREF
  int DWORDTag; // [rsp+34h] [rbp-54h] BYREF
  __int64 QWORDTag; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int16 v33; // [rsp+B0h] [rbp+28h]

  Attributes = 0;
  *a1 = 0;
  v7 = a4;
  v8 = a3;
  v9 = 1;
  v26 = 1;
  if ( !a5 )
    return Attributes;
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
      return Attributes;
  }
  v11 = AslAlloc((__int64)a1, 0x420uLL);
  if ( !v11 )
    return (unsigned int)-1073741801;
  v12 = 0;
  v13 = (int *)&unk_1403414C4;
  while ( 1 )
  {
    v14 = *((_WORD *)v13 - 2);
    v33 = v14;
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
    if ( (Attributes & 0x80000000) != 0 )
      break;
    if ( (v11[8 * *v13 + 6] & 1) == 0 )
      goto LABEL_28;
    if ( !(unsigned int)SdbpCheckAttribute((unsigned int)&v26, v33, (_DWORD)p_DWORDTag, v18, (__int64)&v11[8 * *v13]) )
    {
      Attributes = -1073741595;
      AslLogCallPrintf(1, (unsigned int)"SdbpCheckAllAttributes", 752, (unsigned int)"SdbpCheckAttribute failed [%x]");
      goto LABEL_29;
    }
    v9 = v26;
    v21 = *(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD))(a2 + 976);
    if ( v21 )
      v21(v33, p_DWORDTag, v18, v26);
    if ( !v9 )
    {
LABEL_27:
      *a1 = v9;
LABEL_28:
      Attributes = 0;
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
  AslLogCallPrintf(1, (unsigned int)"SdbpCheckAllAttributes", 729, (unsigned int)"Failed to get attribute %d [%x]");
LABEL_29:
  v22 = v11 + 6;
  v23 = 33LL;
  do
  {
    if ( (*v22 & 1) != 0 && *(v22 - 6) == 4 && (*v22 & 4) != 0 )
    {
      v24 = (void *)*((_QWORD *)v22 - 1);
      if ( v24 )
        ExFreePoolWithTag(v24, 0x74705041u);
    }
    v22 += 8;
    --v23;
  }
  while ( v23 );
  memset(v11, 0, 0x420uLL);
  ExFreePoolWithTag(v11, 0x74705041u);
  return Attributes;
}
