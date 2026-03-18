/*
 * XREFs of ?UnlockDrawlistEntryRange@CCallbackRendererManager@@QEAAXPEAUID2D1PrivateCompositorRenderer@@II@Z @ 0x180046228
 * Callers:
 *     ??1CHWCallbackRenderer@@EEAA@XZ @ 0x18001D050 (--1CHWCallbackRenderer@@EEAA@XZ.c)
 *     ?ReturnWARPCallbackRenderer@CCallbackRendererManager@@QEAAXPEAVCWARPCallbackRenderer@@@Z @ 0x1801D5718 (-ReturnWARPCallbackRenderer@CCallbackRendererManager@@QEAAXPEAVCWARPCallbackRenderer@@@Z.c)
 *     ??_GCWARPCallbackRenderer@@EEAAPEAXI@Z @ 0x1801D7F94 (--_GCWARPCallbackRenderer@@EEAAPEAXI@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCallbackRendererManager::UnlockDrawlistEntryRange(
        CCallbackRendererManager *this,
        struct ID2D1PrivateCompositorRenderer *a2,
        unsigned int a3,
        unsigned int a4)
{
  unsigned int i; // edi
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v11; // eax
  int v12; // ecx
  int v13; // edx
  unsigned int v14; // eax
  bool v15; // cc
  unsigned int v16; // ecx
  unsigned int v17; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  for ( i = a3; i < a4; ++i )
  {
    v7 = *(_QWORD *)(*(_QWORD *)this + 8LL * i);
    v8 = *(_DWORD *)(v7 + 40);
    if ( !v8 )
      ModuleFailFastForHRESULT(2291662981LL, retaddr);
    *(_DWORD *)(v7 + 40) = v8 - 1;
    v9 = *(_QWORD *)(*(_QWORD *)this + 8LL * i);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  }
  if ( (*((_DWORD *)this + 26))-- == 1 )
  {
    v11 = *((_DWORD *)this + 6);
    v12 = *((_DWORD *)this + 14);
    if ( *((_DWORD *)this + 28) > v11 )
      v11 = *((_DWORD *)this + 28);
    v13 = *((_DWORD *)this + 22);
    *((_DWORD *)this + 28) = v11;
    v14 = v12 - *((_DWORD *)this + 29);
    v15 = *((_DWORD *)this + 30) <= v14;
    *((_DWORD *)this + 29) = v12;
    if ( !v15 )
      v14 = *((_DWORD *)this + 30);
    v16 = v13 - *((_DWORD *)this + 31);
    *((_DWORD *)this + 30) = v14;
    v17 = *((_DWORD *)this + 32);
    *((_DWORD *)this + 31) = v13;
    if ( v17 > v16 )
      v16 = v17;
    *((_DWORD *)this + 6) = 0;
    *((_DWORD *)this + 32) = v16;
  }
}
