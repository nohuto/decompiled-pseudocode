/*
 * XREFs of GreSelectRedirectionBitmap @ 0x1C0029120
 * Callers:
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00225E0 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C0027CB0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     InvalidateDCE @ 0x1C0072E04 (InvalidateDCE.c)
 *     UpdateRedirectedDCE @ 0x1C00FAEE0 (UpdateRedirectedDCE.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C124 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002C390 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?vAltLock@XDCOBJ@@QEAAXPEAUHDC__@@H@Z @ 0x1C0144678 (-vAltLock@XDCOBJ@@QEAAXPEAUHDC__@@H@Z.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C024C000 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 */

__int64 __fastcall GreSelectRedirectionBitmap(HDC a1, __int64 a2, int a3)
{
  unsigned int v3; // ebp
  HDC v6; // rdi
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 *v10; // rbx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rbx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbx
  int v22; // eax
  __int64 v23; // rax
  __int64 ***v24; // rcx
  __int64 **v25; // rdx
  int v26; // r8d
  __m128 v27; // xmm0
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rdi
  _QWORD v34[7]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v35; // [rsp+60h] [rbp+8h] BYREF
  int v36; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0;
  v6 = a1;
  v7 = 0LL;
  if ( !a1 )
    return 1LL;
  while ( 1 )
  {
    v34[0] = 0LL;
    v34[1] = 0LL;
    XDCOBJ::vAltLock((XDCOBJ *)v34, v6, a3);
    v9 = v34[0];
    if ( !v34[0] )
      return v3;
    v10 = *(__int64 **)(v34[0] + 48LL);
    if ( (*(_DWORD *)(v34[0] + 40LL) & 1) != 0 )
    {
      v28 = *(_QWORD *)(v34[0] + 520LL);
      if ( (*(_DWORD *)(v34[0] + 36LL) & 0x4000) != 0 )
      {
        if ( !v28 )
          v28 = **(_QWORD **)(v34[0] + 512LL);
        LOBYTE(v8) = 5;
        v29 = HmgShareLockCheck(v28, v8);
        v31 = v29;
        if ( v29 )
        {
          if ( a2 )
          {
            LOBYTE(v30) = 5;
            v32 = HmgShareLockCheck(a2, v30);
            v33 = v32;
            if ( v32 )
            {
              if ( v31 != v32 )
              {
                if ( (*(_DWORD *)(v9 + 36) & 0x40000) == 0 )
                  INC_SHARE_REF_CNT(v31);
                *(_DWORD *)(v9 + 36) |= 0x40000u;
                *(_QWORD *)(v9 + 2552) = a2;
              }
              v3 = 1;
              DEC_SHARE_REF_CNT(v33);
            }
          }
          else
          {
            if ( (*(_DWORD *)(v9 + 36) & 0x40000) == 0 )
              INC_SHARE_REF_CNT(v29);
            *(_DWORD *)(v9 + 36) |= 0x40000u;
            *(_QWORD *)(v9 + 2552) = 0LL;
            v3 = 1;
          }
          DEC_SHARE_REF_CNT(v31);
        }
      }
      else
      {
        *(_DWORD *)(v34[0] + 36LL) |= 0x40000u;
        v3 = 1;
        *(_QWORD *)(v9 + 2552) = a2;
      }
LABEL_69:
      if ( v9 )
        XDCOBJ::vAltUnlockFast((XDCOBJ *)v34);
      return v3;
    }
    if ( a2 && a1 == v6 )
    {
      v18 = v10[2];
      if ( v10 != (__int64 *)v18 )
      {
        if ( v18 )
        {
          if ( (*(_DWORD *)(v18 + 32) & 0x20000) != 0 )
          {
            if ( v10 )
            {
              LOBYTE(v8) = 5;
              v23 = HmgShareLockCheck(a2, v8);
              if ( v23 )
              {
                if ( (*(_DWORD *)(v23 + 116) & 1) != 0 )
                {
                  v24 = *(__int64 ****)(v23 + 40);
                  v25 = *v24;
                  v26 = *((_DWORD *)v24 + 4);
                  while ( v25[6] != v10 )
                  {
                    v25 = (__int64 **)*v25;
                    if ( !--v26 )
                      goto LABEL_47;
                  }
                  a2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 24) + 8LL)
                                             + 8LL * *((unsigned int *)v25 + 4))
                                 + 8LL);
                }
LABEL_47:
                DEC_SHARE_REF_CNT(v23);
              }
            }
          }
        }
      }
      LOBYTE(v8) = 5;
      v19 = HmgShareLockCheck(a2, v8);
      v7 = v19;
      if ( !v19 )
        goto LABEL_69;
      DEC_SHARE_REF_CNT(v19);
    }
    if ( (*(_DWORD *)(v9 + 36) & 0x4000) != 0 )
    {
      v15 = *(_QWORD *)(v9 + 512);
      if ( v15 )
      {
        LOBYTE(v8) = 5;
        v16 = HmgShareLockCheck(*(_QWORD *)(v15 + 32), v8);
        v17 = v16;
        if ( v16 )
        {
          DEC_SHARE_REF_CNT(v16);
          DEC_SHARE_REF_CNT(v17);
        }
      }
    }
    if ( a2 )
    {
      LOBYTE(v8) = 5;
      v20 = HmgShareLockCheck(a2, v8);
      v21 = v20;
      if ( v20 )
        INC_SHARE_REF_CNT(v20);
      *(_DWORD *)(v9 + 36) |= 0x4000u;
      v22 = *(_DWORD *)(v7 + 112);
      if ( (v22 & 0x800) == 0 )
        *(_DWORD *)(v7 + 112) = v22 | 0x800;
      if ( v21 )
        DEC_SHARE_REF_CNT(v21);
    }
    else
    {
      v7 = v10[321];
      *(_DWORD *)(v9 + 36) &= ~0x4000u;
    }
    if ( (*(_DWORD *)(v7 + 112) & 0x200) != 0 )
      *(_DWORD *)(v9 + 36) |= 0x8000u;
    else
      *(_DWORD *)(v9 + 36) &= ~0x8000u;
    *(_QWORD *)(v9 + 512) = v7;
    if ( (*(_DWORD *)(v7 + 116) & 0x800) != 0 )
    {
      DC::vSetDpiScaling(
        v9,
        _mm_unpacklo_ps((__m128)*(unsigned int *)(v7 + 596), (__m128)*(unsigned int *)(v7 + 600)).m128_u64[0]);
    }
    else
    {
      v11 = *(_QWORD *)(v9 + 480);
      if ( v11
        && (unsigned int)UserIsGDIScalingApplicable(v11)
        && (unsigned int)UserGetHwndDpi(*(_QWORD *)(v9 + 480), &v35)
        && v35 != 96 )
      {
        v27 = (__m128)COERCE_UNSIGNED_INT((float)(unsigned __int16)GreGetScaledLogPixels());
        v27.m128_f32[0] = v27.m128_f32[0] / 96.0;
        DC::vSetDpiScaling(v9, _mm_unpacklo_ps(v27, v27).m128_u64[0]);
      }
      else
      {
        v12 = *(_DWORD *)(v9 + 536);
        if ( (v12 & 1) != 0 )
        {
          *(_QWORD *)(v9 + 540) = 0LL;
          *(_QWORD *)(v9 + 548) = 0LL;
          *(_DWORD *)(v9 + 36) |= 0x10u;
          *(_DWORD *)(v9 + 536) = v12 & 0xFFFFFFF8 | 4;
        }
      }
    }
    *(_QWORD *)(v9 + 528) = *(_QWORD *)(v7 + 56);
    *(_DWORD *)(v9 + 332) |= 0xFu;
    if ( *(int *)(v9 + 116) > 1 )
      v6 = *(HDC *)(v9 + 128);
    else
      v6 = 0LL;
    XDCOBJ::RestoreAttributes((XDCOBJ *)v34);
    v36 = 0;
    v13 = *(_QWORD *)v34[0];
    HmgDecrementShareReferenceCountEx(v34[0], &v36);
    if ( v36 )
      bDeleteDCInternalEx(v13, 0LL);
    if ( !v6 )
      return 1LL;
  }
}
