/*
 * XREFs of RtlpProtectHeap @ 0x18004C67C
 * Callers:
 *     RtlProtectHeap @ 0x18004C5A0 (RtlProtectHeap.c)
 * Callees:
 *     DbgPrint @ 0x18006C5C0 (DbgPrint.c)
 *     ZwQueryVirtualMemory @ 0x1800A0520 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x1800A0AC0 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall RtlpProtectHeap(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // r14
  _QWORD *i; // rsi
  _QWORD *v5; // rbp
  unsigned __int64 j; // rbx
  int VirtualMemory; // edi
  _BYTE v9[24]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v10; // [rsp+48h] [rbp-40h]
  int v11; // [rsp+50h] [rbp-38h]
  char v12; // [rsp+90h] [rbp+8h] BYREF
  __int64 v13; // [rsp+A0h] [rbp+18h] BYREF
  unsigned __int64 v14; // [rsp+A8h] [rbp+20h] BYREF

  v2 = (_QWORD *)(a1 + 288);
  for ( i = *(_QWORD **)(a1 + 288); i != v2; i = (_QWORD *)*i )
  {
    v5 = i - 3;
    if ( i != (_QWORD *)24 )
    {
      for ( j = v5[6]; j < v5[9]; j += v10 )
      {
        VirtualMemory = ZwQueryVirtualMemory(-1LL, j, 0LL, v9, 48LL, 0LL);
        if ( VirtualMemory < 0 )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint("VirtualQuery Failed 0x%p %x\n", j, (unsigned int)VirtualMemory);
          return (unsigned int)VirtualMemory;
        }
        if ( v11 == 4096 )
        {
          v13 = v10;
          v14 = j;
          VirtualMemory = ZwProtectVirtualMemory(-1LL, &v14, &v13, a2, &v12);
          if ( VirtualMemory < 0 )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint("VirtualProtect Failed 0x%p %x\n", j, (unsigned int)VirtualMemory);
            return (unsigned int)VirtualMemory;
          }
        }
      }
    }
  }
  return 0;
}
