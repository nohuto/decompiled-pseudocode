/*
 * XREFs of RootHub_Read30PortSpeeds @ 0x1C001AAE8
 * Callers:
 *     RootHub_UcxEvtGet30PortInfo @ 0x1C001C460 (RootHub_UcxEvtGet30PortInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C000DF64 (WPP_RECORDER_SF_dddd.c)
 *     XilRegister_ReadUlong @ 0x1C0019708 (XilRegister_ReadUlong.c)
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
  unsigned int v7; // edi
  int v11; // r12d
  unsigned __int16 v12; // bx
  unsigned __int16 v13; // r15
  __int64 v14; // r9
  __int64 Ulong; // rax
  unsigned int v16; // ebp
  int v17; // r8d
  int v18; // ecx
  unsigned __int16 v19; // bx
  __int64 v20; // rax
  int v21; // r10d
  int v22; // r8d
  int v23; // r8d
  unsigned __int16 v24; // r9
  unsigned __int16 v25; // bx
  unsigned __int16 v26; // bx
  __int64 v28; // [rsp+90h] [rbp+8h]
  unsigned __int16 *v29; // [rsp+A0h] [rbp+18h]

  v29 = a3;
  v7 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  v28 = v14;
  *a3 = 0;
  if ( !a6 )
  {
LABEL_35:
    if ( (v11 & 4) == 0 )
    {
      if ( v12 < a4 )
      {
        *(_DWORD *)(a2 + 4LL * v12) = 52;
        *(_WORD *)(a2 + 4LL * v12 + 2) = 5;
      }
      v25 = v12 + 1;
      if ( v25 < a4 )
      {
        *(_DWORD *)(a2 + 4LL * v25) = 180;
        *(_WORD *)(a2 + 4LL * v25 + 2) = 5;
      }
      v12 = v25 + 1;
    }
    if ( (v11 & 5) == 0 )
    {
      if ( v12 < a4 )
      {
        *(_DWORD *)(a2 + 4LL * v12) = (a7 != 0 ? 0x4000 : 0) | 0x35;
        *(_WORD *)(a2 + 4LL * v12 + 2) = 10;
      }
      v26 = v12 + 1;
      if ( v26 < a4 )
      {
        *(_DWORD *)(a2 + 4LL * v26) = (a7 != 0 ? 0x4000 : 0) | 0xB5;
        *(_WORD *)(a2 + 4LL * v26 + 2) = 10;
      }
      v12 = v26 + 1;
    }
    *a3 = v12;
    return v7;
  }
  while ( 1 )
  {
    Ulong = XilRegister_ReadUlong(v14, (unsigned int *)(a5 + 4LL * v13));
    v16 = Ulong & 0xF;
    if ( _bittest(&v11, v16) )
      break;
    v11 |= 1 << v16;
    if ( v12 < a4 )
    {
      *(_DWORD *)(a2 + 4LL * v12) = 0;
      if ( !a7 || (v17 = 0x4000, v16 <= 4) )
        v17 = 0;
      *(_DWORD *)(a2 + 4LL * v12) = v17 | Ulong & 0x30;
      *(_WORD *)(a2 + 4LL * v12 + 2) = WORD1(Ulong);
      *(_DWORD *)(a2 + 4LL * v12) = v16 | *(_DWORD *)(a2 + 4LL * v12) & 0xFFFFFFF0;
    }
    v18 = (unsigned __int8)Ulong >> 6;
    if ( v18 == 2 )
    {
      if ( v12 < a4 )
        *(_DWORD *)(a2 + 4LL * v12) = *(_DWORD *)(a2 + 4LL * v12) & 0xFFFFFF3F | 0x40;
      v19 = v12 + 1;
      if ( ++v13 >= a6 )
      {
        v24 = 192;
        goto LABEL_51;
      }
      v20 = XilRegister_ReadUlong(v28, (unsigned int *)(a5 + 4LL * v13));
      v21 = v20 & 0xF;
      if ( v21 != v16 || (unsigned __int8)v20 >> 6 != 3 )
      {
        WPP_RECORDER_SF_dddd(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          2u,
          0xBu,
          0xC1u,
          (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
          v16,
          2,
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
    if ( !((unsigned __int8)Ulong >> 6) )
    {
      if ( v12 < a4 )
        *(_DWORD *)(a2 + 4LL * v12) &= 0xFFFFFF3F;
      v19 = v12 + 1;
      if ( v19 < a4 )
      {
        *(_DWORD *)(a2 + 4LL * v19) = 0;
        if ( !a7 || (v23 = 0x4000, v16 <= 4) )
          v23 = 0;
        *(_DWORD *)(a2 + 4LL * v19) = v23 | Ulong & 0x30;
        *(_WORD *)(a2 + 4LL * v19 + 2) = WORD1(Ulong);
        *(_DWORD *)(a2 + 4LL * v19) = Ulong & 0xF | *(_DWORD *)(a2 + 4LL * v19) & 0xFFFFFFB0 | 0x80;
      }
LABEL_28:
      v12 = v19 + 1;
      goto LABEL_30;
    }
    if ( v18 == 3 )
    {
      v24 = 194;
      goto LABEL_51;
    }
LABEL_30:
    if ( ++v13 >= a6 )
    {
      a3 = v29;
      goto LABEL_35;
    }
    v14 = v28;
  }
  v24 = 191;
LABEL_51:
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
    2u,
    0xBu,
    v24,
    (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
    Ulong & 0xF);
  return (unsigned int)-1073741811;
}
