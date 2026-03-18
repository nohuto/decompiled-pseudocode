/*
 * XREFs of ?Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z @ 0x1C005EB60
 * Callers:
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C0015EDC (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 *     DoAccel @ 0x1C012DC50 (DoAccel.c)
 * Callees:
 *     MonitorFromMousePoint @ 0x1C005E770 (MonitorFromMousePoint.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDeviceAcceleration::Accelerate(
        CDeviceAcceleration *this,
        struct CInpPushLock *a2,
        int *a3,
        struct _SUBPIXELS *a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rbp
  signed __int64 v11; // r8
  signed __int64 v12; // rcx
  signed __int64 v13; // rax
  bool v14; // cc
  __int64 v15; // r9
  __int64 *v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 *v23; // [rsp+40h] [rbp-38h] BYREF
  __int64 v24; // [rsp+48h] [rbp-30h] BYREF
  __int64 v25; // [rsp+50h] [rbp-28h] BYREF
  int v26; // [rsp+98h] [rbp+20h] BYREF

  v8 = 0;
  v9 = MonitorFromMousePoint(*(_QWORD *)&gptCursorAsync, a2);
  *(_DWORD *)a4 = 0;
  *((_DWORD *)a4 + 1) = 0;
  if ( v9 )
  {
    (*(void (__fastcall **)(CDeviceAcceleration *, __int64, int *, __int64 **, __int64 *, __int64 *))(*(_QWORD *)this + 8LL))(
      this,
      v9,
      &v26,
      &v23,
      &v25,
      &v24);
    v10 = (__int64)*(int *)a2 << 16;
    v11 = abs64((__int64)*a3 << 16);
    v12 = v11;
    v13 = abs64(v10);
    v14 = v13 <= v11;
    if ( v13 < v11 )
      v11 = v13;
    if ( !v14 )
      v12 = v13;
    v15 = v12 + v11 / 2;
    if ( v15 )
    {
      if ( v26 != 1 )
      {
        v16 = v23;
        do
        {
          if ( v15 <= *v16 )
            break;
          ++v8;
          ++v16;
        }
        while ( v8 < v26 - 1 );
      }
      v17 = v8 - 1;
      v18 = *(_QWORD *)(v25 + 8 * v17) + (*(_QWORD *)(v24 + 8 * v17) << 16) / v15;
      if ( dword_1C0190DF8 != (_DWORD)v17 && (unsigned int)v17 > dword_1C0190DF8 )
        v18 = (*(_QWORD *)(v25 + 8LL * (unsigned int)dword_1C0190DF8)
             + (*(_QWORD *)(v24 + 8LL * (unsigned int)dword_1C0190DF8) << 16) / v15
             + v18) >> 1;
      v19 = ((((__int64)*a3 << 16) * v18) >> 16) + qword_1C0190DE8;
      dword_1C0190DF8 = v17;
      v20 = qword_1C0190DF0 + ((v10 * v18) >> 16);
      if ( v20 < 0 )
        v21 = v20 + (-v20 & 0xFFFFFFFFFFFF0000uLL);
      else
        v21 = (unsigned __int16)v20;
      qword_1C0190DF0 = v21;
      *(_DWORD *)a4 = v21;
      if ( v20 < 0 )
        v20 = -(__int64)(-v20 & 0xFFFFFFFFFFFF0000uLL);
      *(_DWORD *)a2 = v20 >> 16;
      if ( v19 < 0 )
        v22 = v19 + (-v19 & 0xFFFFFFFFFFFF0000uLL);
      else
        v22 = (unsigned __int16)v19;
      qword_1C0190DE8 = v22;
      *((_DWORD *)a4 + 1) = v22;
      if ( v19 < 0 )
        v19 = -(__int64)(-v19 & 0xFFFFFFFFFFFF0000uLL);
      *a3 = v19 >> 16;
    }
  }
}
