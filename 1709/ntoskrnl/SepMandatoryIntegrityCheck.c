/*
 * XREFs of SepMandatoryIntegrityCheck @ 0x14007EFF0
 * Callers:
 *     SeAccessCheckByType @ 0x140068AB0 (SeAccessCheckByType.c)
 *     SeAccessCheckWithHint @ 0x14007E4B0 (SeAccessCheckWithHint.c)
 *     SepCommonAccessCheckEx @ 0x14014204C (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046A8D0 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     ExpAcquireResourceSharedLite @ 0x1400801D0 (ExpAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14013FB78 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExAcquireFastResourceShared @ 0x14013FBD0 (ExAcquireFastResourceShared.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memcmp @ 0x14015F370 (memcmp.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepMandatoryIntegrityCheck(
        _DWORD *a1,
        __int64 CurrentIrql,
        char a3,
        __int64 a4,
        char a5,
        __int64 a6)
{
  char v7; // r13
  char v8; // r12
  int v9; // ebx
  int v10; // eax
  __int16 v11; // ax
  __int64 v12; // rax
  __int64 v13; // rdi
  int v14; // eax
  unsigned __int8 *v15; // rdi
  __int64 v16; // rax
  __int16 **v17; // rax
  __int16 *v18; // r14
  unsigned __int8 v19; // al
  int v20; // eax
  __int16 v21; // bp
  __int16 v22; // r15
  int v23; // ecx
  int v24; // ecx
  unsigned __int8 v25; // al
  unsigned int v26; // edx
  unsigned __int8 v27; // al
  char v28; // dl
  char v29; // r11
  __int64 result; // rax
  __int64 v31; // rax
  char v32; // cl
  char v33; // dl
  int v34; // r9d
  int v35; // ecx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v37; // r14
  __int64 v38; // rcx
  struct _KTHREAD *v39; // r8
  int v40; // r8d
  char v41; // [rsp+30h] [rbp-58h]
  PVOID P; // [rsp+40h] [rbp-48h]
  __int64 v45; // [rsp+50h] [rbp-38h]

  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = *(_DWORD *)(a4 + 212);
  *(_DWORD *)(a6 + 8) = v10;
  if ( (v10 & 0xFFFFFFFD) != 0 )
  {
    if ( a3 )
      goto LABEL_43;
    v11 = *(_WORD *)(CurrentIrql + 2);
    if ( (v11 & 0x10) == 0 )
      goto LABEL_43;
    if ( v11 < 0 )
    {
      v31 = *(unsigned int *)(CurrentIrql + 12);
      if ( !(_DWORD)v31 )
        goto LABEL_43;
      v12 = CurrentIrql + v31;
    }
    else
    {
      v12 = *(_QWORD *)(CurrentIrql + 24);
    }
    if ( v12 )
    {
      v13 = v12 + 8;
      CurrentIrql = 0LL;
      if ( *(_WORD *)(v12 + 4) )
      {
        while ( *(_BYTE *)v13 != 17 )
        {
          CurrentIrql = (unsigned int)(CurrentIrql + 1);
          v13 += *(unsigned __int16 *)(v13 + 2);
          if ( (unsigned int)CurrentIrql >= *(unsigned __int16 *)(v12 + 4) )
            goto LABEL_43;
        }
        if ( (*(_BYTE *)(v13 + 1) & 8) == 0 )
        {
          v14 = *(_DWORD *)(v13 + 4);
          v15 = (unsigned __int8 *)(v13 + 8);
          v41 = v14;
          goto LABEL_11;
        }
      }
    }
LABEL_43:
    v15 = (unsigned __int8 *)SepDefaultMandatorySid;
    v41 = 1;
LABEL_11:
    if ( a5 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v37 = *(_QWORD *)(a4 + 48);
      v38 = *(unsigned __int16 *)(v37 + 26);
      if ( (v38 & 0x41) == 1 )
        KeBugCheckEx(0x1C6u, 0xFuLL, *(_QWORD *)(a4 + 48), 0LL, 0LL);
      LOWORD(v38) = *(_WORD *)(v37 + 26) & 1;
      if ( (_WORD)v38 )
      {
        CurrentIrql = KeGetCurrentIrql();
        v39 = KeGetCurrentThread();
        if ( (unsigned __int8)CurrentIrql > 1u )
          KeBugCheckEx(0x1C6u, 0LL, (unsigned __int8)CurrentIrql, 1uLL, 0LL);
        if ( (v39->ApcState.InProgressFlags & 2) != 0 )
          KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
        if ( !(_BYTE)CurrentIrql && (v39->MiscFlags & 0x400) == 0 && !v39->WaitBlock[3].SpareLong )
          KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
      }
      if ( (_WORD)v38 )
      {
        P = (PVOID)ExpAllocateOwnerEntryForLegacyShim(v38, CurrentIrql);
        if ( !(unsigned __int8)ExAcquireFastResourceShared(v37, (ULONG_PTR)P) )
          ExFreePoolWithTag(P, 0);
      }
      else
      {
        LOBYTE(CurrentIrql) = 1;
        ExpAcquireResourceSharedLite(*(_QWORD *)(a4 + 48), CurrentIrql);
      }
    }
    v16 = *(unsigned int *)(a4 + 208);
    if ( (_DWORD)v16 == -1 || (v17 = (__int16 **)(*(_QWORD *)(a4 + 152) + 16 * v16)) == 0LL )
      v18 = (__int16 *)SeUntrustedMandatorySid;
    else
      v18 = *v17;
    if ( a5 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(a4 + 48));
      KeLeaveCriticalRegion();
    }
    v19 = v15[1];
    if ( v19 )
      v20 = *(_DWORD *)&v15[4 * v19 + 4];
    else
      v20 = 0;
    *(_DWORD *)(a6 + 12) = v20;
    v21 = *(_WORD *)v15;
    v22 = *v18;
    if ( *(_WORD *)v15 == *v18 && !memcmp(v15, v18, 4 * (unsigned int)v15[1] + 8) )
      goto LABEL_33;
    v23 = *(_DWORD *)(v18 + 1);
    WORD2(v45) = 4096;
    if ( !v23 )
      v23 = (unsigned __int16)v18[3] - 4096;
    if ( v23 )
    {
      LODWORD(v45) = -1073741811;
      v29 = 0;
      result = v45;
    }
    else
    {
      v24 = *(_DWORD *)(v15 + 2);
      if ( !v24 )
        v24 = *((unsigned __int16 *)v15 + 3) - 4096;
      if ( !v24 )
      {
        if ( v22 != v21 || memcmp(v18, v15, 4 * (unsigned int)*((unsigned __int8 *)v18 + 1) + 8) )
        {
          v25 = *((_BYTE *)v18 + 1);
          v26 = v25 ? *(_DWORD *)&v18[2 * v25 + 2] : 0;
          v27 = v15[1];
          if ( v27 )
          {
            if ( v26 < *(_DWORD *)&v15[4 * v27 + 4] )
            {
              v28 = 0;
LABEL_34:
              if ( (*(_DWORD *)(a6 + 8) & 1) != 0 && (v7 = 1, v9 = *a1 | ~*a1 & a1[2] | 0x120000, v28) )
              {
                v29 = 1;
                v9 |= a1[3] | 0x11FFFFF;
              }
              else
              {
                v29 = 0;
              }
              v8 = v7;
              if ( !v28 )
              {
                v32 = 0;
                v33 = 0;
                v8 = v7;
                if ( (v41 & 2) == 0 )
                  v33 = v7;
                if ( (v41 & 4) != 0 )
                  v8 = 0;
                if ( (v41 & 1) == 0 )
                  v32 = v29;
                v29 = v32;
                if ( (v41 & 2) != 0 )
                {
                  v34 = 0;
                  if ( v32 )
                    v34 = a1[1] | 0x10D0000;
                  if ( v8 )
                    v34 |= ~*a1 & a1[2] | 0x100000;
                  v9 &= ~(~v34 & (*a1 | 0x20000));
                }
                if ( (v41 & 4) != 0 )
                {
                  v40 = 0;
                  if ( v32 )
                    v40 = a1[1] | 0x10D0000;
                  if ( v33 )
                    v40 |= *a1 | 0x20000;
                  v9 &= ~(~v40 & (~*a1 & a1[2] | 0x100000));
                }
                v7 = v33;
                if ( (v41 & 1) != 0 )
                {
                  v35 = 0;
                  if ( v8 )
                    v35 = ~*a1 & a1[2] | 0x100000;
                  if ( v33 )
                    v35 |= *a1 | 0x20000;
                  v7 = v33;
                  v9 &= ~(~v35 & (a1[1] | 0x10D0000));
                }
              }
              if ( (*(_QWORD *)(a4 + 72) & 0x100000000LL) != 0 )
                v9 |= 0x80000u;
              result = 0LL;
              goto LABEL_41;
            }
          }
        }
LABEL_33:
        v28 = 1;
        goto LABEL_34;
      }
      v29 = 0;
      result = 3221225485LL;
    }
LABEL_41:
    *(_DWORD *)a6 = v9;
    *(_BYTE *)(a6 + 4) = v29;
    *(_BYTE *)(a6 + 5) = v7;
    *(_BYTE *)(a6 + 6) = v8;
    return result;
  }
  *(_DWORD *)a6 = a1[3];
  result = 0LL;
  *(_WORD *)(a6 + 4) = 257;
  *(_BYTE *)(a6 + 6) = 1;
  return result;
}
