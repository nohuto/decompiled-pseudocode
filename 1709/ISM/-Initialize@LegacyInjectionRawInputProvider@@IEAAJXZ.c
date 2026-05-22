/*
 * XREFs of ?Initialize@LegacyInjectionRawInputProvider@@IEAAJXZ @ 0x1800864BC
 * Callers:
 *     ?Create@LegacyInjectionRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x1800863E0 (-Create@LegacyInjectionRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x1800488DC (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18004890C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     ?FindRemoteProxy@LegacyInjectionRawInputProvider@@AEAAJXZ @ 0x180087490 (-FindRemoteProxy@LegacyInjectionRawInputProvider@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall LegacyInjectionRawInputProvider::Initialize(LegacyInjectionRawInputProvider *this)
{
  __int64 *v2; // rsi
  __int64 v3; // rcx
  int Descriptor; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // r9d
  __int64 v8; // rbx
  _QWORD *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v16; // [rsp+48h] [rbp-18h] BYREF
  char v17; // [rsp+50h] [rbp-10h]
  unsigned int v18; // [rsp+80h] [rbp+20h] BYREF
  __int64 v19; // [rsp+88h] [rbp+28h] BYREF

  v16 = 0LL;
  v17 = 0;
  v19 = 0LL;
  v18 = 0;
  v2 = (__int64 *)((char *)this + 48);
  v3 = *((_QWORD *)this + 6);
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
      goto LABEL_30;
    v7 = 92;
    goto LABEL_6;
  }
  Descriptor = InputSecurityDescriptor::QueryDescriptor(
                 (__int64)&v16,
                 8u,
                 (__int64)L"Input\\Injection.AlpcPort\\Server");
  v6 = Descriptor;
  if ( Descriptor >= 0 )
  {
    v8 = *v2;
    v9 = (_QWORD *)((char *)this + 56);
    v10 = *((_QWORD *)this + 7);
    if ( v10 )
    {
      *v9 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    Descriptor = (*(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, char *))(*(_QWORD *)v8 + 48LL))(
                   v8,
                   v16,
                   L"Input\\Injection.AlpcPort\\Server",
                   (char *)this + 56);
    v6 = Descriptor;
    if ( Descriptor >= 0 )
    {
      v11 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      Descriptor = CoreUIFactoryCreate(&v19);
      v6 = Descriptor;
      if ( Descriptor >= 0 )
      {
        Descriptor = (*(__int64 (__fastcall **)(__int64, GUID *, unsigned int *))(*(_QWORD *)v19 + 24LL))(
                       v19,
                       &GUID_9978c53c_56b6_4c55_ba5f_5495e889e2fe,
                       &v18);
        v6 = Descriptor;
        if ( Descriptor >= 0 )
        {
          v12 = v19;
          v13 = *((_QWORD *)this + 8);
          if ( v13 )
          {
            *((_QWORD *)this + 8) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
          }
          Descriptor = (*(__int64 (__fastcall **)(__int64, LegacyInjectionRawInputProvider *, _QWORD, _QWORD, const wchar_t *, _QWORD, char *))(*(_QWORD *)v12 + 32LL))(
                         v12,
                         this,
                         0LL,
                         v18,
                         L"IRemoteInputInjectionApi",
                         *v9,
                         (char *)this + 64);
          v6 = Descriptor;
          if ( Descriptor >= 0 )
          {
            if ( (int)LegacyInjectionRawInputProvider::FindRemoteProxy(this) < 0 )
              *((_BYTE *)this + 89) = 1;
          }
          else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v7 = 115;
            goto LABEL_6;
          }
        }
        else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v7 = 107;
          goto LABEL_6;
        }
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v7 = 103;
        goto LABEL_6;
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v7 = 101;
      goto LABEL_6;
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v7 = 96;
LABEL_6:
    McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 0, v7, Descriptor);
  }
LABEL_30:
  v14 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v16);
  return v6;
}
