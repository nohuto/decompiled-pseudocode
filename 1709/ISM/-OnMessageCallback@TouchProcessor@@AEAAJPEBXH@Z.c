/*
 * XREFs of ?OnMessageCallback@TouchProcessor@@AEAAJPEBXH@Z @ 0x180073798
 * Callers:
 *     ?OnMessageCallbackStatic@TouchProcessor@@CAJPEAXPEBXH@Z @ 0x180073790 (-OnMessageCallbackStatic@TouchProcessor@@CAJPEAXPEBXH@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TouchProcessor::OnMessageCallback(TouchProcessor *this, char *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  int v6; // edi
  _QWORD *v7; // r14
  int v8; // eax
  bool v9; // zf
  int v10; // r9d
  int v11; // r9d
  _DWORD *v12; // rax
  int v13; // eax
  __int64 v15; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v16[24]; // [rsp+38h] [rbp-60h] BYREF
  __int64 v17; // [rsp+50h] [rbp-48h]
  __int64 v18; // [rsp+58h] [rbp-40h]

  v3 = 0;
  v4 = *(unsigned int *)a2;
  if ( (_DWORD)v4 )
  {
    if ( (_DWORD)v4 != 1 )
      return v3;
    v6 = 0;
    v7 = (_QWORD *)((char *)this + 184);
    while ( 1 )
    {
      if ( *((_DWORD *)v7 - 2) == 1 )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(**((_QWORD **)this + 122) + 112LL))(
               *((_QWORD *)this + 122),
               *v7,
               v16);
        v6 = v8;
        if ( v8 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            goto LABEL_20;
          v10 = 405;
          goto LABEL_19;
        }
        v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 122) + 144LL))(
               *((_QWORD *)this + 122),
               *v7);
        v6 = v8;
        if ( v8 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            goto LABEL_20;
          v10 = 408;
LABEL_19:
          McTemplateU0qqq(v4, &MinInput_Warning_CheckResult, 0, v10, v8);
          goto LABEL_20;
        }
        if ( v17 == *((_QWORD *)a2 + 4) && v18 == *((_QWORD *)a2 + 5) )
        {
          v4 = 2LL * (int)v3;
          *((_QWORD *)this + 2 * (int)v3 + 23) = 0LL;
          *((_DWORD *)this + 4 * (int)v3 + 44) = 0;
          v9 = v3 == 50;
LABEL_12:
          if ( v9 )
          {
            v3 = -2147024809;
            LOBYTE(v6) = 87;
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
              return v3;
            McTemplateU0qqq(v4, &MinInput_Warning_CheckResult, 0, 421, 87);
            goto LABEL_21;
          }
LABEL_20:
          v3 = v6;
          if ( v6 >= 0 )
            return v3;
LABEL_21:
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v11 = 351;
            goto LABEL_33;
          }
          return v3;
        }
      }
      ++v3;
      v7 += 2;
      v9 = v3 == 50;
      if ( v3 >= 0x32 )
        goto LABEL_12;
    }
  }
  v15 = 0LL;
  v12 = (_DWORD *)((char *)this + 176);
  v6 = 0;
  v4 = 0LL;
  while ( *v12 )
  {
    ++v3;
    ++v4;
    v12 += 4;
    if ( v4 >= 50 )
      goto LABEL_36;
  }
  *((_DWORD *)this + 4 * (int)v3 + 44) = 1;
  v13 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64 *))(**((_QWORD **)this + 122) + 96LL))(
          *((_QWORD *)this + 122),
          a2 + 8,
          &v15);
  v6 = v13;
  if ( v13 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v4, &MinInput_Warning_CheckResult, 0, 375, v13);
    goto LABEL_30;
  }
  *((_QWORD *)this + 2 * (int)v3 + 23) = v15;
LABEL_36:
  if ( v3 == 50 )
  {
    v3 = -2147024809;
    LOBYTE(v6) = 87;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      return v3;
    McTemplateU0qqq(v4, &MinInput_Warning_CheckResult, 0, 384, 87);
    goto LABEL_31;
  }
LABEL_30:
  v3 = v6;
  if ( v6 >= 0 )
    return v3;
LABEL_31:
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v11 = 346;
LABEL_33:
    McTemplateU0qqq(v4, &MinInput_Warning_CheckResult, 0, v11, v6);
  }
  return v3;
}
