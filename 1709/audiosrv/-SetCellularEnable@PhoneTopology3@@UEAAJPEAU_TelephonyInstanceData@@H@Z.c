/*
 * XREFs of ?SetCellularEnable@PhoneTopology3@@UEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x1800EC7F0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002B220 (--2@YAPEAX_K@Z.c)
 *     memset @ 0x180033A5A (memset.c)
 *     ?AddWorkItemToQueue@PhoneTopology3@@AEAAJPEAVPhoneTopology3WorkItem@@@Z @ 0x1800EACEC (-AddWorkItemToQueue@PhoneTopology3@@AEAAJPEAVPhoneTopology3WorkItem@@@Z.c)
 */

__int64 __fastcall PhoneTopology3::SetCellularEnable(PhoneTopology3 *this, struct _TelephonyInstanceData *a2, int a3)
{
  unsigned int v3; // ebx
  char *v7; // rax
  struct PhoneTopology3WorkItem *v8; // rdi
  int v9; // eax
  char *v10; // rax
  struct PhoneTopology3WorkItem *v11; // rdi
  char *v12; // rax
  struct PhoneTopology3WorkItem *v13; // rdi
  int v14; // eax

  v3 = 0;
  if ( !a2 )
    return (unsigned int)-2147467261;
  if ( *(int *)a2 >= 3 )
    return (unsigned int)-2147024809;
  v7 = (char *)operator new(0x438uLL);
  v8 = (struct PhoneTopology3WorkItem *)v7;
  if ( v7 )
  {
    *(_QWORD *)v7 = &PhoneTopology3WorkItem::`vftable';
    *((_QWORD *)v7 + 1) = *(_QWORD *)a2;
    *((_DWORD *)v7 + 4) = a3;
    *((_DWORD *)v7 + 5) = 0;
    *((_DWORD *)v7 + 268) = 0;
    memset(v7 + 24, 0, 0x418uLL);
    *(_QWORD *)v8 = &CallEnableWorkItem::`vftable';
  }
  else
  {
    v8 = 0LL;
  }
  if ( !v8 )
    return (unsigned int)-2147024882;
  v9 = PhoneTopology3::AddWorkItemToQueue(this, v8);
  if ( v9 < 0 )
    return (unsigned int)v9;
  if ( !a3 )
    return v3;
  v10 = (char *)operator new(0x438uLL);
  v11 = (struct PhoneTopology3WorkItem *)v10;
  if ( v10 )
  {
    *(_QWORD *)v10 = &PhoneTopology3WorkItem::`vftable';
    *((_QWORD *)v10 + 1) = *(_QWORD *)a2;
    *((_QWORD *)v10 + 2) = 0LL;
    *((_DWORD *)v10 + 268) = 3;
    memset(v10 + 24, 0, 0x418uLL);
    *(_QWORD *)v11 = &CallTxMuteWorkItem::`vftable';
  }
  else
  {
    v11 = 0LL;
  }
  if ( !v11 )
    return (unsigned int)-2147024882;
  v9 = PhoneTopology3::AddWorkItemToQueue(this, v11);
  if ( v9 < 0 )
    return (unsigned int)v9;
  v12 = (char *)operator new(0x438uLL);
  v13 = (struct PhoneTopology3WorkItem *)v12;
  if ( v12 )
  {
    *(_QWORD *)v12 = &PhoneTopology3WorkItem::`vftable';
    *((_QWORD *)v12 + 1) = *(_QWORD *)a2;
    *((_QWORD *)v12 + 2) = 0LL;
    *((_DWORD *)v12 + 268) = 2;
    memset(v12 + 24, 0, 0x418uLL);
    *(_QWORD *)v13 = &CallHoldWorkItem::`vftable';
  }
  else
  {
    v13 = 0LL;
  }
  if ( !v13 )
    return (unsigned int)-2147024882;
  v14 = PhoneTopology3::AddWorkItemToQueue(this, v13);
  if ( v14 < 0 )
    return (unsigned int)v14;
  return v3;
}
