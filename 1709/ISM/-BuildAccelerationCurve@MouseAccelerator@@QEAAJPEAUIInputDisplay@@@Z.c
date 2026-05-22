/*
 * XREFs of ?BuildAccelerationCurve@MouseAccelerator@@QEAAJPEAUIInputDisplay@@@Z @ 0x18006D1B8
 * Callers:
 *     ?Initialize@MouseProcessor@@IEAAJPEBGJ@Z @ 0x18006BB64 (-Initialize@MouseProcessor@@IEAAJPEBGJ@Z.c)
 *     ?GetDisplayInformation@MouseProcessor@@AEAAJXZ @ 0x18006CB64 (-GetDisplayInformation@MouseProcessor@@AEAAJXZ.c)
 *     ?OnMouseRegistryKeyChange@MouseAccelerator@@AEAAXPEAUHKEY__@@@Z @ 0x18006CFC4 (-OnMouseRegistryKeyChange@MouseAccelerator@@AEAAXPEAUHKEY__@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MouseAccelerator::BuildAccelerationCurve(MouseAccelerator *this, struct IInputDisplay *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rsi
  signed int v10; // edx
  __int64 *v11; // rcx
  unsigned int v12; // r8d
  __int64 v13; // rax
  unsigned int v14; // r9d
  _QWORD *v15; // r8
  __int64 v16; // r10
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v20; // [rsp+30h] [rbp-88h] BYREF
  _DWORD v21[24]; // [rsp+40h] [rbp-78h] BYREF

  memset(v21, 0, sizeof(v21));
  if ( a2 )
  {
    if ( *((struct IInputDisplay **)this + 33) != a2 )
    {
      (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)a2 + 8LL))(a2);
      v6 = *((_QWORD *)this + 33);
      *((_QWORD *)this + 33) = a2;
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    v7 = (*(__int64 (__fastcall **)(struct IInputDisplay *, __int64 *))(*(_QWORD *)a2 + 24LL))(a2, &v20);
    v5 = v7;
    if ( v7 >= 0 )
    {
      v9 = ((__int64)*((int *)this + 65) << 16) / 10;
      if ( !v20 || !(unsigned int)GetCurrentDpiInfo(v20, v21) || (v10 = (96 * v21[2] + 50) / 0x64u, v10 < 96) )
        v10 = 96;
      v11 = (__int64 *)((char *)this + 120);
      v12 = 0;
      do
      {
        ++v12;
        *v11 = (v9 * ((((__int64)v10 << 16) / 120 * *(v11 - 10)) >> 16)) >> 16;
        v13 = 229376 * *(v11 - 15);
        *(++v11 - 6) = v13 >> 16;
      }
      while ( v12 < 5 );
      v14 = 1;
      v15 = (_QWORD *)((char *)this + 88);
      do
      {
        v16 = *v15 - *(v15 - 1);
        if ( *v15 == *(v15 - 1) )
        {
          v15[13] &= v16;
          v15[9] &= v16;
        }
        else
        {
          v17 = v15[4];
          v18 = ((v15[5] - v17) << 16) / v16;
          v15[9] = v18;
          v15[13] = v17 - ((*(v15 - 1) * v18) >> 16);
        }
        ++v14;
        ++v15;
      }
      while ( v14 < 5 );
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      McTemplateU0qqq(v8, &MinInput_Warning_CheckResult, 0, 181, v7);
    }
  }
  else
  {
    v5 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v4, &MinInput_Warning_CheckResult, 0, 177, 87);
  }
  return v5;
}
