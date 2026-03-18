/*
 * XREFs of PcVerifyPartitionTable @ 0x1401536E4
 * Callers:
 *     IopCreateArcName @ 0x14059C120 (IopCreateArcName.c)
 *     IoVerifyPartitionTable @ 0x1406872B0 (IoVerifyPartitionTable.c)
 * Callees:
 *     ?Initialize@PC_DISK@@QEAAJPEAX@Z @ 0x1401620E8 (-Initialize@PC_DISK@@QEAAJPEAX@Z.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ?VerifyPartitionTable@PC_GPT@@QEAAJE@Z @ 0x140269220 (-VerifyPartitionTable@PC_GPT@@QEAAJE@Z.c)
 *     PspQueueApcSpecialApc @ 0x14044FB60 (PspQueueApcSpecialApc.c)
 */

__int64 __fastcall PcVerifyPartitionTable(void *a1, unsigned __int8 a2)
{
  int v4; // ebx
  _BYTE *v6; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v7[32]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v8; // [rsp+48h] [rbp-30h]
  int v9; // [rsp+50h] [rbp-28h]
  int v10; // [rsp+54h] [rbp-24h]
  __int64 v11; // [rsp+58h] [rbp-20h]

  memset(v7, 0, sizeof(v7));
  v8 = 0LL;
  v9 = 0;
  v11 = 0LL;
  v10 = 2;
  v4 = PC_DISK::Initialize((PC_DISK *)v7, a1);
  if ( v4 >= 0 )
  {
    if ( v10 )
    {
      if ( v10 == 1 )
      {
        v6 = v7;
        v4 = PC_GPT::VerifyPartitionTable((PC_GPT *)&v6, a2);
      }
      else
      {
        v4 = -1073741637;
      }
    }
    else
    {
      v4 = 0;
    }
  }
  if ( v11 )
    PspQueueApcSpecialApc(v11);
  return (unsigned int)v4;
}
