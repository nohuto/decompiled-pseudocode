/*
 * XREFs of DrvDbGetDeviceIdMappedProperty @ 0x140531474
 * Callers:
 *     DrvDbDispatchDeviceId @ 0x1405305C0 (DrvDbDispatchDeviceId.c)
 * Callees:
 *     wcschr @ 0x140160420 (wcschr.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     DrvDbGetRegValueMappedProperty @ 0x140530A4C (DrvDbGetRegValueMappedProperty.c)
 *     DrvDbOpenObjectRegKey @ 0x14053360C (DrvDbOpenObjectRegKey.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x14058445C (DrvDbGetDeviceIdDriverInfMatches.c)
 */

__int64 __fastcall DrvDbGetDeviceIdMappedProperty(
        __int64 a1,
        __int64 a2,
        HANDLE a3,
        __int64 a4,
        _DWORD *a5,
        _WORD *a6,
        unsigned int a7,
        int *a8)
{
  int v12; // r11d
  int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rax
  char v16; // di
  wchar_t *v17; // rax
  _QWORD *v18; // r12
  int v19; // eax
  int v20; // ecx
  int DeviceIdDriverInfMatches; // ebx
  int v23; // ecx
  int v24; // edx
  unsigned __int64 v25; // rax
  wchar_t *v26; // rax
  HANDLE v27; // rdx
  int v28; // eax
  __int64 v29; // rax
  unsigned int v30; // edx
  __int64 **i; // r8
  __int64 *v32; // r10
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 **v35; // rdi
  int v36; // [rsp+40h] [rbp-10h] BYREF
  int v37; // [rsp+44h] [rbp-Ch]
  HANDLE Handle; // [rsp+48h] [rbp-8h] BYREF
  char v40; // [rsp+A8h] [rbp+58h]
  char v41; // [rsp+C8h] [rbp+78h]

  Handle = 0LL;
  v36 = 0;
  *a5 = 0;
  *a8 = 0;
  v12 = *(_DWORD *)(a4 + 16);
  v13 = DEVPKEY_DeviceId_DriverInfMatches;
  v37 = 0;
  v40 = 0;
  if ( v12 == 3 )
  {
    v14 = *(_QWORD *)a4 - DEVPKEY_DeviceId_DriverInfMatches;
    if ( *(_QWORD *)a4 == DEVPKEY_DeviceId_DriverInfMatches )
      v14 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v14 )
      goto LABEL_8;
  }
  if ( v12 == 2 )
  {
    v29 = *(_QWORD *)a4 - DEVPKEY_DeviceId_DriverInfNames;
    if ( *(_QWORD *)a4 == DEVPKEY_DeviceId_DriverInfNames )
      v29 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v29 )
    {
LABEL_8:
      if ( v12 != 3 )
        goto LABEL_56;
      v15 = *(_QWORD *)a4 - DEVPKEY_DeviceId_DriverInfMatches;
      if ( *(_QWORD *)a4 == DEVPKEY_DeviceId_DriverInfMatches )
        v15 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( v15 )
      {
LABEL_56:
        v16 = 0;
        v41 = 0;
      }
      else
      {
        v16 = 1;
        v41 = 1;
      }
      if ( *(_WORD *)a2 != 64 || (v26 = wcschr((const wchar_t *)(a2 + 2), 0x3Au)) == 0LL || (v17 = v26 + 1) == 0LL )
        v17 = (wchar_t *)a2;
      if ( v17 != (wchar_t *)a2 || *(_QWORD *)(a1 + 40) )
      {
        v27 = 0LL;
        if ( a3 != (HANDLE)-1LL )
          v27 = a3;
        if ( !v27 )
        {
          DeviceIdDriverInfMatches = DrvDbOpenObjectRegKey(a1, 0, 5, a2, 1, 0, (__int64)&Handle, 0LL);
          if ( DeviceIdDriverInfMatches < 0 )
            goto LABEL_22;
          LODWORD(v27) = (_DWORD)Handle;
        }
        DeviceIdDriverInfMatches = DrvDbGetDeviceIdDriverInfMatches(
                                     v13,
                                     (_DWORD)v27,
                                     (_DWORD)a6,
                                     a7 >> 1,
                                     (__int64)&v36,
                                     v16);
        if ( (int)(DeviceIdDriverInfMatches + 0x80000000) < 0 || DeviceIdDriverInfMatches == -1073741789 )
        {
          v28 = 2 * v36;
          *a5 = 8210;
          *a8 = v28;
        }
        goto LABEL_22;
      }
      v18 = *(_QWORD **)(a1 + 16);
      if ( v18 == (_QWORD *)(a1 + 16) )
        goto LABEL_21;
      while ( 1 )
      {
        v19 = DrvDbOpenObjectRegKey(a1, (_DWORD)v18, 5, a2, 1, 0, (__int64)&Handle, 0LL);
        DeviceIdDriverInfMatches = v19;
        if ( v19 >= 0 )
        {
          v40 = 1;
          DeviceIdDriverInfMatches = DrvDbGetDeviceIdDriverInfMatches(
                                       v20,
                                       (_DWORD)Handle,
                                       v37 + (int)a6,
                                       (a7 - v37) >> 1,
                                       (__int64)&v36,
                                       v41);
          ZwClose(Handle);
          Handle = 0LL;
          if ( DeviceIdDriverInfMatches >= 0 )
            goto LABEL_28;
          if ( DeviceIdDriverInfMatches != -1073741275 )
          {
            if ( DeviceIdDriverInfMatches != -1073741789 )
            {
LABEL_19:
              if ( (int)(DeviceIdDriverInfMatches + 0x80000000) >= 0 && DeviceIdDriverInfMatches != -1073741789 )
                goto LABEL_22;
              if ( v40 )
              {
                if ( *a8 )
                {
                  *a5 = 8210;
                  *a8 += 2;
                  v25 = (unsigned int)*a8;
                  if ( a6 && (unsigned int)v25 <= a7 )
                    a6[(v25 >> 1) - 1] = 0;
                  else
                    DeviceIdDriverInfMatches = -1073741789;
                }
                else
                {
                  DeviceIdDriverInfMatches = -1073741275;
                }
                goto LABEL_22;
              }
LABEL_21:
              DeviceIdDriverInfMatches = -1073741772;
              goto LABEL_22;
            }
LABEL_28:
            v23 = 2 * v36;
            if ( (unsigned int)(2 * v36) > 2 )
              v23 -= 2;
            if ( a6 )
            {
              v24 = v37;
              if ( v37 + v23 < a7 )
                v24 = v37 + v23;
              v37 = v24;
            }
            *a8 += v23;
            goto LABEL_18;
          }
        }
        else if ( v19 != -1073741772 )
        {
          goto LABEL_19;
        }
        DeviceIdDriverInfMatches = 0;
LABEL_18:
        v18 = (_QWORD *)*v18;
        if ( v18 == (_QWORD *)(a1 + 16) )
          goto LABEL_19;
      }
    }
  }
  v30 = 0;
  for ( i = &off_1402B5118; ; i += 5 )
  {
    v32 = *i;
    if ( *((_DWORD *)*i + 4) == v12 )
    {
      v33 = *v32 - *(_QWORD *)a4;
      if ( *v32 == *(_QWORD *)a4 )
        v33 = v32[1] - *(_QWORD *)(a4 + 8);
      if ( !v33 )
        break;
    }
    if ( ++v30 )
      return (unsigned int)-1073741802;
  }
  v34 = 5LL * v30;
  v35 = &(&off_1402B5118)[5 * v30];
  if ( !v35 )
    return (unsigned int)-1073741802;
  if ( !a3 )
  {
    DeviceIdDriverInfMatches = DrvDbOpenObjectRegKey(a1, 0, 5, a2, 1, 0, (__int64)&Handle, 0LL);
    if ( DeviceIdDriverInfMatches < 0 )
      goto LABEL_22;
    a3 = Handle;
  }
  DeviceIdDriverInfMatches = DrvDbGetRegValueMappedProperty(v34, a3, (__int64)v35, a5, a6, a7, a8);
LABEL_22:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)DeviceIdDriverInfMatches;
}
