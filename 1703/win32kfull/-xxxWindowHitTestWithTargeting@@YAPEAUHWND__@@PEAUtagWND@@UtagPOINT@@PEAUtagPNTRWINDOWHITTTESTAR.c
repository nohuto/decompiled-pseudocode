/*
 * XREFs of ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01D1138
 * Callers:
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01D0660 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUt.c)
 *     xxxPointerWindowHitTest @ 0x1C01D237C (xxxPointerWindowHitTest.c)
 * Callees:
 *     GetWindowCloakState @ 0x1C0061BB0 (GetWindowCloakState.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0062468 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     ThreadLockExchangeAlways @ 0x1C00CB9BC (ThreadLockExchangeAlways.c)
 *     ?ApplyWindowTransform@@YAXPEBU_D3DMATRIX@@PEAUtagPOINT@@PEAUtagTOUCHTARGETINGCONTACT@@H@Z @ 0x1C01CEB3C (-ApplyWindowTransform@@YAXPEBU_D3DMATRIX@@PEAUtagPOINT@@PEAUtagTOUCHTARGETINGCONTACT@@H@Z.c)
 *     ?CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1C01CEF74 (-CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 *     ?ClipContact@@YAXPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@HPEBUtagRECT@@@Z @ 0x1C01CEFA4 (-ClipContact@@YAXPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@HPEBUtagRECT@@@Z.c)
 *     ?TouchTargetingIsSpecialTarget@@YAHPEAUtagWND@@0@Z @ 0x1C01CFA0C (-TouchTargetingIsSpecialTarget@@YAHPEAUtagWND@@0@Z.c)
 *     ?TransformRect@@YAXPEBU_D3DMATRIX@@PEAUtagRECT@@H@Z @ 0x1C01CFB54 (-TransformRect@@YAXPEBU_D3DMATRIX@@PEAUtagRECT@@H@Z.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C01D043C (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01D0660 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUt.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C01D0E14 (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 */

