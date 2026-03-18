/*
 * XREFs of ?Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z @ 0x1C0071D20
 * Callers:
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C004704C (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 *     DoAccel @ 0x1C012E750 (DoAccel.c)
 * Callees:
 *     PtInRect @ 0x1C007268C (PtInRect.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDeviceAcceleration::Accelerate(CDeviceAcceleration *this, int *a2, int *a3, struct _SUBPIXELS *a4)
{
  unsigned int v4; // ebx
  __int64 v9; // r11
  struct tagPOINT v10; // r10
  __int64 v11; // rcx
  __int64 v12; // rbp
  signed __int64 v13; // r8
  signed __int64 v14; // rcx
  signed __int64 v15; // rax
  bool v16; // cc
  __int64 v17; // r9
  __int64 *v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 *v27; // [rsp+40h] [rbp-38h] BYREF
  __int64 v28; // [rsp+48h] [rbp-30h] BYREF
  __int64 v29; // [rsp+50h] [rbp-28h] BYREF
  int v30; // [rsp+98h] [rbp+20h] BYREF

  v4 = 0;
  v9 = *((_QWORD *)gpDispInfo + 12);
  if ( v9 )
  {
    v10 = gptCursorAsync;
    while ( 1 )
    {
      v11 = *(_QWORD *)(v9 + 40);
      if ( (*(_DWORD *)(v11 + 24) & 1) != 0 )
      {
        if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)(v11 + 28, v10) )
          break;
      }
      v9 = *(_QWORD *)(v9 + 56);
      if ( !v9 )
        goto LABEL_27;
    }
  }
  else
  {
LABEL_27:
    v9 = 0LL;
  }
  *(_DWORD *)a4 = 0;
  *((_DWORD *)a4 + 1) = 0;
  if ( v9 )
  {
    (*(void (__fastcall **)(CDeviceAcceleration *, __int64, int *, __int64 **, __int64 *, __int64 *))(*(_QWORD *)this + 8LL))(
      this,
      v9,
      &v30,
      &v27,
      &v29,
      &v28);
    v12 = (__int64)*a2 << 16;
    v13 = abs64((__int64)*a3 << 16);
    v14 = v13;
    v15 = abs64(v12);
    v16 = v15 <= v13;
    if ( v15 < v13 )
      v13 = v15;
    if ( !v16 )
      v14 = v15;
    v17 = v14 + v13 / 2;
    if ( v17 )
    {
      if ( v30 != 1 )
      {
        v18 = v27;
        do
        {
          if ( v17 <= *v18 )
            break;
          ++v4;
          ++v18;
        }
        while ( v4 < v30 - 1 );
      }
      v19 = v4 - 1;
      v20 = *(_QWORD *)(v29 + 8 * v19) + (*(_QWORD *)(v28 + 8 * v19) << 16) / v17;
      if ( dword_1C018C0C8 != (_DWORD)v19 && (unsigned int)v19 > dword_1C018C0C8 )
        v20 = (*(_QWORD *)(v29 + 8LL * (unsigned int)dword_1C018C0C8)
             + (*(_QWORD *)(v28 + 8LL * (unsigned int)dword_1C018C0C8) << 16) / v17
             + v20) >> 1;
      v21 = ((((__int64)*a3 << 16) * v20) >> 16) + qword_1C018C0B8;
      dword_1C018C0C8 = v19;
      v22 = qword_1C018C0C0 + ((v12 * v20) >> 16);
      if ( v22 < 0 )
        v23 = v22 + (-v22 & 0xFFFFFFFFFFFF0000uLL);
      else
        v23 = (unsigned __int16)v22;
      qword_1C018C0C0 = v23;
      *(_DWORD *)a4 = v23;
      if ( v22 < 0 )
        v24 = -(__int64)(-v22 & 0xFFFFFFFFFFFF0000uLL);
      else
        v24 = v22 & 0x7FFFFFFFFFFF0000LL;
      *a2 = v24 >> 16;
      if ( v21 < 0 )
        v25 = v21 + (-v21 & 0xFFFFFFFFFFFF0000uLL);
      else
        v25 = (unsigned __int16)v21;
      qword_1C018C0B8 = v25;
      *((_DWORD *)a4 + 1) = v25;
      if ( v21 < 0 )
        v26 = -(__int64)(-v21 & 0xFFFFFFFFFFFF0000uLL);
      else
        v26 = v21 & 0x7FFFFFFFFFFF0000LL;
      *a3 = v26 >> 16;
    }
  }
}
