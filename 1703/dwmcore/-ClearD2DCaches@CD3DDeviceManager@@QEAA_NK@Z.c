/*
 * XREFs of ?ClearD2DCaches@CD3DDeviceManager@@QEAA_NK@Z @ 0x180135A84
 * Callers:
 *     ?ScheduleAndProcessFrame@CIndependentRefreshRateScheduler@@UEAAJXZ @ 0x18013DFB0 (-ScheduleAndProcessFrame@CIndependentRefreshRateScheduler@@UEAAJXZ.c)
 * Callees:
 *     ?HardwareProtectionRequired@CD3DDeviceManager@@QEBA_NU_LUID@@@Z @ 0x180043400 (-HardwareProtectionRequired@CD3DDeviceManager@@QEBA_NU_LUID@@@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18007F234 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x1800B7154 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetLargestActiveDisplayResolution@CDisplaySet@@QEBAJPEAI00@Z @ 0x18013320C (-GetLargestActiveDisplayResolution@CDisplaySet@@QEBAJPEAI00@Z.c)
 */

char __fastcall CD3DDeviceManager::ClearD2DCaches(CD3DDeviceManager *this, unsigned int a2)
{
  unsigned int v2; // esi
  unsigned int v3; // r14d
  unsigned int v5; // ebx
  char v6; // r12
  unsigned int v7; // ebx
  unsigned int v8; // r14d
  __int64 v9; // rbx
  __int64 v10; // r15
  __int64 v11; // rsi
  char v12; // r13
  CDisplaySet *v14[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v15; // [rsp+90h] [rbp+48h] BYREF
  unsigned int v16; // [rsp+98h] [rbp+50h]
  unsigned int i; // [rsp+A0h] [rbp+58h] BYREF
  unsigned int v18; // [rsp+A8h] [rbp+60h] BYREF

  v16 = a2;
  v2 = 1366;
  v14[0] = 0LL;
  v3 = 768;
  v15 = 1366;
  i = 768;
  v5 = 4;
  v6 = 1;
  v18 = 4;
  CDisplayManager::GetCurrentDisplaySet(this, v14);
  if ( v14[0] )
  {
    CDisplaySet::GetLargestActiveDisplayResolution(v14[0], &v15, &i, &v18);
    v2 = v15;
    v3 = i;
    v5 = v18;
  }
  v7 = ((v3 + 255) & 0xFFFFFF00) * v5;
  v8 = 0;
  for ( i = ((v2 + 255) & 0xFFFFFF00) * v7 + ((((v2 + 255) & 0xFFFFFF00) * v7) >> 2);
        v8 < *((_DWORD *)this + 60);
        *(_BYTE *)(*((_QWORD *)this + 16) + 8 * v10 + 32) = v12 )
  {
    v9 = *((_QWORD *)this + 16);
    v10 = 5LL * v8;
    v11 = *(_QWORD *)(v9 + 40LL * v8);
    v12 = CD3DDeviceManager::HardwareProtectionRequired(this, *(struct _LUID *)(v9 + 40LL * v8 + 8));
    if ( *(_BYTE *)(v9 + 40LL * v8 + 32) && !v12 && *(_QWORD *)(v11 + 160) )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v11 + 168) + 48LL))(*(_QWORD *)(v11 + 168));
    v15 = 1;
    if ( *(_QWORD *)(v11 + 160) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, unsigned int *))(**(_QWORD **)(v11 + 168) + 40LL))(
        *(_QWORD *)(v11 + 168),
        v16,
        i,
        &v15);
      if ( v15 != 1 )
        v6 = 0;
    }
    ++v8;
  }
  ReleaseInterface<CDisplaySet const>(v14);
  return v6;
}
