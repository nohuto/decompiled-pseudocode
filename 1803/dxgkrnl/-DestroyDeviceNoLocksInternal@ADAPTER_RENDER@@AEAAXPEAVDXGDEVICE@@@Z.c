/*
 * XREFs of ?DestroyDeviceNoLocksInternal@ADAPTER_RENDER@@AEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5B18
 * Callers:
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0015700 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A59D4 (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall ADAPTER_RENDER::DestroyDeviceNoLocksInternal(ADAPTER_RENDER *this, struct DXGDEVICE *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  _BYTE v7[8]; // [rsp+20h] [rbp-29h] BYREF
  __int64 v8; // [rsp+28h] [rbp-21h]
  char v9; // [rsp+30h] [rbp-19h]
  _BYTE v10[8]; // [rsp+40h] [rbp-9h] BYREF
  _BYTE v11[8]; // [rsp+48h] [rbp-1h] BYREF
  __int64 v12; // [rsp+50h] [rbp+7h]
  __int64 v13; // [rsp+58h] [rbp+Fh]
  char v14; // [rsp+60h] [rbp+17h]
  _BYTE v15[8]; // [rsp+68h] [rbp+1Fh] BYREF
  __int64 v16; // [rsp+70h] [rbp+27h]
  __int64 v17; // [rsp+78h] [rbp+2Fh]
  char v18; // [rsp+80h] [rbp+37h]
  struct DXGDEVICE *v19; // [rsp+88h] [rbp+3Fh]
  char v20; // [rsp+90h] [rbp+47h]

  v8 = *((_QWORD *)this + 2);
  v9 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v7);
  v4 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
  v13 = v4;
  v14 = 0;
  if ( v4 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v4 + 24));
    v12 = -1LL;
  }
  v5 = *((_QWORD *)a2 + 211);
  if ( v5 )
    v6 = *((_QWORD *)a2 + 211);
  else
    v6 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
  v17 = v6;
  v18 = 0;
  if ( v6 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v6 + 24));
    v5 = *((_QWORD *)a2 + 211);
    v16 = -1LL;
  }
  v19 = a2;
  if ( v5 == *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) || (v20 = 1, !v5) )
    v20 = 0;
  COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v10);
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 176LL) != 4 )
    ADAPTER_RENDER::DestroyDevice((DXGADAPTER **)this, a2, (struct COREDEVICEACCESS *)v10);
  COREACCESS::~COREACCESS((COREACCESS *)v15);
  COREACCESS::~COREACCESS((COREACCESS *)v11);
  if ( v9 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v7);
}
