/*
 * XREFs of ACPIEcServiceIoLoop @ 0x1C002B114
 * Callers:
 *     ACPIEcServiceDevice @ 0x1C00023E0 (ACPIEcServiceDevice.c)
 * Callees:
 *     ACPIEcLogAction @ 0x1C002B6B0 (ACPIEcLogAction.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 *     ACPIEcDispatchQueries @ 0x1C004CD8C (ACPIEcDispatchQueries.c)
 *     ACPIEcLogError @ 0x1C004CF94 (ACPIEcLogError.c)
 */

PVOID *__fastcall ACPIEcServiceIoLoop(__int64 a1)
{
  ULONG v2; // eax
  char v3; // bl
  unsigned __int8 v4; // r15
  int *v5; // r14
  __int64 v6; // r13
  ULONG v7; // r12d
  KIRQL v8; // al
  __int64 v9; // rdx
  __int64 v10; // r8
  KIRQL v11; // bl
  KIRQL v12; // al
  __int64 v13; // r8
  KIRQL v14; // bl
  unsigned __int8 v15; // al
  KIRQL v16; // al
  __int64 v17; // r8
  __int64 v18; // rdx
  KIRQL v19; // bl
  unsigned __int8 v20; // al
  unsigned __int8 v21; // di
  KIRQL v22; // al
  __int64 v23; // r8
  __int64 v24; // rdx
  KIRQL v25; // bl
  char v26; // al
  KIRQL v27; // al
  __int64 v28; // r10
  int v29; // r8d
  int v30; // ecx
  __int64 v31; // r8
  char v32; // al
  __int16 v33; // ax
  unsigned __int8 v34; // cl
  PVOID **v35; // rcx
  PVOID **v36; // rax
  unsigned __int8 *v37; // rax
  PLIST_ENTRY v38; // rax
  __int16 v39; // cx
  char Flink; // al
  void (__fastcall **v41)(_QWORD); // rbx
  PVOID *result; // rax
  PVOID *v43; // rax
  char v44; // [rsp+20h] [rbp-20h]
  ULONG v45; // [rsp+24h] [rbp-1Ch]
  int v46; // [rsp+28h] [rbp-18h] BYREF
  PVOID P; // [rsp+30h] [rbp-10h] BYREF
  PVOID *p_P; // [rsp+38h] [rbp-8h]
  char v49; // [rsp+88h] [rbp+48h]
  unsigned __int8 v50; // [rsp+90h] [rbp+50h]
  char v51; // [rsp+98h] [rbp+58h]

  v50 = 0;
  p_P = &P;
  v49 = 1;
  v2 = 0;
  P = &P;
  v3 = 1;
  v51 = 0;
  v4 = 0;
  v44 = 0;
  v5 = 0LL;
  v45 = 0;
  v6 = 0LL;
LABEL_2:
  v7 = 0;
LABEL_3:
  if ( !v6 )
    goto LABEL_7;
  while ( 1 )
  {
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
    v9 = 64LL;
    LOBYTE(v10) = v50;
    v11 = v8;
    if ( v6 == *(_QWORD *)(a1 + 40) )
      v9 = 48LL;
    ACPIEcLogAction(a1, v9, v10);
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v11);
    __outbyte(v6, v50);
    KeStallExecutionProcessor(1u);
    v3 = v49;
    v2 = ++v45;
    v6 = 0LL;
    v7 = 0;
LABEL_7:
    if ( !v7 )
    {
      if ( v5 )
      {
        v5 = 0LL;
        v49 = 1;
      }
      goto LABEL_21;
    }
    if ( v5 )
      break;
    if ( v3 )
    {
      v45 = v7 + v2;
      KeStallExecutionProcessor(v7);
      if ( (v4 & 0x10) != 0 )
      {
        if ( v7 >= *(_DWORD *)(a1 + 64) )
          v5 = (int *)(a1 + 780);
      }
      else
      {
        v5 = (int *)(a1 + 776);
        if ( v7 < *(_DWORD *)(a1 + 68) )
          v5 = 0LL;
      }
    }
    else if ( (v4 & 0x10) != 0 )
    {
      v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
      LOBYTE(v13) = -125;
      v14 = v12;
      ACPIEcLogAction(a1, 48LL, v13);
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v14);
      __outbyte(*(_QWORD *)(a1 + 40), 0x83u);
      v5 = (int *)(a1 + 784);
    }
    else
    {
      v5 = &v46;
    }
