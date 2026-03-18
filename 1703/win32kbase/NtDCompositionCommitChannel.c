/*
 * XREFs of NtDCompositionCommitChannel @ 0x1C0020760
 * Callers:
 *     <none>
 * Callees:
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z @ 0x1C001D424 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z.c)
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C001E6E4 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     ?ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C014046C (-ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 */

__int64 __fastcall NtDCompositionCommitChannel(unsigned int a1, CTouchProcessor *a2, bool *a3, int a4, void *a5)
{
  int v9; // ebx
  int v10; // r12d
  CTouchProcessor *v11; // rcx
  _BYTE *v12; // rdx
  struct DirectComposition::CApplicationChannel *v13; // rdi
  struct DirectComposition::SynchronizationObject *v14; // r14
  bool v16; // [rsp+20h] [rbp-58h] BYREF
  int v17; // [rsp+24h] [rbp-54h]
  struct DirectComposition::CApplicationChannel *v18; // [rsp+28h] [rbp-50h] BYREF
  struct DirectComposition::SynchronizationObject *v19; // [rsp+30h] [rbp-48h] BYREF

  v9 = 0;
  v18 = 0LL;
  v10 = 0;
  v17 = 0;
  v16 = 0;
  if ( a3 )
  {
    if ( a2 )
    {
      v11 = a2;
      if ( a2 >= W32UserProbeAddress )
        v11 = W32UserProbeAddress;
      *(_DWORD *)v11 = *(_DWORD *)v11;
    }
    v12 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v12 = (_BYTE *)MmUserProbeAddress;
    *v12 = *v12;
  }
  else
  {
    v9 = -1073741811;
  }
  if ( v9 >= 0 )
  {
    v9 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v18);
    v13 = v18;
    if ( v9 >= 0 )
    {
      v14 = 0LL;
      v19 = 0LL;
      if ( a5 )
      {
        v9 = DirectComposition::SynchronizationObject::ResolveHandle(a5, 1u, 1, &v19);
        v14 = v19;
      }
      if ( v9 >= 0 )
      {
        v9 = DirectComposition::CApplicationChannel::Commit(v13, &v16, a4 != 0, v14);
        if ( v9 >= 0 )
          v10 = *((_DWORD *)v13 + 98);
      }
      if ( v14 )
        ObfDereferenceObject(v14);
      (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v13)(v13);
      if ( v9 >= 0 )
      {
        if ( a2 )
          *(_DWORD *)a2 = v10;
        *a3 = v16;
      }
    }
  }
  return (unsigned int)v9;
}
