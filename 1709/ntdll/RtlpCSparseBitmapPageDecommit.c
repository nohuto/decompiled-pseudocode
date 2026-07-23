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

char __fastcall RtlpCSparseBitmapPageDecommit(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v5; // r9
  const signed __int64 *v6; // rsi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  const signed __int64 *v11; // r8
  const signed __int64 *v12; // r9
  unsigned __int64 v13; // rdx
  _RTL_SRWLOCK *v14; // rcx
  unsigned __int64 v15; // r9
  const signed __int64 *v16; // r8
  const signed __int64 *v17; // rdx
  unsigned __int64 v18; // rdx
  bool i; // zf
  signed __int32 v21[8]; // [rsp+0h] [rbp-C8h] BYREF
  int v22; // [rsp+30h] [rbp-98h]
  int v23; // [rsp+34h] [rbp-94h]
  unsigned __int64 v24; // [rsp+40h] [rbp-88h]
  const signed __int64 *v25; // [rsp+48h] [rbp-80h]
  unsigned __int64 v26; // [rsp+50h] [rbp-78h]
  unsigned __int64 v27; // [rsp+58h] [rbp-70h]
  const signed __int64 *v28; // [rsp+60h] [rbp-68h]
  unsigned __int64 v29; // [rsp+68h] [rbp-60h]
  __int64 v30; // [rsp+70h] [rbp-58h] BYREF
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-50h] BYREF
  PVOID BaseAddress; // [rsp+80h] [rbp-48h] BYREF

  v22 = 0;
  v5 = *(_QWORD *)(a1 + 16);
  v24 = v5;
  v6 = *(const signed __int64 **)(a1 + 8);
  v29 = v5;
  v28 = v6;
  v7 = a2 << 15;
  v26 = a2 << 15;
  v8 = 0x8000LL;
  if ( v5 - (a2 << 15) <= 0x8000 )
    v8 = v5 - (a2 << 15);
  v27 = v8;
  while ( 1 )
  {
    if ( a3 )
      goto LABEL_20;
    v9 = v8 + v7 - 1;
    if ( v9 >= v5 )
    {
LABEL_6:
      LOBYTE(v10) = 0;
      goto LABEL_19;
    }
    if ( v8 > 1 )
    {
      v11 = &v6[v7 >> 6];
      v25 = v11;
      v12 = &v6[v9 >> 6];
      if ( v11 == v12 )
      {
        v13 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v8) << v7;
      }
      else
      {
        if ( ((-1LL << v7) & *v11) != 0 )
          goto LABEL_6;
        v25 = ++v11;
        while ( v11 != v12 )
        {
          if ( *v11 )
            goto LABEL_6;
          v25 = ++v11;
        }
        v13 = 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v9;
      }
      LOBYTE(v10) = (v13 & *v11) == 0;
    }
    else
    {
      if ( v8 != 1 )
        goto LABEL_6;
      LOBYTE(v10) = !_bittest64(v6, v7);
    }
LABEL_19:
    v23 = (unsigned __int8)v10;
    if ( !(_BYTE)v10 )
      goto LABEL_39;
LABEL_20:
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 24));
    v30 = *(_QWORD *)(a1 + 32);
    v14 = (_RTL_SRWLOCK *)(a1 + 24);
    if ( v30 == -1 )
      break;
    RtlReleaseSRWLockExclusive(v14);
    RtlpWaitOnAddress((_QWORD *)(a1 + 32), &v30, 8LL, 0LL, RtlpWaitOnAddressSpinCount);
    LOBYTE(v10) = _bittest64(*(const signed __int64 **)a1, a2);
    if ( !(_BYTE)v10 )
      goto LABEL_39;
    a3 = 0;
    v5 = v24;
  }
  *(_QWORD *)(a1 + 32) = a2;
  RtlReleaseSRWLockExclusive(v14);
  v22 = 1;
  LOBYTE(v10) = _bittest64(*(const signed __int64 **)a1, a2);
  if ( (_BYTE)v10 )
  {
    v15 = v8 + v7 - 1;
    if ( v15 < v24 )
    {
      if ( v8 > 1 )
      {
        v16 = &v6[v7 >> 6];
        v17 = &v6[v15 >> 6];
        if ( v16 == v17 )
        {
          v18 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v8) << v7;
LABEL_36:
          LOBYTE(v10) = (v18 & *v16) == 0;
LABEL_37:
          if ( (_BYTE)v10 )
          {
LABEL_38:
            _interlockedbittestandreset64(*(volatile signed __int32 **)a1, a2);
            BaseAddress = (PVOID)(*(_QWORD *)(a1 + 8) + (a2 << 12));
            RegionSize = 4096LL;
            LOBYTE(v10) = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x4000u);
          }
        }
        else
        {
          v10 = -1LL << v7;
          for ( i = ((-1LL << v7) & *v16) == 0; i; i = *v16 == 0 )
          {
            if ( ++v16 == v17 )
            {
              v18 = 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v15;
              goto LABEL_36;
            }
          }
        }
      }
      else if ( v8 == 1 )
      {
        if ( _bittest64(v6, v7) )
        {
          LOBYTE(v10) = 0;
          goto LABEL_37;
        }
        goto LABEL_38;
      }
    }
  }
LABEL_39:
  if ( v22 )
  {
    *(_QWORD *)(a1 + 32) = -1LL;
    _InterlockedOr(v21, 0);
    LOBYTE(v10) = RtlpWakeByAddress(a1 + 32, 1);
  }
  return v10;
}
