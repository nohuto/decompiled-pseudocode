/*
 * XREFs of ?RfxVgpuResetCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00356E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
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
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // eax
  _BYTE v17[8]; // [rsp+20h] [rbp-49h] BYREF
  struct DXGADAPTER *v18; // [rsp+28h] [rbp-41h]
  char v19; // [rsp+30h] [rbp-39h]
  _BYTE v20[8]; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v21[32]; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v22[40]; // [rsp+68h] [rbp-1h] BYREF
  int v23[4]; // [rsp+90h] [rbp+27h] BYREF

  v18 = a1;
  LODWORD(v3) = 0;
  v19 = 0;
  v5 = 0LL;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v17);
  if ( *((_DWORD *)a1 + 44) == 1 )
  {
    v6 = *(_QWORD *)(*((_QWORD *)a1 + 24) + 64LL);
    if ( v6
      && *(_DWORD *)(v6 + 16) == 1953656900
      && (unsigned int)(*(_DWORD *)(v6 + 20) - 2) <= 1
      && *(_BYTE *)(v6 + 2558) )
    {
      if ( v19 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v17);
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v20, a1, 0LL);
      v5 = a2;
      v7 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v20);
      v3 = v7;
      if ( v7 < 0
        || (v13 = *((_QWORD *)a1 + 286),
            v14 = *(_QWORD *)(v13 + 416),
            v23[0] = 6,
            v15 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)(*(_QWORD *)(v13 + 408) + 8LL) + 64LL))(
                    v14,
                    v23),
            v3 = v15,
            v15 < 0) )
      {
        v12 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
        *(_QWORD *)(v12 + 24) = a1;
        *(_QWORD *)(v12 + 32) = v3;
        WdLogEvent5_WdWarning(v12);
      }
      COREACCESS::~COREACCESS((COREACCESS *)v22);
      COREACCESS::~COREACCESS((COREACCESS *)v21);
    }
    else
    {
      if ( !v19 )
        return (unsigned int)v3;
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v17);
    }
    if ( v5 )
      *v5 = v3;
  }
  else if ( v19 )
  {
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v17);
  }
  return (unsigned int)v3;
}
