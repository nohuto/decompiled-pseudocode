/*
 * XREFs of RaidInitializePerfOpts @ 0x1C001DA14
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000CB50 (StorPortExtendedFunction.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001F300 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qqqqqqq @ 0x1C002BDEC (McTemplateK0qqqqqqq.c)
 *     WPP_SF_ @ 0x1C003096C (WPP_SF_.c)
 *     RaidIsDmaInitialized @ 0x1C0063234 (RaidIsDmaInitialized.c)
 *     RaidInitializeDma @ 0x1C00632C8 (RaidInitializeDma.c)
 */

__int64 __fastcall RaidInitializePerfOpts(__int64 a1, char a2, unsigned int *a3)
{
  __int64 v3; // r11
  char v4; // r12
  char v5; // dl
  unsigned int *v6; // rdi
  __int64 v7; // rsi
  int v8; // ebp
  bool v9; // r13
  char v10; // r9
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
  USHORT ActiveGroupCount; // ax
  char v22; // r11
  unsigned int v23; // r13d
  __int64 v24; // rcx
  unsigned __int16 epi16; // r10
  unsigned __int64 v26; // rdx
  unsigned int v27; // ecx
  __int64 v29; // rax
  __int64 v30; // r9
  PDEVICE_OBJECT v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rdx
  PDEVICE_OBJECT v34; // rcx
  __int64 *v35; // r12
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 (__fastcall *v39)(__int64, int *); // rax
  int v40; // eax
  unsigned int v41; // eax
  char v42; // [rsp+50h] [rbp-68h]
  int v43; // [rsp+58h] [rbp-60h] BYREF
  __int64 v44; // [rsp+5Ch] [rbp-5Ch]
  __int64 v45; // [rsp+64h] [rbp-54h]
  int v46; // [rsp+6Ch] [rbp-4Ch]
  char v47; // [rsp+C0h] [rbp+8h]
  char v49; // [rsp+D0h] [rbp+18h]
  char v50; // [rsp+D8h] [rbp+20h]

  v3 = 0LL;
  v4 = a2;
  v42 = 0;
  v5 = 0;
  v49 = 0;
  v6 = a3;
  v47 = 0;
  v7 = 0LL;
  v50 = 0;
  v8 = 0;
  v9 = 0;
  LOBYTE(a3) = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  if ( !a1 )
  {
    v31 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_66;
    }
    v32 = 22LL;
    goto LABEL_65;
  }
  if ( !v6 )
  {
    v31 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_66;
    }
    v32 = 23LL;
LABEL_65:
    WPP_SF_(v31->AttachedDevice, v32, &WPP_d17971f34b7c3fdc440c591ea55cafdf_Traceguids);
LABEL_66:
    v12 = -1056964602;
    goto LABEL_56;
  }
  v13 = *(__int64 **)(a1 - 16);
  v7 = *v13;
  if ( (*(_BYTE *)(*v13 + 104) & 0x10) == 0 )
  {
    v34 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_68;
    }
    v33 = 24LL;
    goto LABEL_67;
  }
  if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x10) != 0 )
  {
    McTemplateK0qqqqqqq(
      a1,
      (unsigned int)&EventAdapterInitPerfConfigData,
      (_DWORD)a3,
      *v6,
      v6[1],
      v6[2],
      v6[3],
      v6[4],
      v6[5],
      v6[6]);
    LOBYTE(a3) = 0;
    v5 = 0;
    v10 = 0;
    v11 = 0;
    v3 = 0LL;
  }
  v14 = *v6;
  v15 = 3;
  if ( *v6 )
    v9 = v6[1] >= 0xC;
  if ( v14 >= 2 && v6[1] >= 0x18 )
  {
    LOBYTE(a3) = 1;
    v42 = 1;
    v15 = 7;
  }
  if ( v14 >= 3 && v6[1] >= 0x28 )
  {
    v10 = 1;
    v47 = 1;
    v15 |= 0x18u;
  }
  if ( v14 >= 4 && v6[1] >= 0x28 )
  {
    v11 = 1;
    v50 = 1;
    v15 |= 0x20u;
  }
  if ( v14 >= 5 && v6[1] >= 0x28 )
  {
    if ( KeGetCurrentIrql() )
      goto LABEL_20;
    v43 = 1;
    v44 = 0LL;
    v45 = 0LL;
    v46 = 0;
    if ( !*(_BYTE *)(v7 + 4450) )
      goto LABEL_20;
    v35 = (__int64 *)(v7 + 696);
    if ( !(unsigned __int8)RaidIsDmaInitialized(v7 + 696) )
    {
      RaidInitializeDma(v36, *(_QWORD *)(v7 + 32), v7 + 304);
      v3 = 0LL;
    }
    if ( v7 != -696 && (v37 = *v35) != 0 && (v38 = *(_QWORD *)(v37 + 8)) != 0 )
    {
      if ( *(int *)(v7 + 724) < 3 || (v39 = *(__int64 (__fastcall **)(__int64, int *))(v38 + 128)) == 0LL )
      {
LABEL_90:
        v4 = a2;
LABEL_20:
        LOBYTE(a3) = v42;
        v5 = 1;
        v10 = v47;
        v11 = v50;
        v49 = 1;
        goto LABEL_21;
      }
      v40 = v39(v37, &v43);
      v3 = 0LL;
    }
    else
    {
      v40 = -1073741811;
    }
    if ( v40 >= 0 )
    {
      v4 = a2;
      if ( (v45 & 0x200000000LL) != 0 )
        v15 |= 0x40u;
      goto LABEL_20;
    }
    goto LABEL_90;
  }
