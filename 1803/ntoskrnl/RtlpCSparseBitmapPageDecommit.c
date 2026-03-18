/*
 * XREFs of RtlpCSparseBitmapPageDecommit @ 0x14029DF34
 * Callers:
 *     RtlCSparseBitmapBitsClear @ 0x14029D4F0 (RtlCSparseBitmapBitsClear.c)
 * Callees:
 *     ExpUnblockPushLock @ 0x1400A20F4 (ExpUnblockPushLock.c)
 *     RtlpHpEnvFreeVA @ 0x140297764 (RtlpHpEnvFreeVA.c)
 *     RtlCSparseBitmapEnterLockingRegion @ 0x14029EEA4 (RtlCSparseBitmapEnterLockingRegion.c)
 *     RtlCSparseBitmapLeaveLockingRegion @ 0x14029EEDC (RtlCSparseBitmapLeaveLockingRegion.c)
 *     RtlpCSparseBitmapLock @ 0x14029EF04 (RtlpCSparseBitmapLock.c)
 *     RtlpCSparseBitmapUnlock @ 0x14029EF7C (RtlpCSparseBitmapUnlock.c)
 *     RtlpCSparseBitmapWaitOnAddress @ 0x14029F1BC (RtlpCSparseBitmapWaitOnAddress.c)
 */

__int64 __fastcall RtlpCSparseBitmapPageDecommit(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // r13
  unsigned __int64 v5; // r9
  const signed __int64 *v6; // r14
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdi
  int v9; // r8d
  unsigned __int64 v10; // r9
  __int128 v11; // xmm6
  unsigned __int64 v12; // r8
  bool v13; // al
  const signed __int64 *v14; // rdx
  const signed __int64 *v15; // r10
  signed __int64 v16; // r9
  unsigned __int64 v17; // rdx
  const signed __int64 *v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r8
  unsigned __int64 v22; // r9
  bool v23; // al
  const signed __int64 *v24; // r8
  const signed __int64 *v25; // rdx
  signed __int64 v26; // r10
  bool v27; // zf
  bool j; // zf
  char v29; // al
  signed __int32 v31[8]; // [rsp+0h] [rbp-108h] BYREF
  int v32; // [rsp+20h] [rbp-E8h]
  BOOL v33; // [rsp+24h] [rbp-E4h]
  unsigned __int64 v34; // [rsp+30h] [rbp-D8h]
  const signed __int64 *i; // [rsp+38h] [rbp-D0h]
  __int64 v36; // [rsp+40h] [rbp-C8h]
  __int64 v37; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v38; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v39; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v40; // [rsp+60h] [rbp-A8h]
  const signed __int64 *v41; // [rsp+68h] [rbp-A0h]
  __int64 v42; // [rsp+70h] [rbp-98h] BYREF
  ULONG_PTR v43; // [rsp+78h] [rbp-90h] BYREF
  ULONG_PTR v44[2]; // [rsp+80h] [rbp-88h] BYREF
  __int128 v45; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v46[16]; // [rsp+A0h] [rbp-68h] BYREF
  char v47[16]; // [rsp+B0h] [rbp-58h] BYREF

  v37 = a1;
  v4 = a1;
  v36 = a1;
  v32 = 0;
  v5 = *(_QWORD *)(a1 + 24);
  v34 = v5;
  v6 = *(const signed __int64 **)(a1 + 16);
  v40 = v5;
  v41 = v6;
  v7 = a2 << 15;
  v38 = a2 << 15;
  v8 = 0x8000LL;
  if ( v5 - (a2 << 15) <= 0x8000 )
    v8 = v5 - (a2 << 15);
  v39 = v8;
  v11 = *(_OWORD *)RtlCSparseBitmapEnterLockingRegion(v47, a1);
  v45 = v11;
  while ( 1 )
  {
    if ( v9 )
      goto LABEL_20;
    v12 = v8 + v7 - 1;
    if ( v12 >= v10 )
    {
LABEL_6:
      v13 = 0;
      goto LABEL_19;
    }
    if ( v8 > 1 )
    {
      v14 = &v6[v7 >> 6];
      i = v14;
      v15 = &v6[v12 >> 6];
      v16 = *v14;
      if ( v14 == v15 )
      {
        v17 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v8) << v7;
      }
      else
      {
        if ( (v16 & (-1LL << v7)) != 0 )
          goto LABEL_6;
        v18 = v14 + 1;
        for ( i = v18; ; i = v18 )
        {
          v16 = *v18;
          if ( v18 == v15 )
            break;
          if ( v16 )
            goto LABEL_6;
          ++v18;
        }
        v17 = 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v12;
      }
      v13 = (v16 & v17) == 0;
    }
    else
    {
      if ( v8 != 1 )
        goto LABEL_6;
      v13 = !_bittest64(v6, v7);
    }
LABEL_19:
    v33 = v13;
    if ( !v13 )
      goto LABEL_39;
LABEL_20:
    RtlpCSparseBitmapLock(a1, 1LL, v46);
    v42 = *(_QWORD *)(a1 + 40);
    if ( v42 == -1 )
      break;
    RtlpCSparseBitmapUnlock(v46, v19, v20);
    RtlpCSparseBitmapWaitOnAddress(v4 + 40, &v42, v21, a1);
    if ( !_bittest64(*(const signed __int64 **)(v37 + 8), a2) )
      goto LABEL_39;
    v9 = 0;
    v10 = v34;
    v4 = v37;
  }
  *(_QWORD *)(v4 + 40) = a2;
  RtlpCSparseBitmapUnlock(v46, v19, v20);
  v32 = 1;
  if ( _bittest64(*(const signed __int64 **)(v37 + 8), a2) )
  {
    v22 = v8 + v7 - 1;
    if ( v22 < v34 )
    {
      if ( v8 > 1 )
      {
        v24 = &v6[v7 >> 6];
        v25 = &v6[v22 >> 6];
        v26 = *v24;
        if ( v24 == v25 )
        {
          v27 = (v26 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v8) << v7)) == 0;
LABEL_36:
          v23 = v27;
LABEL_37:
          if ( v23 )
          {
LABEL_38:
            _interlockedbittestandreset64(*(volatile signed __int32 **)(a1 + 8), a2);
            v44[0] = *(_QWORD *)(a1 + 16) + (a2 << 12);
            v43 = 4096LL;
            RtlpHpEnvFreeVA(v44, &v43, 1073758208);
          }
        }
        else
        {
          for ( j = (v26 & (-1LL << v7)) == 0; j; j = *v24 == 0 )
          {
            if ( ++v24 == v25 )
            {
              v27 = (*v24 & (0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v22)) == 0;
              goto LABEL_36;
            }
          }
        }
      }
      else if ( v8 == 1 )
      {
        if ( _bittest64(v6, v7) )
        {
          v23 = 0;
          goto LABEL_37;
        }
        goto LABEL_38;
      }
    }
  }
LABEL_39:
  if ( v32 )
  {
    *(_QWORD *)(a1 + 40) = -1LL;
    v29 = *(_BYTE *)(a1 + 56);
    _InterlockedOr(v31, 0);
    if ( !v29 )
    {
      if ( *(_QWORD *)(a1 + 48) )
        ExpUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL, 0);
    }
  }
  v45 = v11;
  return RtlCSparseBitmapLeaveLockingRegion(&v45);
}
