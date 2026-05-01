/*
 * XREFs of ?PerformModeBasedCallouts@CApplicationManager@@UEAAXQEBUMODE_TRANSITION_INFORMATION@@@Z @ 0x18000D0E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z @ 0x180026C50 (--0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     memset @ 0x180194E50 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplicationManager::PerformModeBasedCallouts(
        CApplicationManager *this,
        const struct MODE_TRANSITION_INFORMATION *const a2)
{
  bool v4; // si
  __int64 v5; // r14
  _BYTE *v6; // r12
  char v7; // al
  int v8; // eax
  _BYTE *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // ecx
  __int64 v13; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v14; // [rsp+40h] [rbp-C8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v16[3]; // [rsp+50h] [rbp-B8h] BYREF
  int v17; // [rsp+68h] [rbp-A0h]
  int v18; // [rsp+6Ch] [rbp-9Ch]
  __int64 v19; // [rsp+70h] [rbp-98h]
  __int64 v20; // [rsp+78h] [rbp-90h]
  __int64 v21; // [rsp+80h] [rbp-88h]
  _BYTE *v22; // [rsp+88h] [rbp-80h]
  bool v23; // [rsp+90h] [rbp-78h]
  __int64 v24; // [rsp+98h] [rbp-70h]
  _BYTE v25[24]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v26[80]; // [rsp+B8h] [rbp-50h] BYREF

  v24 = -2LL;
  CThreadUseDetector::CThreadUseDetector(
    (CThreadUseDetector *)&lpCriticalSection,
    (struct CObjectWithThreadUseDetection *)(((unsigned __int64)this + 128) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 200) >> 64)));
  if ( (*((_DWORD *)a2 + 4) != 1 && *((_DWORD *)a2 + 4) != 8 || *((_DWORD *)a2 + 4) == 1 || *((_QWORD *)this + 31))
    && *((_QWORD *)this + 36) )
  {
    v4 = 0;
    v5 = 0LL;
    v6 = 0LL;
    memset(v26, 0, 0x48uLL);
    if ( *((_DWORD *)a2 + 4) == 1 || *((_DWORD *)a2 + 4) == 8 )
    {
      if ( (*((_DWORD *)a2 + 4) == 1 || *((_DWORD *)a2 + 4) == 8) && *((_DWORD *)a2 + 4) != 1 )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 31) + 280LL))(*((_QWORD *)this + 31));
        v4 = (v7 & 4) != 0;
        if ( (v7 & 4) != 0 )
          v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 31) + 384LL))(*((_QWORD *)this + 31));
        v8 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, _BYTE *))(**((_QWORD **)this + 31) + 328LL))(
               *((_QWORD *)this + 31),
               &v13,
               v25);
        v9 = v25;
        if ( v8 < 0 )
          v9 = 0LL;
        v6 = v9;
        (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 31) + 344LL))(*((_QWORD *)this + 31), v26);
      }
      else
      {
        v4 = 1;
        v13 = 0LL;
        if ( (*(int (__fastcall **)(_QWORD, _QWORD, SID *, GUID *, __int64 *))(**((_QWORD **)this + 37) + 88LL))(
               *((_QWORD *)this + 37),
               *((_QWORD *)this + 28),
               &SID_PerMonitorDesktopVisibilityService,
               &GUID_2af0421a_a7bc_4b7e_be85_7e17c0ffee84,
               &v13) >= 0
          && (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v13 + 24LL))(v13, 0LL, &v14) >= 0 )
        {
          v4 = (_DWORD)v14 != 0;
        }
        v10 = v13;
        if ( v13 )
        {
          v13 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
      }
    }
    v11 = *((_QWORD *)this + 28);
    v12 = *((_DWORD *)this + 60);
    *(_OWORD *)&v16[1] = *(_OWORD *)a2;
    v17 = *((_DWORD *)a2 + 4);
    v18 = v12;
    LODWORD(v19) = 0;
    v20 = v5;
    v21 = v11;
    v22 = v6;
    v23 = v4;
    *((_BYTE *)this + 216) = (*(int (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 36) + 40LL))(
                               *((_QWORD *)this + 36),
                               &v16[1]) >= 0;
  }
  if ( SLODWORD(v16[0]) >= 0 )
    LeaveCriticalSection(lpCriticalSection);
}
