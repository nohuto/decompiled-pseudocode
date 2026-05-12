/*
 * XREFs of RaidInitializePerfOpts @ 0x1C001CAF4
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B3F0 (StorPortExtendedFunction.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001ED80 (_guard_dispatch_icall_nop.c)
 *     Template_qqqqqqq @ 0x1C0030154 (Template_qqqqqqq.c)
 *     WPP_SF_ @ 0x1C0030340 (WPP_SF_.c)
 *     RaidIsDmaInitialized @ 0x1C00605BC (RaidIsDmaInitialized.c)
 *     RaidInitializeDma @ 0x1C006064C (RaidInitializeDma.c)
 */

__int64 __fastcall RaidInitializePerfOpts(__int64 a1, char a2, unsigned int *a3, __int64 a4)
{
  __int64 v4; // r11
  char v5; // r12
  char v6; // dl
  unsigned int *v7; // rdi
  __int64 v8; // rsi
  int v9; // ebp
  bool v10; // r13
  char v11; // r10
  unsigned int v12; // ebx
  __int64 *v13; // rax
  unsigned int v14; // eax
  int v15; // r14d
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // r14d
  int v19; // ecx
  unsigned int v20; // r13d
  unsigned int v21; // r13d
  char v22; // r11
  __int64 v23; // rcx
  unsigned __int16 epi16; // r10
  unsigned __int64 v25; // rdx
  unsigned int v26; // ecx
  __int64 v28; // rax
  __int64 v29; // r9
  PDEVICE_OBJECT v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rdx
  PDEVICE_OBJECT v33; // rcx
  __int64 *v34; // r12
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 (__fastcall *v38)(__int64, int *); // rax
  int v39; // eax
  unsigned int v40; // eax
  char v41; // [rsp+50h] [rbp-68h]
  int v42; // [rsp+58h] [rbp-60h] BYREF
  __int64 v43; // [rsp+5Ch] [rbp-5Ch]
  __int64 v44; // [rsp+64h] [rbp-54h]
  int v45; // [rsp+6Ch] [rbp-4Ch]
  char v46; // [rsp+C0h] [rbp+8h]
  char v48; // [rsp+D0h] [rbp+18h]
  char v49; // [rsp+D8h] [rbp+20h]

  v4 = 0LL;
  v5 = a2;
  v41 = 0;
  v6 = 0;
  v48 = 0;
  v7 = a3;
  v46 = 0;
  v8 = 0LL;
  v49 = 0;
  v9 = 0;
  v10 = 0;
  LOBYTE(a3) = 0;
  LOBYTE(a4) = 0;
  v11 = 0;
  v12 = 0;
  if ( !a1 )
  {
    v30 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_66;
    }
    v31 = 22LL;
    goto LABEL_65;
  }
  if ( !v7 )
  {
    v30 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_66;
    }
    v31 = 23LL;
LABEL_65:
    WPP_SF_(v30->AttachedDevice, v31, &WPP_43677b6b8a68310e2fabd5fd066069ea_Traceguids, a4);
