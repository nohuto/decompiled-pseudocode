/*
 * XREFs of ?OnPlayToStreamStateChanged@CApplicationManager@@QEAAJPEAU_PlayToStreamStateChangedContext@@@Z @ 0x18001DF40
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z @ 0x18001DE14 (-UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnPlayToStreamStateChanged(
        CApplicationManager *this,
        struct _PlayToStreamStateChangedContext *a2)
{
  __int64 v4; // rdi
  struct CApplication *v5; // rsi
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v11; // [rsp+30h] [rbp-28h]
  LPCRITICAL_SECTION v12; // [rsp+38h] [rbp-20h] BYREF
  char v13; // [rsp+40h] [rbp-18h]

  v12 = (LPCRITICAL_SECTION)((char *)this + 32);
  v13 = 0;
  ATL::CCritSecLock::Lock(&v12);
  v4 = *(_QWORD *)a2;
  v5 = *(struct CApplication **)(*(_QWORD *)a2 + 280LL);
  LODWORD(a2) = *((_DWORD *)a2 + 2);
  lpCriticalSection = (LPCRITICAL_SECTION)(v4 + 32);
  v11 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = *(_DWORD *)(v4 + 532);
  v7 = v6 - 1;
  v8 = v6 + 1;
  if ( (_DWORD)a2 )
    v8 = v7;
  *(_DWORD *)(v4 + 532) = v8;
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v5 )
    CApplicationManager::UpdateActiveMediaAppForSession(this, v5, 0);
  if ( v13 )
    LeaveCriticalSection(v12);
  return 0LL;
}
