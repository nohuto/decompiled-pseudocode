/*
 * XREFs of EditionPointerWindowHitTest @ 0x1C01D5C10
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     INPUTDEST_FROM_PWND @ 0x1C01350C4 (INPUTDEST_FROM_PWND.c)
 *     xxxPointerWindowHitTest @ 0x1C01D6B30 (xxxPointerWindowHitTest.c)
 */

_OWORD *__fastcall EditionPointerWindowHitTest(
        _OWORD *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        struct tagPOINT a8,
        int *a9,
        int a10,
        __int64 a11,
        __int64 a12,
        struct tagPOINT *a13)
{
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // rsi
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  _OWORD *v23; // rax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm0
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  _OWORD *result; // rax
  _QWORD v35[3]; // [rsp+60h] [rbp-E8h] BYREF
  _DWORD v36[50]; // [rsp+78h] [rbp-D0h] BYREF

  if ( a4 )
  {
    v16 = *(_QWORD *)(a3 + 80);
  }
  else
  {
    v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiRit + 432LL) + 8LL) + 16LL);
    v35[0] = *(_QWORD *)(a2 + 392);
    *(_QWORD *)(a2 + 392) = v35;
    v35[1] = v16;
    if ( v16 )
      _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
  }
  v19 = xxxPointerWindowHitTest((struct tagTHREADINFO *)a2, (struct tagWND *)v16, a7, a8, a9, a10, a11, a12, a13);
  if ( !a4 )
    ThreadUnlock1(v18, v17);
  LOBYTE(v17) = 1;
  v22 = HMValidateHandleNoSecure(v19, v17, v20, v21);
  v23 = INPUTDEST_FROM_PWND(v36, v22);
  v24 = v23[1];
  *a1 = *v23;
  v25 = v23[2];
  a1[1] = v24;
  v26 = v23[3];
  a1[2] = v25;
  v27 = v23[4];
  a1[3] = v26;
  v28 = v23[5];
  a1[4] = v27;
  v29 = v23[6];
  a1[5] = v28;
  a1[6] = v29;
  v30 = v23[7];
  v23 += 8;
  a1[7] = v30;
  v31 = v23[1];
  a1[8] = *v23;
  v32 = v23[2];
  a1[9] = v31;
  v33 = v23[3];
  result = a1;
  a1[10] = v32;
  a1[11] = v33;
  return result;
}
