/*
 * XREFs of HUBMUX_CreateChildPSMs @ 0x1C000D2FC
 * Callers:
 *     HUBHSM_CreatingChildPSMs @ 0x1C0007640 (HUBHSM_CreatingChildPSMs.c)
 * Callees:
 *     HUBMUX_CreatePSM @ 0x1C000CE08 (HUBMUX_CreatePSM.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00391C0 (memset.c)
 */

__int64 __fastcall HUBMUX_CreateChildPSMs(__int64 a1)
{
  unsigned __int16 v2; // bx
  unsigned __int16 *v3; // rdx
  unsigned __int16 v4; // r8
  __int64 PSM; // rdx
  __int64 v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  unsigned __int16 v9; // bx
  __int64 v10; // rdx
  unsigned __int16 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rdx
  unsigned __int16 v16; // dx
  unsigned __int16 v17; // cx
  unsigned __int16 v18; // ax
  __int64 v19; // rbx
  unsigned int v20; // esi
  __int64 v22; // rbx
  __int64 *v23; // rdx
  __int64 v24; // rax
  PWDF_DRIVER_GLOBALS v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  _QWORD v28[5]; // [rsp+48h] [rbp-19h] BYREF
  _QWORD v29[7]; // [rsp+70h] [rbp+Fh] BYREF
  char v30; // [rsp+C8h] [rbp+67h] BYREF

  *(_DWORD *)(a1 + 146) = 0xFFFF;
  v2 = 0;
  if ( *(_WORD *)(a1 + 144) )
  {
    while ( 1 )
    {
      memset(v28, 0, sizeof(v28));
      _InterlockedOr((volatile signed __int32 *)v28 + 1, 1u);
      if ( *(_BYTE *)(a1 + 232) )
      {
        v4 = v2 + 1;
        LOWORD(v28[0]) = v2 + 1;
        if ( ((unsigned __int8)(1 << ((v2 + 1) & 7)) & *(_BYTE *)(((unsigned __int64)(unsigned __int16)(v2 + 1) >> 3)
                                                                + a1
                                                                + 1179)) != 0 )
        {
          _InterlockedAnd((volatile signed __int32 *)v28 + 1, 0xFFFFFFFE);
          v4 = v28[0];
        }
        BYTE2(v28[0]) = *(_BYTE *)(a1 + 2482);
      }
      else
      {
        v3 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 128) + 8LL * v2);
        v4 = *v3;
        LOWORD(v28[0]) = *v3;
        if ( *((_DWORD *)v3 + 1) == 102 )
        {
          _InterlockedAnd((volatile signed __int32 *)v28 + 1, 0xFFFFFFFE);
          v4 = v28[0];
        }
        if ( *((_DWORD *)v3 + 2) == 116 )
        {
          _InterlockedOr((volatile signed __int32 *)v28 + 1, 0x10u);
          v4 = v28[0];
        }
        HIDWORD(v28[0]) ^= (BYTE4(v28[0]) ^ (unsigned __int8)(*((_BYTE *)v3 + 16) << 6)) & 0x40;
        HIDWORD(v28[0]) ^= (BYTE4(v28[0]) ^ (unsigned __int8)(*((_BYTE *)v3 + 16) << 6)) & 0x80;
        BYTE2(v28[0]) = *((_BYTE *)v3 + 3);
        if ( (unsigned __int8)(BYTE2(v28[0]) - 1) > 4u )
          BYTE2(v28[0]) = 5;
      }
      if ( v4 > *(_WORD *)(a1 + 148) )
        *(_WORD *)(a1 + 148) = v4;
      if ( v4 < *(_WORD *)(a1 + 146) )
        *(_WORD *)(a1 + 146) = v4;
      LODWORD(v28[1]) = 512;
      PSM = HUBMUX_CreatePSM(a1, (unsigned __int16 *)v28);
      if ( !PSM )
        break;
      v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             PSM,
             off_1C005B230);
      *(_QWORD *)(v6 + 1248) = &PSM20StateTable;
      *(_DWORD *)(v6 + 1124) = 3000;
      *(_DWORD *)(v6 + 1256) = 3000;
      v7 = (_QWORD *)(v6 + 248);
      v8 = *(_QWORD **)(a1 + 2360);
      if ( *v8 != a1 + 2352 )
        __fastfail(3u);
      *v7 = a1 + 2352;
      ++v2;
      v7[1] = v8;
      *v8 = v7;
      *(_QWORD *)(a1 + 2360) = v7;
      ++*(_DWORD *)(a1 + 2348);
      if ( v2 >= *(_WORD *)(a1 + 144) )
        goto LABEL_19;
    }
  }
  else
  {
LABEL_19:
    v9 = 0;
    *(_DWORD *)(a1 + 152) = 0xFFFF;
    if ( *(_WORD *)(a1 + 150) )
    {
      while ( 1 )
      {
        memset(v28, 0, sizeof(v28));
        _InterlockedOr((volatile signed __int32 *)v28 + 1, 1u);
        if ( *(_BYTE *)(a1 + 232) )
        {
          v11 = v9 + 1;
          LOWORD(v28[0]) = v9 + 1;
          if ( ((unsigned __int8)(1 << ((v9 + 1) & 7)) & *(_BYTE *)(((unsigned __int64)(unsigned __int16)(v9 + 1) >> 3)
                                                                  + a1
                                                                  + 1182)) != 0 )
          {
            _InterlockedAnd((volatile signed __int32 *)v28 + 1, 0xFFFFFFFE);
            v11 = v28[0];
          }
          if ( *(_BYTE *)(a1 + 253) )
          {
            _InterlockedOr((volatile signed __int32 *)v28 + 1, 0x100u);
            v11 = v28[0];
            HIDWORD(v28[2]) = *(_DWORD *)(a1 + 156);
          }
          v28[3] = *(_QWORD *)(a1 + 2496);
          LODWORD(v28[4]) = *(_DWORD *)(a1 + 2504);
          BYTE2(v28[0]) = *(_BYTE *)(a1 + 2482);
        }
        else
        {
          v10 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * v9);
          LOWORD(v28[0]) = *(_WORD *)v10;
          if ( *(_DWORD *)(v10 + 4) == 102 )
            _InterlockedAnd((volatile signed __int32 *)v28 + 1, 0xFFFFFFFE);
          if ( *(_DWORD *)(v10 + 8) == 116 )
            _InterlockedOr((volatile signed __int32 *)v28 + 1, 8u);
          _InterlockedOr((volatile signed __int32 *)v28 + 1, 0x100u);
          if ( *(_BYTE *)(v10 + 2) )
            HIDWORD(v28[2]) = *(_DWORD *)(a1 + 156);
          v11 = v28[0];
          v28[3] = *(_QWORD *)(v10 + 16);
          LODWORD(v28[4]) = *(unsigned __int16 *)(v10 + 14);
          BYTE2(v28[0]) = *(_BYTE *)(v10 + 3);
          if ( (unsigned __int8)(BYTE2(v28[0]) - 1) > 4u )
            BYTE2(v28[0]) = 5;
        }
        if ( v11 > *(_WORD *)(a1 + 154) )
          *(_WORD *)(a1 + 154) = v11;
        if ( v11 < *(_WORD *)(a1 + 152) )
          *(_WORD *)(a1 + 152) = v11;
        LODWORD(v28[1]) = 768;
        v12 = HUBMUX_CreatePSM(a1, (unsigned __int16 *)v28);
        if ( !v12 )
          break;
        v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                v12,
                off_1C005B230);
        *(_QWORD *)(v13 + 1248) = &PSM30StateTable;
        *(_DWORD *)(v13 + 1124) = 5000;
        *(_DWORD *)(v13 + 1256) = 5000;
        v14 = (_QWORD *)(v13 + 248);
        v15 = *(_QWORD **)(a1 + 2360);
        if ( *v15 != a1 + 2352 )
          __fastfail(3u);
        *v14 = a1 + 2352;
        ++v9;
        v14[1] = v15;
        *v15 = v14;
        *(_QWORD *)(a1 + 2360) = v14;
        ++*(_DWORD *)(a1 + 2348);
        if ( v9 >= *(_WORD *)(a1 + 150) )
          goto LABEL_42;
      }
    }
    else
    {
LABEL_42:
      v16 = 2;
      v17 = *(_WORD *)(a1 + 154);
      if ( *(_WORD *)(a1 + 148) > v17 )
        v17 = *(_WORD *)(a1 + 148);
      *(_WORD *)(a1 + 48) = v17;
      if ( ((unsigned __int64)v17 >> 3) + 1 >= 2 )
        v16 = (v17 >> 3) + 1;
      v18 = *(_WORD *)(a1 + 88);
      if ( v16 > v18 )
        v18 = v16;
      v19 = v18;
      *(_WORD *)(a1 + 1120) = v18;
      memset(v29, 0, sizeof(v29));
      v29[4] = *(_QWORD *)(a1 + 16);
      LODWORD(v29[0]) = 56;
      v29[3] = 0x100000001LL;
      if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64, unsigned __int64, char *, __int64))(WdfFunctions_01015 + 1536))(
             WdfDriverGlobals,
             v29,
             (unsigned int)ExDefaultNonPagedPoolType,
             1748191317LL,
             (v19 + 3) & 0xFFFFFFFFFFFFFFFCuLL,
             &v30,
             a1 + 1112) >= 0 )
      {
        v20 = 2053;
        _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x40u);
        return v20;
      }
    }
  }
  v22 = a1 + 2352;
  v20 = 2045;
  while ( *(_QWORD *)v22 != v22 )
  {
    v23 = *(__int64 **)v22;
    if ( *(_QWORD *)(*(_QWORD *)v22 + 8LL) != v22 || (v24 = *v23, *(__int64 **)(*v23 + 8) != v23) )
      __fastfail(3u);
    v25 = WdfDriverGlobals;
    *(_QWORD *)v22 = v24;
    *(_QWORD *)(v24 + 8) = v22;
    v26 = WdfFunctions_01015;
    --*(_DWORD *)(a1 + 2348);
    v27 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *))(v26 + 1632))(v25, v23 - 31);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v27);
  }
  return v20;
}
