/*
 * XREFs of WbHeapExecuteReturn @ 0x14053BFD0
 * Callers:
 *     WbDispatchOperation @ 0x14053BA60 (WbDispatchOperation.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     sub_14045B538 @ 0x14045B538 (sub_14045B538.c)
 *     WbSetTrapFrame @ 0x14053C120 (WbSetTrapFrame.c)
 *     WbGetWarbirdThread @ 0x14053C220 (WbGetWarbirdThread.c)
 *     WbFreeUserMemory @ 0x14054902C (WbFreeUserMemory.c)
 */

__int64 __fastcall WbHeapExecuteReturn(__int64 a1, __int64 a2)
{
  int WarbirdThread; // eax
  _QWORD *v4; // rdi
  int v5; // ebp
  int v6; // eax
  _DWORD *v7; // rsi
  __int64 *v8; // r14
  __int64 v9; // r15
  _QWORD v11[2]; // [rsp+20h] [rbp-58h] BYREF
  int v12; // [rsp+30h] [rbp-48h]
  _QWORD *v13; // [rsp+88h] [rbp+10h] BYREF
  __int64 v14; // [rsp+90h] [rbp+18h]

  v13 = 0LL;
  WarbirdThread = WbGetWarbirdThread(a1, a2, &v13);
  v4 = v13;
  v5 = WarbirdThread;
  if ( WarbirdThread >= 0 )
  {
    v6 = *((_DWORD *)v13 + 4);
    v7 = v13 + 2;
    if ( v6 )
    {
      v14 = v13[3] + 32LL * (unsigned int)(v6 - 1);
      v11[1] = *(_QWORD *)(v14 + 8);
      v11[0] = *(_QWORD *)(v14 + 16);
      v12 = *(_DWORD *)(v14 + 24);
      v5 = WbSetTrapFrame(v11);
      if ( v5 >= 0 )
      {
        v5 = 0;
        if ( *v7 )
        {
          v8 = (__int64 *)(v4[3] + 32LL * (unsigned int)(*v7 - 1));
          v9 = *v8;
          if ( *v8 )
          {
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 80), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            {
              if ( *(_QWORD *)(v9 + 40) )
              {
                WbFreeUserMemory(a1);
                *(_QWORD *)(v9 + 40) = 0LL;
                *(_QWORD *)(v9 + 24) = 0LL;
                *(_QWORD *)(v9 + 32) = 0LL;
                *(_DWORD *)(v9 + 72) = 0;
              }
              ExFreePoolWithTag((PVOID)v9, 0x42524157u);
            }
            v4 = v13;
          }
          memset(v8, 0, 0x20uLL);
          --*v7;
        }
        else
        {
          v5 = -1073741811;
        }
      }
    }
    else
    {
      v5 = -1073741811;
    }
  }
  if ( v4 && _InterlockedExchangeAdd64(v4 + 1, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    sub_14045B538(a1, v13);
  return (unsigned int)v5;
}
