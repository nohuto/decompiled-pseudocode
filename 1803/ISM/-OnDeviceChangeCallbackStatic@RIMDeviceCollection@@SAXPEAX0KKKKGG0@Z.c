/*
 * XREFs of ?OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKKGG0@Z @ 0x18006DAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z @ 0x18006DDB0 (-OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z.c)
 *     ?DetachDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z @ 0x18006E474 (-DetachDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RIMDeviceCollection::OnDeviceChangeCallbackStatic(
        void *a1,
        void *a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int16 a7,
        unsigned __int16 a8,
        RIMDeviceCollection *a9)
{
  int v11; // r9d
  int v12; // r9d
  RIMDeviceCollection *v13; // rsi
  int v14; // edx
  __int64 *i; // rcx
  __int64 v16; // rdi
  __int64 v17; // rdi
  bool v18; // zf
  RIMDeviceCollection *v19; // rdi
  int v20; // edx
  __int64 *j; // rcx
  __int64 v22; // rsi
  void *v23; // rcx
  RIMDeviceCollection *v24; // rdi
  unsigned int v25; // eax
  __int64 v26; // rcx
  unsigned int v27; // r14d
  _QWORD *v28; // r8
  unsigned int v29; // r9d
  __int64 *v30; // rdx
  __int64 v31; // rcx
  int v32; // ecx
  __int64 v33; // rdx
  RIMDeviceCollection *v34; // r8
  void *v35; // rcx
  __int64 v36; // [rsp+50h] [rbp+8h] BYREF

  v11 = a4 - 2;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      if ( v12 == 2 )
      {
        v13 = a9;
        v14 = 0;
        for ( i = (__int64 *)((char *)a9 + 624); ; ++i )
        {
          v16 = *i;
          if ( *i )
          {
            if ( *(void **)(v16 + 16) == a2 || !*(_DWORD *)(v16 + 40) )
              break;
          }
          if ( (unsigned int)++v14 >= 0x100 )
            return;
        }
        v17 = *(_QWORD *)(v16 + 32);
        if ( *(_DWORD *)(v17 + 8) < 0x3D8u )
        {
          if ( IsDebuggerPresent() )
            __debugbreak();
          RaiseFailFastException(0LL, 0LL, 0);
        }
        v18 = (*(_DWORD *)(v17 + 4) & 0xFFFFFEFF) == 0;
        *(_BYTE *)(v17 + 42) = 1;
        if ( v18
          || (*(int (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v13 + 2) + 48LL))(*((_QWORD *)v13 + 2), v17) >= 0 )
        {
          *(_BYTE *)(v17 + 42) = 0;
        }
      }
    }
    else
    {
      v19 = a9;
      v20 = 0;
      for ( j = (__int64 *)((char *)a9 + 624); ; ++j )
      {
        v22 = *j;
        if ( *j )
        {
          if ( *(void **)(v22 + 16) == a2 || !*(_DWORD *)(v22 + 40) )
            break;
        }
        if ( (unsigned int)++v20 >= 0x100 )
          return;
      }
      v23 = (void *)*((_QWORD *)a9 + 5);
      if ( !v23
        || WaitForSingleObject(v23, 0)
        || (*((_BYTE *)v19 + 2736) = 1, (int)RIMDeviceCollection::OnReadCallbackStatic(v19, 0, 0LL) >= 0) )
      {
        RIMDeviceCollection::DetachDevice(v19, (struct RIMDevice *)v22);
      }
    }
  }
  else
  {
    v24 = a9;
    if ( !*((_QWORD *)a9 + 10) )
      *((_QWORD *)a9 + 10) = a1;
    v25 = (*(__int64 (__fastcall **)(RIMDeviceCollection *))(*(_QWORD *)v24 + 96LL))(v24);
    v26 = *(_QWORD *)v24;
    v27 = v25;
    v36 = 0LL;
    a9 = 0LL;
    if ( (*(int (__fastcall **)(RIMDeviceCollection *, void *, void *, _QWORD, unsigned int, __int64 *))(v26 + 80))(
           v24,
           a1,
           a2,
           a5,
           v25,
           &v36) >= 0
      && *((_DWORD *)v24 + 668) < 0x100u )
    {
      v28 = (_QWORD *)((char *)v24 + 624);
      v29 = 0;
      v30 = (__int64 *)((char *)v24 + 624);
      while ( 1 )
      {
        v31 = *v30;
        if ( *v30 )
        {
          if ( *(_QWORD *)(v31 + 16) == *(_QWORD *)(v36 + 16) || !*(_DWORD *)(v31 + 40) )
            break;
        }
        ++v29;
        ++v30;
        if ( v29 >= 0x100 )
        {
          v32 = -2147023728;
          goto LABEL_37;
        }
      }
      v32 = 0;
LABEL_37:
      if ( v32 == -2147023728 )
      {
        v33 = 0LL;
        while ( *v28 )
        {
          v33 = (unsigned int)(v33 + 1);
          ++v28;
          if ( (unsigned int)v33 >= 0x100 )
            goto LABEL_44;
        }
        *((_QWORD *)v24 + v33 + 78) = v36;
        ++*((_DWORD *)v24 + 668);
        v32 = 0;
LABEL_44:
        if ( v32 >= 0
          && (*(int (__fastcall **)(RIMDeviceCollection *, _QWORD, RIMDeviceCollection **))(*(_QWORD *)v24 + 56LL))(
               v24,
               v27,
               &a9) >= 0 )
        {
          v34 = a9;
          if ( a9 )
          {
            if ( *((_DWORD *)a9 + 1) )
            {
              *(_DWORD *)a9 = v27;
              RIMGetSourceProcessId(a1, a2, (char *)v34 + 12);
              if ( *(_DWORD *)a9 == *(_DWORD *)(v36 + 40) )
              {
                if ( *((_DWORD *)a9 + 1) )
                {
                  *(_QWORD *)(v36 + 32) = a9;
                  if ( (*((_DWORD *)a9 + 1) & 0xFFFFFEFF) == 0
                    || (*(int (__fastcall **)(_QWORD, RIMDeviceCollection *, _QWORD))(**((_QWORD **)v24 + 2) + 40LL))(
                         *((_QWORD *)v24 + 2),
                         a9,
                         *((_QWORD *)v24 + 3)) >= 0 )
                  {
                    v35 = (void *)*((_QWORD *)v24 + 7);
                    if ( v35 )
                    {
                      *((_BYTE *)v24 + 2736) = 1;
                      SetEvent(v35);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}
