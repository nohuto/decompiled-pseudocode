/*
 * XREFs of ?RegisterAppVolumePolicyChange@CWindowsPolicyManager@@UEAAJKPEAUIAudioAppVolumePolicyChange@@@Z @ 0x180006160
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000B31C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000B358 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?RegisterAppVolumePolicyChange@CApplication@@QEAAJPEAUIAudioAppVolumePolicyChange@@@Z @ 0x18000E178 (-RegisterAppVolumePolicyChange@CApplication@@QEAAJPEAUIAudioAppVolumePolicyChange@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::RegisterAppVolumePolicyChange(
        CWindowsPolicyManager *this,
        int a2,
        struct IAudioAppVolumePolicyChange *a3)
{
  CApplicationManager *v6; // rdi
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  _QWORD *v8; // rdx
  CApplication *v9; // rbx
  CApplication *v10; // rcx
  int v11; // edi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-38h] BYREF
  char v14; // [rsp+28h] [rbp-30h]
  LPCRITICAL_SECTION v15; // [rsp+30h] [rbp-28h] BYREF
  char v16; // [rsp+38h] [rbp-20h]

  (*(void (__fastcall **)(CWindowsPolicyManager *))(*(_QWORD *)this + 256LL))(this);
  v6 = g_ApplicationManager;
  v16 = 0;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  v15 = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v15);
  lpCriticalSection = v7;
  v14 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v8 = (_QWORD *)*((_QWORD *)v6 + 9);
  v9 = 0LL;
  while ( v8 && !v9 )
  {
    v10 = (CApplication *)v8[2];
    v8 = (_QWORD *)*v8;
    if ( *((_DWORD *)v10 + 4) == a2 )
      v9 = v10;
  }
  v11 = -2147023728;
  if ( v9 )
    v11 = 0;
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v11 >= 0 )
    v11 = CApplication::RegisterAppVolumePolicyChange(v9, a3);
  if ( v16 )
    LeaveCriticalSection(v15);
  (*(void (__fastcall **)(CWindowsPolicyManager *))(*(_QWORD *)this + 264LL))(this);
  return (unsigned int)v11;
}