LABEL_21:
  if ( !v9 && !(_BYTE)a3 && !v10 && !v11 && !v5 )
  {
    if ( !v4 )
    {
      v12 = -1056964602;
      goto LABEL_56;
    }
    *v6 = 1;
    v6[1] = 12;
  }
  if ( v4 )
  {
    v6[2] = v15;
    v8 = v15;
    v12 = v3;
    goto LABEL_56;
  }
  v16 = v6[2];
  if ( (~v15 & v16) != 0 )
  {
    v34 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_68;
    }
    v33 = 25LL;
    goto LABEL_67;
  }
  if ( (v16 & 2) != 0 )
  {
    v8 = 2;
    *(_DWORD *)(v7 + 4744) = -v6[3];
  }
  v17 = v6[2];
  if ( (v17 & 1) == 0 )
  {
    if ( (_BYTE)a3 && (v17 & 4) != 0 )
    {
      v12 = -1056964607;
      goto LABEL_56;
    }
    if ( (v17 & 0x20) != 0 )
      goto LABEL_113;
    goto LABEL_115;
  }
  *(_WORD *)(v7 + 4740) |= 1u;
  v8 |= 1u;
  if ( *(_BYTE *)(v7 + 4449) != 1 || *(_QWORD *)(v7 + 4760) == v3 || *(_QWORD *)(v7 + 4440) == v3 )
  {
    v5 = v49;
LABEL_115:
    v22 = v47;
    goto LABEL_44;
  }
  v18 = v3;
  v19 = *(unsigned __int16 *)(*(_QWORD *)(v7 + 4432) + 4LL);
  v20 = v19 - 1;
  if ( !(_BYTE)a3 || (v6[2] & 4) == 0 )
    goto LABEL_32;
  v18 = v6[4];
  v41 = v6[5];
  if ( v18 > v41 || v41 > v20 )
  {
    v34 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_68;
    }
    v33 = 26LL;
LABEL_67:
    WPP_SF_(v34->AttachedDevice, v33, &WPP_d17971f34b7c3fdc440c591ea55cafdf_Traceguids);
LABEL_68:
    v12 = -1056964607;
    goto LABEL_56;
  }
  v20 = v6[5];
  LOWORD(v19) = v41 - v18 + 1;
  v8 |= 4u;
LABEL_32:
  *(_WORD *)(v7 + 4740) = *(_WORD *)(v7 + 4740) ^ (*(_WORD *)(v7 + 4740) ^ (4 * v19)) & 0x3FC | 2;
  ActiveGroupCount = KeQueryActiveGroupCount();
  v22 = v47;
  v23 = v20 + 1;
  *(_WORD *)(v7 + 4742) = ActiveGroupCount;
  if ( v18 < v23 )
  {
    v24 = 16LL * v18;
    do
    {
      epi16 = _mm_extract_epi16(*(__m128i *)(*(_QWORD *)(v7 + 4440) + v24), 4);
      v26 = *(_QWORD *)(*(_QWORD *)(v7 + 4440) + v24);
      if ( epi16 != 0xFFFF )
      {
        if ( v47 && (v6[2] & 0xC) == 0xC )
        {
          v8 |= 8u;
          *(_WORD *)(*((_QWORD *)v6 + 4) + v24 + 8) = epi16;
          *(_QWORD *)(v24 + *((_QWORD *)v6 + 4)) = v26;
        }
        if ( v18 < 0xFF )
        {
          for ( LODWORD(a3) = 0; v26; v26 >>= 1 )
          {
            if ( (v26 & 1) != 0 )
            {
              v29 = *(_QWORD *)(v7 + 4760);
              v30 = (unsigned int)a3 + (epi16 << 6);
              if ( *(_BYTE *)(v30 + v29) == 0xFF )
                *(_BYTE *)(v30 + v29) = v18;
            }
            LODWORD(a3) = (_DWORD)a3 + 1;
          }
        }
      }
      ++v18;
      v24 += 16LL;
    }
    while ( v18 < v23 );
  }
  v5 = v49;
LABEL_44:
  if ( !v22 )
    goto LABEL_48;
  v27 = v6[2];
  if ( (v27 & 8) != 0 )
  {
    v8 |= 8u;
    v6[6] = *(_DWORD *)(v7 + 4736);
  }
  if ( (v27 & 0x10) == 0 )
    goto LABEL_48;
  if ( (v8 & 1) == 0 )
  {
LABEL_113:
    v12 = -1056964607;
    goto LABEL_56;
  }
  v8 |= 0x10u;
  *(_BYTE *)(v7 + 4451) |= 1u;
LABEL_48:
  if ( v50 && (v6[2] & 0x20) != 0 )
  {
    v8 |= 0x20u;
    *(_BYTE *)(v7 + 4451) |= 2u;
  }
  if ( v5 && (v6[2] & 0x40) != 0 )
  {
    v8 |= 0x40u;
    *(_BYTE *)(v7 + 4451) |= 4u;
  }
  if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x10) != 0 )
    McTemplateK0qqqqqqq(
      1,
      (unsigned int)&EventAdapterFinalPerfConfigData,
      (_DWORD)a3,
      *v6,
      v6[1],
      v6[2],
      v6[3],
      v6[4],
      v6[5],
      v6[6]);
LABEL_56:
  if ( v8 != v6[2] )
  {
    if ( (v8 & 2) != 0 )
      *(_DWORD *)(v7 + 4744) = 0;
    if ( (v8 & 1) != 0 )
    {
      *(_BYTE *)(v7 + 4451) &= ~1u;
      *(_WORD *)(v7 + 4740) = 0;
    }
    if ( (v8 & 0x20) != 0 )
      *(_BYTE *)(v7 + 4451) &= ~2u;
  }
  return v12;
}
