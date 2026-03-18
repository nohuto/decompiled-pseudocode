/*
 * XREFs of ?RfxVgpuResetCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0026910
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RfxVgpuResetCallback(struct DXGADAPTER *a1, _DWORD *a2)
{
  __int64 v3; // rbx
  _DWORD *v5; // rsi
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  _BYTE v16[8]; // [rsp+20h] [rbp-49h] BYREF
  struct DXGADAPTER *v17; // [rsp+28h] [rbp-41h]
  char v18; // [rsp+30h] [rbp-39h]
  _BYTE v19[8]; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v20[32]; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v21[40]; // [rsp+68h] [rbp-1h] BYREF
  int v22[4]; // [rsp+90h] [rbp+27h] BYREF

  v17 = a1;
  LODWORD(v3) = 0;
  v18 = 0;
  v5 = 0LL;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v16);
  if ( *((_DWORD *)a1 + 44) == 1 )
  {
    v6 = *(_QWORD *)(*((_QWORD *)a1 + 24) + 64LL);
    if ( v6
      && *(_DWORD *)(v6 + 16) == 1953656900
      && (unsigned int)(*(_DWORD *)(v6 + 20) - 2) <= 1
      && *(_BYTE *)(v6 + 2558) )
    {
      if ( v18 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v16);
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v19, a1, 0LL);
      v5 = a2;
      v7 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v19);
      v3 = v7;
      if ( v7 < 0
        || (v12 = *((_QWORD *)a1 + 289),
            v13 = *(_QWORD *)(v12 + 512),
            v22[0] = 6,
            v14 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)(*(_QWORD *)(v12 + 504) + 8LL) + 64LL))(
                    v13,
                    v22),
            v3 = v14,
            v14 < 0) )
      {
        v11 = WdLogNewEntry5_WdWarning(v9, v8, v10);
        *(_QWORD *)(v11 + 24) = a1;
        *(_QWORD *)(v11 + 32) = v3;
        WdLogEvent5_WdWarning(v11);
      }
      COREACCESS::~COREACCESS((COREACCESS *)v21);
      COREACCESS::~COREACCESS((COREACCESS *)v20);
    }
    else
    {
      if ( !v18 )
        return (unsigned int)v3;
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v16);
    }
    if ( v5 )
      *v5 = v3;
  }
  else if ( v18 )
  {
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v16);
  }
  return (unsigned int)v3;
}
