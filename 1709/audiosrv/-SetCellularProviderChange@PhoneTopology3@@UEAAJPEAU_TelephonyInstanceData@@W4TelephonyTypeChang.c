/*
 * XREFs of ?SetCellularProviderChange@PhoneTopology3@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyTypeChangeOp@@@Z @ 0x1800EC9A0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002B220 (--2@YAPEAX_K@Z.c)
 *     memset @ 0x180033A5A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AddWorkItemToQueue@PhoneTopology3@@AEAAJPEAVPhoneTopology3WorkItem@@@Z @ 0x1800EACEC (-AddWorkItemToQueue@PhoneTopology3@@AEAAJPEAVPhoneTopology3WorkItem@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneTopology3::SetCellularProviderChange(PhoneTopology3 *a1, _QWORD *a2, int a3)
{
  int v6; // ecx
  char *v7; // rax
  struct PhoneTopology3WorkItem *v8; // rbx
  int v9; // eax
  int v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h]

  v12 = 0LL;
  v6 = (*(__int64 (__fastcall **)(PhoneTopology3 *, _QWORD *, int *))(*(_QWORD *)a1 + 80LL))(a1, a2, &v11);
  if ( v6 >= 0 )
  {
    if ( v11 )
    {
      v7 = (char *)operator new(0x438uLL);
      v8 = (struct PhoneTopology3WorkItem *)v7;
      if ( v7 )
      {
        *(_QWORD *)v7 = &PhoneTopology3WorkItem::`vftable';
        *((_QWORD *)v7 + 1) = *a2;
        *((_DWORD *)v7 + 4) = 1;
        *((_DWORD *)v7 + 5) = a3;
        *((_DWORD *)v7 + 268) = 1;
        memset(v7 + 24, 0, 0x418uLL);
        *(_QWORD *)v8 = &CallProviderChangeWorkItem::`vftable';
      }
      else
      {
        v8 = 0LL;
      }
      if ( v8 )
      {
        v9 = PhoneTopology3::AddWorkItemToQueue(a1, v8);
        v6 = 0;
        if ( v9 < 0 )
          return (unsigned int)v9;
      }
      else
      {
        return (unsigned int)-2147024882;
      }
    }
    else
    {
      return (unsigned int)-2147024809;
    }
  }
  return (unsigned int)v6;
}
