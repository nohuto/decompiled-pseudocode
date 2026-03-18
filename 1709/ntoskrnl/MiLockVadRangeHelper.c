/*
 * XREFs of MiLockVadRangeHelper @ 0x140540870
 * Callers:
 *     MiLockVadRange @ 0x140540730 (MiLockVadRange.c)
 * Callees:
 *     MiReferenceVad @ 0x14003D48C (MiReferenceVad.c)
 *     MiLockVad @ 0x14003D4A0 (MiLockVad.c)
 *     MiVadDeleted @ 0x14003D4D0 (MiVadDeleted.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     MiUnlockVad @ 0x1400A5788 (MiUnlockVad.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     MiLocateAddress @ 0x1400E9700 (MiLocateAddress.c)
 *     MiVadIsCfgBitmap @ 0x140540A1C (MiVadIsCfgBitmap.c)
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
  __int64 v8; // r14
  struct _KTHREAD *CurrentThread; // r11
  unsigned __int64 v11; // r10
  unsigned __int64 Address; // rbp
  __int64 v13; // rsi
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rax
  __int64 j; // rdi
  _QWORD *i; // rax
  _DWORD *v18; // r9
  __int64 v19; // r11
  __int64 v20; // rcx
  __int64 v22; // r8
  _QWORD *v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rax
  _QWORD *k; // rax
  __int64 m; // rdi
  __int64 v30; // [rsp+80h] [rbp+38h]

  v8 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v11 = a3;
  *a7 = 0LL;
  *a6 = 1;
  *a5 = 0;
  v30 = (__int64)CurrentThread;
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
  v13 = Address;
  if ( Address )
  {
    while ( 1 )
    {
      v14 = *(_QWORD *)(v13 + 8);
      v15 = v13;
      if ( v14 )
      {
        for ( i = *(_QWORD **)v14; i; i = (_QWORD *)*i )
          v14 = (unsigned __int64)i;
      }
      else
      {
        for ( j = *(_QWORD *)(v13 + 16); ; j = *(_QWORD *)(v14 + 16) )
        {
          v14 = j & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v14 || *(_QWORD *)v14 == v15 )
            break;
          v15 = v14;
        }
      }
      if ( v11 != -1LL )
      {
        v22 = *(unsigned int *)(v13 + 28);
        if ( v11 > (v22 | ((unsigned __int64)*(unsigned __int8 *)(v13 + 33) << 32)) << 12 )
        {
          if ( v14 )
          {
            if ( (v22 | ((unsigned __int64)*(unsigned __int8 *)(v13 + 33) << 32)) + 1 != (*(unsigned int *)(v14 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32)) )
            {
              v14 = 0LL;
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
          v14 = 0LL;
        }
      }
      if ( (unsigned int)MiVadIsCfgBitmap(v13) == 1 )
        goto LABEL_20;
      if ( (*(_DWORD *)(v13 + 48) & 0x200000) != 0 )
        break;
      if ( (a4 & 2) == 0 )
        goto LABEL_15;
LABEL_20:
      v13 = v14;
      if ( !v14 )
        return v8;
    }
    *v18 = 1;
    if ( (a4 & 2) == 0 )
      goto LABEL_20;
LABEL_15:
    if ( v8 || (a4 & 1) != 0 )
      ExAcquirePushLockExclusiveEx(v13 + 40, 0LL);
    else
      MiLockVad(v19, v13);
    if ( (unsigned int)MiVadDeleted(v13) != 1 && *a6 )
    {
      v11 = a3;
      ++v8;
      goto LABEL_20;
    }
    if ( (unsigned int)MiVadDeleted(v20) )
    {
      MiReferenceVad(v24);
      *a7 = v13;
    }
    if ( Address != v13 )
    {
      do
      {
        v25 = *(_QWORD *)(Address + 8);
        v26 = Address;
        if ( v25 )
        {
          for ( k = *(_QWORD **)v25; k; k = (_QWORD *)*k )
            v25 = (unsigned __int64)k;
        }
        else
        {
          for ( m = *(_QWORD *)(Address + 16); ; m = *(_QWORD *)(v25 + 16) )
          {
            v25 = m & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !v25 || *(_QWORD *)v25 == v26 )
              break;
            v26 = v25;
          }
        }
        if ( !(unsigned int)MiVadIsCfgBitmap(Address) )
        {
          if ( (*(_DWORD *)(Address + 48) & 0x200000) != 0 )
          {
            if ( (a4 & 2) != 0 )
              goto LABEL_55;
          }
          else if ( (a4 & 2) == 0 )
          {
LABEL_55:
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(Address + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(Address + 40));
            KeAbPostRelease(Address + 40);
          }
        }
        Address = v25;
      }
      while ( v25 != v13 );
    }
    if ( (a4 & 1) != 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v13 + 40));
      KeAbPostRelease(v13 + 40);
    }
    else
    {
      MiUnlockVad(v30, v13);
    }
    return 0LL;
  }
  return v8;
}
