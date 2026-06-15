/*
 * XREFs of ?ForEachEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x18000EAFC
 * Callers:
 *     ?NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z @ 0x18000D53C (-NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z.c)
 *     ?NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x18000D794 (-NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z @ 0x18000D94C (-NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z.c)
 *     ?NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x18000DAA0 (-NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 * Callees:
 *     ?Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z @ 0x18000D0E0 (-Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z.c)
 *     ?Add@?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@QEAA_KAEBVCDuckingNotification@@@Z @ 0x18000F188 (-Add@-$CAtlArray@VCDuckingNotification@@V-$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@QEA.c)
 *     ?CallDestructors@?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@CAXPEAVCDuckingNotification@@_K@Z @ 0x18000F78C (-CallDestructors@-$CAtlArray@VCDuckingNotification@@V-$CElementTraits@VCDuckingNotification@@@AT.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z @ 0x18000FF20 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001013C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLockedList<CDuckingNotification,1,0>::ForEachEntry(
        LPCRITICAL_SECTION lpCriticalSection,
        __int64 a2)
{
  LPCRITICAL_SECTION v2; // rsi
  unsigned __int64 v3; // rdi
  unsigned int i; // ebx
  unsigned int j; // ebx
  char *v6; // rsi
  __int64 v7; // r8
  __int64 v8; // rcx
  ATL::CAtlException *v10; // [rsp+28h] [rbp-70h] BYREF
  ATL::CAtlException *v11; // [rsp+30h] [rbp-68h] BYREF
  void *Block; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-58h]
  __int64 v14; // [rsp+48h] [rbp-50h]
  int v15; // [rsp+50h] [rbp-48h]
  __int64 v16; // [rsp+58h] [rbp-40h] BYREF
  int v17; // [rsp+60h] [rbp-38h]
  _BYTE v18[8]; // [rsp+68h] [rbp-30h] BYREF
  __int64 v19; // [rsp+70h] [rbp-28h]
  unsigned __int64 v23; // [rsp+B8h] [rbp+20h]

  v2 = lpCriticalSection;
  Block = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0;
  v3 = 0LL;
  v23 = 0LL;
  EnterCriticalSection(lpCriticalSection);
  for ( i = 0; (unsigned __int64)i < *(_QWORD *)&v2[1].LockCount; ++i )
  {
    try
    {
      if ( (unsigned __int64)i >= *(_QWORD *)&v2[1].LockCount )
        ATL::AtlThrowImpl(-2147024809);
      ATL::CAtlArray<CDuckingNotification,ATL::CElementTraits<CDuckingNotification>>::Add(
        &Block,
        (char *)v2[1].DebugInfo + 32 * i);
      v23 = ++v3;
    }
    catch ( ATL::CAtlException *v10 )
    {
      if ( *(_DWORD *)v10 == -1073741571 )
        _o__resetstkoflw();
      v2 = lpCriticalSection;
      v3 = v23;
      continue;
    }
  }
  LeaveCriticalSection(v2);
  for ( j = 0; j < v3; ++j )
  {
    try
    {
      if ( j >= v13 )
        ATL::AtlThrowImpl(-2147024809);
      v6 = (char *)Block + 32 * j;
      v16 = *(_QWORD *)v6;
      v17 = *((_DWORD *)v6 + 2);
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
        v18,
        v6 + 16);
      v8 = *((_QWORD *)v6 + 3);
      v19 = v8;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      CGenerateDuckingNotification::Invoke(a2, &v16, v7);
    }
    catch ( ATL::CAtlException *v11 )
    {
      if ( *(_DWORD *)v11 == -1073741571 )
        _o__resetstkoflw();
      v3 = v23;
      continue;
    }
  }
  if ( Block )
  {
    ATL::CAtlArray<CDuckingNotification,ATL::CElementTraits<CDuckingNotification>>::CallDestructors(Block, v13);
    free(Block);
  }
  return 0LL;
}
