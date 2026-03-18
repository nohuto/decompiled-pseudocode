/*
 * XREFs of ?Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z @ 0x1C00554C8
 * Callers:
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C00390C8 (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 *     DoAccel @ 0x1C00554A0 (DoAccel.c)
 * Callees:
 *     MonitorFromMousePoint @ 0x1C00557F0 (MonitorFromMousePoint.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDeviceAcceleration::Accelerate(CDeviceAcceleration *this, int *a2, int *a3, struct _SUBPIXELS *a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // r15
  signed __int64 v11; // r8
  __int64 v12; // rax
  signed __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  __int64 *v30; // [rsp+40h] [rbp-38h] BYREF
  __int64 v31; // [rsp+48h] [rbp-30h] BYREF
  __int64 v32; // [rsp+50h] [rbp-28h] BYREF
  int v33; // [rsp+98h] [rbp+20h] BYREF

  v8 = 0;
  v9 = ((__int64 (__fastcall *)(_QWORD))MonitorFromMousePoint)(gptCursorAsync);
  *(_DWORD *)a4 = 0;
  *((_DWORD *)a4 + 1) = 0;
  if ( v9 )
  {
    (*(void (__fastcall **)(CDeviceAcceleration *, __int64, int *, __int64 **, __int64 *, __int64 *))(*(_QWORD *)this + 8LL))(
      this,
      v9,
      &v33,
      &v30,
      &v32,
      &v31);
    v10 = (__int64)*a3 << 16;
    v11 = abs64(v10);
    v12 = (__int64)*a2 << 16;
    v13 = abs64(v12);
    if ( v13 >= v11 )
      v12 = (__int64)*a3 << 16;
    v14 = (__int64)abs64(v12) / 2;
    v15 = (__int64)*a2 << 16;
    if ( v13 <= v11 )
      v15 = (__int64)*a3 << 16;
    v16 = abs64(v15) + v14;
    if ( v16 )
    {
      if ( v33 != 1 )
      {
        v17 = v30;
        do
        {
          if ( v16 <= *v17 )
            break;
          ++v8;
          ++v17;
        }
        while ( v8 < v33 - 1 );
      }
      v24 = v8 - 1;
      v25 = *(_QWORD *)(v32 + 8 * v24) + (*(_QWORD *)(v31 + 8 * v24) << 16) / v16;
      if ( dword_1C01A0CC8 != (_DWORD)v24 && (unsigned int)v24 > dword_1C01A0CC8 )
        v25 = (*(_QWORD *)(v32 + 8LL * (unsigned int)dword_1C01A0CC8)
             + (*(_QWORD *)(v31 + 8LL * (unsigned int)dword_1C01A0CC8) << 16) / v16
             + v25) >> 1;
      v26 = qword_1C01A0CC0 + ((((__int64)*a2 << 16) * v25) >> 16);
      dword_1C01A0CC8 = v24;
      v27 = (unsigned __int16)v26;
      v28 = ((v10 * v25) >> 16) + qword_1C01A0CB8;
      v29 = -v26 & 0xFFFFFFFFFFFF0000uLL;
      if ( v26 < 0 )
        v27 = v26 + v29;
      v18 = -(__int64)v29;
      *(_DWORD *)a4 = v27;
      qword_1C01A0CC0 = v27;
      v19 = v26;
      if ( v26 < 0 )
        v19 = v18;
      v20 = -v28 & 0xFFFFFFFFFFFF0000uLL;
      *a2 = v19 >> 16;
      v21 = (unsigned __int16)v28;
      if ( v28 < 0 )
        v21 = v28 + v20;
      *((_DWORD *)a4 + 1) = v21;
      v22 = -(__int64)v20;
      qword_1C01A0CB8 = v21;
      v23 = v28;
      if ( v28 < 0 )
        v23 = v22;
      *a3 = v23 >> 16;
    }
  }
}
