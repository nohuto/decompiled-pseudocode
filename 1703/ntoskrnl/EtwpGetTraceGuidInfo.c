/*
 * XREFs of EtwpGetTraceGuidInfo @ 0x140454F48
 * Callers:
 *     NtTraceControl @ 0x14047FD70 (NtTraceControl.c)
 * Callees:
 *     RtlUIntAdd @ 0x14004C5F0 (RtlUIntAdd.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     memset @ 0x140192D80 (memset.c)
 *     EtwpUnreferenceGuidEntry @ 0x140480BE4 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x140480CD0 (EtwpFindGuidEntryByGuid.c)
 */

__int64 __fastcall EtwpGetTraceGuidInfo(__int64 a1, _QWORD *a2, int *a3, int *a4)
{
  size_t v4; // r13
  int v5; // ebx
  __int64 v9; // rdi
  unsigned int i; // ecx
  __int64 v11; // r14
  GUID *v12; // r8
  ULONG_PTR GuidEntryByGuid; // r14
  int v15; // ecx
  __int64 v16; // rdx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v18; // r15
  __int64 v19; // r10
  unsigned int v20; // edi
  _DWORD *v21; // r12
  __int64 *v22; // r10
  _BYTE *v23; // rdx
  int v24; // r8d
  __int64 *v25; // r9
  char v26; // cl
  __int64 v27; // r11
  unsigned int v28; // eax
  __int64 v29; // r15
  _OWORD *v30; // r11
  __int64 v31; // rcx
  _OWORD *v32; // r11
  int v33; // ecx
  int v34; // r15d
  _DWORD *v35; // r10
  unsigned int v36; // ecx
  int v37; // eax
  unsigned int j; // r12d
  __int64 v39; // r15
  _OWORD *v40; // r11
  NTSTATUS v41; // eax
  _DWORD *v42; // r10
  __int64 v43; // r11
  int v44; // [rsp+20h] [rbp-30h]
  int v45; // [rsp+24h] [rbp-2Ch]
  unsigned int v46; // [rsp+28h] [rbp-28h]
  unsigned int v47; // [rsp+2Ch] [rbp-24h]
  _BYTE *v48; // [rsp+30h] [rbp-20h]
  __int64 v49; // [rsp+40h] [rbp-10h]
  int v50; // [rsp+90h] [rbp+40h]
  UINT uAugend; // [rsp+A0h] [rbp+50h] BYREF
  unsigned int *v52; // [rsp+A8h] [rbp+58h]

  v52 = (unsigned int *)a4;
  v4 = (unsigned int)*a4;
  v5 = 0;
  v45 = 0;
  uAugend = 8;
  if ( a1 == EtwpHostSiloState )
    v9 = 2147353472LL;
  else
    v9 = *(_QWORD *)(*(_QWORD *)a1 + 1072LL) + 550LL;
  for ( i = 0; i < 0xA; ++i )
  {
    v11 = 2LL * i;
    v12 = (&EtwpUmglProviders)[2 * i];
    if ( *(_QWORD *)&v12->Data1 == *a2 && *(_QWORD *)v12->Data4 == a2[1] )
    {
      memset(a3, 0, v4);
      v15 = 24;
      v16 = *((unsigned __int8 *)&(&EtwpUmglProviders)[v11] + 8);
      if ( *(_BYTE *)(v9 + 2 * v16) )
      {
        v15 = 56;
        if ( (unsigned int)v4 >= 0x38 )
        {
          a3[3] = 1;
          a3[6] = 1;
          *((_WORD *)a3 + 15) = *(unsigned __int8 *)(v9 + 2 * v16);
          *((_QWORD *)a3 + 5) = *(unsigned __int8 *)(v9 + 2 * v16 + 1);
LABEL_15:
          *a3 = 1;
          a3[4] = 0;
          a3[2] = 0;
          a3[5] = 1;
LABEL_17:
          *a4 = v15;
          return (unsigned int)v5;
        }
      }
      else if ( (unsigned int)v4 >= 0x18 )
      {
        a3[3] = 0;
        goto LABEL_15;
      }
      v5 = -1073741789;
      goto LABEL_17;
    }
  }
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, a2, 0LL);
  if ( !GuidEntryByGuid )
    return 3221226133LL;
  memset(a3, 0, (unsigned int)*a4);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(GuidEntryByGuid + 384, 0LL);
  v18 = GuidEntryByGuid + 40;
  v19 = *(_QWORD *)(GuidEntryByGuid + 40);
  v20 = uAugend;
  *(_QWORD *)(GuidEntryByGuid + 392) = KeGetCurrentThread();
  while ( v19 != v18 )
  {
    v47 = v20;
    v21 = (int *)((char *)a3 + v20);
    if ( RtlUIntAdd(v20, 0x10u, &uAugend) < 0 )
      goto LABEL_57;
    v20 = uAugend;
    v23 = (char *)v22 + 98;
    v24 = 0;
    ++v45;
    v25 = v22;
    v44 = 0;
    v48 = (char *)v22 + 98;
    if ( (*((_BYTE *)v22 + 98) & 8) != 0 )
    {
      v26 = 1;
      if ( (*(_BYTE *)(GuidEntryByGuid + 75) & 1) != 0 )
      {
        if ( RtlUIntAdd(uAugend, 0x20u, &uAugend) < 0 )
        {
LABEL_57:
          *(_QWORD *)(GuidEntryByGuid + 392) = 0LL;
          v5 = -2147483643;
          ExReleasePushLockEx(GuidEntryByGuid + 384, 0LL);
          KeLeaveCriticalRegion();
LABEL_70:
          v20 = uAugend;
          v34 = v45;
          goto LABEL_74;
        }
        v20 = uAugend;
        v25 = v22;
        v24 = 1;
        v26 = 1;
        v23 = v48;
        if ( uAugend <= (unsigned int)v4 )
        {
          *(_DWORD *)v27 = 1;
          *(_BYTE *)(v27 + 4) = *(_BYTE *)(GuidEntryByGuid + 74);
          *(_QWORD *)(v27 + 16) = *(_QWORD *)(GuidEntryByGuid + 64);
          *(_WORD *)(v27 + 6) = *(_WORD *)(GuidEntryByGuid + 72);
        }
      }
    }
    else
    {
      if ( *((_BYTE *)v22 + 100) || *((_BYTE *)v22 + 101) )
      {
        v28 = 0;
        v46 = 0;
        do
        {
          v29 = 32LL * v28;
          if ( *(_DWORD *)(v29 + GuidEntryByGuid + 112) )
          {
            if ( ((unsigned __int8)(1 << v28) & *((_BYTE *)v22 + 100)) != 0 )
            {
              v44 = v24 + 1;
              if ( RtlUIntAdd(v20, 0x20u, &uAugend) < 0 )
                goto LABEL_57;
              v20 = uAugend;
              v28 = v46;
              v24 = v44;
              if ( uAugend <= (unsigned int)v4 )
              {
                *v30 = *(_OWORD *)(v29 + GuidEntryByGuid + 112);
                v30[1] = *(_OWORD *)(v29 + GuidEntryByGuid + 128);
              }
            }
            else
            {
              v28 = v46;
            }
          }
          v31 = v22[5];
          v49 = v31;
          if ( v31 && *(_DWORD *)(v31 + v29 + 112) )
          {
            if ( ((unsigned __int8)(1 << v28) & *((_BYTE *)v22 + 101)) != 0 )
            {
              v44 = v24 + 1;
              if ( RtlUIntAdd(v20, 0x20u, &uAugend) < 0 )
                goto LABEL_57;
              v20 = uAugend;
              if ( uAugend <= (unsigned int)v4 )
              {
                *v32 = *(_OWORD *)(v49 + v29 + 112);
                v32[1] = *(_OWORD *)(v49 + v29 + 128);
              }
            }
            v28 = v46;
          }
          v24 = v44;
          v46 = ++v28;
        }
        while ( v28 < 8 );
        v23 = v48;
        v18 = GuidEntryByGuid + 40;
        v25 = v22;
      }
      v26 = 0;
    }
    v19 = *v22;
    if ( v20 <= (unsigned int)v4 )
    {
      if ( v26 == 1 )
        v21[3] = 1;
      if ( (*v23 & 2) != 0 )
        v33 = *(_DWORD *)(v25[10] + 736);
      else
        v33 = 0;
      v21[2] = v33;
      v21[1] = v24;
      if ( v19 == v18 )
      {
        *v21 = 0;
        break;
      }
      *v21 = v20 - v47;
    }
  }
  *(_QWORD *)(GuidEntryByGuid + 392) = 0LL;
  ExReleasePushLockEx(GuidEntryByGuid + 384, 0LL);
  KeLeaveCriticalRegion();
  v34 = v45;
  if ( !v45 )
  {
    v34 = 2;
    v45 = 2;
    if ( RtlUIntAdd(v20, 0x10u, &uAugend) < 0 )
      goto LABEL_56;
    v36 = uAugend;
    v37 = 0;
    for ( j = 0; j < 8; ++j )
    {
      v39 = 32LL * j;
      if ( *(_DWORD *)(v39 + GuidEntryByGuid + 112) )
      {
        v50 = v37 + 1;
        if ( RtlUIntAdd(v36, 0x20u, &uAugend) < 0 )
        {
          v5 = -2147483643;
          goto LABEL_70;
        }
        v36 = uAugend;
        v37 = v50;
        if ( uAugend <= (unsigned int)v4 )
        {
          *v40 = *(_OWORD *)(v39 + GuidEntryByGuid + 112);
          v40[1] = *(_OWORD *)(v39 + GuidEntryByGuid + 128);
        }
      }
    }
    v34 = 2;
    if ( v36 <= (unsigned int)v4 )
    {
      v35[2] = 0;
      v35[1] = v37;
      v35[3] = 2;
      *v35 = v36 - v20;
    }
    if ( RtlUIntAdd(v36, 0x10u, &uAugend) < 0 )
    {
LABEL_56:
      v20 = uAugend;
      v5 = -2147483643;
    }
    else
    {
      v41 = RtlUIntAdd(uAugend, 0x20u, &uAugend);
      v20 = uAugend;
      if ( v41 >= 0 )
      {
        if ( uAugend <= (unsigned int)v4 )
        {
          v42[2] = 0;
          v42[1] = 0;
          *v42 = 0;
          v42[3] = 3;
          *(_DWORD *)v43 = *(_BYTE *)(GuidEntryByGuid + 75) & 1;
          if ( (*(_BYTE *)(GuidEntryByGuid + 75) & 1) != 0 )
          {
            v42[1] = 1;
            *(_BYTE *)(v43 + 4) = *(_BYTE *)(GuidEntryByGuid + 74);
            *(_QWORD *)(v43 + 16) = *(_QWORD *)(GuidEntryByGuid + 64);
            *(_WORD *)(v43 + 6) = *(_WORD *)(GuidEntryByGuid + 72);
          }
        }
      }
      else
      {
        v5 = -2147483643;
      }
    }
  }
LABEL_74:
  EtwpUnreferenceGuidEntry(GuidEntryByGuid);
  if ( v5 >= 0 )
  {
    if ( v20 > (unsigned int)v4 )
      v5 = -1073741789;
    else
      *a3 = v34;
  }
  *v52 = v20;
  return (unsigned int)v5;
}
