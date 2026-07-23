/*
 * XREFs of LdrUnloadDll @ 0x180046DB0
 * Callers:
 *     sub_180027040 @ 0x180027040 (sub_180027040.c)
 *     sub_180046810 @ 0x180046810 (sub_180046810.c)
 *     sub_180047030 @ 0x180047030 (sub_180047030.c)
 *     RtlWnfDllUnloadCallback @ 0x1800488F0 (RtlWnfDllUnloadCallback.c)
 *     sub_180055D80 @ 0x180055D80 (sub_180055D80.c)
 *     RtlQueueWorkItem @ 0x180057A90 (RtlQueueWorkItem.c)
 *     sub_18007BD78 @ 0x18007BD78 (sub_18007BD78.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 *     RtlWow64LogMessageInEventLogger @ 0x1800D1D00 (RtlWow64LogMessageInEventLogger.c)
 * Callees:
 *     sub_18001F5FC @ 0x18001F5FC (sub_18001F5FC.c)
 *     sub_18001FA3C @ 0x18001FA3C (sub_18001FA3C.c)
 *     sub_1800435B4 @ 0x1800435B4 (sub_1800435B4.c)
 *     sub_180046E54 @ 0x180046E54 (sub_180046E54.c)
 *     sub_180047B2C @ 0x180047B2C (sub_180047B2C.c)
 */

NTSTATUS __cdecl LdrUnloadDll(PVOID DllHandle)
{
  NTSTATUS v1; // ebx
  char *v2; // rdi
  __int16 v4; // bx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // [rsp+38h] [rbp+10h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp+18h] BYREF

  v1 = 0;
  if ( !byte_18015C3A8 )
  {
    v1 = sub_18001FA3C((unsigned __int64)DllHandle, (__int64 *)&BaseAddress, &v9);
    if ( v1 >= 0 )
    {
      v2 = (char *)BaseAddress;
      v1 = sub_180046E54(BaseAddress, 1LL);
      if ( v1 == -1073741267 )
      {
        v4 = NtCurrentTeb()->SameTebFlags & 0x1000;
        if ( !v4 )
          sub_1800435B4(0);
        v2 = (char *)BaseAddress;
        sub_180046E54(BaseAddress, 0LL);
        if ( !v4 )
          sub_180047B2C(v6, v5, v7, v8);
        v1 = 0;
      }
      sub_18001F5FC(v2);
    }
  }
  return v1;
}
