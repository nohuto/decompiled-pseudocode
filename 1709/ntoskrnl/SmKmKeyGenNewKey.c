/*
 * XREFs of SmKmKeyGenNewKey @ 0x14073A9AC
 * Callers:
 *     SmKmKeyGenGenerate @ 0x14073A658 (SmKmKeyGenGenerate.c)
 * Callees:
 *     SmAlloc @ 0x1400064E8 (SmAlloc.c)
 *     MiDeleteSubsection @ 0x14000DDD0 (MiDeleteSubsection.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x14017F2A0 (ZwDeleteValueKey.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     SmCrGenRandom @ 0x1402763B8 (SmCrGenRandom.c)
 *     SmKmKeyGenKeyFind @ 0x14073A7F8 (SmKmKeyGenKeyFind.c)
 *     SmKmKeyGenLoadKey @ 0x14073A83C (SmKmKeyGenLoadKey.c)
 */

__int64 __fastcall SmKmKeyGenNewKey(ULONG_PTR BugCheckParameter2, _WORD *Src, ULONG cbBuffer)
{
  __int64 v3; // r15
  __int64 v4; // rsi
  PVOID v7; // rax
  __int64 v8; // rdi
  NTSTATUS v9; // esi
  void *v10; // rcx
  __int64 v11; // r8
  ULONG v12; // r9d
  int v13; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v15; // rax
  __int64 v16; // rcx
  HANDLE v17; // r9
  wchar_t *v18; // r8
  wchar_t *v19; // rdx
  __int64 v20; // rcx
  __int16 v21; // ax
  UNICODE_STRING ValueName; // [rsp+28h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp+48h] BYREF

  v3 = cbBuffer;
  KeyHandle = 0LL;
  v4 = -1LL;
  do
    ++v4;
  while ( Src[v4] );
  v7 = SmAlloc(cbBuffer + 42 + 2 * (_DWORD)v4, 0x474B6D73u);
  v8 = (__int64)v7;
  if ( !v7 )
    return (unsigned int)-1073741670;
  memset(v7, 0, (unsigned int)(v3 + 42 + 2 * v4));
  *(_QWORD *)(v8 + 24) = v8 + 40;
  v10 = (void *)(v3 + v8 + 40);
  *(_DWORD *)(v8 + 32) = v3;
  *(_QWORD *)(v8 + 16) = v10;
  memmove(v10, Src, 2LL * (unsigned int)v4);
  if ( !*(_QWORD *)(BugCheckParameter2 + 32) )
    goto LABEL_8;
  v13 = SmKmKeyGenLoadKey((UNICODE_STRING *)(BugCheckParameter2 + 24), v8, &KeyHandle);
  v9 = v13;
  if ( v13 >= 0 )
  {
LABEL_9:
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
    if ( !SmKmKeyGenKeyFind(BugCheckParameter2, Src) )
    {
      v15 = (__int64 *)(BugCheckParameter2 + 8);
      v16 = *(_QWORD *)(BugCheckParameter2 + 8);
      if ( *(_QWORD *)(v16 + 8) != BugCheckParameter2 + 8 )
        __fastfail(3u);
      v17 = KeyHandle;
      *(_QWORD *)v8 = v16;
      *(_QWORD *)(v8 + 8) = v15;
      *(_QWORD *)(v16 + 8) = v8;
      *v15 = v8;
      if ( v17 )
      {
        v18 = *(wchar_t **)(v8 + 16);
        *(_DWORD *)&ValueName.Length = 0;
        ValueName.Buffer = 0LL;
        if ( v18 )
        {
          v19 = v18;
          v20 = 0x7FFFLL;
          do
          {
            if ( !*v19 )
              break;
            ++v19;
            --v20;
          }
          while ( v20 );
          v21 = v20 ? 0x7FFF - v20 : 0;
          if ( v20 )
          {
            ValueName.Buffer = v18;
            ValueName.Length = 2 * v21;
            ValueName.MaximumLength = 2 * v21 + 2;
          }
        }
        ZwDeleteValueKey(v17, &ValueName);
      }
      v8 = 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegion();
    v9 = 0;
    goto LABEL_27;
  }
  if ( v13 == -1073741772 )
  {
LABEL_8:
    v9 = SmCrGenRandom(*(PUCHAR *)(v8 + 24), v3, v11, v12);
    if ( v9 >= 0 )
      goto LABEL_9;
  }
LABEL_27:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v8 )
    MiDeleteSubsection((PPRIVILEGE_SET)v8);
  return (unsigned int)v9;
}
