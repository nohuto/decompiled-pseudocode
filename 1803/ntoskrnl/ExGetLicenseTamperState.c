/*
 * XREFs of ExGetLicenseTamperState @ 0x1407BDD10
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExpLicUpdateChecksum @ 0x1400A18F0 (ExpLicUpdateChecksum.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExpSetKernelDataProtection @ 0x140548EB4 (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x14054A388 (ExpGetKernelDataProtection.c)
 */

bool __fastcall ExGetLicenseTamperState(int *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // ebx
  int KernelDataProtection; // eax
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  unsigned int updated; // ecx
  unsigned __int64 v8; // rax
  int v9; // eax
  __int128 v11; // [rsp+20h] [rbp-60h] BYREF
  __int128 v12; // [rsp+30h] [rbp-50h]
  __int128 v13; // [rsp+40h] [rbp-40h]
  _OWORD v14[3]; // [rsp+50h] [rbp-30h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140862420, 0LL);
  if ( Data )
  {
    KernelDataProtection = ExpGetKernelDataProtection(v14);
    if ( KernelDataProtection < 0 )
    {
      v3 = 4;
      if ( KernelDataProtection == -1073741275 )
      {
        LOBYTE(v5) = -1;
        if ( Data )
        {
          *(_QWORD *)&v11 = 0LL;
          v12 = 0uLL;
          DWORD2(v11) = 4;
          *(_QWORD *)&v13 = 0LL;
          BYTE8(v13) = 1;
          updated = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)NumOfElements, &v11);
          if ( !updated )
          {
            if ( (_DWORD)v6 )
            {
              v8 = 16LL * (unsigned int)v6;
              updated = v5 < v8 ? 0xC0000095 : 0;
              if ( v8 <= v5 )
                updated = ExpLicUpdateChecksum((__int64)qword_140863E00, v6, &v11);
            }
          }
          if ( updated )
          {
            *(_QWORD *)&v11 = 0LL;
            DWORD2(v11) = 4;
          }
          v9 = 0;
          v14[0] = v11;
          v14[1] = v12;
          v14[2] = v13;
        }
        else
        {
          v9 = -1073741811;
        }
        if ( v9 >= 0 )
        {
          DWORD2(v14[0]) = 4;
          ExpSetKernelDataProtection((__int64)v14, v5, 0);
        }
      }
    }
    else
    {
      v3 = DWORD2(v14[0]);
    }
  }
  else
  {
    v3 = dword_1408610C8;
  }
  if ( a1 )
    *a1 = v3;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140862420, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140862420);
  KeAbPostRelease((ULONG_PTR)&qword_140862420);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v3 != 0;
}
