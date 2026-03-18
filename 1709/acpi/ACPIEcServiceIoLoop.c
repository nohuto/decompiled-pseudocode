/*
 * XREFs of ACPIEcServiceIoLoop @ 0x1C004C714
 * Callers:
 *     ACPIEcServiceDevice @ 0x1C004C618 (ACPIEcServiceDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 *     ACPIEcDispatchQueries @ 0x1C004C1CC (ACPIEcDispatchQueries.c)
 *     ACPIEcLogAction @ 0x1C004C3D4 (ACPIEcLogAction.c)
 *     ACPIEcLogError @ 0x1C004C564 (ACPIEcLogError.c)
 */

void __fastcall ACPIEcServiceIoLoop(__int64 a1)
{
  ULONG v2; // eax
  char v3; // bl
  char v4; // r15
  int *v5; // r14
  __int64 v6; // r13
  ULONG v7; // r12d
  KIRQL v8; // al
  unsigned __int8 v9; // dl
  KIRQL v10; // bl
  KIRQL v11; // bl
  char v12; // al
  KIRQL v13; // bl
  unsigned __int8 v14; // al
  unsigned __int8 v15; // di
  KIRQL v16; // bl
  char v17; // al
  KIRQL v18; // r10
  int v19; // edx
  unsigned __int64 v20; // rcx
  int v21; // r8d
  __int64 v22; // r8
  char v23; // al
  unsigned __int16 v24; // cx
  PVOID **v25; // rcx
  PVOID **v26; // rax
  char *v27; // rax
  PLIST_ENTRY v28; // rax
  __int16 v29; // cx
  char Flink; // al
  void (__fastcall **v31)(_QWORD); // rbx
  __int64 v32; // rax
  char v33; // [rsp+20h] [rbp-20h]
  ULONG v34; // [rsp+24h] [rbp-1Ch]
  int v35; // [rsp+28h] [rbp-18h] BYREF
  PVOID P; // [rsp+30h] [rbp-10h] BYREF
  PVOID *p_P; // [rsp+38h] [rbp-8h]
  char v38; // [rsp+88h] [rbp+48h]
  char v39; // [rsp+90h] [rbp+50h]
  char v40; // [rsp+98h] [rbp+58h]

  v39 = 0;
  p_P = &P;
  v38 = 1;
  v2 = 0;
  P = &P;
  v3 = 1;
  v40 = 0;
  v4 = 0;
  v33 = 0;
  v5 = 0LL;
  v34 = 0;
  v6 = 0LL;
LABEL_2:
  v7 = 0;
LABEL_3:
  if ( !v6 )
    goto LABEL_7;
  while ( 1 )
  {
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
    v9 = 64;
    v10 = v8;
    if ( v6 == *(_QWORD *)(a1 + 40) )
      v9 = 48;
    ACPIEcLogAction(a1, v9, v39);
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v10);
    __outbyte(v6, v39);
    KeStallExecutionProcessor(1u);
    v3 = v38;
    v2 = ++v34;
    v6 = 0LL;
    v7 = 0;
LABEL_7:
    if ( !v7 )
    {
      if ( v5 )
      {
        v5 = 0LL;
        v38 = 1;
      }
      goto LABEL_21;
    }
    if ( v5 )
      break;
    if ( v3 )
    {
      v34 = v7 + v2;
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
      v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
      ACPIEcLogAction(a1, 0x30u, 131);
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v11);
      __outbyte(*(_QWORD *)(a1 + 40), 0x83u);
      v5 = (int *)(a1 + 784);
    }
    else
    {
      v5 = &v35;
    }
