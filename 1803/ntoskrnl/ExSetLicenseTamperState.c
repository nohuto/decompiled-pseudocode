/*
 * XREFs of ExSetLicenseTamperState @ 0x1407BDF20
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     ExpLicUpdateChecksum @ 0x1400A18F0 (ExpLicUpdateChecksum.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExpSetKernelDataProtection @ 0x140548EB4 (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x14054A388 (ExpGetKernelDataProtection.c)
 *     sub_14054B65C @ 0x14054B65C (sub_14054B65C.c)
 */

void __fastcall ExSetLicenseTamperState(int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // edi
  int KernelDataProtection; // eax
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  unsigned int updated; // ecx
  unsigned __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int128 v13; // [rsp+20h] [rbp-69h] BYREF
  __int128 v14; // [rsp+30h] [rbp-59h]
  __int128 v15; // [rsp+40h] [rbp-49h]
  _OWORD v16[3]; // [rsp+50h] [rbp-39h] BYREF
  _BYTE v17[8]; // [rsp+80h] [rbp-9h] BYREF
  int v18; // [rsp+88h] [rbp-1h]
  _BYTE v19[48]; // [rsp+B0h] [rbp+27h] BYREF

  if ( a1 && a1 != 3 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140862420, 0LL);
    if ( Data )
    {
      KernelDataProtection = ExpGetKernelDataProtection(v16);
      if ( KernelDataProtection < 0 )
      {
        v3 = 4;
        if ( KernelDataProtection == -1073741275 )
        {
          LOBYTE(v5) = -1;
          if ( Data )
          {
            *(_QWORD *)&v13 = 0LL;
            v14 = 0uLL;
            *(_QWORD *)&v15 = 0LL;
            DWORD2(v13) = 4;
            BYTE8(v15) = 1;
            updated = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)NumOfElements, &v13);
            if ( !updated )
            {
              if ( (_DWORD)v6 )
              {
                v8 = 16LL * (unsigned int)v6;
                updated = v5 < v8 ? 0xC0000095 : 0;
                if ( v8 <= v5 )
                  updated = ExpLicUpdateChecksum((__int64)qword_140863E00, v6, &v13);
              }
            }
            if ( updated )
            {
              *(_QWORD *)&v13 = 0LL;
              DWORD2(v13) = 4;
            }
            v9 = 0;
            v16[0] = v13;
            v16[1] = v14;
            v16[2] = v15;
          }
          else
          {
            v9 = -1073741811;
          }
          if ( v9 >= 0 )
          {
            DWORD2(v16[0]) = 4;
            ExpSetKernelDataProtection((__int64)v16, v5, 0);
          }
        }
      }
      else
      {
        v3 = DWORD2(v16[0]);
      }
    }
    else
    {
      v3 = dword_1408610C8;
    }
    dword_1408610C8 = a1;
    v18 = a1;
    ExpSetKernelDataProtection((__int64)v17, 2, 0);
    v19[40] = 0;
    ExpSetKernelDataProtection((__int64)v19, 32, 0);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140862420, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140862420, v10, v11, v12);
    KeAbPostRelease((ULONG_PTR)&qword_140862420);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( !v3 )
      sub_14054B65C();
  }
}
