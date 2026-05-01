/*
 * XREFs of ?PerformModeBasedCallouts@CApplicationManager@@UEAAXQEBUMODE_TRANSITION_INFORMATION@@@Z @ 0x18000D3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x1800273C0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplicationManager::PerformModeBasedCallouts(
        CApplicationManager *this,
        const struct MODE_TRANSITION_INFORMATION *const a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r14
  int v5; // r15d
  bool v6; // si
  __int64 v7; // r12
  char v8; // al
  int v9; // eax
  _BYTE *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // ecx
  __int64 v14; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE *v16; // [rsp+48h] [rbp-C0h]
  _QWORD v17[3]; // [rsp+50h] [rbp-B8h] BYREF
  int v18; // [rsp+68h] [rbp-A0h]
  int v19; // [rsp+6Ch] [rbp-9Ch]
  __int64 v20; // [rsp+70h] [rbp-98h]
  __int64 v21; // [rsp+78h] [rbp-90h]
  __int64 v22; // [rsp+80h] [rbp-88h]
  _BYTE *v23; // [rsp+88h] [rbp-80h]
  bool v24; // [rsp+90h] [rbp-78h]
  __int64 v25; // [rsp+98h] [rbp-70h]
  struct _RTL_CRITICAL_SECTION *v26; // [rsp+A0h] [rbp-68h]
  int v27; // [rsp+A8h] [rbp-60h]
  _BYTE v28[24]; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v29[80]; // [rsp+C8h] [rbp-40h] BYREF

  v25 = -2LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 152) & -(__int64)(this != (CApplicationManager *)248));
  v26 = v4;
  v5 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v4, 1LL);
  v27 = v5;
  if ( (*((_DWORD *)a2 + 4) != 1 && *((_DWORD *)a2 + 4) != 8 || *((_DWORD *)a2 + 4) == 1 || *((_QWORD *)this + 34))
    && *((_QWORD *)this + 39) )
  {
    v6 = 0;
    v7 = 0LL;
    v16 = 0LL;
    memset(v29, 0, 0x48uLL);
    if ( *((_DWORD *)a2 + 4) == 1 || *((_DWORD *)a2 + 4) == 8 )
    {
      if ( (*((_DWORD *)a2 + 4) == 1 || *((_DWORD *)a2 + 4) == 8) && *((_DWORD *)a2 + 4) != 1 )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 34) + 280LL))(*((_QWORD *)this + 34));
        v6 = (v8 & 4) != 0;
        if ( (v8 & 4) != 0 )
          v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 34) + 384LL))(*((_QWORD *)this + 34));
        v9 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, _BYTE *))(**((_QWORD **)this + 34) + 328LL))(
               *((_QWORD *)this + 34),
               &v14,
               v28);
        v10 = v28;
        if ( v9 < 0 )
          v10 = v16;
        v16 = v10;
        (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 34) + 344LL))(*((_QWORD *)this + 34), v29);
      }
      else
      {
        v6 = 1;
        v14 = 0LL;
        if ( (*(int (__fastcall **)(_QWORD, _QWORD, SID *, GUID *, __int64 *))(**((_QWORD **)this + 40) + 88LL))(
               *((_QWORD *)this + 40),
               *((_QWORD *)this + 31),
               &SID_PerMonitorDesktopVisibilityService,
               &GUID_2af0421a_a7bc_4b7e_be85_7e17c0ffee84,
               &v14) >= 0
          && (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v14 + 24LL))(v14, 0LL, &v15) >= 0 )
        {
          v6 = (_DWORD)v15 != 0;
        }
        v11 = v14;
        if ( v14 )
        {
          v14 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
      }
    }
    v12 = *((_QWORD *)this + 31);
    v13 = *((_DWORD *)this + 66);
    *(_OWORD *)&v17[1] = *(_OWORD *)a2;
    v18 = *((_DWORD *)a2 + 4);
    v19 = v13;
    LODWORD(v20) = 0;
    v21 = v7;
    v22 = v12;
    v23 = v16;
    v24 = v6;
    *((_BYTE *)this + 240) = (*(int (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 39) + 40LL))(
                               *((_QWORD *)this + 39),
                               &v17[1]) >= 0;
  }
  if ( v5 >= 0 )
    LeaveCriticalSection(v4);
}
