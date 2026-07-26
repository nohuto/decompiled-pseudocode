/*
 * XREFs of ndisIovDeleteVPort @ 0x1C006C508
 * Callers:
 *     ndisOidPostIovDeleteVPort @ 0x1C006D4C0 (ndisOidPostIovDeleteVPort.c)
 *     ndisIovCreateVPort @ 0x1C00F1F88 (ndisIovCreateVPort.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisIovDeleteVPort(_QWORD *P)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // r14
  __int64 v5; // rbp
  KIRQL v6; // r9
  _QWORD *v7; // rdx
  PVOID *v8; // rcx
  _QWORD **v9; // rdx
  PVOID *v10; // rcx
  _QWORD **v11; // rcx
  PVOID *v12; // rdx
  __int64 v13; // rcx
  _QWORD **v14; // rcx
  PVOID *v15; // rdx
  void *v16; // rcx
  _QWORD **v18; // rdx
  PVOID *v19; // r8
  int v20; // [rsp+20h] [rbp-28h]

  v2 = 0LL;
  if ( (unsigned __int8)byte_1C0099621 >= 4u )
    WPP_SF_qq(0x31u, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, 0LL, 0LL);
  v3 = P[9];
  v4 = P[10];
  v5 = P[11];
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
  *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v3 + 1856) = 2888121;
  v7 = (_QWORD *)*P;
  if ( *(_QWORD **)(*P + 8LL) != P || (v8 = (PVOID *)P[1], *v8 != P) )
    __fastfail(3u);
  *v8 = v7;
  v7[1] = v8;
  --*(_DWORD *)(v3 + 4768);
  if ( v4 )
  {
    v9 = (_QWORD **)P[2];
    if ( v9[1] != P + 2 || (v10 = (PVOID *)P[3], *v10 != P + 2) )
      __fastfail(3u);
    *v10 = v9;
    v9[1] = v10;
    --*(_DWORD *)(v4 + 920);
  }
  if ( v5 )
  {
    v11 = (_QWORD **)P[4];
    if ( v11[1] != P + 4 || (v12 = (PVOID *)P[5], *v12 != P + 4) )
      __fastfail(3u);
    *v12 = v11;
    v11[1] = v12;
    --*(_DWORD *)(v5 + 48);
    *(_DWORD *)(v5 + 96) -= *((_DWORD *)P + 162);
  }
  v13 = P[12];
  if ( (P[8] & 2) != 0 )
  {
    v2 = P[12];
    if ( v13 )
    {
      v14 = (_QWORD **)P[6];
      if ( v14[1] != P + 6 || (v15 = (PVOID *)P[7], *v15 != P + 6) )
        __fastfail(3u);
      *v15 = v14;
      v14[1] = v15;
      --*(_DWORD *)(v2 + 76);
    }
  }
  else if ( v13 )
  {
    v18 = (_QWORD **)P[6];
    if ( v18[1] != P + 6 || (v19 = (PVOID *)P[7], *v19 != P + 6) )
      __fastfail(3u);
    *v19 = v18;
    v18[1] = v19;
    --*(_DWORD *)(v13 + 28);
  }
  *(_QWORD *)(v3 + 520) = 0LL;
  *(_DWORD *)(v3 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v6);
  *(_BYTE *)(((unsigned __int64)*((unsigned int *)P + 31) >> 3) + *(_QWORD *)(v3 + 4792)) &= ~(1 << (*((_BYTE *)P + 124) & 7));
  P[112] = 0LL;
  v16 = (void *)P[111];
  if ( v16 )
  {
    ExFreePoolWithTag(v16, 0);
    P[111] = 0LL;
  }
  ExFreePoolWithTag(P, 0);
  if ( (unsigned __int8)byte_1C0099621 >= 4u )
  {
    v20 = 0;
    WPP_SF_qqd(0x32u, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, v3, v2, v20);
  }
  return 0LL;
}
