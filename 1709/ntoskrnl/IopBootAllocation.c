/*
 * XREFs of IopBootAllocation @ 0x1405D2030
 * Callers:
 *     IopAllocateBootResourcesInternal @ 0x1405D1F00 (IopAllocateBootResourcesInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     IopAddRemoveReqDescs @ 0x14055B3A8 (IopAddRemoveReqDescs.c)
 */

__int64 __fastcall IopBootAllocation(__int64 a1)
{
  unsigned int v1; // ebp
  _QWORD *v2; // rdi
  _QWORD *v3; // rsi
  int v4; // eax
  _QWORD v6[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v7; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0;
  v6[1] = v6;
  v6[0] = v6;
  *(_QWORD *)(a1 + 16) = a1 + 40;
  IopAddRemoveReqDescs(*(_QWORD *)(a1 + 40) + 24LL, *(_DWORD *)(*(_QWORD *)(a1 + 40) + 20LL), v6, 1);
  v2 = (_QWORD *)v6[0];
  while ( v2 != v6 )
  {
    v3 = v2 - 11;
    v2 = (_QWORD *)*v2;
    if ( *((_BYTE *)v3 + 105) )
    {
      v7 = v3 + 5;
      v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD **))(v3[3] + 32LL))(*(_QWORD *)(v3[3] + 8LL), 9LL, &v7);
      if ( v4 < 0 )
        v1 = v4;
      *((_WORD *)v3 + 52) = 0;
      v3[12] = v3 + 11;
      v3[11] = v3 + 11;
      v3[10] = v3 + 9;
      v3[9] = v3 + 9;
      v3[6] = v3 + 5;
      v3[5] = v3 + 5;
      v3[8] = v3 + 7;
      v3[7] = v3 + 7;
    }
  }
  return v1;
}
