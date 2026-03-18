/*
 * XREFs of EtwpLogSessionWorkingSetInfo @ 0x14070BAE8
 * Callers:
 *     EtwpLogMemInfoWs @ 0x14070B538 (EtwpLogMemInfoWs.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     EtwpLogKernelEvent @ 0x1400F22E0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MmQuerySessionWorkingSetInformation @ 0x140215AA4 (MmQuerySessionWorkingSetInformation.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpLogSessionWorkingSetInfo(unsigned int *a1)
{
  void *v2; // rbx
  PVOID PoolWithTag; // rax
  char *v4; // rdi
  unsigned int v5; // eax
  __int64 i; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  char *v15; // [rsp+48h] [rbp-28h]
  int v16; // [rsp+50h] [rbp-20h]
  int v17; // [rsp+54h] [rbp-1Ch]

  v13 = 10;
  v2 = 0LL;
  while ( 1 )
  {
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 40 * v13, 0x74777445u);
    v2 = PoolWithTag;
    if ( !PoolWithTag )
      break;
    if ( (unsigned int)MmQuerySessionWorkingSetInformation((__int64)PoolWithTag, &v13) != -1073741820 )
    {
      if ( v13 )
      {
        v4 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 68 * v13, 0x74777445u);
        if ( v4 )
        {
          v5 = v13;
          for ( i = 0LL; (unsigned int)i < v13; v5 = v13 )
          {
            v7 = 5 * i;
            v8 = (unsigned int)i;
            v9 = *((_DWORD *)v2 + 10 * i);
            i = (unsigned int)(i + 1);
            v10 = 68 * v8;
            *(_DWORD *)&v4[v10] = v9;
            *(_QWORD *)&v4[v10 + 4] = *((_QWORD *)v2 + v7 + 1);
            v11 = *((_QWORD *)v2 + v7 + 2);
            *(_QWORD *)&v4[v10 + 60] = 0LL;
            *(_QWORD *)&v4[v10 + 12] = v11;
            *(_QWORD *)&v4[v10 + 20] = *((_QWORD *)v2 + v7 + 3);
            v12 = *((_QWORD *)v2 + v7 + 4);
            *(_QWORD *)&v4[v10 + 44] = 0LL;
            *(_QWORD *)&v4[v10 + 36] = 0LL;
            *(_QWORD *)&v4[v10 + 52] = 0LL;
            *(_QWORD *)&v4[v10 + 28] = v12;
          }
          UserData.Reserved = 0;
          v17 = 0;
          UserData.Ptr = (ULONGLONG)&v13;
          UserData.Size = 4;
          v15 = v4;
          v16 = 68 * v5;
          if ( a1 )
          {
            EtwpLogKernelEvent((__int64)&UserData, EtwpHostSiloState, *a1, 2u, 0x27Eu, 0x401804u);
          }
          else
          {
            if ( (DWORD1(PerfGlobalGroupMask) & 0x800000) != 0 )
              EtwTraceKernelEvent((int)&UserData, 2, 0x20800000u, 638, 4200452);
            if ( (dword_140345004 & 0x800000) != 0 )
              EtwWrite(EtwpMemoryProvRegHandle, &KERNEL_MEM_EVENT_MEMINFO_SESSIONWS, 0LL, 2u, &UserData);
          }
          ExFreePoolWithTag(v4, 0);
        }
      }
      ExFreePoolWithTag(v2, 0);
      return;
    }
  }
}
