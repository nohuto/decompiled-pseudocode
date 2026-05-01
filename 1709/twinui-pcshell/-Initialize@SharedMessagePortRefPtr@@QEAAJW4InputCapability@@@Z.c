/*
 * XREFs of ?Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z @ 0x1801BF07C
 * Callers:
 *     ?RuntimeClassInitialize@TabTipAdapter@KeyboardHosting@@QEAAJPEAVTouchKeyboardExperienceManager@@@Z @ 0x1801A1B48 (-RuntimeClassInitialize@TabTipAdapter@KeyboardHosting@@QEAAJPEAVTouchKeyboardExperienceManager@@.c)
 * Callees:
 *     McTemplateU0sqq @ 0x1801BE404 (McTemplateU0sqq.c)
 *     ?IsPhone@@YA_NXZ @ 0x1801BF2C8 (-IsPhone@@YA_NXZ.c)
 *     ?SecurityShim_SharedMessagePortSecurity@@YAJPEBGPEAPEAX@Z @ 0x1801BF300 (-SecurityShim_SharedMessagePortSecurity@@YAJPEBGPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SharedMessagePortRefPtr::Initialize(_QWORD *a1)
{
  void *v2; // rsi
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // r9d
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  const wchar_t *v11; // rax
  const wchar_t *v12; // rdx
  int v13; // ecx
  __int64 v14; // rdi
  __int64 v16; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v17; // [rsp+38h] [rbp-18h] BYREF
  const wchar_t *v18; // [rsp+40h] [rbp-10h]
  __int64 v19; // [rsp+90h] [rbp+40h] BYREF
  void *v20; // [rsp+98h] [rbp+48h] BYREF

  v16 = 0LL;
  v19 = 0LL;
  v2 = 0LL;
  v20 = 0LL;
  v3 = CoreUIClientCreate(&v16);
  v6 = v3;
  if ( v3 < 0 )
  {
    if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
      goto LABEL_26;
    v7 = 112;
    goto LABEL_4;
  }
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 56LL))(v16, &v19);
  v6 = v3;
  if ( v3 >= 0 )
  {
    v8 = SecurityShim_SharedMessagePortSecurity(L"Input\\Core.AlpcPort\\Server", &v20);
    v6 = v8 | 0x10000000;
    if ( v8 >= 0 )
    {
      v11 = L"Input\\Core.AlpcPort\\Server";
      if ( L"Input\\Core.AlpcPort\\Server" )
      {
        v12 = L"Input\\Core.AlpcPort\\Server";
        v18 = L"Input\\Core.AlpcPort\\Server";
        v13 = 0;
        while ( *v11 )
        {
          ++v11;
          ++v13;
        }
        v17 = v13 | 0x80000000;
      }
      else
      {
        v12 = 0LL;
        v18 = 0LL;
      }
      v2 = v20;
      v3 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, void *, _QWORD *))(*(_QWORD *)v19 + 24LL))(
             v19,
             (unsigned __int64)&v17 & -(__int64)(v12 != 0LL),
             v20,
             a1 + 1);
      v6 = v3;
      if ( v3 >= 0 )
      {
        v14 = v19;
        if ( v19 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
        if ( *a1 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
          *a1 = 0LL;
        }
        *a1 = v14;
      }
      else if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
      {
        v7 = 124;
        goto LABEL_4;
      }
    }
    else
    {
      if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
        McTemplateU0sqq(v10, v9, "SharedMessagePortRefPtr::Initialize", 119, v8);
      v2 = v20;
    }
  }
  else if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
  {
    v7 = 115;
LABEL_4:
    McTemplateU0sqq(v5, v4, "SharedMessagePortRefPtr::Initialize", v7, v3);
  }
LABEL_26:
  if ( v16 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    v16 = 0LL;
  }
  if ( v19 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    v19 = 0LL;
  }
  if ( IsPhone() )
    FreeTransientObjectSecurityDescriptor(v2);
  else
    LocalFree(v2);
  return v6;
}
