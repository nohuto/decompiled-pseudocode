/*
 * XREFs of WbHeapExecuteCall @ 0x14053C4C0
 * Callers:
 *     WbDispatchOperation @ 0x14053BA60 (WbDispatchOperation.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     sub_14045B538 @ 0x14045B538 (sub_14045B538.c)
 *     WbGetHeapExecutedBlock @ 0x14053B7A0 (WbGetHeapExecutedBlock.c)
 *     WbSetTrapFrame @ 0x14053C120 (WbSetTrapFrame.c)
 *     WbGetWarbirdThread @ 0x14053C220 (WbGetWarbirdThread.c)
 *     WbUpdateHeapExecutedCallArgumentList @ 0x14053C660 (WbUpdateHeapExecutedCallArgumentList.c)
 *     sub_14053C76C @ 0x14053C76C (sub_14053C76C.c)
 *     sub_14053C820 @ 0x14053C820 (sub_14053C820.c)
 *     WbValidateHeapExecuteCallArguments @ 0x14053C8C0 (WbValidateHeapExecuteCallArguments.c)
 *     WbFreeUserMemory @ 0x14054902C (WbFreeUserMemory.c)
 */

__int64 __fastcall WbHeapExecuteCall(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 result; // rax
  __int64 v9; // rdx
  int HeapExecutedBlock; // ebx
  int WarbirdThread; // eax
  volatile signed __int64 *v12; // rdi
  _QWORD *v13; // rbp
  __int64 v14; // rax
  _QWORD *v15; // rdi
  PVOID P; // [rsp+30h] [rbp-1B8h] BYREF
  _QWORD *v17; // [rsp+38h] [rbp-1B0h] BYREF
  __int64 v18; // [rsp+40h] [rbp-1A8h] BYREF
  __int64 v19; // [rsp+48h] [rbp-1A0h]
  int v20; // [rsp+50h] [rbp-198h]
  _BYTE v21[320]; // [rsp+60h] [rbp-188h] BYREF

  P = 0LL;
  v17 = 0LL;
  result = WbValidateHeapExecuteCallArguments(a2, a4, v21);
  if ( (int)result < 0 )
    return result;
  HeapExecutedBlock = WbGetHeapExecutedBlock(a1, (__int64)v21, (volatile signed __int64 **)&P);
  if ( HeapExecutedBlock >= 0 )
  {
    WarbirdThread = WbGetWarbirdThread(a1, v9, &v17);
    v12 = (volatile signed __int64 *)P;
    HeapExecutedBlock = WarbirdThread;
    v13 = v17;
    if ( WarbirdThread >= 0 )
    {
      HeapExecutedBlock = sub_14053C820(&v18);
      if ( HeapExecutedBlock >= 0 )
      {
        HeapExecutedBlock = sub_14053C76C((_DWORD)v13, (_DWORD)v12, v19, v18, v20);
        if ( HeapExecutedBlock >= 0 )
        {
          HeapExecutedBlock = WbUpdateHeapExecutedCallArgumentList(v21, v12, &v18, a2, a3, a4);
          if ( HeapExecutedBlock >= 0 )
          {
            v14 = *((_QWORD *)v12 + 3);
            v20 &= ~0x100u;
            v19 = v14;
            HeapExecutedBlock = WbSetTrapFrame((__int64)&v18);
          }
        }
      }
    }
    if ( !v13 )
      goto LABEL_12;
    if ( _InterlockedExchangeAdd64(v13 + 1, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      sub_14045B538(a1, v17);
  }
  v12 = (volatile signed __int64 *)P;
LABEL_12:
  if ( v12 && _InterlockedExchangeAdd64(v12 + 10, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v15 = P;
    if ( *((_QWORD *)P + 5) )
    {
      WbFreeUserMemory(a1);
      v15[5] = 0LL;
      v15[3] = 0LL;
      v15[4] = 0LL;
      *((_DWORD *)v15 + 18) = 0;
    }
    ExFreePoolWithTag(v15, 0x42524157u);
  }
  return (unsigned int)HeapExecutedBlock;
}
