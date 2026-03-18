/*
 * XREFs of DrvDbGetDeviceIdMappedProperty @ 0x140488504
 * Callers:
 *     DrvDbDispatchDeviceId @ 0x1404E8890 (DrvDbDispatchDeviceId.c)
 * Callees:
 *     wcschr @ 0x14016BB40 (wcschr.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     DrvDbOpenObjectRegKey @ 0x140486A00 (DrvDbOpenObjectRegKey.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1404E682C (DrvDbGetDeviceIdDriverInfMatches.c)
 *     DrvDbGetRegValueMappedProperty @ 0x1404E8D50 (DrvDbGetRegValueMappedProperty.c)
 */

__int64 __fastcall DrvDbGetDeviceIdMappedProperty(
        __int64 a1,
        __int64 a2,
        HANDLE a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
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
  __int64 v26; // rax
  unsigned int v27; // edx
  __int64 **i; // r8
  __int64 *v29; // r10
  __int64 v30; // rcx
  __int64 **v31; // rdi
  wchar_t *v32; // rax
  HANDLE v33; // rdx
  int v34; // eax
  __int64 v35; // [rsp+20h] [rbp-30h]
  __int64 v36; // [rsp+28h] [rbp-28h]
  int v37; // [rsp+40h] [rbp-10h] BYREF
  int v38; // [rsp+44h] [rbp-Ch]
  HANDLE Handle; // [rsp+48h] [rbp-8h] BYREF
  char v41; // [rsp+A8h] [rbp+58h]
  char v42; // [rsp+C8h] [rbp+78h]

  Handle = 0LL;
  v37 = 0;
  *a5 = 0;
  *a8 = 0;
  v12 = *(_DWORD *)(a4 + 16);
  v13 = DEVPKEY_DeviceId_DriverInfMatches;
  v38 = 0;
  v41 = 0;
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
    v26 = *(_QWORD *)a4 - DEVPKEY_DeviceId_DriverInfNames;
    if ( *(_QWORD *)a4 == DEVPKEY_DeviceId_DriverInfNames )
      v26 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v26 )
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
        v42 = 0;
      }
      else
      {
        v16 = 1;
        v42 = 1;
      }
      if ( *(_WORD *)a2 != 64 || (v32 = wcschr((const wchar_t *)(a2 + 2), 0x3Au)) == 0LL || (v17 = v32 + 1) == 0LL )
        v17 = (wchar_t *)a2;
      if ( v17 != (wchar_t *)a2 || *(_QWORD *)(a1 + 40) )
      {
        v33 = 0LL;
        if ( a3 != (HANDLE)-1LL )
          v33 = a3;
        if ( !v33 )
        {
          DeviceIdDriverInfMatches = DrvDbOpenObjectRegKey(a1, 0LL, 5u, a2, 1, 0, &Handle, 0LL);
          if ( DeviceIdDriverInfMatches < 0 )
            goto LABEL_22;
          LODWORD(v33) = (_DWORD)Handle;
        }
        DeviceIdDriverInfMatches = DrvDbGetDeviceIdDriverInfMatches(v13, (_DWORD)v33, a6, a7 >> 1, (__int64)&v37, v16);
        if ( (int)(DeviceIdDriverInfMatches + 0x80000000) < 0 || DeviceIdDriverInfMatches == -1073741789 )
        {
          v34 = 2 * v37;
          *a5 = 8210;
          *a8 = v34;
        }
        goto LABEL_22;
      }
      v18 = *(_QWORD **)(a1 + 16);
      if ( v18 == (_QWORD *)(a1 + 16) )
        goto LABEL_21;
      while ( 1 )
      {
        LOBYTE(v36) = 0;
        LODWORD(v35) = 1;
        v19 = DrvDbOpenObjectRegKey(a1, v18, 5u, a2, v35, v36, &Handle, 0LL);
        DeviceIdDriverInfMatches = v19;
        if ( v19 >= 0 )
        {
          v41 = 1;
          DeviceIdDriverInfMatches = DrvDbGetDeviceIdDriverInfMatches(
                                       v20,
                                       (_DWORD)Handle,
                                       v38 + (int)a6,
                                       (a7 - v38) >> 1,
                                       (__int64)&v37,
                                       v42);
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
              if ( v41 )
              {
                if ( *a8 )
                {
                  *a5 = 8210;
                  *a8 += 2;
                  v25 = (unsigned int)*a8;
                  if ( a6 && (unsigned int)v25 <= a7 )
                    *(_WORD *)(a6 + 2 * (v25 >> 1) - 2) = 0;
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
            v23 = 2 * v37;
            if ( (unsigned int)(2 * v37) > 2 )
              v23 -= 2;
            if ( a6 )
            {
              v24 = v38;
              if ( v38 + v23 < a7 )
                v24 = v38 + v23;
              v38 = v24;
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
  v27 = 0;
  for ( i = &off_14028EB40; ; i += 5 )
  {
    v29 = *i;
    if ( *((_DWORD *)*i + 4) == v12 )
    {
      v30 = *v29 - *(_QWORD *)a4;
      if ( *v29 == *(_QWORD *)a4 )
        v30 = v29[1] - *(_QWORD *)(a4 + 8);
      if ( !v30 )
        break;
    }
    if ( ++v27 )
      return (unsigned int)-1073741802;
  }
  v31 = &(&off_14028EB40)[5 * v27];
  if ( !v31 )
    return (unsigned int)-1073741802;
  if ( !a3 )
  {
    DeviceIdDriverInfMatches = DrvDbOpenObjectRegKey(a1, 0LL, 5u, a2, 1, 0, &Handle, 0LL);
    if ( DeviceIdDriverInfMatches < 0 )
      goto LABEL_22;
    a3 = Handle;
  }
  DeviceIdDriverInfMatches = DrvDbGetRegValueMappedProperty(v30, a3, v31, a5, a6, a7, a8);
LABEL_22:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)DeviceIdDriverInfMatches;
}
