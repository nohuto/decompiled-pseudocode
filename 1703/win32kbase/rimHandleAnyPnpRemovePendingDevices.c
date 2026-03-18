/*
 * XREFs of rimHandleAnyPnpRemovePendingDevices @ 0x1C0093F10
 * Callers:
 *     RIMReadInput @ 0x1C0093320 (RIMReadInput.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     rimDoRimDevChange @ 0x1C0051F54 (rimDoRimDevChange.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0053FC0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     WPP_RECORDER_SF_q @ 0x1C005564C (WPP_RECORDER_SF_q.c)
 *     RIMFreeDev @ 0x1C010DB18 (RIMFreeDev.c)
 */

void __fastcall rimHandleAnyPnpRemovePendingDevices(__int64 a1)
{
  int v1; // ebp
  CInpPushLock *v2; // rsi
  int v4; // r14d
  __int64 i; // rbx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ebp
  int v10; // [rsp+50h] [rbp+8h]

  v1 = v10;
  v2 = (CInpPushLock *)(a1 + 696);
  while ( 1 )
  {
    v4 = 0;
    RIMLockExclusive((__int64)v2);
    for ( i = *(_QWORD *)(a1 + 552); i; i = *(_QWORD *)(i + 40) )
    {
      v6 = *(_DWORD *)(i + 184);
      if ( (v6 & 0x10000000) != 0 )
      {
        *(_DWORD *)(i + 184) = v6 & 0xEFFFFFFF;
        WPP_RECORDER_SF_q(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x14u,
          0x1Eu,
          (__int64)&WPP_b10d7901ec9437b632f459d6891cab5f_Traceguids,
          i);
      }
      v7 = *(_DWORD *)(i + 200);
      if ( (v7 & 1) != 0 || (v7 & 2) != 0 )
      {
        v8 = *(_DWORD *)(i + 184);
        if ( (v8 & 0x20000000) == 0 && (v8 & 0x40000000) == 0 && !*(_QWORD *)(i + 192) )
        {
          v9 = *(_DWORD *)(i + 200);
          v4 = 1;
          *(_DWORD *)(i + 200) = v9 & 0xFFFFFFFC;
          WPP_RECORDER_SF_q(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            0x14u,
            0x1Fu,
            (__int64)&WPP_b10d7901ec9437b632f459d6891cab5f_Traceguids,
            i);
          v1 = (unsigned __int8)(v9 & 2) >> 1;
          break;
        }
      }
    }
    CInpPushLock::UnLockExclusive(v2);
    if ( !v4 )
      break;
    if ( v1 )
    {
      RIMLockExclusive((__int64)v2);
      *(_BYTE *)(a1 + 74) = 1;
    }
    rimDoRimDevChange(a1, i, 3);
    RIMFreeDev(a1, i);
    if ( v1 )
    {
      *(_BYTE *)(a1 + 74) = 0;
      CInpPushLock::UnLockExclusive(v2);
    }
  }
}
