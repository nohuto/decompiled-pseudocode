/*
 * XREFs of _SetMagnificationInputTransform @ 0x1C00A236C
 * Callers:
 *     MagpRevokeInputTransfrom @ 0x1C00A2330 (MagpRevokeInputTransfrom.c)
 *     xxxDoHotKeyStuff @ 0x1C00EF9D0 (xxxDoHotKeyStuff.c)
 *     FreeDesktop @ 0x1C0119800 (FreeDesktop.c)
 *     ?MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x1C01EBBF4 (-MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     _PostMessage @ 0x1C00B3950 (_PostMessage.c)
 *     AcquireMagInputLock @ 0x1C0103100 (AcquireMagInputLock.c)
 *     ?ComputeMagnificationFactor@@YAXPEAU_MAGNIFICATION_INPUT_TRANSFORM@@@Z @ 0x1C01D388C (-ComputeMagnificationFactor@@YAXPEAU_MAGNIFICATION_INPUT_TRANSFORM@@@Z.c)
 *     ?VerifyMagInputDimensions@@YAHPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x1C01D3908 (-VerifyMagInputDimensions@@YAHPEAU_MAGN_INPUT_TRANSFORM@@@Z.c)
 */

__int64 __fastcall SetMagnificationInputTransform(__int128 *a1)
{
  int v2; // eax
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  bool v9; // zf
  __int64 v10; // rax
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  _OWORD *v13; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  _OWORD *v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // [rsp+20h] [rbp-30h] BYREF
  __int128 v22; // [rsp+30h] [rbp-20h]
  __int128 v23; // [rsp+40h] [rbp-10h]

  v2 = *((_DWORD *)a1 + 8);
  v3 = *(_QWORD *)(gptiCurrent + 408LL);
  if ( !v2 )
  {
    if ( !*(_QWORD *)(v3 + 216) )
    {
      if ( !(unsigned int)VerifyMagInputDimensions((struct _MAGN_INPUT_TRANSFORM *)a1) )
        return 0LL;
      v16 = *a1;
      *(_QWORD *)&v23 = gptiCurrent;
      v17 = a1[1];
      v21 = v16;
      v22 = v17;
      ComputeMagnificationFactor((struct _MAGNIFICATION_INPUT_TRANSFORM *)&v21);
      AcquireMagInputLock();
      v18 = (_OWORD *)Win32AllocPool(48LL, 1735226197LL);
      *(_QWORD *)(v3 + 216) = v18;
      if ( !v18 )
      {
        UserSetLastError(14LL);
        _InterlockedExchange64(&gpMagInputLock, 0LL);
        return 0LL;
      }
      v7 = 804LL;
      v19 = v22;
      *v18 = v21;
      v20 = v23;
      v18[1] = v19;
      v18[2] = v20;
      goto LABEL_24;
    }
    goto LABEL_21;
  }
  if ( v2 <= 0 )
    goto LABEL_7;
  if ( v2 > 2 )
  {
    if ( v2 == 3 )
    {
      v4 = *(_QWORD *)(v3 + 216);
      if ( !v4 )
        return 0LL;
      if ( gptiCurrent == *(_QWORD *)(v4 + 32) || gptiCurrent == gptiRit )
      {
        AcquireMagInputLock();
        Win32FreePool(*(_QWORD *)(v3 + 216));
        v7 = 805LL;
        *(_QWORD *)(v3 + 216) = 0LL;
LABEL_24:
        _InterlockedExchange64(&gpMagInputLock, 0LL);
        PostMessage(-1LL, v7, 0LL, 0LL);
        return 1LL;
      }
      goto LABEL_21;
    }
LABEL_7:
    v6 = 87LL;
LABEL_22:
    UserSetLastError(v6);
    return 0LL;
  }
  v8 = *(_QWORD *)(v3 + 216);
  if ( !v8 )
    goto LABEL_7;
  if ( gptiCurrent != *(_QWORD *)(v8 + 32) )
  {
LABEL_21:
    v6 = 5LL;
    goto LABEL_22;
  }
  if ( !(unsigned int)VerifyMagInputDimensions((struct _MAGN_INPUT_TRANSFORM *)a1) )
    return 0LL;
  v9 = *((_DWORD *)a1 + 8) == 1;
  v10 = *(_QWORD *)(v3 + 216);
  v11 = *(_OWORD *)(v10 + 32);
  v22 = *(_OWORD *)(v10 + 16);
  v12 = *a1;
  v23 = v11;
  v21 = v12;
  if ( v9 )
    v22 = a1[1];
  ComputeMagnificationFactor((struct _MAGNIFICATION_INPUT_TRANSFORM *)&v21);
  AcquireMagInputLock();
  v13 = *(_OWORD **)(v3 + 216);
  v14 = v22;
  *v13 = v21;
  v15 = v23;
  v13[1] = v14;
  v13[2] = v15;
  _InterlockedExchange64(&gpMagInputLock, 0LL);
  return 1LL;
}
