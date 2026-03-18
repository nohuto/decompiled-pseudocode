/*
 * XREFs of GreSelectRedirectionBitmap @ 0x1C00716C0
 * Callers:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C007B200 (-vClearRendering@DC@@QEAAXXZ.c)
 *     UpdateRedirectedDCE @ 0x1C00E3320 (UpdateRedirectedDCE.c)
 *     InvalidateDCE @ 0x1C00E34E4 (InvalidateDCE.c)
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C0071AC4 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C0071B18 (--1DCOBJA@@QEAA@XZ.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C024A6F4 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 */

__int64 __fastcall GreSelectRedirectionBitmap(__int64 a1, __int64 a2)
{
  unsigned int v2; // r14d
  __int64 v3; // r15
  __int64 v5; // rbp
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 ***v13; // rcx
  __int64 v14; // r8
  __int64 **v15; // rdx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rcx
  __m128 v23; // xmm0
  int v24; // eax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rdx
  _QWORD v32[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v33; // [rsp+80h] [rbp+8h] BYREF
  __int64 v34; // [rsp+90h] [rbp+18h] BYREF

  v2 = 0;
  v3 = a2;
  v5 = a1;
  v6 = 0LL;
  if ( !a1 )
    return 1LL;
  while ( 1 )
  {
    LOBYTE(a2) = 1;
    v32[1] = 0LL;
    v7 = HmgShareLock(v5, a2);
    v32[0] = v7;
    v9 = v7;
    if ( !v7 )
      break;
    v10 = *(__int64 **)(v7 + 48);
    if ( (*(_DWORD *)(v7 + 40) & 1) != 0 )
    {
      v26 = *(_QWORD *)(v7 + 520);
      if ( (*(_DWORD *)(v7 + 36) & 0x4000) == 0 )
      {
        *(_DWORD *)(v7 + 36) |= 0x40000u;
        *(_QWORD *)(v7 + 2552) = v3;
        DCOBJA::~DCOBJA((DCOBJA *)v32);
        return 1LL;
      }
      if ( !v26 )
        v26 = **(_QWORD **)(v7 + 512);
      LOBYTE(v8) = 5;
      v27 = HmgShareLockCheck(v26, v8);
      v34 = v27;
      v29 = v27;
      if ( v27 )
      {
        if ( v3 )
        {
          LOBYTE(v28) = 5;
          v30 = HmgShareLockCheck(v3, v28);
          v33 = v30;
          if ( v30 )
          {
            if ( v29 != v30 )
            {
              if ( (*(_DWORD *)(v9 + 36) & 0x40000) == 0 )
                INC_SHARE_REF_CNT(v29, v31);
              *(_DWORD *)(v9 + 36) |= 0x40000u;
              *(_QWORD *)(v9 + 2552) = v3;
            }
            v2 = 1;
          }
          EPALOBJ::~EPALOBJ((EPALOBJ *)&v33);
        }
        else
        {
          if ( (*(_DWORD *)(v9 + 36) & 0x40000) == 0 )
            INC_SHARE_REF_CNT(v27, v28);
          *(_DWORD *)(v9 + 36) |= 0x40000u;
          *(_QWORD *)(v9 + 2552) = 0LL;
          v2 = 1;
        }
      }
LABEL_65:
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v34);
      break;
    }
    if ( v3 && a1 == v5 )
    {
      v11 = v10[2];
      if ( v10 != (__int64 *)v11 && v11 && (*(_DWORD *)(v11 + 32) & 0x20000) != 0 && v10 )
      {
        LOBYTE(v8) = 5;
        v12 = HmgShareLockCheck(v3, v8);
        v34 = v12;
        if ( v12 && (*(_DWORD *)(v12 + 116) & 1) != 0 )
        {
          v13 = *(__int64 ****)(v12 + 40);
          v14 = *(_QWORD *)(v12 + 24);
          v15 = *v13;
          v16 = *((_DWORD *)v13 + 4);
          while ( v15[6] != v10 )
          {
            v15 = (__int64 **)*v15;
            if ( !--v16 )
              goto LABEL_17;
          }
          v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) + 8LL * *((unsigned int *)v15 + 4)) + 8LL);
        }
LABEL_17:
        EPALOBJ::~EPALOBJ((EPALOBJ *)&v34);
      }
      LOBYTE(v8) = 5;
      v34 = HmgShareLockCheck(v3, v8);
      v6 = v34;
      if ( !v34 )
        goto LABEL_65;
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v34);
    }
    if ( (*(_DWORD *)(v9 + 36) & 0x4000) != 0 )
    {
      v17 = *(_QWORD *)(v9 + 512);
      if ( v17 )
      {
        LOBYTE(v8) = 5;
        v18 = HmgShareLockCheck(*(_QWORD *)(v17 + 32), v8);
        v34 = v18;
        if ( v18 )
          DEC_SHARE_REF_CNT(v18);
        EPALOBJ::~EPALOBJ((EPALOBJ *)&v34);
      }
    }
    if ( v3 )
    {
      LOBYTE(v8) = 5;
      v19 = HmgShareLockCheck(v3, v8);
      v34 = v19;
      if ( v19 )
        INC_SHARE_REF_CNT(v19, v20);
      *(_DWORD *)(v9 + 36) |= 0x4000u;
      v21 = *(_DWORD *)(v6 + 112);
      if ( (v21 & 0x800) == 0 )
        *(_DWORD *)(v6 + 112) = v21 | 0x800;
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v34);
    }
    else
    {
      v6 = v10[321];
      *(_DWORD *)(v9 + 36) &= ~0x4000u;
    }
    if ( (*(_DWORD *)(v6 + 112) & 0x200) != 0 )
      *(_DWORD *)(v9 + 36) |= 0x8000u;
    else
      *(_DWORD *)(v9 + 36) &= ~0x8000u;
    *(_QWORD *)(v9 + 512) = v6;
    if ( (*(_DWORD *)(v6 + 116) & 0x800) != 0 )
    {
      DC::vSetDpiScaling(v9, *(_QWORD *)(v6 + 596));
    }
    else
    {
      v22 = *(_QWORD *)(v9 + 480);
      if ( v22
        && (unsigned int)UserIsGDIScalingApplicable(v22)
        && (unsigned int)UserGetHwndDpi(*(_QWORD *)(v9 + 480), &v33)
        && (_WORD)v33 != 96 )
      {
        v23 = (__m128)COERCE_UNSIGNED_INT((float)(unsigned __int16)GreGetScaledLogPixels((unsigned __int16)v33));
        v23.m128_f32[0] = v23.m128_f32[0] / 96.0;
        DC::vSetDpiScaling(v9, _mm_unpacklo_ps(v23, v23).m128_u64[0]);
      }
      else
      {
        v24 = *(_DWORD *)(v9 + 536);
        if ( (v24 & 1) != 0 )
        {
          *(_QWORD *)(v9 + 548) = 0LL;
          *(_DWORD *)(v9 + 36) |= 0x10u;
          *(_QWORD *)(v9 + 540) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
          *(_DWORD *)(v9 + 536) = v24 & 0xFFFFFFF8 | 4;
        }
      }
    }
    *(_QWORD *)(v9 + 528) = *(_QWORD *)(v6 + 56);
    *(_DWORD *)(v9 + 332) |= 0xFu;
    if ( *(int *)(v9 + 116) <= 1 )
      v5 = 0LL;
    else
      v5 = *(_QWORD *)(v9 + 128);
    DCOBJA::~DCOBJA((DCOBJA *)v32);
    if ( !v5 )
      return 1LL;
  }
  DCOBJA::~DCOBJA((DCOBJA *)v32);
  return v2;
}
