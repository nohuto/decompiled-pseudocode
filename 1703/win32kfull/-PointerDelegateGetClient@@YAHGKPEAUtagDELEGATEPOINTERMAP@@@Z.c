/*
 * XREFs of ?PointerDelegateGetClient@@YAHGKPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01C7014
 * Callers:
 *     ValidateDelegatePointerList @ 0x1C01BB81C (ValidateDelegatePointerList.c)
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x1C0133004 (INPUTDEST_FROM_PWND.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?DelegateCapture@PointerList@@YAPEAUtagWND@@GKH@Z @ 0x1C01E9BA4 (-DelegateCapture@PointerList@@YAPEAUtagWND@@GKH@Z.c)
 */

__int64 __fastcall PointerDelegateGetClient(unsigned __int16 a1, unsigned int a2, struct tagDELEGATEPOINTERMAP *a3)
{
  struct tagWND *v6; // rdi
  __int64 result; // rax
  __int128 *v8; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm0
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  _DWORD v29[48]; // [rsp+30h] [rbp-1A8h] BYREF
  __int128 v30; // [rsp+F0h] [rbp-E8h] BYREF
  __int128 v31; // [rsp+100h] [rbp-D8h]
  __int128 v32; // [rsp+110h] [rbp-C8h]
  __int128 v33; // [rsp+120h] [rbp-B8h]
  __int128 v34; // [rsp+130h] [rbp-A8h]
  __int128 v35; // [rsp+140h] [rbp-98h]
  __int128 v36; // [rsp+150h] [rbp-88h]
  __int128 v37; // [rsp+160h] [rbp-78h]
  __int128 v38; // [rsp+170h] [rbp-68h]
  __int128 v39; // [rsp+180h] [rbp-58h]
  __int128 v40; // [rsp+190h] [rbp-48h]
  __int128 v41; // [rsp+1A0h] [rbp-38h]

  if ( (gdwMitConfig & 4) != 0 )
  {
    CTouchProcessor::DelegateCapture(gpTouchProcessor, &v30, a1, a2, 0);
    v6 = 0LL;
    if ( HIDWORD(v35) == 2 )
      v6 = (struct tagWND *)v35;
  }
  else
  {
    v6 = PointerList::DelegateCapture((PointerList *)a1, a2, (unsigned int)a3, gdwMitConfig);
  }
  if ( !v6 || *((_QWORD *)v6 + 2) == gptiCurrent )
    return 0LL;
  *(_WORD *)a3 = a1;
  *((_DWORD *)a3 + 1) = a2;
  memset((char *)a3 + 8, 0, 0xC0uLL);
  v8 = (__int128 *)INPUTDEST_FROM_PWND(v29, (__int64)v6);
  v9 = v8[1];
  v30 = *v8;
  v10 = v8[2];
  v31 = v9;
  v11 = v8[3];
  v32 = v10;
  v12 = v8[4];
  v33 = v11;
  v13 = v8[5];
  v34 = v12;
  v14 = v8[6];
  v35 = v13;
  v36 = v14;
  v15 = v8[7];
  v8 += 8;
  v37 = v15;
  v16 = v8[1];
  v38 = *v8;
  v17 = v8[2];
  v39 = v16;
  v18 = v8[3];
  v40 = v17;
  v41 = v18;
  v19 = v31;
  *(_OWORD *)((char *)a3 + 8) = v30;
  v20 = v32;
  *(_OWORD *)((char *)a3 + 24) = v19;
  v21 = v33;
  *(_OWORD *)((char *)a3 + 40) = v20;
  v22 = v34;
  *(_OWORD *)((char *)a3 + 56) = v21;
  v23 = v35;
  *(_OWORD *)((char *)a3 + 72) = v22;
  v24 = v36;
  *(_OWORD *)((char *)a3 + 88) = v23;
  v25 = v37;
  *(_OWORD *)((char *)a3 + 104) = v24;
  *(_OWORD *)((char *)a3 + 120) = v25;
  v26 = v39;
  *(_OWORD *)((char *)a3 + 136) = v38;
  v27 = v40;
  *(_OWORD *)((char *)a3 + 152) = v26;
  v28 = v41;
  result = 1LL;
  *(_OWORD *)((char *)a3 + 168) = v27;
  *((_DWORD *)a3 + 50) = 1;
  *(_OWORD *)((char *)a3 + 184) = v28;
  return result;
}
