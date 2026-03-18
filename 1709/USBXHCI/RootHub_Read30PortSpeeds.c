/*
 * XREFs of RootHub_Read30PortSpeeds @ 0x1C002037C
 * Callers:
 *     RootHub_UcxEvtGet30PortInfo @ 0x1C0020D40 (RootHub_UcxEvtGet30PortInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C00152C4 (WPP_RECORDER_SF_dddd.c)
 *     XilRegister_ReadUlong @ 0x1C001F6D0 (XilRegister_ReadUlong.c)
 */

__int64 __fastcall RootHub_Read30PortSpeeds(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        unsigned __int16 a4,
        __int64 a5,
        unsigned __int16 a6,
        char a7)
{
  unsigned int v7; // esi
  int v10; // r13d
  unsigned __int16 v11; // di
  unsigned __int16 v12; // r12
  __int64 v13; // r9
  int Ulong; // eax
  int v15; // ebx
  unsigned int v16; // ebp
  int v17; // edx
  int v18; // eax
  unsigned __int16 v19; // di
  __int64 v20; // rax
  int v21; // r10d
  int v22; // r8d
  int v23; // edx
  unsigned __int16 v24; // r9
  unsigned __int16 v25; // di
  unsigned __int16 v26; // di
  int v28; // [rsp+28h] [rbp-70h]
  __int64 v29; // [rsp+50h] [rbp-48h]
  unsigned __int16 *v31; // [rsp+B0h] [rbp+18h]

  v31 = a3;
  v7 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  v29 = v13;
  *a3 = 0;
  if ( !a6 )
  {
LABEL_35:
    if ( (v10 & 4) == 0 )
    {
      if ( v11 < a4 )
      {
        *(_DWORD *)(a2 + 4LL * v11) = 52;
        *(_WORD *)(a2 + 4LL * v11 + 2) = 5;
      }
      v25 = v11 + 1;
      if ( v25 < a4 )
      {
        *(_DWORD *)(a2 + 4LL * v25) = 180;
        *(_WORD *)(a2 + 4LL * v25 + 2) = 5;
      }
      v11 = v25 + 1;
    }
    if ( (v10 & 5) == 0 )
    {
      if ( v11 < a4 )
      {
        *(_DWORD *)(a2 + 4LL * v11) = (a7 != 0 ? 0x4000 : 0) | 0x35;
        *(_WORD *)(a2 + 4LL * v11 + 2) = 10;
      }
      v26 = v11 + 1;
      if ( v26 < a4 )
      {
        *(_DWORD *)(a2 + 4LL * v26) = (a7 != 0 ? 0x4000 : 0) | 0xB5;
        *(_WORD *)(a2 + 4LL * v26 + 2) = 10;
      }
      v11 = v26 + 1;
    }
    *a3 = v11;
    return v7;
  }
  while ( 1 )
  {
    Ulong = XilRegister_ReadUlong(v13, (unsigned int *)(a5 + 4LL * v12));
    v15 = Ulong;
    v16 = Ulong & 0xF;
    if ( _bittest(&v10, v16) )
      break;
    v10 |= 1 << v16;
    if ( v11 < a4 )
    {
      *(_DWORD *)(a2 + 4LL * v11) = 0;
      if ( !a7 || (v17 = 0x4000, v16 <= 4) )
        v17 = 0;
      *(_DWORD *)(a2 + 4LL * v11) = v17 | Ulong & 0x30;
      *(_WORD *)(a2 + 4LL * v11 + 2) = HIWORD(Ulong);
      *(_DWORD *)(a2 + 4LL * v11) = v16 | *(_DWORD *)(a2 + 4LL * v11) & 0xFFFFFFF0;
    }
    v18 = (unsigned __int8)Ulong >> 6;
    if ( v18 == 2 )
    {
      if ( v11 < a4 )
        *(_DWORD *)(a2 + 4LL * v11) = *(_DWORD *)(a2 + 4LL * v11) & 0xFFFFFF3F | 0x40;
      v19 = v11 + 1;
      if ( ++v12 >= a6 )
      {
        v24 = 192;
        v28 = v15 & 0xF;
        goto LABEL_52;
      }
      v20 = XilRegister_ReadUlong(v29, (unsigned int *)(a5 + 4LL * v12));
      v21 = v20 & 0xF;
      if ( v21 != v16 || (v20 & 0xC0) != 0xC0 )
      {
        WPP_RECORDER_SF_dddd(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          2u,
          0xBu,
          0xC1u,
          (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
          v16,
          (unsigned __int8)v15 >> 6,
          v20 & 0xF,
          (unsigned __int8)v20 >> 6);
        return (unsigned int)-1073741811;
      }
      if ( v19 < a4 )
      {
        *(_DWORD *)(a2 + 4LL * v19) = 0;
        if ( !a7 || (v22 = 0x4000, v16 <= 4) )
          v22 = 0;
        *(_DWORD *)(a2 + 4LL * v19) = v22 | v20 & 0x30;
        *(_WORD *)(a2 + 4LL * v19 + 2) = WORD1(v20);
        *(_DWORD *)(a2 + 4LL * v19) = v21 | *(_DWORD *)(a2 + 4LL * v19) & 0xFFFFFFF0 | 0xC0;
      }
      goto LABEL_28;
    }
    if ( !((unsigned __int8)v15 >> 6) )
    {
      if ( v11 < a4 )
        *(_DWORD *)(a2 + 4LL * v11) &= 0xFFFFFF3F;
      v19 = v11 + 1;
      if ( v19 < a4 )
      {
        *(_DWORD *)(a2 + 4LL * v19) = 0;
        if ( !a7 || (v23 = 0x4000, v16 <= 4) )
          v23 = 0;
        *(_DWORD *)(a2 + 4LL * v19) = v23 | v15 & 0x30;
        *(_WORD *)(a2 + 4LL * v19 + 2) = HIWORD(v15);
        *(_DWORD *)(a2 + 4LL * v19) = v16 & 0xFFFFFFBF | *(_DWORD *)(a2 + 4LL * v19) & 0xFFFFFFB0 | 0x80;
      }
LABEL_28:
      v11 = v19 + 1;
      goto LABEL_30;
    }
    if ( v18 == 3 )
    {
      v24 = 194;
      goto LABEL_51;
    }
LABEL_30:
    if ( ++v12 >= a6 )
    {
      a3 = v31;
      goto LABEL_35;
    }
    v13 = v29;
  }
  v24 = 191;
LABEL_51:
  v28 = v16;
LABEL_52:
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
    2u,
    0xBu,
    v24,
    (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
    v28);
  return (unsigned int)-1073741811;
}
