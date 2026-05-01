/*
 * XREFs of ?OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z @ 0x18000F520
 * Callers:
 *     <none>
 * Callees:
 *     ?_WindowServiceAvailabilityChanged@CApplicationManager@@AEAAXPEAUHWND__@@AEBU_GUID@@H@Z @ 0x1800163D0 (-_WindowServiceAvailabilityChanged@CApplicationManager@@AEAAXPEAUHWND__@@AEBU_GUID@@H@Z.c)
 *     ?IsModernAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18002BE24 (-IsModernAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationManager::OnMessage(
        CApplicationManager *this,
        int a2,
        CApplicationManagerUtility *a3,
        int a4,
        bool *a5)
{
  unsigned __int64 v5; // rbx
  bool v10; // r15
  __int64 v11; // rdi
  __int64 v12; // rcx
  _DWORD *v13; // rsi
  unsigned __int64 v14; // r8
  __int64 v15; // rdi
  __int64 v16; // rsi
  unsigned __int64 v17; // rcx
  __int64 *v18; // r9
  __int64 v19; // rbp
  unsigned __int64 v20; // r8
  int IsWindowServiceSupported; // eax
  bool v22; // bl
  HWND v24; // [rsp+20h] [rbp-B8h] BYREF
  GUID iid; // [rsp+28h] [rbp-B0h] BYREF
  WCHAR Buffer[40]; // [rsp+40h] [rbp-98h] BYREF

  v5 = 0LL;
  v10 = 0;
  if ( CApplicationManager::_uMsgWindowServiceRegister == a2 || CApplicationManager::_uMsgWindowServiceUnregister == a2 )
  {
    v10 = 1;
    if ( GlobalGetAtomNameW(a4, Buffer, 40)
      && IIDFromString(Buffer, &iid) >= 0
      && (unsigned int)GetWindowBand(a3, &v24)
      && (((_DWORD)v24 == 1 || (_DWORD)v24 == 8) && (_DWORD)v24 != 1
       || CApplicationManagerUtility::IsModernAppWindow(a3, (HWND)(unsigned int)v24))
      && !GetWindow((HWND)a3, 4u) )
    {
      IsWindowServiceSupported = CoreIsWindowServiceSupported(a3, &iid);
      v22 = CApplicationManager::_uMsgWindowServiceRegister == a2;
      if ( IsWindowServiceSupported >= 0 == (CApplicationManager::_uMsgWindowServiceRegister == a2) )
      {
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        CApplicationManager::_WindowServiceAvailabilityChanged(
          (CApplicationManager *)((char *)this - 200),
          (HWND)a3,
          &iid,
          v22);
LABEL_41:
        ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      }
    }
  }
  else
  {
    if ( a2 == 1025 )
    {
      v10 = 1;
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v11 = *((_QWORD *)this + 76);
      if ( *(_QWORD *)(v11 + 32) )
      {
        v12 = *(_QWORD *)(v11 + 24);
        while ( 1 )
        {
          v13 = *(_DWORD **)v12;
          if ( *(_DWORD *)(*(_QWORD *)v12 + 8LL) == a4 )
            break;
          ++v5;
          v12 += 8LL;
          if ( v5 >= *(_QWORD *)(v11 + 32) )
            goto LABEL_41;
        }
        v14 = *(_QWORD *)(v11 + 32);
        if ( v5 < v14 )
        {
          if ( v5 != v14 - 1 )
            memmove((void *)v12, (const void *)(v12 + 8), 8 * (v14 - v5) - 8);
          --*(_QWORD *)(v11 + 32);
        }
        if ( v13[3] != 5 )
          --*(_DWORD *)(v11 + 56);
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v13 + 8LL))(v13);
        (**(void (__fastcall ***)(_DWORD *, __int64))v13)(v13, 1LL);
      }
      goto LABEL_41;
    }
    if ( a2 == 1026 )
    {
      v10 = 1;
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v15 = *((_QWORD *)this + 76);
      v16 = 0LL;
      v17 = 0LL;
      if ( *(_QWORD *)(v15 + 32) )
      {
        v18 = *(__int64 **)(v15 + 24);
        while ( 1 )
        {
          v19 = *v18;
          if ( *(_DWORD *)(*v18 + 8) == a4 )
            break;
          ++v17;
          ++v18;
          if ( v17 >= *(_QWORD *)(v15 + 32) )
            goto LABEL_29;
        }
        v20 = *(_QWORD *)(v15 + 32);
        if ( v17 < v20 )
        {
          if ( v17 != v20 - 1 )
            memmove(v18, v18 + 1, 8 * (v20 - v17) - 8);
          --*(_QWORD *)(v15 + 32);
        }
        if ( *(_DWORD *)(v19 + 12) != 5 )
          --*(_DWORD *)(v15 + 56);
        v16 = v19;
      }
LABEL_29:
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      if ( v16 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
        (**(void (__fastcall ***)(__int64, __int64))v16)(v16, 1LL);
      }
    }
  }
  *a5 = v10;
  return 0LL;
}
