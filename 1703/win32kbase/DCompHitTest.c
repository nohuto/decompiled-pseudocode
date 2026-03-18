/*
 * XREFs of DCompHitTest @ 0x1C006ED00
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0048010 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?HitTest@CSpatialProcessor@@QEAA?AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@I_KKPEAHPEAI@Z @ 0x1C006F03C (-HitTest@CSpatialProcessor@@QEAA-AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@I_KKPEAHPEAI.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

_OWORD *__fastcall DCompHitTest(_OWORD *a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 v8; // rax
  __int128 *v9; // rax
  __int128 v10; // xmm0
  __int128 *v11; // rax
  _OWORD *result; // rax
  __int128 v13; // [rsp+50h] [rbp-B0h]
  __int128 v14; // [rsp+60h] [rbp-A0h]
  __int128 v15; // [rsp+70h] [rbp-90h]
  __int128 v16; // [rsp+80h] [rbp-80h]
  __int128 v17; // [rsp+90h] [rbp-70h]
  __int128 v18; // [rsp+A0h] [rbp-60h]
  __int128 v19; // [rsp+B0h] [rbp-50h]
  __int128 v20; // [rsp+D0h] [rbp-30h]
  __int128 v21; // [rsp+E0h] [rbp-20h]
  __int128 v22; // [rsp+F0h] [rbp-10h]
  __int128 v23; // [rsp+100h] [rbp+0h]
  _BYTE v24[208]; // [rsp+110h] [rbp+10h] BYREF

  if ( !a2 )
    goto LABEL_4;
  if ( a2 > 3 )
  {
    if ( a2 == 4 )
    {
LABEL_4:
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_1C0186018 + 8LL))(qword_1C0186018);
      goto LABEL_5;
    }
    if ( a2 != 5 )
    {
      if ( a2 != 6 )
        goto LABEL_10;
      goto LABEL_4;
    }
  }
  v8 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
LABEL_5:
  if ( !v8 )
  {
LABEL_10:
    memset(v24, 0, 0xC8uLL);
    v9 = (__int128 *)v24;
    v24[192] = 0;
    goto LABEL_7;
  }
  v9 = (__int128 *)CSpatialProcessor::HitTest(v8, v24, a2, a3, a4);
LABEL_7:
  v13 = *v9;
  v14 = v9[1];
  v15 = v9[2];
  v16 = v9[3];
  v17 = v9[4];
  v18 = v9[5];
  v19 = v9[6];
  v10 = v9[7];
  v11 = v9 + 8;
  v20 = *v11;
  v21 = v11[1];
  v22 = v11[2];
  v23 = v11[3];
  CInputDest::SetEmpty((CInputDest *)v24);
  *a1 = v13;
  a1[1] = v14;
  a1[2] = v15;
  a1[3] = v16;
  a1[4] = v17;
  a1[5] = v18;
  a1[6] = v19;
  a1[7] = v10;
  a1[8] = v20;
  a1[9] = v21;
  result = a1;
  a1[10] = v22;
  a1[11] = v23;
  return result;
}
