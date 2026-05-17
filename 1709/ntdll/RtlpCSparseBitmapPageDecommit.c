/*
 * XREFs of RtlpCSparseBitmapPageDecommit @ 0x180105BF0
 * Callers:
 *     RtlCSparseBitmapBitsClear @ 0x18006213C (RtlCSparseBitmapBitsClear.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlpWaitOnAddress @ 0x18006DA0C (RtlpWaitOnAddress.c)
 *     RtlpWakeByAddress @ 0x18006F6E8 (RtlpWakeByAddress.c)
 *     ZwFreeVirtualMemory @ 0x1800A0480 (ZwFreeVirtualMemory.c)
 */

char __fastcall RtlpCSparseBitmapPageDecommit(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // r15
  unsigned __int64 v5; // r9
  const signed __int64 *v6; // rsi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdi
  __int64 v9; // rax
  volatile signed __int64 *v10; // rcx
  unsigned __int64 v11; // r9
  const signed __int64 *v12; // r8
  const signed __int64 *v13; // rdx
  unsigned __int64 v14; // rdx
  bool i; // zf
  signed __int32 v17[8]; // [rsp+0h] [rbp-C8h] BYREF
  int v18; // [rsp+30h] [rbp-98h]
  int v19; // [rsp+34h] [rbp-94h]
  unsigned __int64 v20; // [rsp+40h] [rbp-88h]
  unsigned __int64 *v21; // [rsp+48h] [rbp-80h]
  unsigned __int64 v22; // [rsp+50h] [rbp-78h]
  unsigned __int64 v23; // [rsp+58h] [rbp-70h]
  const signed __int64 *v24; // [rsp+60h] [rbp-68h]
  unsigned __int64 v25; // [rsp+68h] [rbp-60h]
  _QWORD v26[11]; // [rsp+70h] [rbp-58h] BYREF

  v3 = a2;
  v18 = 0;
  v5 = *(_QWORD *)(a1 + 16);
  v20 = v5;
  v6 = *(const signed __int64 **)(a1 + 8);
  v25 = v5;
  v24 = v6;
  v7 = a2 << 15;
  v22 = a2 << 15;
  v8 = 0x8000LL;
  if ( v5 - (a2 << 15) <= 0x8000 )
    v8 = v5 - (a2 << 15);
  v23 = v8;
  while ( 1 )
  {
    if ( (_DWORD)a3 )
      goto LABEL_20;
    a2 = v8 + v7 - 1;
    if ( a2 >= v5 )
    {
LABEL_6:
      LOBYTE(v9) = 0;
      goto LABEL_19;
    }
    if ( v8 > 1 )
    {
      a3 = (unsigned __int64 *)&v6[v7 >> 6];
      v21 = a3;
      v5 = (unsigned __int64)&v6[a2 >> 6];
      if ( a3 == (unsigned __int64 *)v5 )
      {
        a2 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v8) << v7;
      }
      else
      {
        if ( ((-1LL << v7) & *a3) != 0 )
          goto LABEL_6;
        v21 = ++a3;
        while ( a3 != (unsigned __int64 *)v5 )
        {
          if ( *a3 )
            goto LABEL_6;
          v21 = ++a3;
        }
        a2 = 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)a2;
      }
      LOBYTE(v9) = (a2 & *a3) == 0;
    }
    else
    {
      if ( v8 != 1 )
        goto LABEL_6;
      LOBYTE(v9) = !_bittest64(v6, v7);
    }
LABEL_19:
    v19 = (unsigned __int8)v9;
    if ( !(_BYTE)v9 )
      goto LABEL_39;
LABEL_20:
    RtlAcquireSRWLockExclusive(a1 + 24, a2, a3, v5);
    v26[0] = *(_QWORD *)(a1 + 32);
    v10 = (volatile signed __int64 *)(a1 + 24);
    if ( v26[0] == -1LL )
      break;
    RtlReleaseSRWLockExclusive(v10);
    RtlpWaitOnAddress((_QWORD *)(a1 + 32), v26, 8LL, 0LL, RtlpWaitOnAddressSpinCount);
    LOBYTE(v9) = _bittest64(*(const signed __int64 **)a1, v3);
    if ( !(_BYTE)v9 )
      goto LABEL_39;
    a3 = 0LL;
    v5 = v20;
  }
  *(_QWORD *)(a1 + 32) = v3;
  RtlReleaseSRWLockExclusive(v10);
  v18 = 1;
  LOBYTE(v9) = _bittest64(*(const signed __int64 **)a1, v3);
  if ( (_BYTE)v9 )
  {
    v11 = v8 + v7 - 1;
    if ( v11 < v20 )
    {
      if ( v8 > 1 )
      {
        v12 = &v6[v7 >> 6];
        v13 = &v6[v11 >> 6];
        if ( v12 == v13 )
        {
          v14 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v8) << v7;
LABEL_36:
          LOBYTE(v9) = (v14 & *v12) == 0;
LABEL_37:
          if ( (_BYTE)v9 )
          {
LABEL_38:
            _interlockedbittestandreset64(*(volatile signed __int32 **)a1, v3);
            v26[2] = *(_QWORD *)(a1 + 8) + (v3 << 12);
            v26[1] = 4096LL;
            LOBYTE(v9) = ZwFreeVirtualMemory();
          }
        }
        else
        {
          v9 = -1LL << v7;
          for ( i = ((-1LL << v7) & *v12) == 0; i; i = *v12 == 0 )
          {
            if ( ++v12 == v13 )
            {
              v14 = 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v11;
              goto LABEL_36;
            }
          }
        }
      }
      else if ( v8 == 1 )
      {
        if ( _bittest64(v6, v7) )
        {
          LOBYTE(v9) = 0;
          goto LABEL_37;
        }
        goto LABEL_38;
      }
    }
  }
LABEL_39:
  if ( v18 )
  {
    *(_QWORD *)(a1 + 32) = -1LL;
    _InterlockedOr(v17, 0);
    LOBYTE(v9) = RtlpWakeByAddress(a1 + 32, 1);
  }
  return v9;
}
