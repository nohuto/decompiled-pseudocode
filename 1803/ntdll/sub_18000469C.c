/*
 * XREFs of sub_18000469C @ 0x18000469C
 * Callers:
 *     EtwProcessPrivateLoggerRequest @ 0x180004A40 (EtwProcessPrivateLoggerRequest.c)
 *     RtlExitUserProcess @ 0x180047D70 (RtlExitUserProcess.c)
 * Callees:
 *     sub_1800024A8 @ 0x1800024A8 (sub_1800024A8.c)
 *     sub_180003970 @ 0x180003970 (sub_180003970.c)
 *     sub_180003FA8 @ 0x180003FA8 (sub_180003FA8.c)
 *     sub_1800049F4 @ 0x1800049F4 (sub_1800049F4.c)
 *     sub_180005F40 @ 0x180005F40 (sub_180005F40.c)
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     ZwWaitForSingleObject @ 0x18009AB40 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 */

__int64 __fastcall sub_18000469C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r12
  unsigned int v6; // esi
  __int64 v7; // rbx
  char v8; // r15
  __int64 v9; // r13
  int v10; // ebp
  __int64 v11; // r14
  NTSTATUS v12; // eax
  int v14; // [rsp+60h] [rbp+8h]
  __int64 v15; // [rsp+68h] [rbp+10h] BYREF
  int v16; // [rsp+70h] [rbp+18h]
  int v17; // [rsp+74h] [rbp+1Ch]

  v17 = HIDWORD(a3);
  v15 = 0LL;
  v4 = 0;
  v14 = 0;
  v16 = 0;
  v6 = sub_1800049F4(a4, &v15);
  if ( !v6 )
  {
    v7 = v15;
    v8 = 1;
    v9 = *(unsigned int *)(v15 + 20);
    v10 = *(_DWORD *)(v15 + 324) & 0x400;
    v11 = *(_QWORD *)(v15 + 32);
    if ( (*(_DWORD *)(a4 + 64) & 0x10000) != 0 )
    {
      v4 = 1;
      v14 = *(_DWORD *)(v15 + 384);
      v16 = *(_DWORD *)(v15 + 388);
      *(_DWORD *)(v15 + 384) = *(_DWORD *)(a4 + 104);
      *(_DWORD *)(v7 + 388) = *(_DWORD *)(a4 + 112);
      if ( (*(_DWORD *)(a4 + 64) & 0x1000) != 0 )
        *(_QWORD *)(v7 + 376) = *(_QWORD *)(a4 + 16);
    }
    v6 = sub_1800024A8(v7);
    if ( !v6 )
    {
      if ( v10 || (v12 = sub_180003FA8(v7, 8), v12 >= 0) )
      {
        sub_180005F40(a4, v7, 0LL);
        v8 = 0;
        _InterlockedDecrement((volatile signed __int32 *)(qword_18015A420 + 16 * v9 + 8));
        if ( v10 )
          sub_180003970(v15);
        v7 = 0LL;
        v15 = 0LL;
        if ( v11 )
        {
          ZwWaitForSingleObject(v11, 0LL, 0LL);
          ZwClose(v11);
        }
      }
      else
      {
        v6 = RtlNtStatusToDosError(v12);
      }
    }
    if ( v4 && v7 )
    {
      *(_DWORD *)(v7 + 384) = v14;
      *(_DWORD *)(v7 + 388) = v16;
    }
    if ( v8 )
      _InterlockedDecrement((volatile signed __int32 *)(qword_18015A420 + 16 * v9 + 8));
  }
  return v6;
}
