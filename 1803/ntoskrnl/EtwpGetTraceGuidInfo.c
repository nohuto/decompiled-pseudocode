/*
 * XREFs of EtwpGetTraceGuidInfo @ 0x1407A62B4
 * Callers:
 *     NtTraceControl @ 0x14058F8F0 (NtTraceControl.c)
 * Callees:
 *     RtlUIntAdd @ 0x1400382D0 (RtlUIntAdd.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405906D4 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405907D0 (EtwpFindGuidEntryByGuid.c)
 */

__int64 __fastcall EtwpGetTraceGuidInfo(__int64 a1, __int64 a2, int *a3, unsigned int *a4)
{
  size_t v4; // r15
  int v5; // r12d
  int v6; // ebx
  __int64 v10; // rdi
  unsigned int i; // ecx
  __int64 v12; // r14
  GUID *v13; // r8
  _QWORD *GuidEntryByGuid; // r14
  __int64 v16; // rdx
  unsigned int v17; // ecx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // edi
  _DWORD *v22; // r12
  char v23; // r13
  __int64 v24; // r8
  __int64 v25; // r9
  _QWORD *v26; // r11
  _BYTE *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r10
  unsigned int j; // r13d
  __int64 v31; // r11
  _OWORD *v32; // r10
  __int64 v33; // rax
  _OWORD *v34; // r10
  __int64 v35; // r11
  int v36; // ecx
  _DWORD *v37; // r9
  unsigned int v38; // ecx
  int v39; // r13d
  unsigned int k; // r12d
  _OWORD *v41; // r10
  __int64 v42; // r11
  NTSTATUS v43; // eax
  __int64 v44; // r9
  __int64 v45; // r10
  __int64 v46; // r11
  int v47; // [rsp+20h] [rbp-30h]
  unsigned int v48; // [rsp+24h] [rbp-2Ch]
  unsigned int v49; // [rsp+28h] [rbp-28h]
  _BYTE *v50; // [rsp+30h] [rbp-20h]
  __int64 v51; // [rsp+40h] [rbp-10h]
  UINT uAugend; // [rsp+A0h] [rbp+50h] BYREF
  unsigned int *v53; // [rsp+A8h] [rbp+58h]

  v53 = a4;
  v4 = *a4;
  v5 = 0;
  v6 = 0;
  uAugend = 8;
  v47 = 0;
  if ( a1 == EtwpHostSiloState )
    v10 = 2147353472LL;
  else
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1104LL) + 550LL;
  for ( i = 0; i < 0xA; ++i )
  {
    v12 = 2LL * i;
    v13 = (&EtwpUmglProviders)[2 * i];
    if ( *(_QWORD *)&v13->Data1 == *(_QWORD *)a2 && *(_QWORD *)v13->Data4 == *(_QWORD *)(a2 + 8) )
    {
      memset(a3, 0, v4);
      v16 = *((unsigned __int8 *)&(&EtwpUmglProviders)[v12] + 8);
      v17 = 24;
      if ( *(_BYTE *)(v10 + 2 * v16) )
      {
        v17 = 56;
        if ( (unsigned int)v4 >= 0x38 )
        {
          a3[3] = 1;
          a3[6] = 1;
          *((_WORD *)a3 + 15) = *(unsigned __int8 *)(v10 + 2 * v16);
          *((_QWORD *)a3 + 5) = *(unsigned __int8 *)(v10 + 2 * v16 + 1);
        }
      }
      else
      {
        if ( (unsigned int)v4 < 0x18 )
          goto LABEL_17;
        a3[3] = 0;
      }
      if ( v17 <= (unsigned int)v4 )
      {
        *a3 = 1;
        a3[5] = 1;
        a3[4] = 0;
        a3[2] = 0;
LABEL_18:
        *a4 = v17;
        return (unsigned int)v6;
      }
LABEL_17:
      v6 = -1073741789;
      goto LABEL_18;
    }
  }
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, (_DWORD *)a2, 0);
  if ( !GuidEntryByGuid )
    return 3221226133LL;
  memset(a3, 0, *a4);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(GuidEntryByGuid + 48), 0LL);
  v20 = GuidEntryByGuid[5];
  v21 = uAugend;
  GuidEntryByGuid[49] = KeGetCurrentThread();
  if ( (_QWORD *)v20 != GuidEntryByGuid + 5 )
  {
    while ( 1 )
    {
      v49 = v21;
      v22 = (int *)((char *)a3 + v21);
      v23 = 0;
      if ( RtlUIntAdd(v21, 0x10u, &uAugend) < 0 )
        break;
      v21 = uAugend;
      v27 = (_BYTE *)(v25 + 98);
      ++v47;
      v19 = 0LL;
      v28 = v25;
      v48 = 0;
      v50 = (_BYTE *)(v25 + 98);
      if ( (*(_BYTE *)(v25 + 98) & 8) != 0 )
      {
        v23 = 1;
        if ( (*((_BYTE *)GuidEntryByGuid + 75) & 1) != 0 )
        {
          if ( RtlUIntAdd(uAugend, 0x20u, &uAugend) < 0 )
            break;
          v21 = uAugend;
          v28 = v25;
          v19 = 1LL;
          v27 = v50;
          if ( uAugend <= (unsigned int)v4 )
          {
            *(_DWORD *)v29 = 1;
            *(_BYTE *)(v29 + 4) = *((_BYTE *)GuidEntryByGuid + 74);
            *(_QWORD *)(v29 + 16) = GuidEntryByGuid[8];
            *(_WORD *)(v29 + 6) = *((_WORD *)GuidEntryByGuid + 36);
          }
        }
      }
      else if ( *(_BYTE *)(v25 + 100) || *(_BYTE *)(v25 + 101) )
      {
        for ( j = 0; j < 8; ++j )
        {
          v31 = 4LL * j;
          if ( LODWORD(GuidEntryByGuid[v31 + 14]) && ((unsigned __int8)(1 << j) & *(_BYTE *)(v25 + 100)) != 0 )
          {
            v48 = v19 + 1;
            if ( RtlUIntAdd(v21, 0x20u, &uAugend) < 0 )
              goto LABEL_57;
            v21 = uAugend;
            LODWORD(v19) = v48;
            if ( uAugend <= (unsigned int)v4 )
            {
              *v32 = *(_OWORD *)&GuidEntryByGuid[v31 + 14];
              v32[1] = *(_OWORD *)&GuidEntryByGuid[v31 + 16];
            }
          }
          v33 = *(_QWORD *)(v25 + 40);
          v51 = v33;
          if ( v33 && *(_DWORD *)(v33 + v31 * 8 + 112) && ((unsigned __int8)(1 << j) & *(_BYTE *)(v25 + 101)) != 0 )
          {
            v48 = v19 + 1;
            if ( RtlUIntAdd(v21, 0x20u, &uAugend) < 0 )
              goto LABEL_57;
            v21 = uAugend;
            if ( uAugend <= (unsigned int)v4 )
            {
              *v34 = *(_OWORD *)(v51 + v35 + 112);
              v34[1] = *(_OWORD *)(v51 + v35 + 128);
            }
          }
          v19 = v48;
        }
        v27 = v50;
        v26 = GuidEntryByGuid + 5;
        v23 = 0;
        v28 = v25;
      }
      v20 = *(_QWORD *)v25;
      if ( v21 <= (unsigned int)v4 )
      {
        if ( v23 == 1 )
          v22[3] = 1;
        if ( (*v27 & 2) != 0 )
          v36 = *(_DWORD *)(*(_QWORD *)(v28 + 80) + 736LL);
        else
          v36 = 0;
        v22[2] = v36;
        v22[1] = v19;
        if ( (_QWORD *)v20 == v26 )
        {
          *v22 = 0;
LABEL_53:
          v5 = v47;
          goto LABEL_54;
        }
        *v22 = v21 - v49;
      }
      if ( (_QWORD *)v20 == v26 )
        goto LABEL_53;
    }
LABEL_57:
    GuidEntryByGuid[49] = 0LL;
    ExReleasePushLockEx((ULONG_PTR)(GuidEntryByGuid + 48), 0LL, v24, v25);
    KeLeaveCriticalRegion();
LABEL_58:
    v21 = uAugend;
    v6 = -2147483643;
    goto LABEL_59;
  }
