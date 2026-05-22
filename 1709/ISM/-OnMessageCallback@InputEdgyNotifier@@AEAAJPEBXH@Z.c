/*
 * XREFs of ?OnMessageCallback@InputEdgyNotifier@@AEAAJPEBXH@Z @ 0x18002E788
 * Callers:
 *     ?OnMessageCallbackStatic@InputEdgyNotifier@@CAJPEAXPEBXH@Z @ 0x18002E780 (-OnMessageCallbackStatic@InputEdgyNotifier@@CAJPEAXPEBXH@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputEdgyNotifier::OnMessageCallback(InputEdgyNotifier *this, char *a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  int v5; // eax
  __int128 v6; // xmm1
  __int64 v7; // xmm0_8
  int v8; // r9d
  int v9; // eax
  int v10; // r9d
  _OWORD v12[3]; // [rsp+30h] [rbp-38h] BYREF

  v3 = 0;
  v4 = *(unsigned int *)a2;
  if ( (_DWORD)v4 )
  {
    if ( (_DWORD)v4 == 1 )
    {
      if ( *((_QWORD *)this + 5)
        && *((_QWORD *)this + 9) == *((_QWORD *)a2 + 4)
        && *((_QWORD *)this + 10) == *((_QWORD *)a2 + 5)
        && *((_QWORD *)this + 7) == *((_QWORD *)a2 + 2)
        && *((_QWORD *)this + 8) == *((_QWORD *)a2 + 3)
        && *((_DWORD *)this + 12) == *((_DWORD *)a2 + 2)
        && *((_DWORD *)this + 13) == *((_DWORD *)a2 + 3) )
      {
        v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 144LL))(
               *((_QWORD *)this + 2),
               *((_QWORD *)this + 5));
        v3 = v5;
        if ( v5 >= 0 )
        {
          *((_QWORD *)this + 5) = 0LL;
          memset(v12, 0, 0x28uLL);
          v6 = v12[1];
          *((_OWORD *)this + 3) = v12[0];
          v7 = *(_QWORD *)&v12[2];
          *((_OWORD *)this + 4) = v6;
          *((_QWORD *)this + 10) = v7;
        }
        else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          McTemplateU0qqq(v4, &MinInput_Warning_CheckResult, 0, 177, v5);
        }
      }
      if ( v3 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v8 = 209;
LABEL_28:
        McTemplateU0qqq(v4, &MinInput_Warning_CheckResult, 0, v8, v3);
        return (unsigned int)v3;
      }
    }
    return (unsigned int)v3;
  }
  if ( !*((_QWORD *)this + 5) )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 2) + 96LL))(
           *((_QWORD *)this + 2),
           a2 + 8,
           (char *)this + 40);
    v3 = v9;
    if ( v9 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 2) + 112LL))(
             *((_QWORD *)this + 2),
             *((_QWORD *)this + 5),
             (char *)this + 48);
      v3 = v9;
      if ( v9 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v10 = 155;
        goto LABEL_24;
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v10 = 151;
LABEL_24:
      McTemplateU0qqq(v4, &MinInput_Warning_CheckResult, 0, v10, v9);
    }
  }
  if ( v3 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v8 = 204;
    goto LABEL_28;
  }
  return (unsigned int)v3;
}
