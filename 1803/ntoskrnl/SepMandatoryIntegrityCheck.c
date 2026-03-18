/*
 * XREFs of SepMandatoryIntegrityCheck @ 0x1401018A0
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14005CED0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x140100CF0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140148E84 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1404D7FE0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     ExpAcquireResourceSharedLite @ 0x140100220 (ExpAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquireFastResourceShared @ 0x140158E80 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x140159678 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memcmp @ 0x140189130 (memcmp.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepMandatoryIntegrityCheck(int *a1, __int64 a2, char a3, __int64 a4, char a5, char a6, __int64 a7)
{
  int v7; // eax
  int v8; // ebx
  char v9; // bp
  __int16 v11; // ax
  __int64 v12; // rax
  __int64 v13; // r14
  unsigned int v14; // edx
  int v15; // eax
  char *v16; // r14
  __int64 v17; // rax
  _WORD **v18; // rax
  _WORD *v19; // r15
  unsigned __int8 v20; // al
  int v21; // eax
  unsigned __int16 v22; // r13
  __int16 v23; // r12
  __int16 v24; // si
  int v25; // ecx
  int v26; // ecx
  unsigned int v27; // edx
  unsigned int v28; // r15d
  char v29; // dl
  char v30; // cl
  char v31; // r8
  char v32; // al
  char v33; // si
  __int64 result; // rax
  __int64 v35; // rax
  char v36; // r9
  int v37; // r8d
  int v38; // edx
  int v39; // ecx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v41; // r15
  __int64 v42; // rcx
  unsigned __int8 CurrentIrql; // dl
  struct _KTHREAD *v44; // r8
  void *OwnerEntryForLegacyShim; // r12
  int v46; // ecx
  int v47; // edx
  char v48; // [rsp+30h] [rbp-58h]
  char v49; // [rsp+31h] [rbp-57h]
  char v50; // [rsp+34h] [rbp-54h]

  v7 = *(_DWORD *)(a4 + 212);
  v8 = 0;
  v9 = 0;
  v49 = 0;
  *(_DWORD *)(a7 + 8) = v7;
  v48 = 0;
  if ( (v7 & 0xFFFFFFFD) != 0 )
  {
    if ( a3 )
      goto LABEL_45;
    v11 = *(_WORD *)(a2 + 2);
    if ( (v11 & 0x10) == 0 )
      goto LABEL_45;
    if ( v11 < 0 )
    {
      v35 = *(unsigned int *)(a2 + 12);
      if ( !(_DWORD)v35 )
        goto LABEL_45;
      v12 = a2 + v35;
    }
    else
    {
      v12 = *(_QWORD *)(a2 + 24);
    }
    if ( v12 )
    {
      v13 = v12 + 8;
      v14 = 0;
      if ( *(_WORD *)(v12 + 4) )
      {
        while ( *(_BYTE *)v13 != 17 )
        {
          ++v14;
          v13 += *(unsigned __int16 *)(v13 + 2);
          if ( v14 >= *(unsigned __int16 *)(v12 + 4) )
            goto LABEL_45;
        }
        if ( (*(_BYTE *)(v13 + 1) & 8) == 0 )
        {
          v15 = *(_DWORD *)(v13 + 4);
          v16 = (char *)(v13 + 8);
          v50 = v15;
          goto LABEL_11;
        }
      }
    }
LABEL_45:
    v16 = (char *)SepDefaultMandatorySid;
    v50 = 1;
LABEL_11:
    if ( a5 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v41 = *(_QWORD *)(a4 + 48);
      v42 = *(unsigned __int16 *)(v41 + 26);
      if ( (v42 & 0x41) == 1 )
        KeBugCheckEx(0x1C6u, 0xFuLL, v41, 0LL, 0LL);
      LOWORD(v42) = *(_WORD *)(v41 + 26) & 1;
      if ( (_WORD)v42 )
      {
        CurrentIrql = KeGetCurrentIrql();
        v44 = KeGetCurrentThread();
        if ( CurrentIrql > 1u )
          KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
        if ( (v44->ApcState.InProgressFlags & 2) != 0 )
          KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
        if ( !CurrentIrql && (v44->MiscFlags & 0x400) == 0 && !v44->WaitBlock[3].SpareLong )
          KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
      }
      if ( (_WORD)v42 )
      {
        OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim(v42);
        if ( !(unsigned __int8)ExAcquireFastResourceShared(v41, (ULONG_PTR)OwnerEntryForLegacyShim) )
          ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
      }
      else
      {
        ExpAcquireResourceSharedLite(*(_QWORD *)(a4 + 48), 1);
      }
    }
    v17 = *(unsigned int *)(a4 + 208);
    if ( (_DWORD)v17 == -1 || (v18 = (_WORD **)(*(_QWORD *)(a4 + 152) + 16 * v17)) == 0LL )
      v19 = SeUntrustedMandatorySid;
    else
      v19 = *v18;
    if ( a6 )
      v19 = SepDefaultMandatorySid;
    if ( a5 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(a4 + 48));
      KeLeaveCriticalRegion();
    }
    v20 = v16[1];
    if ( v20 )
      v21 = *(_DWORD *)&v16[4 * v20 + 4];
    else
      v21 = 0;
    *(_DWORD *)(a7 + 12) = v21;
    v22 = *v19;
    v23 = *(_WORD *)v16;
    v24 = HIBYTE(*v19);
    if ( *(_WORD *)v16 == *v19 )
    {
      if ( !memcmp(v16, v19, 4 * (unsigned int)HIBYTE(v23) + 8) )
        goto LABEL_48;
    }
    else
    {
      v24 = HIBYTE(v22);
    }
    v25 = *(_DWORD *)(v19 + 1);
    if ( !v25 )
      v25 = (unsigned __int16)v19[3] - 4096;
    if ( v25 )
      goto LABEL_91;
    v26 = *(_DWORD *)(v16 + 2);
    if ( !v26 )
      v26 = *((unsigned __int16 *)v16 + 3) - 4096;
    if ( v26 )
    {
LABEL_91:
      v32 = 0;
      v28 = -1073741811;
      v33 = 0;
LABEL_43:
      *(_BYTE *)(a7 + 5) = v32;
      result = v28;
      *(_BYTE *)(a7 + 4) = v33;
      *(_DWORD *)a7 = v8;
      *(_BYTE *)(a7 + 6) = v9;
      return result;
    }
    if ( v22 != v23 || memcmp(v19, v16, 4 * (unsigned int)(unsigned __int8)v24 + 8) )
    {
      if ( (_BYTE)v24 )
      {
        v27 = *(_DWORD *)&v19[2 * (unsigned __int8)v24 + 2];
        v28 = 0;
      }
      else
      {
        v28 = 0;
        v27 = 0;
      }
      if ( HIBYTE(v23) && v27 < *(_DWORD *)&v16[4 * HIBYTE(v23) + 4] )
      {
        v29 = 0;
LABEL_36:
        if ( (*(_DWORD *)(a7 + 8) & 1) != 0 )
        {
          v30 = 1;
          v8 = *a1 | ~*a1 & a1[2] | 0x120000;
          v48 = 1;
          if ( v29 )
          {
            v31 = 1;
            v49 = 1;
            v8 |= a1[3] | 0x11FFFFF;
LABEL_39:
            v9 = v30;
            if ( v29 )
            {
              v32 = v48;
              v33 = v49;
            }
            else
            {
              v36 = 0;
              v9 = v30;
              if ( (v50 & 2) == 0 )
                v36 = v30;
              if ( (v50 & 4) != 0 )
                v9 = 0;
              v33 = 0;
              if ( (v50 & 1) == 0 )
                v33 = v31;
              if ( (v50 & 2) != 0 )
              {
                v37 = 0;
                if ( v33 )
                  v37 = a1[1] | 0x10D0000;
                v38 = *a1;
                if ( v9 )
                  v37 |= ~v38 & a1[2] | 0x100000;
                v8 &= ~(~v37 & (v38 | 0x20000));
              }
              if ( (v50 & 4) != 0 )
              {
                v46 = 0;
                if ( v33 )
                  v46 = a1[1] | 0x10D0000;
                v47 = *a1;
                if ( v36 )
                  v46 |= v47 | 0x20000;
                v8 &= ~(~v46 & (~v47 & a1[2] | 0x100000));
              }
              v32 = v36;
              if ( (v50 & 1) != 0 )
              {
                v39 = 0;
                if ( v9 )
                  v39 = ~*a1 & a1[2] | 0x100000;
                if ( v36 )
                  v39 |= *a1 | 0x20000;
                v8 &= ~(~v39 & (a1[1] | 0x10D0000));
                v32 = v36;
              }
            }
            if ( (*(_QWORD *)(a4 + 72) & 0x100000000LL) != 0 )
              v8 |= 0x80000u;
            goto LABEL_43;
          }
        }
        else
        {
          v30 = 0;
        }
        v31 = 0;
        goto LABEL_39;
      }
LABEL_35:
      v29 = 1;
      goto LABEL_36;
    }
LABEL_48:
    v28 = 0;
    goto LABEL_35;
  }
  *(_DWORD *)a7 = a1[3];
  result = 0LL;
  *(_WORD *)(a7 + 4) = 257;
  *(_BYTE *)(a7 + 6) = 1;
  return result;
}
