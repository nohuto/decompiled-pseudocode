/*
 * XREFs of ?GetHMonitors@DisplayBinding@@UEBAJPEAPEAPEAUHMONITOR__@@PEAI@Z @ 0x180023220
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?GetAt@PropertyMap@Input@@QEBAJAEBU_GUID@@PEAPEAVPropertyNode@2@@Z @ 0x180031AEC (-GetAt@PropertyMap@Input@@QEBAJAEBU_GUID@@PEAPEAVPropertyNode@2@@Z.c)
 *     ?EnumeratePropertiesWorker@Input@@YA_NPEAVPropertyNode@1@_NV?$function@$$A6A_NPEAVPropertyNode@Input@@PEAXK@Z@std@@PEAXK@Z @ 0x1800324DC (-EnumeratePropertiesWorker@Input@@YA_NPEAVPropertyNode@1@_NV-$function@$$A6A_NPEAVPropertyNode@I.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800CB52C (--_U@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DisplayBinding::GetHMonitors(DisplayBinding *this, HMONITOR **a2, unsigned int *a3)
{
  int v3; // eax
  void **v4; // rcx
  int v5; // r9d
  struct Input::PropertyNode *v6; // rbx
  __int64 v7; // rax
  HMONITOR *v8; // rax
  int v9; // edx
  _BYTE *v10; // r8
  _BYTE *v11; // rdx
  unsigned int v12; // ebx
  __int64 (__fastcall ***v13)(); // rdx
  int v15; // [rsp+30h] [rbp-D0h] BYREF
  HMONITOR **v16; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int *v17; // [rsp+40h] [rbp-C0h] BYREF
  struct Input::PropertyNode *v18; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v19; // [rsp+50h] [rbp-B0h]
  int *v20; // [rsp+60h] [rbp-A0h]
  _BYTE v21[56]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE *v22; // [rsp+A0h] [rbp-60h]
  _BYTE v23[56]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v24; // [rsp+108h] [rbp+8h]
  __int64 (__fastcall **v25)(); // [rsp+110h] [rbp+10h] BYREF
  __int128 v26; // [rsp+118h] [rbp+18h]
  int *v27; // [rsp+128h] [rbp+28h]
  __int64 (__fastcall ***v28)(); // [rsp+148h] [rbp+48h]

  v16 = a2;
  *(_QWORD *)&v19 = &v16;
  v17 = a3;
  *a3 = 0;
  v15 = 0;
  *((_QWORD *)&v19 + 1) = &v17;
  v20 = &v15;
  v25 = off_1800D41C8;
  v28 = &v25;
  v26 = v19;
  v27 = &v15;
  v3 = Input::PropertyMap::GetAt((DisplayBinding *)((char *)this + 64), &DISPLAYBINDING_MONITORS, &v18);
  v15 = v3;
  if ( v3 >= 0 )
  {
    v6 = v18;
    v7 = (__int64)(*((_QWORD *)v18 + 5) - *((_QWORD *)v18 + 4)) >> 3;
    if ( (_DWORD)v7 )
    {
      v8 = (HMONITOR *)operator new[](saturated_mul((unsigned int)v7, 8uLL));
      *v16 = v8;
      v4 = (void **)v16;
      if ( !*v16 )
      {
        LOBYTE(v3) = 14;
        v15 = -2147024882;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_21;
        v5 = 131;
        goto LABEL_4;
      }
      v10 = 0LL;
      v22 = 0LL;
      if ( v28 )
      {
        v10 = (_BYTE *)((__int64 (__fastcall *)(__int64 (__fastcall ***)(), _BYTE *))**v28)(v28, v21);
        v22 = v10;
      }
      v24 = 0LL;
      if ( v10 )
        v24 = (**(__int64 (__fastcall ***)(_BYTE *, _BYTE *))v10)(v10, v23);
      Input::EnumeratePropertiesWorker((_DWORD)v6, v9, (unsigned int)v23, 0, 0);
      if ( v22 )
      {
        v11 = v21;
        LOBYTE(v11) = v22 != v21;
        (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v22 + 32LL))(v22, v11);
      }
    }
    if ( *v17 != (unsigned int)((__int64)(*((_QWORD *)v6 + 5) - *((_QWORD *)v6 + 4)) >> 3) )
    {
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    goto LABEL_19;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v5 = 123;
LABEL_4:
    McTemplateU0qqq((__int64)v4, &MinInput_Warning_CheckResult, 0, v5, v3);
  }
LABEL_19:
  if ( v15 >= 0 )
    goto LABEL_22;
  v4 = (void **)v16;
LABEL_21:
  operator delete(*v4);
  *v17 = 0;
LABEL_22:
  v12 = v15;
  if ( v28 )
  {
    v13 = &v25;
    LOBYTE(v13) = v28 != &v25;
    ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v28)[4])(v28, v13);
  }
  return v12;
}