LABEL_66:
    v12 = -1056964602;
    goto LABEL_56;
  }
  v13 = *(__int64 **)(a1 - 16);
  v8 = *v13;
  if ( (*(_BYTE *)(*v13 + 104) & 0x10) == 0 )
  {
    v33 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_68;
    }
    v32 = 24LL;
    goto LABEL_67;
  }
  if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x10) != 0 )
  {
    Template_qqqqqqq(
      a1,
      (unsigned int)&EventAdapterInitPerfConfigData,
      (_DWORD)a3,
      *v7,
      v7[1],
      v7[2],
      v7[3],
      v7[4],
      v7[5],
      v7[6]);
    LOBYTE(a3) = 0;
    v6 = 0;
    LOBYTE(a4) = 0;
    v11 = 0;
    v4 = 0LL;
  }
  v14 = *v7;
  v15 = 3;
  if ( *v7 )
    v10 = v7[1] >= 0xC;
  if ( v14 >= 2 && v7[1] >= 0x18 )
  {
    LOBYTE(a3) = 1;
    v41 = 1;
    v15 = 7;
  }
  if ( v14 >= 3 && v7[1] >= 0x28 )
  {
    LOBYTE(a4) = 1;
    v46 = 1;
    v15 |= 0x18u;
  }
  if ( v14 >= 4 && v7[1] >= 0x28 )
  {
    v11 = 1;
    v49 = 1;
    v15 |= 0x20u;
  }
  if ( v14 >= 5 && v7[1] >= 0x28 )
  {
    if ( KeGetCurrentIrql() )
      goto LABEL_20;
    v42 = 1;
    v43 = 0LL;
    v44 = 0LL;
    v45 = 0;
    if ( !*(_BYTE *)(v8 + 4450) )
      goto LABEL_20;
    v34 = (__int64 *)(v8 + 696);
    if ( !(unsigned __int8)RaidIsDmaInitialized(v8 + 696) )
    {
      RaidInitializeDma(v35, *(_QWORD *)(v8 + 32), v8 + 304);
      v4 = 0LL;
    }
    if ( v8 != -696 && (v36 = *v34) != 0 && (v37 = *(_QWORD *)(v36 + 8)) != 0 )
    {
      if ( *(int *)(v8 + 724) < 3 || (v38 = *(__int64 (__fastcall **)(__int64, int *))(v37 + 128)) == 0LL )
      {
LABEL_90:
        v5 = a2;
LABEL_20:
        LOBYTE(a3) = v41;
        v6 = 1;
        LOBYTE(a4) = v46;
        v11 = v49;
        v48 = 1;
        goto LABEL_21;
      }
      v39 = v38(v36, &v42);
      v4 = 0LL;
    }
    else
    {
      v39 = -1073741811;
    }
    if ( v39 >= 0 )
    {
      v5 = a2;
      if ( (v44 & 0x200000000LL) != 0 )
        v15 |= 0x40u;
      goto LABEL_20;
    }
    goto LABEL_90;
  }
LABEL_21:
  if ( !v10 && !(_BYTE)a3 && !(_BYTE)a4 && !v11 && !v6 )
  {
    if ( !v5 )
    {
      v12 = -1056964602;
      goto LABEL_56;
    }
    *v7 = 1;
    v7[1] = 12;
  }
  if ( v5 )
  {
    v7[2] = v15;
    v9 = v15;
    v12 = v4;
    goto LABEL_56;
  }
  v16 = v7[2];
  if ( (~v15 & v16) != 0 )
  {
    v33 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_68;
    }
    v32 = 25LL;
    goto LABEL_67;
  }
  if ( (v16 & 2) != 0 )
  {
    v9 = 2;
    *(_DWORD *)(v8 + 4744) = -v7[3];
  }
  v17 = v7[2];
  if ( (v17 & 1) == 0 )
  {
    if ( (_BYTE)a3 && (v17 & 4) != 0 || (v17 & 0x20) != 0 )
    {
      v12 = -1056964607;
      goto LABEL_56;
    }
    goto LABEL_114;
  }
  *(_WORD *)(v8 + 4740) |= 1u;
  v9 |= 1u;
  if ( *(_BYTE *)(v8 + 4449) != 1 || *(_QWORD *)(v8 + 4760) == v4 || *(_QWORD *)(v8 + 4440) == v4 )
  {
LABEL_109:
    v6 = v48;
LABEL_114:
    v22 = v46;
    goto LABEL_44;
  }
  a4 = 1LL;
  v18 = v4;
  v19 = *(unsigned __int16 *)(*(_QWORD *)(v8 + 4432) + 4LL);
  v20 = v19 - 1;
  if ( (_BYTE)a3 && (v7[2] & 4) != 0 )
  {
    v18 = v7[4];
    v40 = v7[5];
    if ( v18 <= v40 && v40 <= v20 )
    {
      v20 = v7[5];
      LOWORD(v19) = v40 - v18 + 1;
      v9 |= 4u;
      goto LABEL_32;
    }
    v33 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
LABEL_68:
      v12 = -1056964607;
      goto LABEL_56;
    }
    v32 = 26LL;
