/*
 * XREFs of ?DelegateCapture@PointerList@@YAPEAUtagWND@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01E9BF8
 * Callers:
 *     ?DelegateCapturePointerImplicit@@YAH_K@Z @ 0x1C01BAAF4 (-DelegateCapturePointerImplicit@@YAH_K@Z.c)
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x1C0133004 (INPUTDEST_FROM_PWND.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?DelegateCaptureInt@@YAPEAUtagWND@@PEAUtagPOINTERCAPTUREDATA@@H@Z @ 0x1C01E9D84 (-DelegateCaptureInt@@YAPEAUtagWND@@PEAUtagPOINTERCAPTUREDATA@@H@Z.c)
 */

struct tagWND *__fastcall PointerList::DelegateCapture(
        PointerList *this,
        __int64 a2,
        __int64 a3,
        struct tagDELEGATEPOINTERMAP *a4)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v8; // rdi
  struct tagWND *v9; // rax
  __int128 *v10; // rax
  __int128 v11; // xmm0
  __int64 v12; // rcx
  __int128 v13; // [rsp+20h] [rbp-188h]
  __int128 v14; // [rsp+30h] [rbp-178h]
  __int128 v15; // [rsp+40h] [rbp-168h]
  __int128 v16; // [rsp+50h] [rbp-158h]
  __int128 v17; // [rsp+60h] [rbp-148h]
  __int128 v18; // [rsp+70h] [rbp-138h]
  __int128 v19; // [rsp+80h] [rbp-128h]
  __int128 v20; // [rsp+A0h] [rbp-108h]
  __int128 v21; // [rsp+B0h] [rbp-F8h]
  __int128 v22; // [rsp+C0h] [rbp-E8h]
  __int128 v23; // [rsp+D0h] [rbp-D8h]
  _DWORD v24[48]; // [rsp+E0h] [rbp-C8h] BYREF

  v4 = *((_QWORD *)this + 5);
  v5 = 0LL;
  if ( !v4 )
    return 0LL;
  v8 = a3 + 8;
  *(_WORD *)a3 = *(_WORD *)(v4 + 20);
  *(_DWORD *)(a3 + 4) = *(_DWORD *)(v4 + 24);
  memset((void *)(a3 + 8), 0, 0xC0uLL);
  v9 = DelegateCaptureInt((struct tagPOINTERCAPTUREDATA *)v4, 1);
  v10 = (__int128 *)INPUTDEST_FROM_PWND(v24, (__int64)v9);
  v13 = *v10;
  v14 = v10[1];
  v15 = v10[2];
  v16 = v10[3];
  v17 = v10[4];
  v18 = v10[5];
  v19 = v10[6];
  v11 = v10[7];
  v10 += 8;
  v20 = *v10;
  v21 = v10[1];
  v22 = v10[2];
  v23 = v10[3];
  *(_OWORD *)v8 = v13;
  *(_OWORD *)(v8 + 16) = v14;
  *(_OWORD *)(v8 + 32) = v15;
  *(_OWORD *)(v8 + 48) = v16;
  *(_OWORD *)(v8 + 64) = v17;
  *(_OWORD *)(v8 + 80) = v18;
  *(_OWORD *)(v8 + 96) = v19;
  *(_OWORD *)(v8 + 112) = v11;
  *(_OWORD *)(v8 + 128) = v20;
  *(_OWORD *)(v8 + 144) = v21;
  *(_OWORD *)(v8 + 160) = v22;
  *(_OWORD *)(v8 + 176) = v23;
  if ( *(_DWORD *)(v8 + 92) == 2 )
    v12 = *(_QWORD *)(v8 + 80);
  else
    v12 = 0LL;
  *(_DWORD *)(a3 + 200) = v12 != 0;
  if ( *(_DWORD *)(v8 + 92) == 2 )
    return *(struct tagWND **)(v8 + 80);
  return (struct tagWND *)v5;
}
