/*
 * XREFs of PnpRequestDeviceRemovalWorker @ 0x14056DC54
 * Callers:
 *     PnpRequestDeviceRemoval @ 0x14056DB8C (PnpRequestDeviceRemoval.c)
 *     PnpRequestDeviceRemovalWorker @ 0x14056DC54 (PnpRequestDeviceRemovalWorker.c)
 * Callees:
 *     PipIsDevNodeDNStarted @ 0x14004FB44 (PipIsDevNodeDNStarted.c)
 *     PipSetDevNodeState @ 0x1400810C0 (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x140131B50 (PipRestoreDevNodeState.c)
 *     PiGetDependentList @ 0x1404D9EF4 (PiGetDependentList.c)
 *     PnpRequestDeviceRemovalWorker @ 0x14056DC54 (PnpRequestDeviceRemovalWorker.c)
 *     PiEnumerateDependentListEntry @ 0x140692AAC (PiEnumerateDependentListEntry.c)
 */

char __fastcall PnpRequestDeviceRemovalWorker(int a1, __int64 a2, char a3, int a4, char a5)
{
  char v9; // r8
  __int64 *DependentList; // rax
  int v11; // r8d
  _QWORD *i; // rdi
  __int64 *v13; // rdi
  __int64 *v14; // rbx
  __int64 v16[3]; // [rsp+30h] [rbp-18h] BYREF
  char v17; // [rsp+68h] [rbp+20h] BYREF

  if ( a4 != 2 && !a5 )
  {
    LOBYTE(DependentList) = PipIsDevNodeDNStarted(a2);
    goto LABEL_5;
  }
  v9 = 1;
  if ( *(_DWORD *)(a2 + 300) == 782 )
    goto LABEL_10;
  if ( *(_DWORD *)(a2 + 300) == 783 )
  {
    if ( a3 )
    {
      PipRestoreDevNodeState(a2);
      PipSetDevNodeState(a2, 782);
    }
LABEL_10:
    v9 = 0;
  }
  LOBYTE(DependentList) = v9;
LABEL_5:
  if ( (_BYTE)DependentList )
  {
    PipSetDevNodeState(a2, 783 - (a3 != 0));
    for ( i = *(_QWORD **)(a2 + 8); i; i = (_QWORD *)*i )
    {
      LOBYTE(v11) = 1;
      PnpRequestDeviceRemovalWorker(a1, (_DWORD)i, v11, a4, 1);
    }
    DependentList = PiGetDependentList(*(_QWORD *)(a2 + 32));
    v13 = DependentList;
    v14 = (__int64 *)*DependentList;
    while ( v14 != v13 )
    {
      PiEnumerateDependentListEntry(v14, v16, &v17);
      LOBYTE(DependentList) = v16[0];
      v14 = (__int64 *)*v14;
      if ( v16[0] )
        LOBYTE(DependentList) = PnpRequestDeviceRemovalWorker(
                                  a1,
                                  *(_QWORD *)(*(_QWORD *)(v16[0] + 312) + 40LL),
                                  0,
                                  1,
                                  0);
    }
  }
  return (char)DependentList;
}
