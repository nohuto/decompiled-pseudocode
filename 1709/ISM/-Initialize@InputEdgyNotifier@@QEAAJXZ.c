/*
 * XREFs of ?Initialize@InputEdgyNotifier@@QEAAJXZ @ 0x18002E488
 * Callers:
 *     ?Create@EdgeGestureComponent@@SAJPEAUIDWMInputProxy@@PEAUIInputDisplay@@PEAPEAV1@@Z @ 0x180029FEC (-Create@EdgeGestureComponent@@SAJPEAUIDWMInputProxy@@PEAUIInputDisplay@@PEAPEAV1@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x1800488DC (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18004890C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InputEdgyNotifier::Initialize(InputEdgyNotifier *this)
{
  _QWORD *v2; // rdi
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  signed int LastError; // ebx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  _QWORD *v10; // r14
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rbx
  _QWORD *v17; // rdi
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  HANDLE v25; // rdi
  __int64 v26; // rcx
  int v27; // r9d
  void *v29; // [rsp+38h] [rbp-38h] BYREF
  char v30; // [rsp+40h] [rbp-30h]
  __int64 v31; // [rsp+48h] [rbp-28h] BYREF
  char v32; // [rsp+50h] [rbp-20h]
  _SECURITY_ATTRIBUTES EventAttributes; // [rsp+58h] [rbp-18h] BYREF
  __int64 v34; // [rsp+90h] [rbp+20h] BYREF

  v31 = 0LL;
  v32 = 0;
  v29 = 0LL;
  v30 = 0;
  v2 = (_QWORD *)((char *)this + 16);
  v3 = *((_QWORD *)this + 2);
  if ( v3 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = CoreUICreate(v2);
  LastError = v4;
  if ( v4 >= 0 )
  {
    v7 = InputSecurityDescriptor::QueryDescriptor(&v31, 8LL, L"System\\InputEdgyNotifier");
    LastError = v7;
    if ( v7 >= 0 )
    {
      v9 = *v2;
      v10 = (_QWORD *)((char *)this + 32);
      v11 = *((_QWORD *)this + 4);
      if ( v11 )
      {
        *v10 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      v12 = (*(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, char *))(*(_QWORD *)v9 + 48LL))(
              v9,
              v31,
              L"System\\InputEdgyNotifier",
              (char *)this + 32);
      LastError = v12;
      if ( v12 >= 0 )
      {
        v14 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *, const void *, int), InputEdgyNotifier *, _QWORD, __int64 *))(*(_QWORD *)*v2 + 80LL))(
                *v2,
                InputEdgyNotifier::OnMessageCallbackStatic,
                this,
                *v10,
                &v34);
        LastError = v14;
        if ( v14 >= 0 )
        {
          v16 = *v2;
          v17 = (_QWORD *)((char *)this + 24);
          v18 = *((_QWORD *)this + 3);
          if ( v18 )
          {
            *v17 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
          }
          v19 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v16 + 24LL))(v16, (char *)this + 24);
          LastError = v19;
          if ( v19 >= 0 )
          {
            v21 = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, __int64, __int64))(*(_QWORD *)*v17 + 40LL))(
                    *v17,
                    L"InputEdgyNotifier",
                    v34,
                    1LL);
            LastError = v21;
            if ( v21 >= 0 )
            {
              v23 = InputSecurityDescriptor::QueryDescriptor(&v29, 1LL, L"EdgyNotifier Started");
              LastError = v23;
              if ( v23 >= 0 )
              {
                EventAttributes.nLength = 24;
                EventAttributes.lpSecurityDescriptor = v29;
                EventAttributes.bInheritHandle = 0;
                v25 = CreateEventW(&EventAttributes, 1, 0, L"EdgyNotifier Started");
                if ( v25
                  || ((int)GetLastError() > 0
                    ? (LastError = (unsigned __int16)GetLastError() | 0x80070000)
                    : (LastError = GetLastError()),
                      LastError >= 0) )
                {
                  if ( SetEvent(v25) )
                    goto LABEL_39;
                  LastError = -2147467259;
                  if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
                    goto LABEL_39;
                  v27 = 121;
                }
                else
                {
                  if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
                    goto LABEL_39;
                  v27 = 116;
                }
                McTemplateU0qqq(v26, &MinInput_Warning_CheckResult, 0, v27, LastError);
                goto LABEL_39;
              }
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
                McTemplateU0qqq(v24, &MinInput_Warning_CheckResult, 0, 102, v23);
            }
            else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            {
              McTemplateU0qqq(v22, &MinInput_Warning_CheckResult, 0, 93, v21);
            }
          }
          else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            McTemplateU0qqq(v20, &MinInput_Warning_CheckResult, 0, 88, v19);
          }
        }
        else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          McTemplateU0qqq(v15, &MinInput_Warning_CheckResult, 0, 86, v14);
        }
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        McTemplateU0qqq(v13, &MinInput_Warning_CheckResult, 0, 80, v12);
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      McTemplateU0qqq(v8, &MinInput_Warning_CheckResult, 0, 75, v7);
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 0, 71, v4);
  }
LABEL_39:
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v29);
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v31);
  return (unsigned int)LastError;
}
