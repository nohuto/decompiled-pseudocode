/*
 * XREFs of DCompHitTest @ 0x1C0013850
 * Callers:
 *     <none>
 * Callees:
 *     ?HitTest@CSpatialProcessor@@QEAA?AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@I_KKPEAHPEAI@Z @ 0x1C0013170 (-HitTest@CSpatialProcessor@@QEAA-AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@I_KKPEAHPEAI.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0017384 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

_OWORD *__fastcall DCompHitTest(
        _OWORD *a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9)
{
  __int64 v13; // rax
  __int128 *v14; // rax
  __int128 v15; // xmm0
  __int128 *v16; // rax
  _OWORD *result; // rax
  __int64 v18; // [rsp+28h] [rbp-D8h]
  __int128 v19; // [rsp+50h] [rbp-B0h]
  __int128 v20; // [rsp+60h] [rbp-A0h]
  __int128 v21; // [rsp+70h] [rbp-90h]
  __int128 v22; // [rsp+80h] [rbp-80h]
  __int128 v23; // [rsp+90h] [rbp-70h]
  __int128 v24; // [rsp+A0h] [rbp-60h]
  __int128 v25; // [rsp+B0h] [rbp-50h]
  __int128 v26; // [rsp+D0h] [rbp-30h]
  __int128 v27; // [rsp+E0h] [rbp-20h]
  __int128 v28; // [rsp+F0h] [rbp-10h]
  __int128 v29; // [rsp+100h] [rbp+0h]
  _BYTE v30[208]; // [rsp+110h] [rbp+10h] BYREF

  if ( !a2 )
    goto LABEL_4;
  if ( a2 > 3 )
  {
    if ( a2 == 4 )
    {
LABEL_4:
      v13 = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C0188018 + 8LL))(qword_1C0188018);
      goto LABEL_5;
    }
    if ( a2 != 5 )
    {
      if ( a2 != 6 )
        goto LABEL_10;
      goto LABEL_4;
    }
  }
  v13 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
LABEL_5:
  if ( !v13 )
  {
LABEL_10:
    memset(v30, 0, 0xC8uLL);
    v14 = (__int128 *)v30;
    v30[192] = 0;
    goto LABEL_7;
  }
  v14 = (__int128 *)CSpatialProcessor::HitTest(v13, v30, a2, a3, a4, v18, a5, a7, a8, a9);
LABEL_7:
  v19 = *v14;
  v20 = v14[1];
  v21 = v14[2];
  v22 = v14[3];
  v23 = v14[4];
  v24 = v14[5];
  v25 = v14[6];
  v15 = v14[7];
  v16 = v14 + 8;
  v26 = *v16;
  v27 = v16[1];
  v28 = v16[2];
  v29 = v16[3];
  CInputDest::SetEmpty((CInputDest *)v30);
  *a1 = v19;
  a1[1] = v20;
  a1[2] = v21;
  a1[3] = v22;
  a1[4] = v23;
  a1[5] = v24;
  a1[6] = v25;
  a1[7] = v15;
  a1[8] = v26;
  a1[9] = v27;
  result = a1;
  a1[10] = v28;
  a1[11] = v29;
  return result;
}
