/*
 * XREFs of CcMapAndRead @ 0x14009E170
 * Callers:
 *     CcPrepareMdlWrite @ 0x1400339A0 (CcPrepareMdlWrite.c)
 *     CcPinFileData @ 0x14009C5A0 (CcPinFileData.c)
 *     CcMapData @ 0x140514420 (CcMapData.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     MmCheckCachedPageStates @ 0x14009E320 (MmCheckCachedPageStates.c)
 */

__int64 __fastcall CcMapAndRead(unsigned int a1, int a2, char a3, __int64 a4)
{
  unsigned __int8 v4; // bp
  int v5; // r11d
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v8; // r8d
  __int64 v10; // rbx
  __int16 v11; // cx
  int v12; // r9d
  NTSTATUS v13; // r10d
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rbx
  unsigned int v16; // edi
  int v17; // r15d
  int v18; // eax
  int v20; // eax
  int v21; // [rsp+60h] [rbp+8h]
  int v22; // [rsp+68h] [rbp+10h]
  char v23; // [rsp+70h] [rbp+18h] BYREF

  v22 = a2;
  v4 = 0;
  v5 = 1;
  CurrentThread = KeGetCurrentThread();
  v8 = 0;
  v10 = a1;
  v11 = a4;
  v23 = 1;
  v12 = 2;
  if ( a3 )
    v12 = 0;
  v13 = 0;
  v21 = v12;
  v14 = a4 & 0xFFFFFFFFFFFFF000uLL;
  v15 = ((unsigned __int64)(v11 & 0xFFF) + v10 + 4095) >> 12;
  v16 = BYTE4(CurrentThread[1].Queue) + 4 * LODWORD(CurrentThread[1].WaitListEntry.Flink);
  if ( (_DWORD)v15 )
  {
    while ( 1 )
    {
      BYTE4(CurrentThread[1].Queue) = 1;
      if ( (unsigned int)(v15 - 1) > LODWORD(CurrentThread[1].WaitListEntry.Flink) )
      {
        v20 = v15 - 1;
        if ( (unsigned int)(v15 - 1) > 0xF )
          v20 = 15;
        LODWORD(CurrentThread[1].WaitListEntry.Flink) = v20;
      }
      if ( a2 )
      {
        v17 = 1;
        if ( v5 == 2 )
          v17 = v15 - 1;
      }
      else
      {
        v17 = v15;
      }
      LOBYTE(v8) = (v5 & a2) != 0;
      v18 = MmCheckCachedPageStates(v14, (unsigned int)(v17 << 12), v12 | v8, &v23);
      v13 = v18;
      if ( !v23 && !a3 )
        break;
      if ( v18 < 0 )
        break;
      a2 = v22;
      LODWORD(v15) = v15 - v17;
      v12 = v21;
      v14 += (unsigned int)(v17 << 12);
      v5 = 4;
      if ( (_DWORD)v15 != 1 )
        v5 = 2;
      v8 = 0;
      if ( !(_DWORD)v15 )
        goto LABEL_12;
    }
  }
  else
  {
LABEL_12:
    v4 = 1;
  }
  LODWORD(CurrentThread[1].WaitListEntry.Flink) = v16 >> 2;
  BYTE4(CurrentThread[1].Queue) = v16 & 3;
  if ( a3 && v13 < 0 )
    RtlRaiseStatus(v13);
  return v4;
}
