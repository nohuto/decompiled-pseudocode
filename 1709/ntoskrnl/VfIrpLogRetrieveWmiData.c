/*
 * XREFs of VfIrpLogRetrieveWmiData @ 0x1407C1048
 * Callers:
 *     ViDdiDispatchWmiQueryAllData @ 0x1407A8690 (ViDdiDispatchWmiQueryAllData.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ObQueryNameString @ 0x1405907A0 (ObQueryNameString.c)
 */

__int64 __fastcall VfIrpLogRetrieveWmiData(
        unsigned int a1,
        __int64 a2,
        unsigned int *a3,
        _DWORD *a4,
        _DWORD *a5,
        unsigned int *a6)
{
  __int64 v7; // rbx
  _OBJECT_NAME_INFORMATION *PoolWithTag; // rdi
  int v10; // ecx
  __int64 v11; // rsi
  _QWORD *v12; // r15
  _QWORD *v13; // rdx
  _QWORD *v14; // rax
  NTSTATUS v15; // ebx
  unsigned int v16; // ebp
  unsigned int *v17; // r13
  _WORD *v18; // r14
  _QWORD *v19; // rax
  _QWORD *v20; // rsi
  _OBJECT_NAME_INFORMATION *v21; // rax
  void *v22; // rcx
  unsigned int v23; // esi
  __int64 v24; // r13
  _OWORD *v25; // r14
  unsigned int v26; // ebp
  unsigned int v27; // edi
  int v28; // ebp
  unsigned int v29; // edi
  char *v30; // r14
  __int64 v31; // r12
  _DWORD *v32; // r15
  _DWORD *v33; // rdx
  int v34; // eax
  unsigned int v35; // esi
  unsigned int *v36; // rcx
  char *v37; // r14
  ULONG ReturnLength; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v39; // [rsp+24h] [rbp-64h]
  ULONG Length[2]; // [rsp+28h] [rbp-60h]
  _QWORD **v41; // [rsp+30h] [rbp-58h]
  __int64 v42; // [rsp+38h] [rbp-50h]
  unsigned int *v43; // [rsp+40h] [rbp-48h]
  unsigned int *v44; // [rsp+48h] [rbp-40h]

  v7 = a1;
  *a3 = 0;
  *a4 = 0;
  *a5 = 0;
  *a6 = 0;
  *(_QWORD *)Length = 16LL;
  PoolWithTag = (_OBJECT_NAME_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x74496656u);
  if ( !PoolWithTag )
    return 3221225626LL;
  v10 = 0;
  v11 = 3 * v7;
  v42 = 3 * v7;
  v12 = (_QWORD *)(ViIrpLogDatabase + 8 + 24 * v7);
  v13 = (_QWORD *)*v12;
  if ( (_QWORD *)*v12 != v12 )
  {
    v14 = (_QWORD *)*v12;
    do
    {
      v14 = (_QWORD *)*v14;
      ++v10;
    }
    while ( v14 != v12 );
  }
  v15 = 0;
  v16 = 8 * v10 + 60 + 4 * v10;
  v39 = 8 * v10 + 60;
  v17 = (unsigned int *)(a2 + v39);
  v18 = (_WORD *)(a2 + v16);
  v43 = (unsigned int *)(a2 + 60);
  v19 = v12;
  v41 = (_QWORD **)v12;
  if ( v13 != v12 )
  {
    while ( 1 )
    {
      v20 = (_QWORD *)*v19;
      v15 = ObQueryNameString(*(PVOID *)(*v19 - 8LL), PoolWithTag, Length[0], &ReturnLength);
      if ( v15 == -1073741820 )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
        v21 = (_OBJECT_NAME_INFORMATION *)ExAllocatePoolWithTag(PagedPool, ReturnLength, 0x74496656u);
        PoolWithTag = v21;
        if ( !v21 )
          return (unsigned int)-1073741670;
        v22 = (void *)*(v20 - 1);
        Length[0] = ReturnLength;
        v15 = ObQueryNameString(v22, v21, ReturnLength, &ReturnLength);
      }
      if ( v15 >= 0 )
      {
        if ( PoolWithTag->Name.Length )
        {
          if ( a2 )
            *v17 = v16;
          v23 = PoolWithTag->Name.Length + 18;
          v44 = v17 + 1;
          v24 = v23 >> 1;
          if ( a2 )
            *v18 = v23;
          v25 = v18 + 1;
          v26 = v16 + 2;
          if ( a2 )
          {
            *v25 = *(_OWORD *)L"VERIFIER";
            memmove(v25 + 1, PoolWithTag->Name.Buffer, PoolWithTag->Name.Length);
            *((_WORD *)v25 + (unsigned int)(v24 - 1)) = 0;
          }
          v18 = (_WORD *)v25 + v24;
          v16 = v23 + v26;
          v17 = v44;
        }
        else
        {
          *((_DWORD *)v20 + 4) |= 2u;
        }
        v19 = *v41;
        v41 = (_QWORD **)v19;
        if ( (_QWORD *)*v19 != v12 )
          continue;
      }
      v11 = v42;
      break;
    }
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  if ( v15 < 0 )
    return (unsigned int)v15;
  v27 = v16 + 7;
  v28 = 0;
  v29 = v27 & 0xFFFFFFF8;
  v30 = (char *)(a2 + v29);
  Length[0] = v29;
  v31 = ViIrpLogDatabase + 8 + 8 * v11;
  v32 = (_DWORD *)v31;
  if ( *(_QWORD *)v31 != v31 )
  {
    do
    {
      v33 = *(_DWORD **)v32;
      v34 = *(_DWORD *)(*(_QWORD *)v32 + 16LL);
      if ( (v34 & 2) == 0 )
      {
        ++v28;
        if ( (v34 & 1) != 0 )
          v35 = v33[6];
        else
          v35 = v33[7];
        if ( a2 )
        {
          v36 = v43;
          v43[1] = 40 * v35 + 8;
          *v36 = v29;
          *(_DWORD *)v30 = v33[5];
          *((_DWORD *)v30 + 1) = v35;
          v37 = v30 + 8;
          v43 = v36 + 2;
          memmove(v37, v33 + 8, 40LL * v35);
          v30 = &v37[40 * v35];
        }
        v29 += 40 * v35 + 8;
      }
      v32 = *(_DWORD **)v32;
    }
    while ( *(_QWORD *)v32 != v31 );
  }
  *a3 = v39;
  *a4 = v28;
  *a5 = Length[0];
  *a6 = v29;
  return 0LL;
}