LABEL_21:
    ++v7;
    v15 = __inbyte(*(_QWORD *)(a1 + 32));
    v4 = v15;
    v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
    LOBYTE(v17) = v4;
    LOBYTE(v18) = 16;
    v19 = v16;
    ACPIEcLogAction(a1, v18, v17);
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v19);
    if ( v51 && (v4 & 0x10) == 0 )
    {
      ++*(_DWORD *)(a1 + 788);
      v4 |= 0x10u;
      v51 = 0;
    }
    if ( (v4 & 1) != 0 )
    {
      v20 = __inbyte(*(_QWORD *)(a1 + 24));
      v21 = v20;
      v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
      LOBYTE(v23) = v21;
      LOBYTE(v24) = 32;
      v25 = v22;
      ACPIEcLogAction(a1, v24, v23);
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v25);
      switch ( *(_BYTE *)(a1 + 488) )
      {
        case 1:
          **(_BYTE **)(a1 + 496) = v21;
          *(_BYTE *)(a1 + 488) = 5;
          break;
        case 2:
          if ( v21 )
          {
            v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
            v28 = v21 >> 5;
            v29 = 1 << (v21 & 0x1F);
            v46 = v29;
            v30 = *(_DWORD *)(a1 + 4 * v28 + 124);
            if ( (v30 & v29) == 0 )
            {
              *(_DWORD *)(a1 + 4 * v28 + 124) = v29 | v30;
              if ( (v29 & *(_DWORD *)(a1 + 4 * v28 + 156)) != 0 )
              {
                v31 = *(unsigned __int8 *)(v21 + a1 + 188);
                *(_BYTE *)(*(_QWORD *)(a1 + 448) + 24 * v31) = *(_BYTE *)(a1 + 445);
                *(_BYTE *)(a1 + 445) = v31;
              }
              else
              {
                *(_BYTE *)(v21 + a1 + 188) = *(_BYTE *)(a1 + 444);
                *(_BYTE *)(a1 + 444) = v21;
              }
            }
            KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v27);
            v44 = 1;
          }
          *(_BYTE *)(a1 + 488) = 0;
          break;
        case 3:
          v26 = *(_BYTE *)(a1 + 489);
          ++*(_DWORD *)(a1 + 792);
          *(_BYTE *)(a1 + 488) = v26;
          v51 = 1;
          *(_BYTE *)(a1 + 489) = 7;
          break;
        default:
          if ( *(_DWORD *)(a1 + 796) < 5u )
            ACPIEcLogError(a1, 2147811343LL);
          ++*(_DWORD *)(a1 + 796);
          break;
      }
      v2 = v45;
      v3 = v49;
      goto LABEL_2;
    }
    v2 = v45;
    v3 = v49;
    if ( (v4 & 2) != 0 )
      goto LABEL_3;
    if ( *(_BYTE *)(a1 + 488) == 4 )
    {
      v37 = *(unsigned __int8 **)(a1 + 496);
      *(_BYTE *)(a1 + 488) = 5;
      v50 = *v37;
LABEL_55:
      v6 = *(_QWORD *)(a1 + 24);
      goto LABEL_56;
    }
    if ( *(_BYTE *)(a1 + 488) != 5 )
    {
      if ( *(_BYTE *)(a1 + 488) != 6 )
        goto LABEL_56;
      v32 = 4;
      if ( *(_BYTE *)(a1 + 490) == 0x80 )
        v32 = 1;
      v50 = *(_BYTE *)(a1 + 491);
      *(_BYTE *)(a1 + 488) = v32;
      goto LABEL_55;
    }
    v33 = *(_WORD *)(a1 + 494);
    if ( v33 )
    {
      v6 = *(_QWORD *)(a1 + 40);
      if ( (v4 & 0x10) != 0 )
      {
        ++*(_QWORD *)(a1 + 496);
        ++*(_BYTE *)(a1 + 491);
        v34 = *(_BYTE *)(a1 + 490);
        *(_WORD *)(a1 + 494) = v33 - 1;
        *(_BYTE *)(a1 + 488) = 6;
        v50 = v34;
      }
      else
      {
        *(_WORD *)(a1 + 488) = 1283;
        v50 = -126;
      }
    }
    else
    {
      v35 = (PVOID **)p_P;
      v36 = *(PVOID ***)(a1 + 480);
      *(_BYTE *)(a1 + 488) = 0;
      *(_WORD *)(a1 + 494) = 0;
      *(_QWORD *)(a1 + 480) = 0LL;
      if ( *v35 != &P )
        __fastfail(3u);
      v36[1] = (PVOID *)v35;
      *v36 = &P;
      *v35 = (PVOID *)v36;
      p_P = (PVOID *)v36;
    }
LABEL_56:
    v2 = v45;
    v3 = v49;
    if ( !v6 )
    {
      if ( !*(_BYTE *)(a1 + 488) )
      {
        *(_BYTE *)(a1 + 504) = 0;
        if ( (v4 & 0x20) != 0 )
        {
          v6 = *(_QWORD *)(a1 + 40);
          *(_BYTE *)(a1 + 488) = 2;
          v50 = -124;
LABEL_60:
          KeSetTimer((PKTIMER)(a1 + 520), ACPIEcWatchdogTimeout, (PKDPC)(a1 + 584));
          v3 = v49;
          goto LABEL_64;
        }
        v38 = ExInterlockedRemoveHeadList((PLIST_ENTRY)(a1 + 464), (PKSPIN_LOCK)(a1 + 88));
        if ( v38 )
        {
          *(_QWORD *)(a1 + 480) = v38;
          v7 = 0;
          *(_QWORD *)(a1 + 496) = v38[1].Blink;
          *(_BYTE *)(a1 + 491) = BYTE1(v38[1].Flink);
          v39 = WORD1(v38[1].Flink);
          *(_WORD *)(a1 + 492) = v39;
          Flink = (char)v38[1].Flink;
          --*(_QWORD *)(a1 + 496);
          --*(_BYTE *)(a1 + 491);
          *(_BYTE *)(a1 + 490) = Flink;
          *(_WORD *)(a1 + 494) = v39;
          *(_BYTE *)(a1 + 488) = 5;
          goto LABEL_60;
        }
        v49 = 0;
        v3 = 0;
        KeCancelTimer((PKTIMER)(a1 + 520));
LABEL_64:
        v2 = v45;
      }
      goto LABEL_3;
    }
  }
  ++*v5;
  if ( v2 > *(_DWORD *)(a1 + 800) )
    *(_DWORD *)(a1 + 800) = v2;
  while ( 1 )
  {
    v41 = (void (__fastcall **)(_QWORD))P;
    result = &P;
    if ( P == &P )
      break;
    v43 = *(PVOID **)P;
    if ( *((PVOID **)P + 1) != &P || v43[1] != P )
      __fastfail(3u);
    P = *(PVOID *)P;
    v43[1] = &P;
    v41[4](v41[5]);
    ExFreePoolWithTag(v41, 0);
  }
  if ( v44 )
    return (PVOID *)ACPIEcDispatchQueries(a1);
  return result;
}
