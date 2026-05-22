/*
 * XREFs of ?SendDeviceCommand@InputStateManager@@UEAAJKPEAUDeviceCommandMessage@@@Z @ 0x1800073C0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?GetValueForKey@?$FixedSizeMap@KPEAUIRawInputProvider@@$0BAA@@@QEAAJAEBKPEAPEAUIRawInputProvider@@@Z @ 0x180007544 (-GetValueForKey@-$FixedSizeMap@KPEAUIRawInputProvider@@$0BAA@@@QEAAJAEBKPEAPEAUIRawInputProvider.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputStateManager::SendDeviceCommand(
        InputStateManager *this,
        unsigned int a2,
        struct DeviceCommandMessage *a3)
{
  char *v5; // rbp
  __int64 v6; // rdi
  _DWORD *v7; // rcx
  __int64 v8; // r8
  unsigned int v9; // ebx
  __int64 v10; // rsi
  int ValueForKey; // eax
  __int64 v12; // rcx
  int v13; // r9d
  __int64 v15; // [rsp+30h] [rbp-448h] BYREF
  _QWORD v16[129]; // [rsp+38h] [rbp-440h] BYREF

  LODWORD(v15) = a2;
  if ( a2 )
  {
    v16[0] = 0LL;
    if ( (int)FixedSizeMap<unsigned long,IRawInputProvider *,256>::GetValueForKey((char *)this + 4168, &v15, v16) >= 0 )
    {
      ValueForKey = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct DeviceCommandMessage *))(*(_QWORD *)v16[0] + 24LL))(
                      v16[0],
                      a2,
                      a3);
      v9 = ValueForKey;
      if ( ValueForKey < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_21;
        v13 = 844;
        goto LABEL_20;
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v5 = (char *)this + 4168;
    v6 = 0LL;
    v7 = (_DWORD *)((char *)this + 4168);
    v8 = 256LL;
    do
    {
      if ( *v7 != *((_DWORD *)v5 + 1024) )
      {
        *((_DWORD *)&v16[1] + v6) = *v7;
        v6 = (unsigned int)(v6 + 1);
      }
      v7 += 4;
      --v8;
    }
    while ( v8 );
    v9 = 0;
    LODWORD(v15) = v6;
    v10 = 0LL;
    if ( (_DWORD)v6 )
    {
      while ( 1 )
      {
        v15 = 0LL;
        ValueForKey = FixedSizeMap<unsigned long,IRawInputProvider *,256>::GetValueForKey(
                        v5,
                        (char *)&v16[1] + 4 * v10,
                        &v15);
        if ( ValueForKey < 0 )
          break;
        ValueForKey = (*(__int64 (__fastcall **)(__int64, _QWORD, struct DeviceCommandMessage *))(*(_QWORD *)v15 + 24LL))(
                        v15,
                        *((unsigned int *)&v16[1] + v10),
                        a3);
        v9 = ValueForKey;
        if ( ValueForKey < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v13 = 819;
            goto LABEL_20;
          }
LABEL_21:
          if ( IsDebuggerPresent() )
            __debugbreak();
          __fastfail(7u);
        }
        v10 = (unsigned int)(v10 + 1);
        if ( (unsigned int)v10 >= (unsigned int)v6 )
          return v9;
      }
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_21;
      v13 = 815;
LABEL_20:
      McTemplateU0qqq(v12, &MinInput_Warning_CheckResult, 1, v13, ValueForKey);
      goto LABEL_21;
    }
  }
  return v9;
}
