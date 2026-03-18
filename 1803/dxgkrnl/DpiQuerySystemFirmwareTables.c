/*
 * XREFs of DpiQuerySystemFirmwareTables @ 0x1C01FE334
 * Callers:
 *     DpiEnumSystemFirmwareTables @ 0x1C01FD470 (DpiEnumSystemFirmwareTables.c)
 *     DpiReadSystemFirmwareTable @ 0x1C01FE500 (DpiReadSystemFirmwareTable.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 */

__int64 __fastcall DpiQuerySystemFirmwareTables(
        __int64 a1,
        int a2,
        int a3,
        unsigned int a4,
        void *a5,
        unsigned int *a6)
{
  _DWORD *PoolWithTag; // rbx
  unsigned int v7; // esi
  int v10; // r13d
  __int64 v11; // rdi
  _QWORD *v12; // rax
  __int64 v13; // rax
  ULONG v14; // edi
  __int64 v15; // rcx
  __int64 v16; // rax
  NTSTATUS v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // edx
  __int64 v20; // rax
  ULONG ReturnLength[4]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE SystemInformation[128]; // [rsp+30h] [rbp-B8h] BYREF

  PoolWithTag = SystemInformation;
  v7 = a4;
  v10 = a1;
  if ( KeGetCurrentIrql() )
  {
    LODWORD(v11) = -1073741811;
    v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1);
    v12[3] = 275LL;
    v12[4] = 21LL;
    v12[5] = -1073741811LL;
    WdLogEvent5_WdCriticalError(v12);
  }
  else if ( (a5 || !a4) && a6 )
  {
    v14 = a4 + 16;
    if ( a4 + 16 <= 0x80 || (PoolWithTag = ExAllocatePoolWithTag(PagedPool, v14, 0x74727044u)) != 0LL )
    {
      PoolWithTag[1] = v10;
      *PoolWithTag = a2;
      PoolWithTag[2] = a3;
      PoolWithTag[3] = v7;
      v17 = ZwQuerySystemInformation(SystemFirmwareTableInformation, PoolWithTag, v14, ReturnLength);
      v11 = v17;
      if ( v17 < 0 )
      {
        if ( v17 == -1073741789 && ReturnLength[0] >= 0x10 )
        {
          *a6 = PoolWithTag[3];
        }
        else
        {
          *a6 = 0;
          v20 = WdLogNewEntry5_WdError(v18);
          *(_QWORD *)(v20 + 24) = v11;
          WdLogEvent5_WdError(v20);
        }
      }
      else
      {
        v19 = PoolWithTag[3];
        *a6 = v19;
        if ( v19 <= v7 )
          v7 = v19;
        if ( a5 )
          memmove(a5, PoolWithTag + 4, v7);
      }
    }
    else
    {
      LODWORD(v11) = -1073741801;
      v16 = WdLogNewEntry5_WdLowResource(v15);
      *(_QWORD *)(v16 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v16);
    }
    if ( PoolWithTag != (_DWORD *)SystemInformation )
      ExFreePoolWithTag(PoolWithTag, 0x74727044u);
  }
  else
  {
    LODWORD(v11) = -1073741811;
    v13 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v13 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v13);
  }
  return (unsigned int)v11;
}