HWND __fastcall xxxWindowHitTestWithTargeting(ULONG_PTR a1, struct tagPOINT a2, __int64 a3, struct tagRECT *a4, int a5)
{
  int v5; // r12d
  struct tagRECT v6; // xmm6
  struct tagWND *v7; // r13
  unsigned __int64 v8; // rbx
  __int64 started; // rdx
  HWND v11; // r15
  ULONG_PTR v13; // rsi
  struct tagTOUCHTARGETINGCONTACT *v14; // rdx
  const struct _D3DMATRIX *v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // r13d
  unsigned int Prop; // r12d
  int v19; // r8d
  _OWORD *v20; // rdx
  int v21; // r9d
  struct tagRECT *v22; // r8
  __int128 v23; // xmm1
  HWND v24; // rcx
  int v25; // eax
  __int64 v26; // rax
  struct tagPOINT v27; // rdx
  struct tagPOINT *v28; // rax
  __int64 v29; // rax
  unsigned int v31; // [rsp+48h] [rbp-41h] BYREF
  int v32; // [rsp+4Ch] [rbp-3Dh]
  int v33; // [rsp+50h] [rbp-39h] BYREF
  struct tagWND *v34; // [rsp+58h] [rbp-31h]
  __int64 v35; // [rsp+60h] [rbp-29h]
  struct tagRECT v36; // [rsp+68h] [rbp-21h] BYREF
  _QWORD v37[6]; // [rsp+78h] [rbp-11h] BYREF
  int v38; // [rsp+E8h] [rbp+5Fh] BYREF
  struct tagPOINT v39; // [rsp+F0h] [rbp+67h] BYREF
  struct tagRECT *v40; // [rsp+100h] [rbp+77h]

  v40 = a4;
  v39 = a2;
  v5 = 0;
  v6 = *a4;
  v7 = 0LL;
  v33 = -2;
  v8 = (unsigned __int64)a2;
  v32 = 0;
  v34 = 0LL;
  started = 0LL;
  v11 = 0LL;
  v13 = a1;
  if ( a1 && *(_DWORD *)(a3 + 88) == 2 )
  {
    v7 = *(struct tagWND **)(a1 + 104);
    v14 = *(struct tagTOUCHTARGETINGCONTACT **)(a3 + 40);
    v34 = v7;
    started = (unsigned int)CanPointStartResize(v7, v14, (struct tagPOINT)v8);
  }
  v15 = (const struct _D3DMATRIX *)gptiCurrent;
  v37[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v37;
  v37[1] = 0LL;
  v35 = (int)started;
LABEL_46:
  if ( v13 && !v5 )
  {
    while ( 1 )
    {
      ThreadLockExchangeAlways(v13, (__int64)v37);
      v16 = *(_QWORD *)(a3 + 40);
      v15 = 0LL;
      if ( !*(_DWORD *)(v16 + 176) && !*(_DWORD *)(v16 + 180) )
        break;
      if ( *(_QWORD *)(a3 + 56) && !*(_DWORD *)(a3 + 64) )
        break;
      if ( !IsCompositionInputWindow((struct tagWND *)v13) && (*(_BYTE *)(v13 + 71) & 0x10) == 0
        || (*(_BYTE *)(v13 + 66) & 8) != 0 && (*(_BYTE *)(v13 + 64) & 0x20) != 0
        || (unsigned int)IsWindowDesktopComposed(v13) && (unsigned int)GetWindowCloakState(v13)
        || v35 && TouchTargetingIsSpecialTarget(v7, (struct tagWND *)v13) )
      {
        goto LABEL_45;
      }
      v17 = 0;
      v31 = 0;
      if ( *(_DWORD *)(a3 + 88) || IsCompositionInputWindow((struct tagWND *)v13) )
      {
        Prop = GetProp(v13, gatomPtrTargetFlags, 1);
      }
      else
      {
        Prop = 4;
        v19 = 1;
      }
      if ( *(_DWORD *)(a3 + 84) )
      {
        v20 = *(_OWORD **)(v13 + 288);
        if ( v20 )
        {
          v21 = v19;
          v22 = *(struct tagRECT **)(a3 + 40);
          *(_OWORD *)(a3 + 104) = *v20;
          *(_OWORD *)(a3 + 120) = v20[1];
          *(_OWORD *)(a3 + 136) = v20[2];
          v23 = v20[3];
          *(_QWORD *)(a3 + 96) = a3 + 104;
          *(_OWORD *)(a3 + 152) = v23;
          ApplyWindowTransform((const struct _D3DMATRIX *)(a3 + 104), &v39, v22, v21);
          TransformRect(*(const struct _D3DMATRIX **)(a3 + 96), v40, 1);
          v8 = (unsigned __int64)v39;
        }
      }
      v36 = *v40;
      v24 = xxxWindowHitTestFromTargetingProperty(
              v13,
              (struct tagPOINT)v8,
              (int *)a3,
              &v38,
              (unsigned __int16)Prop,
              &v36);
      if ( *(_DWORD *)(a3 + 88) < 0xFu )
      {
        v25 = v38;
      }
      else
      {
        v25 = 0;
        *(_DWORD *)(a3 + 180) = 1;
        v38 = 0;
      }
      if ( v25 )
      {
        v36 = *v40;
        v26 = xxxTargetingHitTest(v13, v8, a3, &v31, &v36, Prop, a5);
        v17 = v31;
        v24 = (HWND)v26;
      }
      if ( !v11 && v24 )
        v11 = v24;
      v5 = v32;
      if ( *(_QWORD *)(a3 + 168) == v13 )
        v5 = 1;
      v27 = *(struct tagPOINT *)(*(_QWORD *)(a3 + 40) + 32LL);
      v32 = v5;
      xxxSendNCHitTest(
        (struct tagWND *)v13,
        v27,
        v27,
        (struct tagPOINT *)(a3 + 48),
        &v33,
        (struct tagPNTRWINDOWHITTTESTARGS *)a3);
      if ( v33 != -1 )
        ClipContact((struct tagWND *)v13, *(struct tagTOUCHTARGETINGCONTACT **)(a3 + 40), v17, v40);
      if ( *(_DWORD *)(a3 + 84) )
      {
        v15 = *(const struct _D3DMATRIX **)(a3 + 96);
        if ( v15 )
        {
          if ( *(_DWORD *)(a3 + 88) == 1 )
          {
            ApplyWindowTransform(v15, &v39, *(struct tagRECT **)(a3 + 40), 0);
            v8 = (unsigned __int64)v39;
            *v40 = v6;
            v28 = *(struct tagPOINT **)(a3 + 40);
            *(_QWORD *)(a3 + 96) = 0LL;
            v28[4] = a2;
          }
        }
      }
      if ( !v5 )
      {
LABEL_45:
        v13 = *(_QWORD *)(v13 + 88);
        v7 = v34;
        goto LABEL_46;
      }
      v29 = *(_QWORD *)(v13 + 120);
      if ( !v29 || v29 == v13 )
        break;
      v7 = v34;
      v13 = *(_QWORD *)(v13 + 120);
    }
  }
  ThreadUnlock1(v15, started);
  return v11;
}
