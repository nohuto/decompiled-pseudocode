/*
 * XREFs of ndisIovDeleteVPort @ 0x1C006A83C
 * Callers:
 *     ndisOidPostIovDeleteVPort @ 0x1C006B6F0 (ndisOidPostIovDeleteVPort.c)
 *     ndisIovCreateVPort @ 0x1C00E5D54 (ndisIovCreateVPort.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003CAE8 (WPP_SF_qqd.c)
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
  _QWORD **v11; // rdx
  PVOID *v12; // rcx
  _QWORD **v13; // rdx
  PVOID *v14; // rcx
  __int64 v16; // rcx
  _QWORD **v17; // r8
  PVOID *v18; // rdx
  int v19; // [rsp+20h] [rbp-28h]

  v2 = 0LL;
  if ( (unsigned __int8)byte_1C0092621 >= 4u )
    WPP_SF_qq(0x31u, &WPP_e97265b1e1743feddb6afdd4d4a609a3_Traceguids, 0LL, 0LL);
  v3 = P[9];
  v4 = P[10];
  v5 = P[11];
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
  *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v3 + 1856) = 2888073;
  v7 = (_QWORD *)*P;
  v8 = (PVOID *)P[1];
  if ( *(_QWORD **)(*P + 8LL) != P || *v8 != P )
    __fastfail(3u);
  *v8 = v7;
  v7[1] = v8;
  --*(_DWORD *)(v3 + 4768);
  if ( v4 )
  {
    v9 = (_QWORD **)P[2];
    v10 = (PVOID *)P[3];
    if ( v9[1] != P + 2 || *v10 != P + 2 )
      __fastfail(3u);
    *v10 = v9;
    v9[1] = v10;
    --*(_DWORD *)(v4 + 920);
  }
  if ( v5 )
  {
    v11 = (_QWORD **)P[4];
    v12 = (PVOID *)P[5];
    if ( v11[1] != P + 4 || *v12 != P + 4 )
      __fastfail(3u);
    *v12 = v11;
    v11[1] = v12;
    --*(_DWORD *)(v5 + 48);
    *(_DWORD *)(v5 + 96) -= *((_DWORD *)P + 162);
  }
  if ( (P[8] & 2) != 0 )
  {
    v2 = P[12];
    if ( v2 )
    {
      v13 = (_QWORD **)P[6];
      v14 = (PVOID *)P[7];
      if ( v13[1] != P + 6 || *v14 != P + 6 )
        __fastfail(3u);
      *v14 = v13;
      v13[1] = v14;
      --*(_DWORD *)(v2 + 76);
    }
  }
  else
  {
    v16 = P[12];
    if ( v16 )
    {
      v17 = (_QWORD **)P[6];
      v18 = (PVOID *)P[7];
      if ( v17[1] != P + 6 || *v18 != P + 6 )
        __fastfail(3u);
      *v18 = v17;
      v17[1] = v18;
      --*(_DWORD *)(v16 + 28);
    }
  }
  *(_QWORD *)(v3 + 520) = 0LL;
  *(_DWORD *)(v3 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v6);
  *(_BYTE *)(((unsigned __int64)*((unsigned int *)P + 31) >> 3) + *(_QWORD *)(v3 + 4792)) &= ~(1 << (*((_BYTE *)P + 124) & 7));
  ExFreePoolWithTag(P, 0);
  if ( (unsigned __int8)byte_1C0092621 >= 4u )
  {
    v19 = 0;
    WPP_SF_qqd(0x32u, &WPP_e97265b1e1743feddb6afdd4d4a609a3_Traceguids, v3, v2, v19);
  }
  return 0LL;
}
