/*
 * XREFs of ExSetLicenseTamperState @ 0x1407572A0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExpLicUpdateChecksum @ 0x1400B5B00 (ExpLicUpdateChecksum.c)
 *     sub_1404F34C8 @ 0x1404F34C8 (sub_1404F34C8.c)
 *     ExpSetKernelDataProtection @ 0x1404F44AC (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x1404F49A0 (ExpGetKernelDataProtection.c)
 */

void __fastcall ExSetLicenseTamperState(int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // edi
  int KernelDataProtection; // eax
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  signed int updated; // ecx
  unsigned __int64 v8; // rax
  __int128 v9; // [rsp+20h] [rbp-69h] BYREF
  __int128 v10; // [rsp+30h] [rbp-59h]
  __int128 v11; // [rsp+40h] [rbp-49h]
  _OWORD v12[3]; // [rsp+50h] [rbp-39h] BYREF
  _BYTE v13[8]; // [rsp+80h] [rbp-9h] BYREF
  int v14; // [rsp+88h] [rbp-1h]
  _BYTE v15[48]; // [rsp+B0h] [rbp+27h] BYREF

  if ( a1 && a1 != 3 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1407F3AE0, 0LL);
    if ( Data )
    {
      KernelDataProtection = ExpGetKernelDataProtection(v12);
      if ( KernelDataProtection < 0 )
      {
        v3 = 4;
        if ( KernelDataProtection == -1073741275 )
        {
          LOBYTE(v5) = -1;
          if ( Data )
          {
            *(_QWORD *)&v9 = 0LL;
            v10 = 0uLL;
            *(_QWORD *)&v11 = 0LL;
            DWORD2(v9) = 4;
            BYTE8(v11) = 1;
            updated = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)NumOfElements, &v9);
            if ( updated )
              goto LABEL_14;
            if ( (_DWORD)v6 )
            {
              v8 = 16LL * (unsigned int)v6;
              updated = v5 < v8 ? 0xC0000095 : 0;
              if ( v8 <= v5 )
                updated = ExpLicUpdateChecksum((__int64)qword_1407F54A0, v6, &v9);
              if ( updated )
              {
LABEL_14:
                *(_QWORD *)&v9 = 0LL;
                updated = 0;
                DWORD2(v9) = 4;
              }
            }
            v12[0] = v9;
            v12[1] = v10;
            v12[2] = v11;
          }
          else
          {
            updated = -1073741811;
          }
          if ( updated >= 0 )
          {
            DWORD2(v12[0]) = 4;
            ExpSetKernelDataProtection((__int64)v12, v5, 0);
          }
        }
      }
      else
      {
        v3 = DWORD2(v12[0]);
      }
    }
    else
    {
      v3 = dword_1407F30C8;
    }
    dword_1407F30C8 = a1;
    v14 = a1;
    ExpSetKernelDataProtection((__int64)v13, 2, 0);
    v15[40] = 0;
    ExpSetKernelDataProtection((__int64)v15, 32, 0);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1407F3AE0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1407F3AE0);
    KeAbPostRelease((ULONG_PTR)&qword_1407F3AE0);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( !v3 )
      sub_1404F34C8();
  }
}
