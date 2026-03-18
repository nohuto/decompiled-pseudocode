/*
 * XREFs of xxxSendMenuSelect @ 0x1C021B16C
 * Callers:
 *     xxxMNCancel @ 0x1C0206110 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C0206910 (xxxMNCloseHierarchy.c)
 *     xxxMNDoubleClick @ 0x1C0206E14 (xxxMNDoubleClick.c)
 *     xxxMNSelectItem @ 0x1C0209144 (xxxMNSelectItem.c)
 *     xxxMNInvertItem @ 0x1C0216F74 (xxxMNInvertItem.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     xxxSendNotifyMessage @ 0x1C009E0C0 (xxxSendNotifyMessage.c)
 *     xxxCallMsgFilter @ 0x1C0144054 (xxxCallMsgFilter.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

void __fastcall xxxSendMenuSelect(struct tagWND *a1, volatile signed __int32 *a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v6; // rsi
  __int64 v9; // rcx
  int v10; // ebx
  unsigned int v11; // ebx
  int v12; // edx
  unsigned int v13; // ebx
  _QWORD v14[6]; // [rsp+30h] [rbp-38h] BYREF

  v6 = a4;
  memset(v14, 0, sizeof(v14));
  if ( (int)v6 < 0 || *(_DWORD *)(a3 + 68) <= (unsigned int)v6 )
  {
    v11 = 0;
    if ( a3 == -1 )
      v11 = 0xFFFF;
    LOWORD(v12) = 0;
    a3 = 0LL;
    LODWORD(v6) = -1;
  }
  else
  {
    v9 = *(_QWORD *)(a3 + 96) + 152 * v6;
    v10 = *(_DWORD *)v9 & 0x6B64 | *(_DWORD *)(v9 + 4) & 0x8B;
    if ( *(_QWORD *)(v9 + 16) )
      v10 |= 0x10u;
    v11 = v10 & 0xFFFF5FFF;
    LOWORD(v12) = v6;
    if ( (v11 & 0x10) == 0 )
      v12 = *(_DWORD *)(v9 + 8);
    if ( a5 )
    {
      if ( *(_DWORD *)(a5 + 20) == -1 )
        v11 |= 0x8000u;
      if ( (*(_DWORD *)(a5 + 8) & 2) != 0 )
        v11 |= 0x2000u;
    }
  }
  if ( a1 )
    v14[0] = *(_QWORD *)a1;
  else
    v14[0] = 0LL;
  LODWORD(v14[1]) = 287;
  v14[2] = (unsigned __int16)v12 | (unsigned __int64)((unsigned __int16)v11 << 16);
  if ( a3 )
    v14[3] = *(_QWORD *)a3;
  else
    v14[3] = 0LL;
  if ( !(unsigned int)xxxCallMsgFilter((__int64)v14, 2) )
    xxxSendNotifyMessage(a1, 0x11Fu, v14[2], (struct _LARGE_STRING *)v14[3], 1);
  if ( a2 )
  {
    if ( a2 == (volatile signed __int32 *)a1 )
      v13 = (v11 >> 12) | 0xFFFFFFFD;
    else
      v13 = -4;
    xxxWindowEvent(0x8005u, a2, v13, (unsigned int)(v6 + 1), 0);
  }
}
