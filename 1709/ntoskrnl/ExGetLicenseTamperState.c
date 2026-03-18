/*
 * XREFs of ExGetLicenseTamperState @ 0x140757110
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     ExpLicUpdateChecksum @ 0x1400B5B00 (ExpLicUpdateChecksum.c)
 *     ExpSetKernelDataProtection @ 0x1404F44AC (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x1404F49A0 (ExpGetKernelDataProtection.c)
 */

bool __fastcall ExGetLicenseTamperState(int *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // ebx
  int KernelDataProtection; // eax
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  signed int updated; // ecx
  unsigned __int64 v8; // rax
  __int128 v10; // [rsp+20h] [rbp-60h] BYREF
  __int128 v11; // [rsp+30h] [rbp-50h]
  __int128 v12; // [rsp+40h] [rbp-40h]
  _OWORD v13[3]; // [rsp+50h] [rbp-30h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1407F3AE0, 0LL);
  if ( Data )
  {
    KernelDataProtection = ExpGetKernelDataProtection(v13);
    if ( KernelDataProtection < 0 )
    {
      v3 = 4;
      if ( KernelDataProtection == -1073741275 )
      {
        LOBYTE(v5) = -1;
        if ( Data )
        {
          *(_QWORD *)&v10 = 0LL;
          v11 = 0uLL;
          DWORD2(v10) = 4;
          *(_QWORD *)&v12 = 0LL;
          BYTE8(v12) = 1;
          updated = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)NumOfElements, &v10);
          if ( updated )
            goto LABEL_12;
          if ( (_DWORD)v6 )
          {
            v8 = 16LL * (unsigned int)v6;
            updated = v5 < v8 ? 0xC0000095 : 0;
            if ( v8 <= v5 )
              updated = ExpLicUpdateChecksum((__int64)qword_1407F54A0, v6, &v10);
            if ( updated )
            {
LABEL_12:
              *(_QWORD *)&v10 = 0LL;
              updated = 0;
              DWORD2(v10) = 4;
            }
          }
          v13[0] = v10;
          v13[1] = v11;
          v13[2] = v12;
        }
        else
        {
          updated = -1073741811;
        }
        if ( updated >= 0 )
        {
          DWORD2(v13[0]) = 4;
          ExpSetKernelDataProtection((__int64)v13, v5, 0);
        }
      }
    }
    else
    {
      v3 = DWORD2(v13[0]);
    }
  }
  else
  {
    v3 = dword_1407F30C8;
  }
  if ( a1 )
    *a1 = v3;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1407F3AE0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1407F3AE0);
  KeAbPostRelease((ULONG_PTR)&qword_1407F3AE0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v3 != 0;
}
