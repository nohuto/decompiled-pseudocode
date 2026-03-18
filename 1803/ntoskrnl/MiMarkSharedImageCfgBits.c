/*
 * XREFs of MiMarkSharedImageCfgBits @ 0x1404B4820
 * Callers:
 *     MiMarkProcessCfgBits @ 0x1404B5B54 (MiMarkProcessCfgBits.c)
 * Callees:
 *     MiIsCfgBitMapPageShared @ 0x14003DC60 (MiIsCfgBitMapPageShared.c)
 *     MiGetControlAreaLoadConfig @ 0x14003E604 (MiGetControlAreaLoadConfig.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 *     MiVadDeleted @ 0x1401175E0 (MiVadDeleted.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiCopyToCfgBitMap @ 0x1404B4120 (MiCopyToCfgBitMap.c)
 */

__int64 __fastcall MiMarkSharedImageCfgBits(__int64 a1, __int64 a2, __int64 a3)
{
  _KPROCESS *Process; // r15
  __int64 ControlAreaLoadConfig; // rax
  _QWORD *v5; // r9
  unsigned __int64 v6; // rbp
  ULONG_PTR v7; // rsi
  __int64 v8; // r8
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rbx
  int IsCfgBitMapPageShared; // eax
  unsigned __int64 v18; // rdi
  int v19; // esi
  __int64 v21; // rcx
  size_t Size; // rax
  ULONG_PTR v23; // [rsp+40h] [rbp-78h]
  int v24; // [rsp+48h] [rbp-70h] BYREF
  int v25; // [rsp+4Ch] [rbp-6Ch] BYREF
  unsigned __int64 v26; // [rsp+50h] [rbp-68h]
  __int64 v27[2]; // [rsp+58h] [rbp-60h] BYREF
  int i; // [rsp+68h] [rbp-50h]

  Process = KeGetCurrentThread()->ApcState.Process;
  ControlAreaLoadConfig = MiGetControlAreaLoadConfig(**(_QWORD **)(a3 + 72));
  v6 = v5[2];
  v7 = *(_QWORD *)(ControlAreaLoadConfig + 8);
  v23 = v7;
  v9 = (2
      * (((((*(unsigned int *)(v8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 33) << 32)) + 1) << 12)
        - ((*(unsigned int *)(v8 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32)) << 12)) >> 4)) >> 3;
  v10 = *v5
      + ((2
        * (((*(unsigned int *)(v8 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32)) << 8) & 0xFFFFFFFFFFFFFFFLL)) >> 3);
  ExAcquirePushLockExclusiveEx(v6 + 40, 0LL);
  if ( (unsigned int)MiVadDeleted(v6) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 40), v11, v12, v13);
    KeAbPostRelease(v6 + 40);
    return 3221225738LL;
  }
  else
  {
    v14 = v9 + v10;
    v26 = v9 + v10;
    v27[0] = 0LL;
    v15 = (v9 + v10 - 1) | 0xFFF;
    v27[1] = 0LL;
    v16 = v10 & 0xFFFFFFFFFFFFF000uLL;
    for ( i = 0; v16 <= v15; v16 += 4096LL )
    {
      IsCfgBitMapPageShared = MiIsCfgBitMapPageShared(v16, v6);
      switch ( IsCfgBitMapPageShared )
      {
        case 2:
          v18 = v16 | 0xFFF;
          break;
        case 1:
          continue;
        case 3:
          v18 = v15;
          if ( (v16 | 0x1FFFFF) <= v15 )
            v18 = v16 | 0x1FFFFF;
          break;
        default:
          v21 = 0LL;
          if ( v16 < v10 )
            v21 = (unsigned int)(v10 - v16);
          if ( v16 + 4096 <= v14 )
          {
            Size = (unsigned int)(4096 - v21);
          }
          else
          {
            Size = (unsigned int)(v14 - v16 - v21);
            if ( (_DWORD)v14 - (_DWORD)v16 == (_DWORD)v21 )
              goto LABEL_9;
          }
          v19 = MiCopyToCfgBitMap(
                  (char *)(v16 + v21),
                  v6,
                  v7,
                  v13,
                  (unsigned int)(v21 + v16 - v10) >> 1 << 7,
                  (unsigned int *)v27,
                  Size,
                  0);
          if ( v19 < 0 )
            goto LABEL_10;
          goto LABEL_7;
      }
      v19 = MiSetProtectionOnSection((__int64)Process, v6, v16, v18, 2u, 0, &v25, &v24);
      if ( v19 < 0 )
        goto LABEL_10;
      v16 = v18 - 4095;
      v14 = v26;
LABEL_7:
      v7 = v23;
    }
LABEL_9:
    v19 = 0;
LABEL_10:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 40), v11, v12, v13);
    KeAbPostRelease(v6 + 40);
    return (unsigned int)v19;
  }
}
