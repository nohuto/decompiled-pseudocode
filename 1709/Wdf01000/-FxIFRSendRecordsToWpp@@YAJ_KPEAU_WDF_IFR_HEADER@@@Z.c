/*
 * XREFs of ?FxIFRSendRecordsToWpp@@YAJ_KPEAU_WDF_IFR_HEADER@@@Z @ 0x1C0070A4C
 * Callers:
 *     ?FxIFRReplay@@YAX_K@Z @ 0x1C0070784 (-FxIFRReplay@@YAX_K@Z.c)
 * Callees:
 *     memset @ 0x1C003D9C0 (memset.c)
 *     FxWmiTraceMessage @ 0x1C006EA34 (FxWmiTraceMessage.c)
 *     ?FxIFRValidateRecord@@YAJPEAU_WDF_IFR_RECORD@@_K1@Z @ 0x1C0070D30 (-FxIFRValidateRecord@@YAJPEAU_WDF_IFR_RECORD@@_K1@Z.c)
 */

__int64 __fastcall FxIFRSendRecordsToWpp(unsigned __int64 LoggerHandle, _WDF_IFR_HEADER *HeaderCopy)
{
  unsigned __int8 *Base; // rsi
  unsigned __int8 *v3; // rax
  unsigned __int64 v4; // r14
  signed int v5; // ebx
  __int64 Previous; // r15
  __int64 v7; // rbp
  unsigned int v8; // r10d
  int v9; // r11d
  SIZE_T v10; // r12
  __int64 v11; // rdi
  char v12; // r13
  _WORD *PoolWithTag; // rax
  unsigned int v14; // r10d
  unsigned __int8 *v15; // rdx
  unsigned __int16 v16; // ax
  unsigned int v18; // [rsp+40h] [rbp-58h]
  char v20; // [rsp+A8h] [rbp+10h]
  unsigned __int16 Current; // [rsp+B0h] [rbp+18h]
  _WORD *P; // [rsp+B8h] [rbp+20h]

  v20 = 0;
  Base = HeaderCopy->Base;
  v3 = &Base[HeaderCopy->Size - 1];
  v4 = -1LL;
  v18 = HeaderCopy->Size / 0x48;
  if ( v3 >= Base )
    v4 = (unsigned __int64)&Base[HeaderCopy->Size - 1];
  v5 = v3 < Base ? 0xC0000095 : 0;
  if ( v3 >= Base )
  {
    if ( v4 < 0x1C )
    {
      return (unsigned int)-1073741675;
    }
    else
    {
      Previous = HeaderCopy->Offset.u.s.Previous;
      v7 = -1LL;
      Current = HeaderCopy->Offset.u.s.Current;
      if ( &Base[Previous] >= Base )
        v7 = (__int64)&Base[Previous];
      v5 = &Base[Previous] < Base ? 0xC0000095 : 0;
      if ( &Base[Previous] >= Base )
      {
        v5 = FxIFRValidateRecord((_WDF_IFR_RECORD *)v7, v4 - 28, v4);
        if ( v5 >= 0 && *(_WORD *)v7 != (_WORD)v9 )
        {
          v10 = 2LL * v8;
          LODWORD(v11) = v9;
          v12 = v9;
          PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(v9 + 1), v10, 0x674C7846u);
          P = PoolWithTag;
          if ( PoolWithTag )
          {
            memset(PoolWithTag, 0, v10);
            if ( v18 )
            {
              do
              {
                v5 = FxIFRValidateRecord((_WDF_IFR_RECORD *)v7, v4 - 28, v4);
                if ( v5 < 0 || *(_WORD *)v7 != 21068 )
                  break;
                P[(unsigned int)v11] = Previous;
                Previous = *(unsigned __int16 *)(v7 + 8);
                LODWORD(v11) = v11 + 1;
                if ( (unsigned __int8 *)v7 == Base )
                  v12 = 1;
                v7 = -1LL;
                if ( &Base[Previous] >= Base )
                  v7 = (__int64)&Base[Previous];
                v5 = &Base[Previous] < Base ? 0xC0000095 : 0;
                if ( &Base[Previous] < Base || v12 && !(_WORD)Previous )
                  break;
                if ( v20 && (unsigned __int16)Previous <= Current )
                  break;
                if ( v12 && (_WORD)Previous )
                {
                  v20 = 1;
                  v12 = 0;
                }
              }
              while ( (unsigned int)v11 < v14 );
              while ( (_DWORD)v11 )
              {
                v11 = (unsigned int)(v11 - 1);
                v15 = &Base[(unsigned __int16)P[v11]];
                v16 = *((_WORD *)v15 + 1);
                if ( v16 <= 0x1Cu )
                {
                  if ( v16 != 28 )
                    break;
                  FxWmiTraceMessage(LoggerHandle, 43LL, (_GUID *)(v15 + 12), *((_WORD *)v15 + 5), 0LL);
                }
                else
                {
                  FxWmiTraceMessage(
                    LoggerHandle,
                    43LL,
                    (_GUID *)(v15 + 12),
                    *((_WORD *)v15 + 5),
                    v15 + 28,
                    v16 - 28LL,
                    0LL);
                }
              }
            }
            ExFreePoolWithTag(P, 0x674C7846u);
          }
          else
          {
            return (unsigned int)-1073741670;
          }
        }
      }
    }
  }
  return (unsigned int)v5;
}
