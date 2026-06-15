/*
 * XREFs of ??1?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180098540
 * Callers:
 *     _CAudioSessionManager::CAudioSessionManager_::_1_::dtor$4 @ 0x18006A5BA (_CAudioSessionManager--CAudioSessionManager_--_1_--dtor$4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<Microsoft::WRL::WeakRef>::~vector<Microsoft::WRL::WeakRef>(__int64 **a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // rsi
  __int64 v4; // rcx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  HANDLE ProcessHeap; // rax

  v2 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    if ( v2 != v3 )
    {
      do
      {
        v4 = *v2;
        if ( *v2 )
        {
          *v2 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        }
        ++v2;
      }
      while ( v2 != v3 );
      v2 = *a1;
    }
    v5 = a1[2] - v2;
    if ( v5 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v5 < 0x1000 )
      {
LABEL_13:
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v2);
        *a1 = 0LL;
        a1[1] = 0LL;
        a1[2] = 0LL;
        return;
      }
      if ( ((unsigned __int8)v2 & 0x1F) == 0 )
      {
        v6 = *(v2 - 1);
        if ( v6 < (unsigned __int64)v2 && (unsigned __int64)v2 - v6 - 8 <= 0x1F )
        {
          v2 = (__int64 *)*(v2 - 1);
          goto LABEL_13;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(0x1FFFFFFFFFFFFFFFLL);
    JUMPOUT(0x180098616LL);
  }
}
