/*
 * XREFs of ?OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z @ 0x18006DDB0
 * Callers:
 *     ?OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKKGG0@Z @ 0x18006DAB0 (-OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKKGG0@Z.c)
 * Callees:
 *     ?Close@RIMDeviceCollection@@IEAAXXZ @ 0x18006D864 (-Close@RIMDeviceCollection@@IEAAXXZ.c)
 *     ?ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ @ 0x18006DA4C (-ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ.c)
 *     ?CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z @ 0x18006DFF0 (-CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RIMDeviceCollection::OnReadCallbackStatic(RIMDeviceCollection *this, int a2, void *a3)
{
  int v4; // eax
  __int64 v5; // r8
  char v6; // bp
  __int64 v7; // r9
  unsigned int v8; // edx
  __int64 *v9; // rcx
  __int64 v10; // rax
  int Buffer; // edi
  unsigned int *v12; // rcx
  unsigned int v13; // esi
  int InputReportFromRIM; // eax

  if ( a2 )
    return 0LL;
  v4 = *((_DWORD *)this + 680);
  v5 = 0LL;
  v6 = 0;
  if ( v4 == -1073741528 )
  {
    RIMDeviceCollection::Close(this);
    return 0LL;
  }
  if ( v4 < 0 )
    return 0LL;
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
      Buffer = -2147023728;
      goto LABEL_11;
    }
  }
  v5 = *v9;
  Buffer = 0;
LABEL_11:
  if ( Buffer < 0 )
  {
    Buffer = 0;
  }
  else
  {
    v12 = *(unsigned int **)(v5 + 32);
    v13 = *((unsigned __int16 *)this + 1364);
    if ( (v12[1] & 0xFFFFFEFF) != 0 )
      (*(void (__fastcall **)(RIMDeviceCollection *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(
        this,
        *v12,
        *((_QWORD *)this + 337),
        *((unsigned __int16 *)this + 1364));
    if ( *((_QWORD *)this + 337) != *((_QWORD *)this + 335) )
    {
      v6 = 1;
      RIMFreeInputBuffer(*((_QWORD *)this + 10));
      *((_QWORD *)this + 337) = 0LL;
      Buffer = RIMDeviceCollection::CreateReadBuffer(this, v13);
      if ( Buffer < 0 )
        goto LABEL_25;
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
      Buffer = InputReportFromRIM | 0x10000000;
  }
  if ( Buffer < 0 && v6 )
  {
LABEL_25:
    if ( *((_QWORD *)this + 337) )
    {
      RIMFreeInputBuffer(*((_QWORD *)this + 10));
      *((_QWORD *)this + 337) = 0LL;
    }
  }
  return 0LL;
}
