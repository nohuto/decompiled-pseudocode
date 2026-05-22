/*
 * XREFs of ?OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x180006430
 * Callers:
 *     ?OnDeviceAttach@InputStateManager@@W7EAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x180007720 (-OnDeviceAttach@InputStateManager@@W7EAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?SetValueForKey@?$FixedSizeMap@KPEAUIInputProcessor@@$0BAA@@@QEAAJAEBKAEBQEAUIInputProcessor@@@Z @ 0x1800075D0 (-SetValueForKey@-$FixedSizeMap@KPEAUIInputProcessor@@$0BAA@@@QEAAJAEBKAEBQEAUIInputProcessor@@@Z.c)
 *     ?CreateInputProcessorWorker@@YAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@W4InputType@@H@Z @ 0x180036510 (-CreateInputProcessorWorker@@YAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@W4InputT.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputStateManager::OnDeviceAttach(
        InputStateManager *this,
        struct DeviceInfo *a2,
        struct IRawInputProvider *a3)
{
  InputStateManager *v4; // rdi
  __int64 v5; // r12
  char *v6; // rdx
  unsigned int v7; // ebx
  int v8; // r9d
  int v9; // r11d
  unsigned int v10; // edi
  int v11; // r9d
  __int64 v12; // rax
  _DWORD *v13; // r10
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rbx
  int v17; // r8d
  char *v18; // rdx
  int v19; // ebx
  _QWORD *v20; // rdi
  _QWORD *v21; // rbx
  int v22; // eax
  __int64 v23; // rcx
  int v24; // r9d
  __int64 v25; // rbx
  char *v26; // rax
  int v27; // eax
  __int64 v28; // rcx
  int v29; // r12d
  int v30; // eax
  __int64 v31; // rcx
  __int64 v33; // [rsp+38h] [rbp-D0h] BYREF
  char *v34; // [rsp+40h] [rbp-C8h]
  InputStateManager *v35; // [rsp+48h] [rbp-C0h]
  _QWORD v36[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v37; // [rsp+60h] [rbp-A8h]
  int v38; // [rsp+70h] [rbp-98h]
  char v39; // [rsp+74h] [rbp-94h]
  __int64 v40; // [rsp+78h] [rbp-90h]
  __int64 v41; // [rsp+80h] [rbp-88h]
  _QWORD v42[256]; // [rsp+88h] [rbp-80h] BYREF

  v40 = -2LL;
  v4 = this;
  v35 = this;
  v5 = 256LL;
  if ( !a3 )
  {
LABEL_19:
    v34 = (char *)v4 + 72;
    v16 = 0LL;
    v17 = *((_DWORD *)v4 + 1042);
    v18 = (char *)v4 + 72;
    do
    {
      if ( *(_DWORD *)v18 != v17 )
      {
        v42[v16] = *((_QWORD *)v18 + 1);
        v16 = (unsigned int)(v16 + 1);
      }
      v18 += 16;
      --v5;
    }
    while ( v5 );
    LODWORD(v33) = v16;
    v19 = v16 - 1;
    if ( v19 < 0 )
    {
LABEL_31:
      v25 = 0LL;
      v41 = 0LL;
      v33 = 0LL;
      v37 = 0LL;
      v38 = -1;
      v39 = 1;
      v36[0] = a2;
      if ( v4 )
        v26 = (char *)v4 + 8;
      else
        v26 = 0LL;
      v36[1] = v26;
      if ( !a2 || !v26 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 198, 87);
        if ( IsDebuggerPresent() )
          __debugbreak();
        __fastfail(7u);
      }
      v27 = CreateInputProcessorWorker(v36, &v33, 0LL, 0LL);
      v29 = v27;
      if ( v27 >= 0 )
      {
        v25 = v33;
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        McTemplateU0qqq(v28, &MinInput_Warning_CheckResult, 0, 201, v27);
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          McTemplateU0qqq(v28, &MinInput_Warning_CheckResult, 1, 566, v29);
      }
      v10 = v29;
      if ( v29 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          McTemplateU0qqq(v28, &MinInput_Warning_CheckResult, 1, 288, v29);
        if ( v25 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
        return v10;
      }
      v33 = v25;
      v30 = FixedSizeMap<unsigned long,IInputProcessor *,256>::SetValueForKey(v34, a2, &v33);
      v10 = v30;
      if ( v30 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          McTemplateU0qqq(v31, &MinInput_Warning_CheckResult, 1, 290, v30);
        return v10;
      }
    }
    else
    {
      v20 = &v42[v19];
      while ( !(*(unsigned __int8 (__fastcall **)(_QWORD, struct DeviceInfo *))(*(_QWORD *)*v20 + 32LL))(*v20, a2) )
      {
        --v20;
        if ( --v19 < 0 )
        {
          v4 = v35;
          goto LABEL_31;
        }
      }
      v21 = &v42[v19];
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v21 + 8LL))(*v21);
      v22 = FixedSizeMap<unsigned long,IInputProcessor *,256>::SetValueForKey(v34, a2, v21);
      v10 = v22;
      if ( v22 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          return v10;
        v24 = 274;
        goto LABEL_59;
      }
    }
    v22 = (*(__int64 (__fastcall **)(_QWORD, struct DeviceInfo *))(**((_QWORD **)v35 + 5) + 24LL))(
            *((_QWORD *)v35 + 5),
            a2);
    v10 = v22;
    if ( v22 >= 0 || (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      return v10;
    v24 = 297;
LABEL_59:
    McTemplateU0qqq(v23, &MinInput_Warning_CheckResult, 1, v24, v22);
    return v10;
  }
  v6 = (char *)this + 4176;
  v7 = 0;
  LOBYTE(this) = 0;
  v8 = *(_DWORD *)a2;
  v9 = *((_DWORD *)v6 + 1024);
  if ( *(_DWORD *)a2 == v9 )
  {
    v10 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      return v10;
    v11 = 152;
  }
  else
  {
    v12 = 0LL;
    v13 = v6;
    do
    {
      if ( *v13 == v8 )
      {
        v14 = 2 * v12;
        goto LABEL_18;
      }
      if ( !(_BYTE)this && *v13 == v9 )
      {
        v7 = v12;
        LOBYTE(this) = 1;
      }
      v12 = (unsigned int)(v12 + 1);
      v13 += 4;
    }
    while ( (unsigned int)v12 < 0x100 );
    if ( (_BYTE)this )
    {
      v14 = 2LL * v7;
      *(_DWORD *)&v6[16 * v7] = v8;
LABEL_18:
      *(_QWORD *)&v6[8 * v14 + 8] = a3;
      goto LABEL_19;
    }
    v10 = -2147467259;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      return v10;
    v11 = 182;
  }
  McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 1, v11, v10);
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    McTemplateU0qqq(v15, &MinInput_Warning_CheckResult, 1, 256, v10);
  return v10;
}
