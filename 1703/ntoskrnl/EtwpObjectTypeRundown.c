/*
 * XREFs of EtwpObjectTypeRundown @ 0x140710810
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140434EC0 (EtwpKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400F22E0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwQueryObject @ 0x14017E140 (ZwQueryObject.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpObjectTypeRundown(unsigned int a1, char a2)
{
  unsigned __int16 *PoolWithTag; // rbx
  NTSTATUS v5; // eax
  unsigned __int16 v6; // r14
  unsigned __int16 *v7; // rdi
  unsigned int i; // esi
  __int64 v9; // rax
  ULONG NumberOfBytes; // [rsp+30h] [rbp-40h] BYREF
  _WORD NumberOfBytes_4[6]; // [rsp+34h] [rbp-3Ch] BYREF
  _QWORD v12[3]; // [rsp+40h] [rbp-30h] BYREF
  int v13; // [rsp+58h] [rbp-18h]
  int v14; // [rsp+5Ch] [rbp-14h]

  NumberOfBytes = 1024;
  PoolWithTag = 0LL;
  while ( 1 )
  {
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x74777445u);
    if ( !PoolWithTag )
      break;
    v5 = ZwQueryObject(0LL, ObjectTypesInformation, PoolWithTag, NumberOfBytes, &NumberOfBytes);
    if ( v5 != -1073741820 )
    {
      if ( v5 >= 0 )
      {
        NumberOfBytes_4[1] = 0;
        v12[1] = 4LL;
        v12[0] = NumberOfBytes_4;
        v6 = 4389 - (a2 != 0);
        v7 = PoolWithTag + 4;
        for ( i = 0;
              i < *(_DWORD *)PoolWithTag;
              v7 = (unsigned __int16 *)((char *)v7 + ((v7[1] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 104) )
        {
          if ( i )
          {
            NumberOfBytes_4[0] = *((unsigned __int8 *)v7 + 90);
            v9 = *((_QWORD *)v7 + 1);
            v13 = *v7 + 2;
            v12[2] = v9;
            v14 = 0;
            EtwpLogKernelEvent((__int64)v12, EtwpHostSiloState, a1, 2u, v6, 0x401802u);
          }
          ++i;
        }
      }
      ExFreePoolWithTag(PoolWithTag, 0);
      return;
    }
  }
}
