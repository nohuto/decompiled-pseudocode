/*
 * XREFs of HUBMUX_CreateChildPSMs @ 0x1C000D290
 * Callers:
 *     HUBHSM_CreatingChildPSMs @ 0x1C0007600 (HUBHSM_CreatingChildPSMs.c)
 * Callees:
 *     HUBMUX_CreatePSM @ 0x1C000CD9C (HUBMUX_CreatePSM.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0039F00 (memset.c)
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
  unsigned __int16 v10; // cx
  __int64 v11; // rdx
  unsigned __int16 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  unsigned __int16 v17; // ax
  unsigned __int16 v18; // dx
  __int64 v19; // rbx
  unsigned int v20; // esi
  _QWORD **v22; // rbx
  _QWORD *v23; // rcx
  _QWORD *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rax
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
    v10 = 0;
    if ( *(_WORD *)(a1 + 150) )
    {
      while ( 1 )
      {
        memset(v28, 0, sizeof(v28));
        _InterlockedOr((volatile signed __int32 *)v28 + 1, 1u);
        if ( *(_BYTE *)(a1 + 232) )
        {
          v12 = v9 + 1;
          LOWORD(v28[0]) = v9 + 1;
          if ( ((unsigned __int8)(1 << ((v9 + 1) & 7)) & *(_BYTE *)(((unsigned __int64)(unsigned __int16)(v9 + 1) >> 3)
                                                                  + a1
                                                                  + 1182)) != 0 )
          {
            _InterlockedAnd((volatile signed __int32 *)v28 + 1, 0xFFFFFFFE);
            v12 = v28[0];
          }
          if ( *(_BYTE *)(a1 + 253) )
          {
            _InterlockedOr((volatile signed __int32 *)v28 + 1, 0x100u);
            v12 = v28[0];
            HIDWORD(v28[2]) = *(_DWORD *)(a1 + 156);
          }
          v28[3] = *(_QWORD *)(a1 + 2496);
          LODWORD(v28[4]) = *(_DWORD *)(a1 + 2504);
          BYTE2(v28[0]) = *(_BYTE *)(a1 + 2482);
        }
        else
        {
          v11 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * v9);
          LOWORD(v28[0]) = *(_WORD *)v11;
          if ( *(_DWORD *)(v11 + 4) == 102 )
            _InterlockedAnd((volatile signed __int32 *)v28 + 1, 0xFFFFFFFE);
          if ( *(_DWORD *)(v11 + 8) == 116 )
            _InterlockedOr((volatile signed __int32 *)v28 + 1, 8u);
          _InterlockedOr((volatile signed __int32 *)v28 + 1, 0x100u);
          if ( *(_BYTE *)(v11 + 2) )
            HIDWORD(v28[2]) = *(_DWORD *)(a1 + 156);
          v12 = v28[0];
          v28[3] = *(_QWORD *)(v11 + 16);
          LODWORD(v28[4]) = *(unsigned __int16 *)(v11 + 14);
          BYTE2(v28[0]) = *(_BYTE *)(v11 + 3);
          if ( (unsigned __int8)(BYTE2(v28[0]) - 1) > 4u )
            BYTE2(v28[0]) = 5;
        }
        if ( v12 > *(_WORD *)(a1 + 154) )
          *(_WORD *)(a1 + 154) = v12;
        if ( v12 < *(_WORD *)(a1 + 152) )
          *(_WORD *)(a1 + 152) = v12;
        LODWORD(v28[1]) = 768;
        v13 = HUBMUX_CreatePSM(a1, (unsigned __int16 *)v28);
        if ( !v13 )
          break;
        v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                v13,
                off_1C005B230);
        *(_QWORD *)(v14 + 1248) = &PSM30StateTable;
        *(_DWORD *)(v14 + 1124) = 5000;
        *(_DWORD *)(v14 + 1256) = 5000;
        v15 = (_QWORD *)(v14 + 248);
        v16 = *(_QWORD **)(a1 + 2360);
        if ( *v16 != a1 + 2352 )
          __fastfail(3u);
        *v15 = a1 + 2352;
        ++v9;
        v15[1] = v16;
        *v16 = v15;
        *(_QWORD *)(a1 + 2360) = v15;
        ++*(_DWORD *)(a1 + 2348);
        if ( v9 >= *(_WORD *)(a1 + 150) )
        {
          v10 = *(_WORD *)(a1 + 154);
          goto LABEL_43;
        }
      }
    }
    else
    {
LABEL_43:
      v17 = *(_WORD *)(a1 + 148);
      v18 = 2;
      if ( v17 <= v10 )
        v17 = v10;
      *(_WORD *)(a1 + 48) = v17;
      if ( ((unsigned __int64)v17 >> 3) + 1 >= 2 )
        v18 = (v17 >> 3) + 1;
      if ( v18 <= *(_WORD *)(a1 + 88) )
        v18 = *(_WORD *)(a1 + 88);
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
  v22 = (_QWORD **)(a1 + 2352);
  v20 = 2045;
  while ( 1 )
  {
    v27 = *v22;
    if ( *v22 == v22 )
      break;
    if ( (_QWORD **)v27[1] != v22 || (v23 = (_QWORD *)*v27, *(_QWORD **)(*v27 + 8LL) != v27) )
      __fastfail(3u);
    *v22 = v23;
    v24 = v27 - 31;
    v25 = WdfFunctions_01015;
    v23[1] = v22;
    --*(_DWORD *)(a1 + 2348);
    v26 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *))(v25 + 1632))(WdfDriverGlobals, v24);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v26);
  }
  return v20;
}
