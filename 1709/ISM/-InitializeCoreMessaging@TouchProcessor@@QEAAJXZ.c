/*
 * XREFs of ?InitializeCoreMessaging@TouchProcessor@@QEAAJXZ @ 0x180073594
 * Callers:
 *     ?Create@TouchProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180072ED0 (-Create@TouchProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x1800488DC (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18004890C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchProcessor::InitializeCoreMessaging(TouchProcessor *this)
{
  _QWORD *v2; // rdi
  __int64 v3; // rcx
  int Descriptor; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // r9d
  __int64 v8; // rbx
  _QWORD *v9; // rsi
  __int64 v10; // rcx
  __int64 v12; // [rsp+38h] [rbp-18h] BYREF
  char v13; // [rsp+40h] [rbp-10h]
  __int64 v14; // [rsp+70h] [rbp+20h] BYREF
  __int64 v15; // [rsp+78h] [rbp+28h] BYREF

  v14 = 0LL;
  v12 = 0LL;
  v13 = 0;
  v2 = (_QWORD *)((char *)this + 976);
  v3 = *((_QWORD *)this + 122);
  if ( v3 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  Descriptor = CoreUICreate(v2);
  v6 = Descriptor;
  if ( Descriptor < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_24;
    v7 = 289;
    goto LABEL_23;
  }
  Descriptor = InputSecurityDescriptor::QueryDescriptor((__int64)&v12, 8u, (__int64)L"System\\TouchProcessor");
  v6 = Descriptor;
  if ( Descriptor < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_24;
    v7 = 293;
    goto LABEL_23;
  }
  v8 = *v2;
  v9 = (_QWORD *)((char *)this + 984);
  v10 = *((_QWORD *)this + 123);
  if ( v10 )
  {
    *v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  Descriptor = (*(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, char *))(*(_QWORD *)v8 + 48LL))(
                 v8,
                 v12,
                 L"System\\TouchProcessor",
                 (char *)this + 984);
  v6 = Descriptor;
  if ( Descriptor < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_24;
    v7 = 298;
    goto LABEL_23;
  }
  Descriptor = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *, const void *, int), TouchProcessor *, _QWORD, __int64 *))(*(_QWORD *)*v2 + 80LL))(
                 *v2,
                 TouchProcessor::OnMessageCallbackStatic,
                 this,
                 *v9,
                 &v15);
  v6 = Descriptor;
  if ( Descriptor < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_24;
    v7 = 304;
    goto LABEL_23;
  }
  Descriptor = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v2 + 24LL))(*v2, &v14);
  v6 = Descriptor;
  if ( Descriptor < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_24;
    v7 = 306;
    goto LABEL_23;
  }
  Descriptor = (*(__int64 (__fastcall **)(__int64, const wchar_t *, __int64, __int64))(*(_QWORD *)v14 + 40LL))(
                 v14,
                 L"TouchProcessor",
                 v15,
                 1LL);
  v6 = Descriptor;
  if ( Descriptor < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v7 = 311;
LABEL_23:
    McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 0, v7, Descriptor);
  }
LABEL_24:
  if ( v14 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    v14 = 0LL;
  }
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v12);
  return v6;
}
