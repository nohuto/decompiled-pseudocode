/*
 * XREFs of ?IsPeoplePaneOpen@PeoplePaneViewManager@@UEAAJPEBGPEAH@Z @ 0x180111F50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindPaneViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x18011315C (-FindPaneViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV-$shared_ptr@UPeoplePaneViewInf.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PeoplePaneViewManager::IsPeoplePaneOpen(
        PeoplePaneViewManager *this,
        const unsigned __int16 *a2,
        int *a3)
{
  unsigned int v4; // edi
  __int64 v5; // rbx
  int v7[4]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_OWORD *)v7 = 0LL;
  if ( (int)PeoplePaneViewManager::FindPaneViewInfoByContactId((char *)this - 88, a2, v7) < 0
    || !*(_QWORD *)(*(_QWORD *)v7 + 32LL) )
  {
    *a3 = 0;
    goto LABEL_7;
  }
  if ( !*(_DWORD *)(*(_QWORD *)v7 + 60LL) )
  {
    *a3 = 1;
LABEL_7:
    v4 = 0;
    goto LABEL_8;
  }
  v4 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1C2,
    (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
    (const char *)0x80070057LL);
LABEL_8:
  if ( *(_QWORD *)&v7[2] )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)&v7[2] + 8LL), 0xFFFFFFFF) == 1 )
    {
      v5 = *(_QWORD *)&v7[2];
      (***(void (__fastcall ****)(_QWORD))&v7[2])(*(_QWORD *)&v7[2]);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v7[2] + 8LL))(*(_QWORD *)&v7[2]);
    }
  }
  return v4;
}
