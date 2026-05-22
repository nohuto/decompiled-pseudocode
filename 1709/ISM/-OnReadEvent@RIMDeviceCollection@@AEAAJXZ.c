/*
 * XREFs of ?OnReadEvent@RIMDeviceCollection@@AEAAJXZ @ 0x180089828
 * Callers:
 *     ?OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z @ 0x180089550 (-OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?Close@RIMDeviceCollection@@IEAAXXZ @ 0x180089098 (-Close@RIMDeviceCollection@@IEAAXXZ.c)
 *     ?ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ @ 0x1800892D8 (-ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ.c)
 *     ?CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z @ 0x180089798 (-CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RIMDeviceCollection::OnReadEvent(RIMDeviceCollection *this)
{
  int v1; // eax
  int v2; // ebx
  __int64 v3; // r8
  char v4; // bp
  int v6; // r9d
  __int64 v7; // r9
  unsigned int v8; // edx
  __int64 *v9; // rcx
  __int64 v10; // rax
  unsigned int *v11; // rcx
  unsigned int v12; // esi
  int Buffer; // eax
  __int64 v14; // rcx
  int InputReportFromRIM; // eax

  v1 = *((_DWORD *)this + 680);
  v2 = 0;
  v3 = 0LL;
  v4 = 0;
  if ( v1 == -1073741528 )
  {
    RIMDeviceCollection::Close(this);
    return (unsigned int)v2;
  }
  if ( v1 >= 0 )
  {
    v7 = *((_QWORD *)this + 338);
    v8 = 0;
    v9 = (__int64 *)((char *)this + 624);
    while ( 1 )
    {
      v10 = *v9;
      if ( *v9 )
      {
        if ( *(_QWORD *)(v10 + 16) == v7 || !*(_DWORD *)(v10 + 40) )
          break;
      }
      ++v8;
      ++v9;
      if ( v8 >= 0x100 )
      {
        v2 = -2147023728;
        goto LABEL_12;
      }
    }
    v3 = *v9;
    v2 = 0;
LABEL_12:
    if ( v2 < 0 )
    {
      v2 = 0;
    }
    else
    {
      v11 = *(unsigned int **)(v3 + 32);
      v12 = *((unsigned __int16 *)this + 1364);
      if ( (v11[1] & 0xFFFFFEFF) != 0 )
        (*(void (__fastcall **)(RIMDeviceCollection *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(
          this,
          *v11,
          *((_QWORD *)this + 337),
          *((unsigned __int16 *)this + 1364));
      if ( *((_QWORD *)this + 337) != *((_QWORD *)this + 335) )
      {
        v4 = 1;
        RIMFreeInputBuffer(*((_QWORD *)this + 10));
        *((_QWORD *)this + 337) = 0LL;
        Buffer = RIMDeviceCollection::CreateReadBuffer(this, v12);
        v2 = Buffer;
        if ( Buffer < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            McTemplateU0qqq(v14, &MinInput_Warning_CheckResult, 2, 693, Buffer);
          goto LABEL_27;
        }
      }
    }
    if ( *((_BYTE *)this + 2736) )
    {
      SetEvent(*((HANDLE *)this + 7));
    }
    else
    {
      InputReportFromRIM = RIMDeviceCollection::ReadInputReportFromRIM(this);
      if ( InputReportFromRIM < 0 )
      {
        v2 = InputReportFromRIM | 0x10000000;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v6 = 718;
          goto LABEL_26;
        }
      }
    }
  }
  else
  {
    v2 = v1 | 0x10000000;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 641;
LABEL_26:
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 2, v6, v2);
    }
  }
LABEL_27:
  if ( v2 < 0 && v4 && *((_QWORD *)this + 337) )
  {
    RIMFreeInputBuffer(*((_QWORD *)this + 10));
    *((_QWORD *)this + 337) = 0LL;
  }
  return (unsigned int)v2;
}
