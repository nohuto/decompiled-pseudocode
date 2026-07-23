/*
 * XREFs of sub_180051190 @ 0x180051190
 * Callers:
 *     EtwProcessPrivateLoggerRequest @ 0x180051B90 (EtwProcessPrivateLoggerRequest.c)
 *     sub_1800860E0 @ 0x1800860E0 (sub_1800860E0.c)
 * Callees:
 *     sub_1800076D8 @ 0x1800076D8 (sub_1800076D8.c)
 *     sub_180050D48 @ 0x180050D48 (sub_180050D48.c)
 *     sub_180050DC4 @ 0x180050DC4 (sub_180050DC4.c)
 *     sub_180051100 @ 0x180051100 (sub_180051100.c)
 *     sub_180052BC4 @ 0x180052BC4 (sub_180052BC4.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     ZwWaitForSingleObject @ 0x1800A5380 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 */

__int64 __fastcall sub_180051190(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r13d
  char v6; // r12
  unsigned int v7; // edi
  _DWORD *v8; // rbx
  char v9; // r15
  int v10; // ebp
  void *v11; // r14
  NTSTATUS v12; // eax
  unsigned int v13; // esi
  int v15; // eax
  unsigned int v16; // [rsp+60h] [rbp+8h]
  PVOID BaseAddress; // [rsp+68h] [rbp+10h] BYREF
  int v18; // [rsp+70h] [rbp+18h]
  int v19; // [rsp+74h] [rbp+1Ch]

  v19 = HIDWORD(a3);
  BaseAddress = 0LL;
  v4 = 0;
  v18 = 0;
  v6 = 0;
  v7 = sub_180051100(a4, &BaseAddress);
  if ( v7 )
    return v7;
  v8 = BaseAddress;
  v9 = 1;
  v10 = *((_DWORD *)BaseAddress + 81) & 0x400;
  v11 = (void *)*((_QWORD *)BaseAddress + 4);
  v16 = *((_DWORD *)BaseAddress + 5);
  if ( (*(_DWORD *)(a4 + 64) & 0x10000) != 0 )
  {
    v6 = 1;
    v4 = *((_DWORD *)BaseAddress + 96);
    v18 = *((_DWORD *)BaseAddress + 97);
    *((_DWORD *)BaseAddress + 96) = *(_DWORD *)(a4 + 104);
    v8[97] = *(_DWORD *)(a4 + 112);
    if ( (*(_DWORD *)(a4 + 64) & 0x1000) != 0 )
      *((_QWORD *)v8 + 47) = *(_QWORD *)(a4 + 16);
  }
  v7 = sub_180050D48((__int64)v8);
  if ( !v7 )
  {
    if ( v10 || (v12 = sub_180050DC4((__int64)v8, 8), v12 >= 0) )
    {
      sub_180052BC4(a4, v8, 0LL);
      v13 = v16;
      v9 = 0;
      _InterlockedDecrement((volatile signed __int32 *)(qword_1801593C0 + 16LL * v16 + 8));
      if ( v10 )
        sub_1800076D8((unsigned int *)BaseAddress);
      v8 = 0LL;
      BaseAddress = 0LL;
      if ( v11 )
      {
        ZwWaitForSingleObject(v11, 0, 0LL);
        ZwClose(v11);
      }
      goto LABEL_10;
    }
    v7 = RtlNtStatusToDosError(v12);
  }
  v13 = v16;
LABEL_10:
  if ( v6 && v8 )
  {
    v15 = v18;
    v8[96] = v4;
    v8[97] = v15;
  }
  if ( v9 )
    _InterlockedDecrement((volatile signed __int32 *)(qword_1801593C0 + 16LL * v13 + 8));
  return v7;
}
