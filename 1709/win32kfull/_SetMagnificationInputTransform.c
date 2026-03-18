/*
 * XREFs of _SetMagnificationInputTransform @ 0x1C01231AC
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C00F9E80 (xxxDoHotKeyStuff.c)
 *     MagpRevokeInputTransfrom @ 0x1C0123170 (MagpRevokeInputTransfrom.c)
 *     FreeDesktop @ 0x1C0123240 (FreeDesktop.c)
 *     ?MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x1C01A7FE8 (-MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     _PostMessage @ 0x1C00C91E0 (_PostMessage.c)
 *     AcquireMagInputLock @ 0x1C00FD424 (AcquireMagInputLock.c)
 *     ?ComputeMagnificationFactor@@YAXPEAU_MAGNIFICATION_INPUT_TRANSFORM@@@Z @ 0x1C01DFC74 (-ComputeMagnificationFactor@@YAXPEAU_MAGNIFICATION_INPUT_TRANSFORM@@@Z.c)
 *     ?VerifyMagInputDimensions@@YAHPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x1C01DFCF0 (-VerifyMagInputDimensions@@YAHPEAU_MAGN_INPUT_TRANSFORM@@@Z.c)
 */

__int64 __fastcall SetMagnificationInputTransform(__int128 *a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rax
  bool v12; // zf
  __int64 v13; // rax
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  _OWORD *v16; // rax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  _OWORD *v21; // rax
  __int64 v22; // rdx
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // [rsp+20h] [rbp-30h] BYREF
  __int128 v26; // [rsp+30h] [rbp-20h]
  __int128 v27; // [rsp+40h] [rbp-10h]

  v3 = *((_DWORD *)a1 + 8);
  v4 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( !v3 )
  {
    if ( !*(_QWORD *)(v4 + 216) )
    {
      if ( !(unsigned int)VerifyMagInputDimensions((struct _MAGN_INPUT_TRANSFORM *)a1) )
        return 0LL;
      v19 = *a1;
      *(_QWORD *)&v27 = gptiCurrent;
      v20 = a1[1];
      v25 = v19;
      v26 = v20;
      ComputeMagnificationFactor((struct _MAGNIFICATION_INPUT_TRANSFORM *)&v25);
      AcquireMagInputLock();
      v21 = (_OWORD *)Win32AllocPool(48LL, 1735226197LL);
      *(_QWORD *)(v4 + 216) = v21;
      if ( !v21 )
      {
        UserSetLastError(14LL, v22);
        _InterlockedExchange64(&gpMagInputLock, 0LL);
        return 0LL;
      }
      v10 = 804LL;
      v23 = v26;
      *v21 = v25;
      v24 = v27;
      v21[1] = v23;
      v21[2] = v24;
      goto LABEL_24;
    }
    goto LABEL_21;
  }
  if ( v3 <= 0 )
    goto LABEL_7;
  if ( v3 > 2 )
  {
    if ( v3 == 3 )
    {
      v5 = *(_QWORD *)(v4 + 216);
      if ( !v5 )
        return 0LL;
      if ( gptiCurrent == *(_QWORD *)(v5 + 32) || gptiCurrent == gptiRit )
      {
        AcquireMagInputLock();
        Win32FreePool(*(_QWORD *)(v4 + 216), v8, v9);
        v10 = 805LL;
        *(_QWORD *)(v4 + 216) = 0LL;
LABEL_24:
        _InterlockedExchange64(&gpMagInputLock, 0LL);
        PostMessage(-1LL, v10, 0LL, 0LL);
        return 1LL;
      }
      goto LABEL_21;
    }
LABEL_7:
    v7 = 87LL;
LABEL_22:
    UserSetLastError(v7, a2);
    return 0LL;
  }
  v11 = *(_QWORD *)(v4 + 216);
  if ( !v11 )
    goto LABEL_7;
  if ( gptiCurrent != *(_QWORD *)(v11 + 32) )
  {
LABEL_21:
    v7 = 5LL;
    goto LABEL_22;
  }
  if ( !(unsigned int)VerifyMagInputDimensions((struct _MAGN_INPUT_TRANSFORM *)a1) )
    return 0LL;
  v12 = *((_DWORD *)a1 + 8) == 1;
  v13 = *(_QWORD *)(v4 + 216);
  v14 = *(_OWORD *)(v13 + 32);
  v26 = *(_OWORD *)(v13 + 16);
  v15 = *a1;
  v27 = v14;
  v25 = v15;
  if ( v12 )
    v26 = a1[1];
  ComputeMagnificationFactor((struct _MAGNIFICATION_INPUT_TRANSFORM *)&v25);
  AcquireMagInputLock();
  v16 = *(_OWORD **)(v4 + 216);
  v17 = v26;
  *v16 = v25;
  v18 = v27;
  v16[1] = v17;
  v16[2] = v18;
  _InterlockedExchange64(&gpMagInputLock, 0LL);
  return 1LL;
}
