/*
 * XREFs of NtDCompositionReferenceSharedResourceOnDwmChannel @ 0x1C008C240
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C001F380 (UserIsCurrentProcessDwm.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C00219B8 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C002EDC4 (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?AddSystemResourceRef@CBatch@DirectComposition@@QEAAJVResourceHandle@@@Z @ 0x1C0034AD8 (-AddSystemResourceRef@CBatch@DirectComposition@@QEAAJVResourceHandle@@@Z.c)
 *     ?ReferenceHandleAndLock@CDwmChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C008C38C (-ReferenceHandleAndLock@CDwmChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionReferenceSharedResourceOnDwmChannel(
        unsigned int a1,
        void *a2,
        int a3,
        _DWORD *a4,
        int *a5)
{
  int v9; // ebx
  int v10; // edi
  __int64 v11; // r8
  PVOID v12; // rsi
  struct DirectComposition::CDwmChannel *v13; // r14
  int v15; // [rsp+24h] [rbp-24h]
  struct DirectComposition::CDwmChannel *v16; // [rsp+28h] [rbp-20h] BYREF
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF

  v9 = 0;
  if ( UserIsCurrentProcessDwm() )
  {
    v16 = 0LL;
    v10 = DirectComposition::CDwmChannel::ReferenceHandleAndLock(a1, &v16);
    if ( v10 >= 0 )
    {
      LOBYTE(v11) = 1;
      v10 = DirectComposition::ResourceObject::ResolveHandle(
              a2,
              1LL,
              v11,
              (struct DirectComposition::ResourceObject **)&Object);
      if ( v10 >= 0 )
      {
        v12 = Object;
        if ( *((_DWORD *)Object + 9) == a3 )
        {
          v15 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)Object + 5) + 152LL) + 28LL);
          v9 = *((_DWORD *)Object + 12);
          v13 = v16;
          DirectComposition::CApplicationChannel::PreallocateNextBatch(v16);
          v10 = DirectComposition::CBatch::AddSystemResourceRef(*((_QWORD *)v13 + 21), v9);
        }
        else
        {
          v10 = -1073741790;
        }
        ObfDereferenceObject(v12);
      }
      _guard_dispatch_icall_fptr();
    }
  }
  else
  {
    v10 = -1073741790;
  }
  if ( v10 >= 0 )
  {
    if ( a4 + 1 < a4 || (unsigned __int64)(a4 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a4 = v15;
    if ( a5 + 1 < a5 || (unsigned __int64)(a5 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a5 = v9;
  }
  return (unsigned int)v10;
}
