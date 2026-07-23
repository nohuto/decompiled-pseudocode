/*
 * XREFs of EtwpGetTraceGuidInfo @ 0x1405D8AFC
 * Callers:
 *     NtTraceControl @ 0x14049AB40 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     EtwpUnreferenceGuidEntry @ 0x140491D2C (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x140491E20 (EtwpFindGuidEntryByGuid.c)
 */

__int64 __fastcall EtwpGetTraceGuidInfo(__int64 a1, __int64 a2, int *a3, int *a4)
{
  unsigned int v4; // r14d
  unsigned int v5; // edi
  int v9; // r13d
  __int64 v10; // r12
  unsigned int v11; // ebx
  __int64 v12; // rbp
  unsigned int i; // edx
  __int64 v14; // r15
  GUID *v15; // r8
  __int64 v16; // rcx
  _QWORD *GuidEntryByGuid; // rbp
  unsigned int *v18; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v20; // rdx
  __int64 *v21; // r8
  __int64 v22; // r11
  _BYTE *v23; // r10
  _DWORD *v24; // r11
  char *v25; // r9
  char v26; // cl
  int v27; // r13d
  __int64 *v28; // r15
  unsigned int v29; // r12d
  __int64 v30; // r10
  __int64 v31; // r15
  int v32; // ecx
  __int64 v34; // rcx
  _OWORD *v35; // rdx
  unsigned int v36; // r9d
  unsigned int v37; // ebx
  _DWORD *v38; // rcx
  _OWORD *v39; // rax
  int v40; // r8d
  __int64 v41; // rcx
  unsigned int v42; // ebx
  char *v43; // rcx
  char *v44; // rdx
  int v45; // ecx
  __int64 v46; // rdx
  unsigned int v47; // [rsp+20h] [rbp-58h]
  int v48; // [rsp+90h] [rbp+18h]

  v4 = *a4;
  v5 = 0;
  v9 = 0;
  v10 = 8LL;
  v11 = 8;
  if ( a1 == EtwpHostSiloState )
    v12 = 2147353472LL;
  else
    v12 = *(_QWORD *)(*(_QWORD *)a1 + 1104LL) + 550LL;
  for ( i = 0; i < 0xA; ++i )
  {
    v14 = 2LL * i;
    v15 = (&EtwpUmglProviders)[2 * i];
    v16 = *(_QWORD *)&v15->Data1 - *(_QWORD *)a2;
    if ( *(_QWORD *)&v15->Data1 == *(_QWORD *)a2 )
      v16 = *(_QWORD *)v15->Data4 - *(_QWORD *)(a2 + 8);
    if ( !v16 )
    {
      memset(a3, 0, (unsigned int)*a4);
      v45 = 24;
      v46 = *((unsigned __int8 *)&(&EtwpUmglProviders)[v14] + 8);
      if ( *(_BYTE *)(v12 + 2 * v46) )
      {
        v45 = 56;
        if ( v4 >= 0x38 )
        {
          a3[3] = 1;
          a3[6] = 1;
          *((_WORD *)a3 + 15) = *(unsigned __int8 *)(v12 + 2 * v46);
          *((_QWORD *)a3 + 5) = *(unsigned __int8 *)(v12 + 2 * v46 + 1);
LABEL_61:
          *a3 = 1;
          a3[5] = 1;
          a3[4] = 0;
          a3[2] = 0;
LABEL_63:
          *a4 = v45;
          return v5;
        }
      }
      else if ( v4 >= 0x18 )
      {
        a3[3] = 0;
        goto LABEL_61;
      }
      v5 = -1073741789;
      goto LABEL_63;
    }
  }
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, (_DWORD *)a2, 0);
  if ( !GuidEntryByGuid )
    return 3221226133LL;
  v18 = (unsigned int *)a4;
  memset(a3, 0, (unsigned int)*a4);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(GuidEntryByGuid + 48), 0LL);
  v20 = GuidEntryByGuid + 5;
  v21 = (__int64 *)GuidEntryByGuid[5];
  GuidEntryByGuid[49] = KeGetCurrentThread();
  if ( v21 == GuidEntryByGuid + 5 )
    goto LABEL_33;
  while ( 2 )
  {
    v22 = v11;
    v23 = (char *)v21 + 98;
    v47 = v11;
    v11 += 16;
    v48 = v9 + 1;
    v24 = (int *)((char *)a3 + v22);
    v25 = (char *)a3 + v11;
    v26 = 0;
    v27 = 0;
    v28 = v21;
    if ( (*((_BYTE *)v21 + 98) & 8) != 0 )
    {
      v26 = 1;
      if ( (*((_BYTE *)GuidEntryByGuid + 75) & 1) != 0 )
      {
        v11 += 32;
        v27 = 1;
        if ( v11 <= v4 )
        {
          *(_DWORD *)v25 = 1;
          v25[4] = *((_BYTE *)GuidEntryByGuid + 74);
          *((_QWORD *)v25 + 2) = GuidEntryByGuid[8];
          *((_WORD *)v25 + 3) = *((_WORD *)GuidEntryByGuid + 36);
        }
      }
    }
    else if ( *((_BYTE *)v21 + 100) || *((_BYTE *)v21 + 101) )
    {
      v29 = 0;
      v30 = 0LL;
      do
      {
        if ( LODWORD(GuidEntryByGuid[v30 + 14]) )
        {
          if ( ((unsigned __int8)(1 << v29) & *((_BYTE *)v21 + 100)) != 0 )
          {
            ++v27;
            v11 += 32;
            if ( v11 <= v4 )
            {
              *(_OWORD *)v25 = *(_OWORD *)&GuidEntryByGuid[v30 + 14];
              *((_OWORD *)v25 + 1) = *(_OWORD *)&GuidEntryByGuid[v30 + 16];
              v25 += 32;
            }
          }
        }
        v31 = v21[5];
        if ( v31 )
        {
          if ( *(_DWORD *)(v30 * 8 + v31 + 112) )
          {
            if ( ((unsigned __int8)(1 << v29) & *((_BYTE *)v21 + 101)) != 0 )
            {
              ++v27;
              v11 += 32;
              if ( v11 <= v4 )
              {
                *(_OWORD *)v25 = *(_OWORD *)(v30 * 8 + v31 + 112);
                *((_OWORD *)v25 + 1) = *(_OWORD *)(v30 * 8 + v31 + 128);
                v25 += 32;
              }
            }
          }
        }
        ++v29;
        v30 += 4LL;
      }
      while ( v29 < 8 );
      v23 = (char *)v21 + 98;
      v20 = GuidEntryByGuid + 5;
      v10 = 8LL;
      v26 = 0;
      v28 = v21;
    }
    v21 = (__int64 *)*v21;
    if ( v11 > v4 )
    {
LABEL_26:
      v9 = v48;
      if ( v21 == v20 )
        goto LABEL_32;
      continue;
    }
    break;
  }
  if ( v26 == 1 )
    v24[3] = 1;
  if ( (*v23 & 2) != 0 )
    v32 = *(_DWORD *)(v28[10] + 736);
  else
    v32 = 0;
  v24[2] = v32;
  v24[1] = v27;
  if ( v21 != v20 )
  {
    *v24 = v11 - v47;
    goto LABEL_26;
  }
  v9 = v48;
  *v24 = 0;
