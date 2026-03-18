/*
 * XREFs of ?Thunk_SetMatrix4x4Value_40@?$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18016CAD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z @ 0x180152E0C (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z.c)
 */

__int64 __fastcall IDataSourceProxy_Receive<BamoImpl::BamoDataSourceProxyImpl>::Thunk_SetMatrix4x4Value_40(
        __int64 a1,
        unsigned int **a2)
{
  int *v3; // rsi
  unsigned int v4; // edi
  unsigned int v5; // eax
  __int64 v6; // rbx
  unsigned int v7; // edi
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = (int *)a2[1];
  v4 = **a2;
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v9,
    *(struct Microsoft::BamoImpl::BamoConnectionImpl **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 24LL));
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)(a1 - 16) + 128LL))(a1 - 16, v4, v3);
  v6 = v9;
  v7 = v5;
  if ( v9 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v9 + 96));
    *(_DWORD *)(v6 + 136) = GetCurrentThreadId();
  }
  return v7;
}