LABEL_67:
    WPP_SF_(v33->AttachedDevice, v32, &WPP_43677b6b8a68310e2fabd5fd066069ea_Traceguids, a4);
    goto LABEL_68;
  }
LABEL_32:
  *(_WORD *)(v8 + 4740) = *(_WORD *)(v8 + 4740) ^ (*(_WORD *)(v8 + 4740) ^ (4 * v19)) & 0x3FC | 2;
  v21 = v20 + 1;
  *(_WORD *)(v8 + 4742) = KeQueryActiveGroupCount();
  if ( v18 >= v21 )
    goto LABEL_109;
  v22 = v46;
  v23 = 16LL * v18;
  do
  {
    epi16 = _mm_extract_epi16(*(__m128i *)(*(_QWORD *)(v8 + 4440) + v23), 4);
    v25 = *(_QWORD *)(*(_QWORD *)(v8 + 4440) + v23);
    if ( epi16 != 0xFFFF )
    {
      if ( v46 && (v7[2] & 0xC) == 0xC )
      {
        v9 |= 8u;
        *(_WORD *)(*((_QWORD *)v7 + 4) + v23 + 8) = epi16;
        *(_QWORD *)(v23 + *((_QWORD *)v7 + 4)) = v25;
      }
      if ( v18 < 0xFF )
      {
        for ( LODWORD(a3) = 0; v25; v25 >>= 1 )
        {
          if ( (v25 & 1) != 0 )
          {
            v28 = *(_QWORD *)(v8 + 4760);
            v29 = (unsigned int)a3 + (epi16 << 6);
            if ( *(_BYTE *)(v29 + v28) == 0xFF )
              *(_BYTE *)(v29 + v28) = v18;
          }
          LODWORD(a3) = (_DWORD)a3 + 1;
        }
      }
    }
    ++v18;
    v23 += 16LL;
  }
  while ( v18 < v21 );
  v6 = v48;
LABEL_44:
  if ( v22 )
  {
    v26 = v7[2];
    if ( (v26 & 8) != 0 )
    {
      v9 |= 8u;
      v7[6] = *(_DWORD *)(v8 + 4736);
    }
    if ( (v26 & 0x10) != 0 )
    {
      if ( (v9 & 1) == 0 )
      {
        v12 = -1056964607;
        goto LABEL_56;
      }
      v9 |= 0x10u;
      *(_BYTE *)(v8 + 4451) |= 1u;
    }
  }
  if ( v49 && (v7[2] & 0x20) != 0 )
  {
    v9 |= 0x20u;
    *(_BYTE *)(v8 + 4451) |= 2u;
  }
  if ( v6 && (v7[2] & 0x40) != 0 )
  {
    v9 |= 0x40u;
    *(_BYTE *)(v8 + 4451) |= 4u;
  }
  if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x10) != 0 )
    Template_qqqqqqq(
      1,
      (unsigned int)&EventAdapterFinalPerfConfigData,
      (_DWORD)a3,
      *v7,
      v7[1],
      v7[2],
      v7[3],
      v7[4],
      v7[5],
      v7[6]);
LABEL_56:
  if ( v9 != v7[2] )
  {
    if ( (v9 & 2) != 0 )
      *(_DWORD *)(v8 + 4744) = 0;
    if ( (v9 & 1) != 0 )
    {
      *(_BYTE *)(v8 + 4451) &= ~1u;
      *(_WORD *)(v8 + 4740) = 0;
    }
    if ( (v9 & 0x20) != 0 )
      *(_BYTE *)(v8 + 4451) &= ~2u;
  }
  return v12;
}
