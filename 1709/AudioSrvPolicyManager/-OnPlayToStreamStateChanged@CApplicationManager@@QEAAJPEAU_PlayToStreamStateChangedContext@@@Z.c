/*
 * XREFs of ?OnPlayToStreamStateChanged@CApplicationManager@@QEAAJPEAU_PlayToStreamStateChangedContext@@@Z @ 0x180015400
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000B31C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z @ 0x1800152D4 (-UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnPlayToStreamStateChanged(
        CApplicationManager *this,
        struct _PlayToStreamStateChangedContext *a2)
{
  __int64 v4; // rdi
  struct CApplication *v5; // rsi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v8; // [rsp+30h] [rbp-28h]
  LPCRITICAL_SECTION v9; // [rsp+38h] [rbp-20h] BYREF
  char v10; // [rsp+40h] [rbp-18h]

  v9 = (LPCRITICAL_SECTION)((char *)this + 32);
  v10 = 0;
  ATL::CCritSecLock::Lock(&v9);
  v4 = *(_QWORD *)a2;
  v5 = *(struct CApplication **)(*(_QWORD *)a2 + 272LL);
  LODWORD(a2) = *((_DWORD *)a2 + 2);
  lpCriticalSection = (LPCRITICAL_SECTION)(v4 + 32);
  v8 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( (_DWORD)a2 )
    --*(_DWORD *)(v4 + 524);
  else
    ++*(_DWORD *)(v4 + 524);
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v5 )
    CApplicationManager::UpdateActiveMediaAppForSession(this, v5, 0);
  if ( v10 )
    LeaveCriticalSection(v9);
  return 0LL;
}
