/*
 * XREFs of MiLockVadRangeHelper @ 0x1404C0260
 * Callers:
 *     MiLockVadRange @ 0x1404C010C (MiLockVadRange.c)
 * Callees:
 *     MiLocateAddress @ 0x140033EE0 (MiLocateAddress.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     MiUnlockVad @ 0x1400E6930 (MiUnlockVad.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     MiVadDeleted @ 0x1401175E0 (MiVadDeleted.c)
 *     MiLockVad @ 0x1401175F0 (MiLockVad.c)
 *     MiReferenceVad @ 0x140117620 (MiReferenceVad.c)
 *     MiVadIsCfgBitmap @ 0x1404C0424 (MiVadIsCfgBitmap.c)
 */

__int64 __fastcall MiLockVadRangeHelper(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        char a4,
        _DWORD *a5,
        _DWORD *a6,
        __int64 *a7)
{
  __int64 v8; // r15
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v10; // r10
  unsigned __int64 Address; // rbp
  __int64 v12; // rsi
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rax
  __int64 i; // rdi
  _QWORD *v16; // rcx
  _DWORD *v17; // r9
  char v18; // r11
  int v19; // r14d
  __int64 v20; // rcx
  __int64 v22; // r8
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // rax
  _QWORD *v30; // rcx
  __int64 j; // rdi
  __int64 v34; // [rsp+90h] [rbp+38h]

  v8 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v10 = a3;
  *a7 = 0LL;
  *a6 = 1;
  *a5 = 0;
  v34 = (__int64)CurrentThread;
  if ( a2 == -1LL )
  {
    v23 = *(_QWORD **)(a1 + 1576);
    Address = 0LL;
    while ( v23 )
    {
      Address = (unsigned __int64)v23;
      v23 = (_QWORD *)*v23;
    }
  }
  else
  {
    Address = MiLocateAddress(a2);
  }
  v12 = Address;
  if ( Address )
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(v12 + 8);
      v14 = v12;
      if ( v13 )
      {
        v16 = *(_QWORD **)v13;
        if ( *(_QWORD *)v13 )
        {
          do
          {
            v13 = (unsigned __int64)v16;
            v16 = (_QWORD *)*v16;
          }
          while ( v16 );
        }
      }
      else
      {
        for ( i = *(_QWORD *)(v12 + 16); ; i = *(_QWORD *)(v13 + 16) )
        {
          v13 = i & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v13 || *(_QWORD *)v13 == v14 )
            break;
          v14 = v13;
        }
      }
      if ( v10 != -1LL )
      {
        v22 = *(unsigned int *)(v12 + 28);
        if ( v10 > (v22 | ((unsigned __int64)*(unsigned __int8 *)(v12 + 33) << 32)) << 12 )
        {
          if ( v13 )
          {
            if ( (v22 | ((unsigned __int64)*(unsigned __int8 *)(v12 + 33) << 32)) + 1 != (*(unsigned int *)(v13 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 32) << 32)) )
            {
              v13 = 0LL;
              *a6 = 0;
            }
          }
          else
          {
            *a6 = 0;
          }
        }
        else
        {
          v13 = 0LL;
        }
      }
      if ( (unsigned int)MiVadIsCfgBitmap(v12) == 1 )
        goto LABEL_19;
      v19 = v18 & 2;
      if ( (*(_DWORD *)(v12 + 48) & 0x40000) != 0 )
        break;
      if ( (v18 & 2) == 0 )
        goto LABEL_14;
LABEL_19:
      v12 = v13;
      if ( !v13 )
        return v8;
    }
    *v17 = 1;
    if ( (v18 & 2) == 0 )
      goto LABEL_19;
LABEL_14:
    if ( v8 || (v18 & 1) != 0 )
      ExAcquirePushLockExclusiveEx(v12 + 40, 0LL);
    else
      MiLockVad(v34, v12);
    if ( (unsigned int)MiVadDeleted(v12) != 1 && *a6 )
    {
      v10 = a3;
      ++v8;
      goto LABEL_19;
    }
    if ( (unsigned int)MiVadDeleted(v20) )
    {
      MiReferenceVad(v25);
      *a7 = v12;
    }
    if ( Address != v12 )
    {
      do
      {
        v28 = *(_QWORD *)(Address + 8);
        v29 = Address;
        if ( v28 )
        {
          v30 = *(_QWORD **)v28;
          if ( *(_QWORD *)v28 )
          {
            do
            {
              v28 = (unsigned __int64)v30;
              v30 = (_QWORD *)*v30;
            }
            while ( v30 );
          }
        }
        else
        {
          for ( j = *(_QWORD *)(Address + 16); ; j = *(_QWORD *)(v28 + 16) )
          {
            v28 = j & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !v28 || *(_QWORD *)v28 == v29 )
              break;
            v29 = v28;
          }
        }
        if ( (unsigned int)MiVadIsCfgBitmap(Address) )
          goto LABEL_57;
        if ( (*(_DWORD *)(Address + 48) & 0x40000) != 0 )
        {
          if ( v19 )
            goto LABEL_54;
        }
        else if ( !v19 )
        {
LABEL_54:
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(Address + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(Address + 40), v24, v26, v27);
          KeAbPostRelease(Address + 40);
        }
LABEL_57:
        Address = v28;
      }
      while ( v28 != v12 );
    }
    if ( (a4 & 1) != 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v12 + 40), v24, v26, v27);
      KeAbPostRelease(v12 + 40);
    }
    else
    {
      MiUnlockVad(v34, v12, v26, v27);
    }
    return 0LL;
  }
  return v8;
}
