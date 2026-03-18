/*
 * XREFs of IopBootAllocation @ 0x1406176D0
 * Callers:
 *     IopAllocateBootResourcesInternal @ 0x140616020 (IopAllocateBootResourcesInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     IopAddRemoveReqDescs @ 0x1406177B0 (IopAddRemoveReqDescs.c)
 */

__int64 __fastcall IopBootAllocation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  _QWORD *v5; // rdi
  _QWORD *v6; // rsi
  _QWORD *v7; // r14
  bool v8; // zf
  int v9; // eax
  _QWORD v11[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v12; // [rsp+30h] [rbp-28h] BYREF

  v4 = 0;
  v11[1] = v11;
  LOBYTE(a4) = 1;
  v11[0] = v11;
  *(_QWORD *)(a1 + 16) = a1 + 40;
  IopAddRemoveReqDescs(*(_QWORD *)(a1 + 40) + 24LL, *(unsigned int *)(*(_QWORD *)(a1 + 40) + 20LL), v11, a4);
  v5 = (_QWORD *)v11[0];
  while ( v5 != v11 )
  {
    v6 = v5 - 11;
    v7 = v5;
    v8 = *((_BYTE *)v5 + 17) == 0;
    v5 = (_QWORD *)*v5;
    if ( !v8 )
    {
      v12 = v6 + 5;
      v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD **))(v6[3] + 32LL))(*(_QWORD *)(v6[3] + 8LL), 9LL, &v12);
      if ( v9 < 0 )
        v4 = v9;
      *((_WORD *)v6 + 52) = 0;
      v7[1] = v7;
      *v7 = v7;
      v6[10] = v6 + 9;
      v6[9] = v6 + 9;
      v6[6] = v6 + 5;
      v6[5] = v6 + 5;
      v6[8] = v6 + 7;
      v6[7] = v6 + 7;
    }
  }
  return v4;
}
