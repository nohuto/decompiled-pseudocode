/*
 * XREFs of ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01D57E4
 * Callers:
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01D4D14 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUt.c)
 *     xxxPointerWindowHitTest @ 0x1C01D6B30 (xxxPointerWindowHitTest.c)
 * Callees:
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0061FD0 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     GetWindowCloakState @ 0x1C0063F5C (GetWindowCloakState.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     ThreadLockExchangeAlways @ 0x1C00CF31C (ThreadLockExchangeAlways.c)
 *     ?ApplyWindowTransform@@YAXPEBU_D3DMATRIX@@PEAUtagPOINT@@PEAUtagTOUCHTARGETINGCONTACT@@H@Z @ 0x1C01D3078 (-ApplyWindowTransform@@YAXPEBU_D3DMATRIX@@PEAUtagPOINT@@PEAUtagTOUCHTARGETINGCONTACT@@H@Z.c)
 *     ?CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1C01D3668 (-CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 *     ?ClipContact@@YAXPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@HPEBUtagRECT@@@Z @ 0x1C01D3698 (-ClipContact@@YAXPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@HPEBUtagRECT@@@Z.c)
 *     ?TouchTargetingIsSpecialTarget@@YAHPEAUtagWND@@0@Z @ 0x1C01D40E4 (-TouchTargetingIsSpecialTarget@@YAHPEAUtagWND@@0@Z.c)
 *     ?TransformRect@@YAXPEBU_D3DMATRIX@@PEAUtagRECT@@H@Z @ 0x1C01D422C (-TransformRect@@YAXPEBU_D3DMATRIX@@PEAUtagRECT@@H@Z.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C01D4AF0 (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01D4D14 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUt.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C01D54AC (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 */

