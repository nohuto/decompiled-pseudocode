/*
 * XREFs of ?OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x1800066F0
 * Callers:
 *     ?OnDeviceAttach@InputStateManager@@W7EAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x180007610 (-OnDeviceAttach@InputStateManager@@W7EAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ?OnDeviceAttach@InputStateManager@InputETW@@SAXPEAUDeviceInfo@@@Z @ 0x180005C90 (-OnDeviceAttach@InputStateManager@InputETW@@SAXPEAUDeviceInfo@@@Z.c)
 *     ?SetValueForKey@?$FixedSizeMap@KPEAUIInputProcessor@@$0BAA@@@QEAAJAEBKAEBQEAUIInputProcessor@@@Z @ 0x1800074CC (-SetValueForKey@-$FixedSizeMap@KPEAUIInputProcessor@@$0BAA@@@QEAAJAEBKAEBQEAUIInputProcessor@@@Z.c)
 *     ?CreateInputProcessorWorker@@YAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@W4InputType@@H@Z @ 0x18002629C (-CreateInputProcessorWorker@@YAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@W4InputT.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputStateManager::OnDeviceAttach(
        InputStateManager *this,
        struct DeviceInfo *a2,
        struct IRawInputProvider *a3)
{
  __int64 v6; // r12
  char *v7; // rdx
  unsigned int v8; // r15d
  char v9; // r9
  char v10; // cl
  int v11; // r11d
  int v12; // edi
  __int64 v13; // rax
  _DWORD *v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rbx
  int v17; // r8d
  char *v18; // rdx
  int v19; // ebx
  _QWORD *v20; // rdi
  char *v21; // rax
  _QWORD *v22; // rbx
  int v23; // eax
  __int64 v25; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v26[261]; // [rsp+30h] [rbp-D8h] BYREF

  v26[3] = -2LL;
  InputETW::InputStateManager::OnDeviceAttach(a2);
  v6 = 256LL;
  if ( !a3 )
    goto LABEL_17;
  v7 = (char *)this + 4176;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = *((_DWORD *)this + 2068);
  if ( *(_DWORD *)a2 == v11 )
    return (unsigned int)-2147024809;
  v13 = 0LL;
  v14 = (_DWORD *)((char *)this + 4176);
  while ( *v14 != *(_DWORD *)a2 )
  {
    if ( !v10 && *v14 == v11 )
    {
      v8 = v13;
      v10 = 1;
    }
    v13 = (unsigned int)(v13 + 1);
    v14 += 4;
    if ( (unsigned int)v13 >= 0x100 )
      goto LABEL_12;
  }
  *((_QWORD *)this + 2 * v13 + 523) = a3;
  v9 = 1;
LABEL_12:
  v12 = 0;
  if ( !v9 )
  {
    if ( v10 )
    {
      v15 = 2LL * v8;
      *(_DWORD *)&v7[8 * v15] = *(_DWORD *)a2;
      *(_QWORD *)&v7[8 * v15 + 8] = a3;
      goto LABEL_17;
    }
    v12 = -2147467259;
  }
  if ( v12 < 0 )
    return (unsigned int)v12;
LABEL_17:
  v16 = 0LL;
  v17 = *((_DWORD *)this + 1042);
  v18 = (char *)this + 72;
  do
  {
    if ( *(_DWORD *)v18 != v17 )
    {
      v26[v16 + 5] = *((_QWORD *)v18 + 1);
      v16 = (unsigned int)(v16 + 1);
    }
    v18 += 16;
    --v6;
  }
  while ( v6 );
  LODWORD(v25) = v16;
  v19 = v16 - 1;
  if ( v19 >= 0 )
  {
    v20 = &v26[v19 + 5];
    while ( !(*(unsigned __int8 (__fastcall **)(_QWORD, struct DeviceInfo *))(*(_QWORD *)*v20 + 32LL))(*v20, a2) )
    {
      --v20;
      if ( --v19 < 0 )
        goto LABEL_25;
    }
    v22 = &v26[v19 + 5];
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v22 + 8LL))(*v22);
    v23 = FixedSizeMap<unsigned long,IInputProcessor *,256>::SetValueForKey((char *)this + 72, a2, v22);
    v12 = v23;
LABEL_33:
    if ( v23 >= 0 )
      return (unsigned int)(*(__int64 (__fastcall **)(_QWORD, struct DeviceInfo *))(**((_QWORD **)this + 5) + 24LL))(
                             *((_QWORD *)this + 5),
                             a2);
    return (unsigned int)v12;
  }
LABEL_25:
  v26[4] = 0LL;
  v25 = 0LL;
  v26[2] = 0LL;
  v26[0] = a2;
  if ( this )
    v21 = (char *)this + 8;
  else
    v21 = 0LL;
  v26[1] = v21;
  if ( a2 && v21 )
  {
    v12 = CreateInputProcessorWorker(v26, &v25, 0LL, 0LL);
    if ( v12 < 0 )
      return (unsigned int)v12;
    v23 = FixedSizeMap<unsigned long,IInputProcessor *,256>::SetValueForKey((char *)this + 72, a2, &v25);
    v12 = v23;
    goto LABEL_33;
  }
  if ( IsDebuggerPresent() )
    __debugbreak();
  RaiseFailFastException(0LL, 0LL, 0);
  return (unsigned int)-2147024809;
}
