/*
 * XREFs of ?Thunk_SetBooleanValue_8@?$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18016C980
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z @ 0x180152E0C (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z.c)
 */

__int64 __fastcall IDataSourceProxy_Receive<BamoImpl::BamoDataSourceProxyImpl>::Thunk_SetBooleanValue_8(
        __int64 a1,
        unsigned int **a2)
{
  char v3; // si
  unsigned int v4; // edi
  __int64 v5; // r8
  unsigned int v6; // eax
  __int64 v7; // rbx
  unsigned int v8; // edi
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_BYTE *)a2[1];
  v4 = **a2;
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v10,
    *(struct Microsoft::BamoImpl::BamoConnectionImpl **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 24LL));
  LOBYTE(v5) = v3;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(a1 - 16) + 64LL))(a1 - 16, v4, v5);
  v7 = v10;
  v8 = v6;
  if ( v10 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v10 + 96));
    *(_DWORD *)(v7 + 136) = GetCurrentThreadId();
  }
  return v8;
}
