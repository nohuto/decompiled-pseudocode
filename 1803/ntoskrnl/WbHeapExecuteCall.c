/*
 * XREFs of WbHeapExecuteCall @ 0x14050EC60
 * Callers:
 *     WbDispatchOperation @ 0x14050F10C (WbDispatchOperation.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     WbGetWarbirdThread @ 0x14050EF0C (WbGetWarbirdThread.c)
 *     sub_14050F0D8 @ 0x14050F0D8 (sub_14050F0D8.c)
 *     WbGetHeapExecutedBlock @ 0x14050F76C (WbGetHeapExecutedBlock.c)
 *     sub_14050F8B4 @ 0x14050F8B4 (sub_14050F8B4.c)
 *     WbSetTrapFrame @ 0x14050F91C (WbSetTrapFrame.c)
 *     WbUpdateHeapExecutedCallArgumentList @ 0x14050FAE0 (WbUpdateHeapExecutedCallArgumentList.c)
 *     sub_14050FBAC @ 0x14050FBAC (sub_14050FBAC.c)
 *     WbGetTrapFrame @ 0x14050FC60 (WbGetTrapFrame.c)
 *     WbValidateHeapExecuteCallArguments @ 0x14050FCE8 (WbValidateHeapExecuteCallArguments.c)
 */

__int64 __fastcall WbHeapExecuteCall(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int HeapExecutedBlock; // ebx
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int16 v13; // ax
  unsigned __int64 v14; // rax
  __int16 v15; // ax
  __int16 v16; // ax
  unsigned __int64 v17; // rax
  __int64 v18; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+48h] [rbp-B8h]
  int v22; // [rsp+50h] [rbp-B0h]
  _BYTE v23[320]; // [rsp+60h] [rbp-A0h] BYREF

  v19 = 0LL;
  v18 = 0LL;
  HeapExecutedBlock = WbValidateHeapExecuteCallArguments(a2, a4, v23);
  if ( HeapExecutedBlock >= 0 )
  {
    HeapExecutedBlock = WbGetHeapExecutedBlock(a1, v23, &v19);
    if ( HeapExecutedBlock >= 0 )
    {
      HeapExecutedBlock = WbGetWarbirdThread(a1, v9, &v18);
      if ( HeapExecutedBlock >= 0 )
      {
        HeapExecutedBlock = WbGetTrapFrame(v18, &v20);
        if ( HeapExecutedBlock >= 0 )
        {
          HeapExecutedBlock = sub_14050FBAC(v18, v19, v21, v20, v22);
          if ( HeapExecutedBlock >= 0 )
          {
            HeapExecutedBlock = WbUpdateHeapExecutedCallArgumentList(v23, v19, &v20, a2, a3, a4);
            if ( HeapExecutedBlock >= 0 )
            {
              v10 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
              if ( !v10 )
                goto LABEL_8;
              v13 = *(_WORD *)(v10 + 8);
              if ( v13 != 332 && v13 != 452 )
                goto LABEL_8;
              v14 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
              if ( !v14 )
                goto LABEL_18;
              v15 = *(_WORD *)(v14 + 8);
              if ( !v15 )
                goto LABEL_18;
              if ( v15 != 332 )
              {
                if ( v15 != 452 )
                {
LABEL_18:
                  HeapExecutedBlock = -1073741637;
                  goto LABEL_11;
                }
              }
              else
              {
LABEL_8:
                v22 &= ~0x100u;
              }
              v21 = *(_QWORD *)(v19 + 24);
              HeapExecutedBlock = WbSetTrapFrame(v18, &v20);
              if ( HeapExecutedBlock >= 0 )
              {
                v11 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
                if ( v11 )
                {
                  v16 = *(_WORD *)(v11 + 8);
                  if ( v16 == 332 || v16 == 452 )
                  {
                    v17 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
                    if ( v17 && *(_WORD *)(v17 + 8) == 332 )
                      HeapExecutedBlock = v21;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_11:
  sub_14050F0D8(a1, v18);
  sub_14050F8B4(a1, v19);
  return (unsigned int)HeapExecutedBlock;
}
