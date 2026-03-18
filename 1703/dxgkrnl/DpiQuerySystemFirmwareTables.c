/*
 * XREFs of DpiQuerySystemFirmwareTables @ 0x1C0121634
 * Callers:
 *     DpiReadSystemFirmwareTable @ 0x1C01215C0 (DpiReadSystemFirmwareTable.c)
 *     DpiEnumSystemFirmwareTables @ 0x1C01C6910 (DpiEnumSystemFirmwareTables.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 */

__int64 __fastcall DpiQuerySystemFirmwareTables(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        void *a5,
        unsigned int *a6)
{
  _DWORD *PoolWithTag; // rbx
  unsigned int v7; // esi
  int v8; // r15d
  int v9; // r12d
  int v10; // r13d
  ULONG v11; // edi
  __int64 v12; // rcx
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  unsigned int v17; // edx
  _QWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  ULONG ReturnLength[4]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE SystemInformation[128]; // [rsp+30h] [rbp-B8h] BYREF

  PoolWithTag = SystemInformation;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  v10 = a1;
  if ( KeGetCurrentIrql() )
  {
    LODWORD(v16) = -1073741811;
    v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2, a3);
    v19[3] = 275LL;
    v19[4] = 21LL;
    v19[5] = -1073741811LL;
    WdLogEvent5_WdCriticalError(v19);
  }
  else if ( (a5 || !a4) && a6 )
  {
    v11 = a4 + 16;
    if ( a4 + 16 <= 0x80 || (PoolWithTag = ExAllocatePoolWithTag(PagedPool, v11, 0x74727044u)) != 0LL )
    {
      PoolWithTag[1] = v10;
      *PoolWithTag = v9;
      PoolWithTag[2] = v8;
      PoolWithTag[3] = v7;
      v13 = ZwQuerySystemInformation(SystemFirmwareTableInformation, PoolWithTag, v11, ReturnLength);
      v16 = v13;
      if ( v13 < 0 )
      {
        if ( v13 == -1073741789 && ReturnLength[0] >= 0x10 )
        {
          *a6 = PoolWithTag[3];
        }
        else
        {
          *a6 = 0;
          v22 = WdLogNewEntry5_WdError(v15, v14);
          *(_QWORD *)(v22 + 24) = v16;
          WdLogEvent5_WdError(v22);
        }
      }
      else
      {
        v17 = PoolWithTag[3];
        *a6 = v17;
        if ( v17 <= v7 )
          v7 = v17;
        if ( a5 )
          memmove(a5, PoolWithTag + 4, v7);
      }
    }
    else
    {
      LODWORD(v16) = -1073741801;
      v21 = WdLogNewEntry5_WdLowResource(v12);
      *(_QWORD *)(v21 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v21);
    }
    if ( PoolWithTag != (_DWORD *)SystemInformation )
      ExFreePoolWithTag(PoolWithTag, 0x74727044u);
  }
  else
  {
    LODWORD(v16) = -1073741811;
    v20 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v20 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v20);
  }
  return (unsigned int)v16;
}
