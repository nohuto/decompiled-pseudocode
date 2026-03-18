/*
 * XREFs of SepMandatoryIntegrityCheck @ 0x14008E320
 * Callers:
 *     SeAccessCheckWithHint @ 0x14008D7C0 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x140092020 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x1401326AC (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046B2C0 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     ExpAcquireResourceSharedLite @ 0x14008F610 (ExpAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ExAcquireFastResourceShared @ 0x14014E540 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14014EA10 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memcmp @ 0x14016A960 (memcmp.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
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
  int v8; // ebx
  unsigned int v9; // r12d
  int v10; // eax
  __int16 v11; // cx
  __int64 v12; // rax
  __int64 v13; // rdi
  int v14; // eax
  unsigned __int8 *v15; // rdi
  unsigned int v16; // eax
  __int16 **v17; // rsi
  __int16 *v18; // rsi
  unsigned __int8 v19; // al
  int v20; // eax
  __int16 v21; // bp
  __int16 v22; // r15
  int v23; // ecx
  int v24; // ecx
  unsigned __int8 v25; // al
  int v26; // r11d
  unsigned int v27; // edx
  unsigned __int8 v28; // al
  char v29; // dl
  char v30; // cl
  char v31; // al
  char v32; // di
  __int64 result; // rax
  __int64 v34; // rax
  char v35; // dl
  char v36; // cl
  int v37; // r9d
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v39; // rsi
  __int64 v40; // rcx
  struct _KTHREAD *v41; // r8
  int v42; // ecx
  char v43; // [rsp+30h] [rbp-58h]
  char v44; // [rsp+31h] [rbp-57h]
  char v45; // [rsp+34h] [rbp-54h]
  PVOID P; // [rsp+40h] [rbp-48h]

  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = *(_DWORD *)(a4 + 212);
  v43 = 0;
  v44 = 0;
  *(_DWORD *)(a6 + 8) = v10;
  if ( (v10 & 0xFFFFFFFD) != 0 )
  {
    if ( a3 )
      goto LABEL_44;
    v11 = *(_WORD *)(CurrentIrql + 2);
    if ( (~(_BYTE)v11 & 0x10) != 0 )
      goto LABEL_44;
    if ( v11 < 0 )
    {
      v34 = *(unsigned int *)(CurrentIrql + 12);
      if ( !(_DWORD)v34 )
        goto LABEL_44;
      v12 = CurrentIrql + v34;
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
            goto LABEL_44;
        }
        if ( (*(_BYTE *)(v13 + 1) & 8) == 0 )
        {
          v14 = *(_DWORD *)(v13 + 4);
          v15 = (unsigned __int8 *)(v13 + 8);
          v45 = v14;
          goto LABEL_11;
        }
      }
    }
LABEL_44:
    v15 = (unsigned __int8 *)SepDefaultMandatorySid;
    v45 = 1;
LABEL_11:
    if ( a5 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v39 = *(_QWORD *)(a4 + 48);
      v40 = *(unsigned __int16 *)(v39 + 26);
      if ( (v40 & 0x41) == 1 )
        KeBugCheckEx(0x1C6u, 0xFuLL, *(_QWORD *)(a4 + 48), 0LL, 0LL);
      LOWORD(v40) = *(_WORD *)(v39 + 26) & 1;
      if ( (_WORD)v40 )
      {
        CurrentIrql = KeGetCurrentIrql();
        v41 = KeGetCurrentThread();
        if ( (unsigned __int8)CurrentIrql > 1u )
          KeBugCheckEx(0x1C6u, 0LL, (unsigned __int8)CurrentIrql, 1uLL, 0LL);
        if ( (v41->ApcState.InProgressFlags & 2) != 0 )
          KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
        if ( !(_BYTE)CurrentIrql && (v41->MiscFlags & 0x400) == 0 && !v41->WaitBlock[3].SpareLong )
          KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
      }
      if ( (_WORD)v40 )
      {
        P = (PVOID)ExpAllocateOwnerEntryForLegacyShim(v40, CurrentIrql);
        if ( !(unsigned __int8)ExAcquireFastResourceShared(v39, (ULONG_PTR)P) )
          ExFreePoolWithTag(P, 0);
      }
      else
      {
        LOBYTE(CurrentIrql) = 1;
        ExpAcquireResourceSharedLite(*(_QWORD *)(a4 + 48), CurrentIrql);
      }
    }
    v16 = *(_DWORD *)(a4 + 208);
    if ( v16 == -1 || (v17 = (__int16 **)(*(_QWORD *)(a4 + 152) + 16LL * v16)) == 0LL )
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
    if ( *(_WORD *)v15 == *v18 && !memcmp(v15, v18, 4LL * v15[1] + 8) )
    {
      v29 = 1;
      v26 = 0;
      goto LABEL_35;
    }
    v23 = *(_DWORD *)(v18 + 1);
    if ( !v23 )
      v23 = (unsigned __int16)v18[3] - 4096;
    if ( v23 )
      goto LABEL_87;
    v24 = *(_DWORD *)(v15 + 2);
    if ( !v24 )
      v24 = *((unsigned __int16 *)v15 + 3) - 4096;
    if ( v24 )
    {
LABEL_87:
      v31 = 0;
      v9 = -1073741811;
      v32 = 0;
LABEL_42:
      *(_BYTE *)(a6 + 4) = v32;
      *(_BYTE *)(a6 + 5) = v31;
      result = v9;
      *(_DWORD *)a6 = v8;
      *(_BYTE *)(a6 + 6) = v7;
      return result;
    }
    if ( v22 == v21 && !memcmp(v18, v15, 4LL * *((unsigned __int8 *)v18 + 1) + 8) )
    {
      v26 = 0;
    }
    else
    {
      v25 = *((_BYTE *)v18 + 1);
      v26 = 0;
      if ( v25 )
        v27 = *(_DWORD *)&v18[2 * v25 + 2];
      else
        v27 = 0;
      v28 = v15[1];
      if ( v28 && v27 < *(_DWORD *)&v15[4 * v28 + 4] )
      {
        v29 = 0;
        goto LABEL_34;
      }
    }
    v29 = 1;
LABEL_34:
    v9 = 0;
LABEL_35:
    if ( (*(_DWORD *)(a6 + 8) & 1) != 0 )
    {
      v30 = 1;
      v8 = *a1 | ~*a1 & a1[2] | 0x120000;
      v44 = 1;
      if ( v29 )
      {
        v43 = 1;
        v8 |= a1[3] | 0x11FFFFF;
      }
    }
    else
    {
      v30 = 0;
    }
    v7 = v30;
    if ( v29 )
    {
      v31 = v44;
      v32 = v43;
    }
    else
    {
      v35 = 0;
      v7 = v30;
      if ( (v45 & 2) == 0 )
        v35 = v30;
      if ( (v45 & 4) != 0 )
        v7 = 0;
      v36 = 0;
      if ( (v45 & 1) == 0 )
        v36 = v43;
      v32 = v36;
      if ( (v45 & 2) != 0 )
      {
        v37 = 0;
        if ( v36 )
          v37 = a1[1] | 0x10D0000;
        if ( v7 )
          v37 |= ~*a1 & a1[2] | 0x100000;
        v8 &= ~(~v37 & (*a1 | 0x20000));
      }
      if ( (v45 & 4) != 0 )
      {
        v42 = 0;
        if ( v32 )
          v42 = a1[1] | 0x10D0000;
        if ( v35 )
          v42 |= *a1 | 0x20000;
        v8 &= ~(~v42 & 0x100000 | a1[2] & ~(v42 | *a1));
      }
      v31 = v35;
      if ( (v45 & 1) != 0 )
      {
        if ( v7 )
          v26 = ~*a1 & a1[2] | 0x100000;
        if ( v35 )
          v26 |= *a1 | 0x20000;
        v8 &= ~(~v26 & (a1[1] | 0x10D0000));
        v31 = v35;
      }
    }
    if ( (*(_QWORD *)(a4 + 72) & 0x100000000LL) != 0 )
      v8 |= 0x80000u;
    goto LABEL_42;
  }
  *(_DWORD *)a6 = a1[3];
  result = 0LL;
  *(_WORD *)(a6 + 4) = 257;
  *(_BYTE *)(a6 + 6) = 1;
  return result;
}
