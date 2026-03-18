/*
 * XREFs of WbHeapExecuteCall @ 0x1405024B0
 * Callers:
 *     WbDispatchOperation @ 0x140501A60 (WbDispatchOperation.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PsWow64GetProcessMachine @ 0x14049DA60 (PsWow64GetProcessMachine.c)
 *     WbGetWarbirdThread @ 0x140501880 (WbGetWarbirdThread.c)
 *     sub_140502100 @ 0x140502100 (sub_140502100.c)
 *     WbGetHeapExecutedBlock @ 0x1405021D0 (WbGetHeapExecutedBlock.c)
 *     sub_140502354 @ 0x140502354 (sub_140502354.c)
 *     WbSetTrapFrame @ 0x1405023C0 (WbSetTrapFrame.c)
 *     WbDisableTracing @ 0x14050264C (WbDisableTracing.c)
 *     WbUpdateHeapExecutedCallArgumentList @ 0x1405026B0 (WbUpdateHeapExecutedCallArgumentList.c)
 *     sub_1405027AC @ 0x1405027AC (sub_1405027AC.c)
 *     WbGetTrapFrame @ 0x140502860 (WbGetTrapFrame.c)
 *     WbValidateHeapExecuteCallArguments @ 0x1405028F0 (WbValidateHeapExecuteCallArguments.c)
 */

__int64 __fastcall WbHeapExecuteCall(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v7; // rdi
  int HeapExecutedBlock; // ebx
  __int64 v10; // rdx
  int WarbirdThread; // eax
  __int64 *v12; // r14
  unsigned __int64 v13; // rax
  __int16 v15; // ax
  __int64 v16; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v17; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-B8h]
  int v20; // [rsp+50h] [rbp-B0h]
  _BYTE v21[320]; // [rsp+60h] [rbp-A0h] BYREF

  v17 = 0LL;
  v7 = 0LL;
  v16 = 0LL;
  HeapExecutedBlock = WbValidateHeapExecuteCallArguments(a2, a4, v21);
  if ( HeapExecutedBlock >= 0 )
  {
    HeapExecutedBlock = WbGetHeapExecutedBlock(a1, (__int64)v21, &v17);
    if ( HeapExecutedBlock >= 0 )
    {
      WarbirdThread = WbGetWarbirdThread(a1, v10, &v16);
      v7 = v16;
      HeapExecutedBlock = WarbirdThread;
      if ( WarbirdThread >= 0 )
      {
        HeapExecutedBlock = WbGetTrapFrame(v16, &v18);
        if ( HeapExecutedBlock >= 0 )
        {
          v12 = v17;
          HeapExecutedBlock = sub_1405027AC(v7, (_DWORD)v17, v19, v18, v20);
          if ( HeapExecutedBlock >= 0 )
          {
            HeapExecutedBlock = WbUpdateHeapExecutedCallArgumentList(v21, v12, &v18, a2, a3, a4);
            if ( HeapExecutedBlock >= 0 )
            {
              HeapExecutedBlock = WbDisableTracing(&v18);
              if ( HeapExecutedBlock >= 0 )
              {
                v19 = v12[3];
                HeapExecutedBlock = WbSetTrapFrame(v7, (__int64)&v18);
                if ( HeapExecutedBlock >= 0 )
                {
                  v13 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
                  if ( v13 )
                  {
                    v15 = *(_WORD *)(v13 + 8);
                    if ( (v15 == 332 || v15 == 452)
                      && (unsigned __int16)PsWow64GetProcessMachine((__int64)KeGetCurrentThread()->ApcState.Process) == 332 )
                    {
                      HeapExecutedBlock = v19;
                    }
                  }
                  v7 = v16;
                }
              }
            }
          }
        }
      }
    }
  }
  sub_140502100(a1, v7);
  sub_140502354(a1, (__int64)v17);
  return (unsigned int)HeapExecutedBlock;
}
