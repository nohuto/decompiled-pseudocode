/*
 * XREFs of ?CallDestructors@?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@CAXPEAVCDuckingNotification@@_K@Z @ 0x18000F78C
 * Callers:
 *     ??1CDuckingManager@@UEAA@XZ @ 0x18000BDD4 (--1CDuckingManager@@UEAA@XZ.c)
 *     ?ForEachEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x18000EAFC (-ForEachEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z.c)
 *     ?RemoveAt@?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x18000F228 (-RemoveAt@-$CAtlArray@VCDuckingNotification@@V-$CElementTraits@VCDuckingNotification@@@ATL@@@ATL.c)
 *     ??1?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@QEAA@XZ @ 0x18000F2EC (--1-$CAtlArray@VCDuckingNotification@@V-$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@QEAA@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CAtlArray<CDuckingNotification,ATL::CElementTraits<CDuckingNotification>>::CallDestructors(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rdi
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  volatile signed __int32 *v5; // rdx
  signed __int32 v6; // eax
  bool v7; // cc
  __int64 result; // rax

  if ( a2 )
  {
    v2 = a2;
    v3 = (_QWORD *)(a1 + 16);
    do
    {
      v4 = v3[1];
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      v5 = (volatile signed __int32 *)(*v3 - 24LL);
      v6 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
      v7 = v6 <= 1;
      result = (unsigned int)(v6 - 1);
      if ( v7 )
        result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v5 + 8LL))(*(_QWORD *)v5);
      v3 += 4;
      --v2;
    }
    while ( v2 );
  }
  return result;
}
