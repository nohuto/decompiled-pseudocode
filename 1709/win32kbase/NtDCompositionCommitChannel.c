/*
 * XREFs of NtDCompositionCommitChannel @ 0x1C0023710
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0023924 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z @ 0x1C0032AE4 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     ?ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C013F88C (-ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 */

__int64 __fastcall NtDCompositionCommitChannel(unsigned int a1, _DWORD *a2, bool *a3, int a4, void *a5)
{
  _DWORD *v7; // r14
  int v8; // ebx
  int v9; // r12d
  _BYTE *v10; // rdx
  struct DirectComposition::CApplicationChannel *v11; // rdi
  struct DirectComposition::SynchronizationObject *v12; // rsi
  bool v14; // [rsp+20h] [rbp-58h] BYREF
  int v15; // [rsp+24h] [rbp-54h]
  struct DirectComposition::CApplicationChannel *v16; // [rsp+28h] [rbp-50h] BYREF
  struct DirectComposition::SynchronizationObject *v17; // [rsp+30h] [rbp-48h] BYREF

  v7 = a2;
  v8 = 0;
  v16 = 0LL;
  v9 = 0;
  v15 = 0;
  v14 = 0;
  if ( a3 )
  {
    if ( a2 )
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_DWORD *)MmUserProbeAddress;
      *a2 = *a2;
    }
    v10 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v10 = (_BYTE *)MmUserProbeAddress;
    *v10 = *v10;
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v8 >= 0 )
  {
    v8 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v16);
    v11 = v16;
    if ( v8 >= 0 )
    {
      v12 = 0LL;
      v17 = 0LL;
      if ( a5 )
      {
        v8 = DirectComposition::SynchronizationObject::ResolveHandle(a5, 1u, 1, &v17);
        v12 = v17;
      }
      if ( v8 >= 0 )
      {
        v8 = DirectComposition::CApplicationChannel::Commit(v11, &v14, a4 != 0, v12);
        if ( v8 >= 0 )
          v9 = *((_DWORD *)v11 + 94);
      }
      if ( v12 )
        ObfDereferenceObject(v12);
      (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v11)(v11);
      if ( v8 >= 0 )
      {
        if ( v7 )
          *v7 = v9;
        *a3 = v14;
      }
    }
  }
  return (unsigned int)v8;
}
