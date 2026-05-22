/*
 * XREFs of ??0DWMCursor@@IEAA@PEAVDWMCursorBroker@@V?$ComPtr@UIDCompositionDevice@@@WRL@Microsoft@@W4InputType@@UCursorId@@@Z @ 0x18008ABE4
 * Callers:
 *     ?CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@KPEAPEAUICursor@@@Z @ 0x18008A2A0 (-CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@KPEAPEAUICursor@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMCursor::DWMCursor(__int64 a1, __int64 a2, _QWORD *a3, int a4, __int128 *a5)
{
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int128 v12; // xmm0
  __int64 v13; // rcx

  *(_QWORD *)(a1 + 16) = &RefCountedObject::`vftable';
  *(_DWORD *)(a1 + 24) = 1;
  *(_QWORD *)a1 = &DWMCursor::`vftable'{for `ICursor3D'};
  *(_QWORD *)(a1 + 8) = &DWMCursor::`vftable'{for `IGetClosestInteractiveBounds'};
  *(_QWORD *)(a1 + 16) = &DWMCursor::`vftable'{for `RefCountedObject'};
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_BYTE *)(a1 + 152) = 0;
  v9 = *(_QWORD *)(a1 + 32);
  if ( v9 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v9 = *(_QWORD *)(a1 + 32);
    }
    *(_QWORD *)(a1 + 32) = a2;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = *(_QWORD *)(a1 + 64);
  v11 = *a3;
  if ( v10 != *a3 )
  {
    if ( v11 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 8LL))(*a3);
      v10 = *(_QWORD *)(a1 + 64);
    }
    *(_QWORD *)(a1 + 64) = v11;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v12 = *a5;
  *(_WORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 40) = v12;
  *(_OWORD *)(a1 + 96) = 0LL;
  *(_DWORD *)(a1 + 60) = a4;
  *(_OWORD *)(a1 + 112) = 0uLL;
  v13 = *a3;
  if ( *a3 )
  {
    *a3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return a1;
}
