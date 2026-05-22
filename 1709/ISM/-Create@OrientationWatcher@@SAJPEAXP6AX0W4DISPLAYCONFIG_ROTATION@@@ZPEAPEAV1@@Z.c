/*
 * XREFs of ?Create@OrientationWatcher@@SAJPEAXP6AX0W4DISPLAYCONFIG_ROTATION@@@ZPEAPEAV1@@Z @ 0x18006DA44
 * Callers:
 *     ?GetRotation@DWMInputDisplay@@UEAA?AW4DISPLAYCONFIG_ROTATION@@XZ @ 0x180020640 (-GetRotation@DWMInputDisplay@@UEAA-AW4DISPLAYCONFIG_ROTATION@@XZ.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall OrientationWatcher::Create(
        __int64 a1,
        void (*a2)(void *, enum DISPLAYCONFIG_ROTATION),
        struct OrientationWatcher **a3)
{
  __int64 v4; // rdi
  int v5; // edi
  int v6; // r9d
  char *v7; // rax
  char *v8; // rbx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // r9d
  __int64 v13; // rdi
  _QWORD *v14; // r14
  __int64 v15; // rcx
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64); // r15
  __int64 v17; // rcx
  __int64 v18; // rcx
  void (*v20)(void *, enum DISPLAYCONFIG_ROTATION); // [rsp+78h] [rbp+10h] BYREF
  __int64 v21; // [rsp+80h] [rbp+18h] BYREF

  v20 = a2;
  v4 = a1;
  if ( a3 )
  {
    v7 = (char *)malloc(0x48uLL);
    v8 = v7;
    if ( v7 )
      memset(v7, 0, 0x48uLL);
    if ( v8 )
    {
      *(_QWORD *)v8 = &RefCountedObject::`vftable';
      *((_DWORD *)v8 + 2) = 1;
      *(_QWORD *)v8 = &OrientationWatcher::`vftable'{for `RefCountedObject'};
      *((_QWORD *)v8 + 2) = &OrientationWatcher::`vftable'{for `IMessageProxyListener'};
      *((_QWORD *)v8 + 3) = 0LL;
      *((_QWORD *)v8 + 4) = 0LL;
      *((_QWORD *)v8 + 6) = v4;
      *((_QWORD *)v8 + 7) = DWMInputDisplay::OnOrientationChangeStatic;
      v9 = *((_QWORD *)v8 + 3);
      if ( v9 )
      {
        *((_QWORD *)v8 + 3) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      a1 = *((_QWORD *)v8 + 4);
      if ( a1 )
      {
        *((_QWORD *)v8 + 4) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
      }
      v8[40] = 0;
      *((_DWORD *)v8 + 16) = 1;
    }
    if ( !v8 )
    {
      v5 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return (unsigned int)v5;
      v6 = 89;
      goto LABEL_4;
    }
    LODWORD(v20) = 0;
    v21 = 0LL;
    v10 = CoreUIFactoryCreate(&v21);
    v5 = v10;
    if ( v10 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, GUID *, void (**)(void *, enum DISPLAYCONFIG_ROTATION)))(*(_QWORD *)v21 + 24LL))(
              v21,
              &GUID_5dd528e4_51e6_4b28_89a2_71173f3b8f1d,
              &v20);
      v5 = v10;
      if ( v10 >= 0 )
      {
        v13 = v21;
        v14 = v8 + 24;
        v15 = *((_QWORD *)v8 + 3);
        if ( v15 )
        {
          *v14 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
        v10 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, char *))(*(_QWORD *)v13 + 40LL))(
                v13,
                L"System\\RotationManager",
                (unsigned int)v20,
                v8 + 24);
        v5 = v10;
        if ( v10 >= 0 )
        {
          v16 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*v14;
          v17 = *((_QWORD *)v8 + 4);
          if ( v17 )
          {
            *((_QWORD *)v8 + 4) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
          }
          v10 = (**v16)(v16, &GUID_5dd528e4_51e6_4b28_89a2_71173f3b8f1d, (__int64)(v8 + 32));
          v5 = v10;
          if ( v10 >= 0 )
          {
            v10 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v14 + 56LL))(*v14, v8 + 16);
            v5 = v10;
            if ( v10 >= 0 || (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
              goto LABEL_36;
            v12 = 65;
            goto LABEL_35;
          }
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v12 = 62;
            goto LABEL_35;
          }
        }
        else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v12 = 58;
          goto LABEL_35;
        }
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v12 = 53;
        goto LABEL_35;
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v12 = 49;
LABEL_35:
      McTemplateU0qqq(v11, &MinInput_Warning_CheckResult, 0, v12, v10);
    }
LABEL_36:
    v18 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    if ( v5 >= 0 )
    {
      *a3 = (struct OrientationWatcher *)v8;
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      McTemplateU0qqq(v18, &MinInput_Warning_CheckResult, 0, 92, v5);
    }
    if ( v5 < 0 )
      (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v8 + 24LL))(v8, 1LL);
    return (unsigned int)v5;
  }
  v5 = -2147024809;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v6 = 82;
LABEL_4:
    McTemplateU0qqq(a1, &MinInput_Warning_CheckResult, 0, v6, v5);
  }
  return (unsigned int)v5;
}
