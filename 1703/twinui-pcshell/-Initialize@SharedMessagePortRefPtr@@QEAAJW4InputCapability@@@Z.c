/*
 * XREFs of ?Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z @ 0x1801734DC
 * Callers:
 *     ?RuntimeClassInitialize@TabTipAdapter@@QEAAJPEAUITabTipAdapterOwner@@@Z @ 0x18016DF3C (-RuntimeClassInitialize@TabTipAdapter@@QEAAJPEAUITabTipAdapterOwner@@@Z.c)
 * Callees:
 *     Template_sqq @ 0x180172A34 (Template_sqq.c)
 *     ?IsOneCoreEdition@@YAHXZ @ 0x180173770 (-IsOneCoreEdition@@YAHXZ.c)
 *     ?SecurityShim_SharedMessagePortSecurity@@YAJPEBGPEAPEAX@Z @ 0x180173800 (-SecurityShim_SharedMessagePortSecurity@@YAJPEBGPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
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
  HMODULE Library; // rax
  HMODULE v16; // rdi
  FARPROC ProcAddress; // rax
  __int64 v19; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v20; // [rsp+38h] [rbp-18h] BYREF
  const wchar_t *v21; // [rsp+40h] [rbp-10h]
  __int64 v22; // [rsp+90h] [rbp+40h] BYREF
  void *v23; // [rsp+98h] [rbp+48h] BYREF

  v19 = 0LL;
  v22 = 0LL;
  v2 = 0LL;
  v23 = 0LL;
  v3 = CoreUIClientCreate(&v19);
  v6 = v3;
  if ( v3 < 0 )
  {
    if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
      goto LABEL_26;
    v7 = 112;
    goto LABEL_4;
  }
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 56LL))(v19, &v22);
  v6 = v3;
  if ( v3 >= 0 )
  {
    v8 = SecurityShim_SharedMessagePortSecurity(L"Input\\Core.AlpcPort\\Server", &v23);
    v6 = v8 | 0x10000000;
    if ( v8 >= 0 )
    {
      v11 = L"Input\\Core.AlpcPort\\Server";
      if ( L"Input\\Core.AlpcPort\\Server" )
      {
        v12 = L"Input\\Core.AlpcPort\\Server";
        v21 = L"Input\\Core.AlpcPort\\Server";
        v13 = 0;
        while ( *v11 )
        {
          ++v11;
          ++v13;
        }
        v20 = v13 | 0x80000000;
      }
      else
      {
        v12 = 0LL;
        v21 = 0LL;
      }
      v2 = v23;
      v3 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, void *, _QWORD *))(*(_QWORD *)v22 + 24LL))(
             v22,
             (unsigned __int64)&v20 & -(__int64)(v12 != 0LL),
             v23,
             a1 + 1);
      v6 = v3;
      if ( v3 >= 0 )
      {
        v14 = v22;
        if ( v22 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
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
        Template_sqq(v10, v9, "SharedMessagePortRefPtr::Initialize", 119, v8);
      v2 = v23;
    }
  }
  else if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
  {
    v7 = 115;
LABEL_4:
    Template_sqq(v5, v4, "SharedMessagePortRefPtr::Initialize", v7, v3);
  }
LABEL_26:
  if ( v19 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    v19 = 0LL;
  }
  if ( v22 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    v22 = 0LL;
  }
  if ( (unsigned int)IsOneCoreEdition()
    || (Library = LoadLibraryExW(L"secruntime.dll", 0LL, 0x800u), (v16 = Library) == 0LL) )
  {
    LocalFree(v2);
  }
  else
  {
    ProcAddress = GetProcAddress(Library, "FreeTransientObjectSecurityDescriptor");
    if ( !ProcAddress )
      MEMORY[0] = 206;
    ((void (__fastcall *)(void *))ProcAddress)(v2);
    FreeLibrary(v16);
  }
  return v6;
}
