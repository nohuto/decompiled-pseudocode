/*
 * XREFs of CmpUnblockHiveWrites @ 0x1405C007C
 * Callers:
 *     CmpVEExecuteOpenLogic @ 0x140552590 (CmpVEExecuteOpenLogic.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1405BFEE4 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x1406F5AC8 (CmpVEExecuteVirtualStoreParseLogic.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     CmpGetNextHive @ 0x14049CD7C (CmpGetNextHive.c)
 *     CmpDeleteHive @ 0x14054D76C (CmpDeleteHive.c)
 */

void __fastcall CmpUnblockHiveWrites(volatile signed __int64 *P, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebp
  volatile signed __int32 *v6; // rbx
  char *v7; // rsi
  char v8; // al
  __int64 *i; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  volatile signed __int64 *v13; // rsi
  bool v14; // zf

  v5 = a2;
  v6 = (volatile signed __int32 *)P;
  if ( !P )
  {
    for ( i = CmpGetNextHive(0LL); ; i = CmpGetNextHive(v6) )
    {
      v6 = (volatile signed __int32 *)i;
      if ( v5 )
      {
        if ( (v5 & (_DWORD)i[519]) != v5 && i != CmpMasterHive )
          goto LABEL_18;
        v13 = i + 9;
        v14 = (_InterlockedExchangeAdd64(i + 9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2;
      }
      else
      {
        v13 = i + 9;
        v10 = _InterlockedExchangeAdd64(i + 9, 0xFFFFFFFFFFFFFFFFuLL);
        LOBYTE(v10) = v10 & 6;
        v14 = (_BYTE)v10 == 2;
      }
      if ( v14 )
        ExfTryToWakePushLock(v13, v10, v11, v12);
      KeAbPostRelease((ULONG_PTR)v13);
      if ( _InterlockedExchangeAdd(v6 + 1072, 0xFFFFFFFF) == 1 )
        CmpDeleteHive(v6);
LABEL_18:
      if ( v6 == (volatile signed __int32 *)a3 )
        goto LABEL_4;
    }
  }
  v7 = (char *)(P + 9);
  v8 = _InterlockedExchangeAdd64(P + 9, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v8 & 2) != 0 && (v8 & 4) == 0 )
    ExfTryToWakePushLock(P + 9, a2, a3, a4);
  KeAbPostRelease((ULONG_PTR)v7);
LABEL_4:
  if ( !_InterlockedDecrement(v6 + 1072) )
    CmpDeleteHive(v6);
}