LABEL_54:
  GuidEntryByGuid[49] = 0LL;
  ExReleasePushLockEx((ULONG_PTR)(GuidEntryByGuid + 48), 0LL, v19, v20);
  KeLeaveCriticalRegion();
  if ( !v5 )
  {
    v5 = 2;
    v47 = 2;
    if ( RtlUIntAdd(v21, 0x10u, &uAugend) >= 0 )
    {
      v38 = uAugend;
      v39 = 0;
      for ( k = 0; k < 8; ++k )
      {
        if ( LODWORD(GuidEntryByGuid[4 * k + 14]) )
        {
          ++v39;
          if ( RtlUIntAdd(v38, 0x20u, &uAugend) < 0 )
            goto LABEL_58;
          v38 = uAugend;
          if ( uAugend <= (unsigned int)v4 )
          {
            *v41 = *(_OWORD *)((char *)GuidEntryByGuid + v42 + 112);
            v41[1] = *(_OWORD *)((char *)GuidEntryByGuid + v42 + 128);
          }
        }
      }
      if ( v38 <= (unsigned int)v4 )
      {
        v37[2] = 0;
        v37[1] = v39;
        *v37 = v38 - v21;
        v37[3] = 2;
      }
      if ( RtlUIntAdd(v38, 0x10u, &uAugend) < 0 )
        goto LABEL_58;
      v43 = RtlUIntAdd(uAugend, 0x20u, &uAugend);
      v21 = uAugend;
      if ( v43 < 0 )
      {
        v6 = -2147483643;
        goto LABEL_59;
      }
      if ( uAugend > (unsigned int)v4 )
      {
LABEL_59:
        v5 = v47;
      }
      else
      {
        *(_QWORD *)(v44 + 4) = v46;
        *(_DWORD *)v44 = v46;
        *(_DWORD *)(v44 + 12) = 3;
        *(_DWORD *)v45 = *((_BYTE *)GuidEntryByGuid + 75) & 1;
        v5 = 2;
        if ( (*((_BYTE *)GuidEntryByGuid + 75) & 1) != 0 )
        {
          *(_DWORD *)(v44 + 4) = 1;
          *(_BYTE *)(v45 + 4) = *((_BYTE *)GuidEntryByGuid + 74);
          *(_QWORD *)(v45 + 16) = GuidEntryByGuid[8];
          *(_WORD *)(v45 + 6) = *((_WORD *)GuidEntryByGuid + 36);
        }
      }
    }
    else
    {
      v21 = uAugend;
      v6 = -2147483643;
    }
  }
  EtwpUnreferenceGuidEntry(GuidEntryByGuid);
  if ( v6 >= 0 )
  {
    if ( v21 > (unsigned int)v4 )
      v6 = -1073741789;
    else
      *a3 = v5;
  }
  *v53 = v21;
  return (unsigned int)v6;
}