__int64 __fastcall xxxWindowHitTestWithTargeting(
        __int64 a1,
        struct tagPOINT a2,
        __int64 a3,
        struct tagRECT *a4,
        int a5)
{
  int v5; // r12d
  struct tagWND *v6; // r13
  struct tagRECT v7; // xmm6
  __int64 v8; // r15
  __int64 v10; // rbx
  __int64 v11; // rsi
  struct tagTOUCHTARGETINGCONTACT *v14; // rdx
  const struct _D3DMATRIX *v15; // rcx
  __int64 v16; // rax
  int v17; // r12d
  unsigned int v18; // r13d
  unsigned int Prop; // r12d
  int v20; // r8d
  _OWORD *v21; // rax
  int v22; // r9d
  struct tagRECT *v23; // r8
  __int128 v24; // xmm1
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rax
  struct tagPOINT *v28; // rax
  __int64 v29; // rax
  int started; // [rsp+48h] [rbp-41h]
  int v32; // [rsp+4Ch] [rbp-3Dh] BYREF
  unsigned int v33; // [rsp+50h] [rbp-39h] BYREF
  int v34; // [rsp+54h] [rbp-35h] BYREF
  struct tagWND *v35; // [rsp+58h] [rbp-31h]
  struct tagRECT v36; // [rsp+68h] [rbp-21h] BYREF
  _QWORD v37[6]; // [rsp+78h] [rbp-11h] BYREF
  int v38; // [rsp+E8h] [rbp+5Fh]
  struct tagPOINT v39; // [rsp+F0h] [rbp+67h] BYREF
  struct tagRECT *v40; // [rsp+100h] [rbp+77h]

  v40 = a4;
  v39 = a2;
  v5 = 0;
  started = 0;
  v6 = 0LL;
  v7 = *a4;
  v8 = 0LL;
  v34 = -2;
  v38 = 0;
  v35 = 0LL;
  v10 = (__int64)a2;
  v11 = a1;
  if ( a1 && *(_DWORD *)(a3 + 88) == 2 )
  {
    v6 = *(struct tagWND **)(a1 + 104);
    v14 = *(struct tagTOUCHTARGETINGCONTACT **)(a3 + 40);
    v35 = v6;
    started = CanPointStartResize(v6, v14, a2);
  }
  v15 = (const struct _D3DMATRIX *)gptiCurrent;
  v37[0] = *(_QWORD *)(gptiCurrent + 392LL);
  *(_QWORD *)(gptiCurrent + 392LL) = v37;
  v37[1] = 0LL;
LABEL_47:
  if ( v11 && !v5 )
  {
    while ( 1 )
    {
      ThreadLockExchangeAlways(v11, (__int64)v37);
      v16 = *(_QWORD *)(a3 + 40);
      if ( !*(_DWORD *)(v16 + 176) && !*(_DWORD *)(v16 + 180) )
        break;
      if ( *(_QWORD *)(a3 + 56) && !*(_DWORD *)(a3 + 64) )
        break;
      v17 = IsCompositionInputWindow((struct tagWND *)v11);
      if ( !v17 && (*(_BYTE *)(v11 + 71) & 0x10) == 0
        || (*(_BYTE *)(v11 + 66) & 8) != 0 && (*(_BYTE *)(v11 + 64) & 0x20) != 0
        || (unsigned int)IsWindowDesktopComposed(v11) && (unsigned int)GetWindowCloakState(v11)
        || started && TouchTargetingIsSpecialTarget(v6, (struct tagWND *)v11) )
      {
        v5 = v38;
LABEL_46:
        v11 = *(_QWORD *)(v11 + 88);
        v6 = v35;
        goto LABEL_47;
      }
      v18 = 0;
      v33 = 0;
      if ( *(_DWORD *)(a3 + 88) || v17 )
      {
        Prop = GetProp(v11, gatomPtrTargetFlags, 1);
      }
      else
      {
        Prop = 4;
        v20 = 1;
      }
      if ( *(_DWORD *)(a3 + 84) )
      {
        v21 = *(_OWORD **)(v11 + 288);
        if ( v21 )
        {
          v22 = v20;
          v23 = *(struct tagRECT **)(a3 + 40);
          *(_OWORD *)(a3 + 104) = *v21;
          *(_OWORD *)(a3 + 120) = v21[1];
          *(_OWORD *)(a3 + 136) = v21[2];
          v24 = v21[3];
          *(_QWORD *)(a3 + 96) = a3 + 104;
          *(_OWORD *)(a3 + 152) = v24;
          ApplyWindowTransform((const struct _D3DMATRIX *)(a3 + 104), &v39, v23, v22);
          TransformRect(*(const struct _D3DMATRIX **)(a3 + 96), v40, 1);
          v10 = (__int64)v39;
        }
      }
      v36 = *v40;
      v25 = xxxWindowHitTestFromTargetingProperty(v11, v10, a3, &v32, (unsigned __int16)Prop, &v36);
      if ( *(_DWORD *)(a3 + 88) < 0xFu )
      {
        v26 = v32;
      }
      else
      {
        v26 = 0;
        *(_DWORD *)(a3 + 180) = 1;
        v32 = 0;
      }
      if ( v26 )
      {
        v36 = *v40;
        v27 = xxxTargetingHitTest(v11, (struct tagPOINT)v10, a3, &v33, &v36, Prop, a5);
        v18 = v33;
        v25 = v27;
      }
      if ( !v8 && v25 )
        v8 = v25;
      v5 = v38;
      if ( *(_QWORD *)(a3 + 168) == v11 )
        v5 = 1;
      v38 = v5;
      xxxSendNCHitTest(
        v11,
        *(struct tagPOINT *)(*(_QWORD *)(a3 + 40) + 32LL),
        *(struct tagPOINT *)(*(_QWORD *)(a3 + 40) + 32LL),
        (struct tagPOINT *)(a3 + 48),
        &v34,
        (struct tagPNTRWINDOWHITTTESTARGS *)a3);
      if ( v34 != -1 )
        ClipContact((struct tagWND *)v11, *(struct tagTOUCHTARGETINGCONTACT **)(a3 + 40), v18, v40);
      if ( *(_DWORD *)(a3 + 84) )
      {
        v15 = *(const struct _D3DMATRIX **)(a3 + 96);
        if ( v15 )
        {
          if ( *(_DWORD *)(a3 + 88) == 1 )
          {
            ApplyWindowTransform(v15, &v39, *(struct tagRECT **)(a3 + 40), 0);
            v10 = (__int64)v39;
            *v40 = v7;
            v28 = *(struct tagPOINT **)(a3 + 40);
            *(_QWORD *)(a3 + 96) = 0LL;
            v28[4] = a2;
          }
        }
      }
      if ( !v5 )
        goto LABEL_46;
      v29 = *(_QWORD *)(v11 + 120);
      if ( !v29 || v29 == v11 )
        break;
      v6 = v35;
      v11 = *(_QWORD *)(v11 + 120);
    }
  }
  ((void (__fastcall *)(_QWORD, _QWORD))ThreadUnlock1)(v15, a2);
  return v8;
}