LABEL_32:
  v18 = (unsigned int *)a4;
LABEL_33:
  GuidEntryByGuid[49] = 0LL;
  ExReleasePushLockEx((ULONG_PTR)(GuidEntryByGuid + 48), 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( !v9 )
  {
    v34 = v11;
    v35 = GuidEntryByGuid + 14;
    v36 = v11;
    v37 = v11 + 16;
    v38 = (int *)((char *)a3 + v34);
    v9 = 2;
    v39 = (_OWORD *)((char *)a3 + v37);
    v40 = 0;
    do
    {
      if ( *(_DWORD *)v35 )
      {
        ++v40;
        v37 += 32;
        if ( v37 <= v4 )
        {
          *v39 = *v35;
          v39[1] = v35[1];
          v39 += 2;
        }
      }
      v35 += 2;
      --v10;
    }
    while ( v10 );
    if ( v37 <= v4 )
    {
      v38[2] = 0;
      v38[1] = v40;
      *v38 = v37 - v36;
      v38[3] = 2;
    }
    v41 = v37;
    v42 = v37 + 16;
    v43 = (char *)a3 + v41;
    v44 = (char *)a3 + v42;
    v11 = v42 + 32;
    if ( v11 <= v4 )
    {
      *(_QWORD *)(v43 + 4) = 0LL;
      *(_DWORD *)v43 = 0;
      *((_DWORD *)v43 + 3) = 3;
      *(_DWORD *)v44 = *((_BYTE *)GuidEntryByGuid + 75) & 1;
      if ( (*((_BYTE *)GuidEntryByGuid + 75) & 1) != 0 )
      {
        *((_DWORD *)v43 + 1) = 1;
        v44[4] = *((_BYTE *)GuidEntryByGuid + 74);
        *((_QWORD *)v44 + 2) = GuidEntryByGuid[8];
        *((_WORD *)v44 + 3) = *((_WORD *)GuidEntryByGuid + 36);
      }
    }
  }
  EtwpUnreferenceGuidEntry(GuidEntryByGuid);
  if ( v4 >= v11 )
    *a3 = v9;
  *v18 = v11;
  return v4 < v11 ? 0xC0000023 : 0;
}