LABEL_21:
    ++v7;
    v12 = __inbyte(*(_QWORD *)(a1 + 32));
    v4 = v12;
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
    ACPIEcLogAction(a1, 0x10u, v4);
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v13);
    if ( v40 && (v4 & 0x10) == 0 )
    {
      ++*(_DWORD *)(a1 + 788);
      v4 |= 0x10u;
      v40 = 0;
    }
    if ( (v4 & 1) != 0 )
    {
      v14 = __inbyte(*(_QWORD *)(a1 + 24));
      v15 = v14;
      v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
      ACPIEcLogAction(a1, 0x20u, v15);
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v16);
      switch ( *(_BYTE *)(a1 + 488) )
      {
        case 1:
          **(_BYTE **)(a1 + 496) = v15;
          *(_BYTE *)(a1 + 488) = 5;
          break;
        case 2:
          if ( v15 )
          {
            v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
            v19 = 1 << (v15 & 0x1F);
            v20 = (unsigned __int64)v15 >> 5;
            v35 = v19;
            v21 = *(_DWORD *)(a1 + 4 * v20 + 124);
            if ( (v21 & v19) == 0 )
            {
              *(_DWORD *)(a1 + 4 * v20 + 124) = v19 | v21;
              if ( (v19 & *(_DWORD *)(a1 + 4 * v20 + 156)) != 0 )
              {
                v22 = *(unsigned __int8 *)(v15 + a1 + 188);
                *(_BYTE *)(*(_QWORD *)(a1 + 448) + 24 * v22) = *(_BYTE *)(a1 + 445);
                *(_BYTE *)(a1 + 445) = v22;
              }
              else
              {
                *(_BYTE *)(v15 + a1 + 188) = *(_BYTE *)(a1 + 444);
                *(_BYTE *)(a1 + 444) = v15;
              }
            }
            KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v18);
            v33 = 1;
          }
          *(_BYTE *)(a1 + 488) = 0;
          break;
        case 3:
          v17 = *(_BYTE *)(a1 + 489);
          ++*(_DWORD *)(a1 + 792);
          *(_BYTE *)(a1 + 488) = v17;
          v40 = 1;
          *(_BYTE *)(a1 + 489) = 7;
          break;
        default:
          if ( *(_DWORD *)(a1 + 796) < 5u )
            ACPIEcLogError(a1, -2147155953);
          ++*(_DWORD *)(a1 + 796);
          break;
      }
      v2 = v34;
      v3 = v38;
      goto LABEL_2;
    }
    v2 = v34;
    v3 = v38;
    if ( (v4 & 2) != 0 )
      goto LABEL_3;
    if ( *(_BYTE *)(a1 + 488) == 4 )
    {
      v27 = *(char **)(a1 + 496);
      *(_BYTE *)(a1 + 488) = 5;
      v39 = *v27;
LABEL_57:
      v6 = *(_QWORD *)(a1 + 24);
      goto LABEL_58;
    }
    if ( *(_BYTE *)(a1 + 488) != 5 )
    {
      if ( *(_BYTE *)(a1 + 488) != 6 )
        goto LABEL_58;
      v23 = 4;
      if ( *(_BYTE *)(a1 + 490) == 0x80 )
        v23 = 1;
      v39 = *(_BYTE *)(a1 + 491);
      *(_BYTE *)(a1 + 488) = v23;
      goto LABEL_57;
    }
    v24 = *(_WORD *)(a1 + 494);
    if ( v24 )
    {
      if ( (v4 & 0x10) != 0 || v24 <= 1u && (AcpiOverrideAttributes & 0x1000000) != 0 )
      {
        ++*(_QWORD *)(a1 + 496);
        ++*(_BYTE *)(a1 + 491);
        v6 = *(_QWORD *)(a1 + 40);
        *(_WORD *)(a1 + 494) = v24 - 1;
        v39 = *(_BYTE *)(a1 + 490);
        *(_BYTE *)(a1 + 488) = 6;
      }
      else
      {
        v6 = *(_QWORD *)(a1 + 40);
        *(_WORD *)(a1 + 488) = 1283;
        v39 = -126;
      }
    }
    else
    {
      v25 = (PVOID **)p_P;
      v26 = *(PVOID ***)(a1 + 480);
      *(_BYTE *)(a1 + 488) = 0;
      *(_WORD *)(a1 + 494) = 0;
      *(_QWORD *)(a1 + 480) = 0LL;
      if ( *v25 != &P )
        __fastfail(3u);
      v26[1] = (PVOID *)v25;
      *v26 = &P;
      *v25 = (PVOID *)v26;
      p_P = (PVOID *)v26;
    }
LABEL_58:
    v2 = v34;
    v3 = v38;
    if ( !v6 )
    {
      if ( !*(_BYTE *)(a1 + 488) )
      {
        *(_BYTE *)(a1 + 504) = 0;
        if ( (v4 & 0x20) != 0 )
        {
          v6 = *(_QWORD *)(a1 + 40);
          *(_BYTE *)(a1 + 488) = 2;
          v39 = -124;
LABEL_62:
          KeSetTimer((PKTIMER)(a1 + 520), ACPIEcWatchdogTimeout, (PKDPC)(a1 + 584));
          v3 = v38;
          goto LABEL_66;
        }
        v28 = ExInterlockedRemoveHeadList((PLIST_ENTRY)(a1 + 464), (PKSPIN_LOCK)(a1 + 88));
        if ( v28 )
        {
          *(_QWORD *)(a1 + 480) = v28;
          v7 = 0;
          *(_QWORD *)(a1 + 496) = v28[1].Blink;
          *(_BYTE *)(a1 + 491) = BYTE1(v28[1].Flink);
          v29 = WORD1(v28[1].Flink);
          *(_WORD *)(a1 + 492) = v29;
          Flink = (char)v28[1].Flink;
          --*(_QWORD *)(a1 + 496);
          --*(_BYTE *)(a1 + 491);
          *(_BYTE *)(a1 + 490) = Flink;
          *(_WORD *)(a1 + 494) = v29;
          *(_BYTE *)(a1 + 488) = 5;
          goto LABEL_62;
        }
        v38 = 0;
        v3 = 0;
        KeCancelTimer((PKTIMER)(a1 + 520));
LABEL_66:
        v2 = v34;
      }
      goto LABEL_3;
    }
  }
  ++*v5;
  if ( v2 > *(_DWORD *)(a1 + 800) )
    *(_DWORD *)(a1 + 800) = v2;
  while ( 1 )
  {
    v31 = (void (__fastcall **)(_QWORD))P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P || (v32 = *(_QWORD *)P, *(PVOID *)(*(_QWORD *)P + 8LL) != P) )
      __fastfail(3u);
    P = *(PVOID *)P;
    *(_QWORD *)(v32 + 8) = &P;
    v31[4](v31[5]);
    ExFreePoolWithTag(v31, 0);
  }
  if ( v33 )
    ACPIEcDispatchQueries(a1);
}
