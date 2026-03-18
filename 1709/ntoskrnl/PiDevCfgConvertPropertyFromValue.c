/*
 * XREFs of PiDevCfgConvertPropertyFromValue @ 0x1404522D8
 * Callers:
 *     PiDevCfgCopyDeviceKey @ 0x140589CD0 (PiDevCfgCopyDeviceKey.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlGUIDFromString @ 0x140525090 (RtlGUIDFromString.c)
 */

__int64 __fastcall PiDevCfgConvertPropertyFromValue(
        unsigned int a1,
        int a2,
        wchar_t *a3,
        unsigned int a4,
        int *a5,
        _QWORD *a6)
{
  unsigned int v6; // edi
  int v8; // ebp
  _BYTE *v9; // rbx
  int v10; // esi
  bool v12; // zf
  int v13; // esi
  _WORD *v14; // rax
  int v15; // esi
  _BYTE *v16; // rax
  __int64 v17; // rsi
  _QWORD *v18; // rax
  GUID *PoolWithTag; // rax
  UNICODE_STRING GuidString; // [rsp+20h] [rbp-18h] BYREF

  v6 = 0;
  v8 = 0;
  v9 = 0LL;
  if ( a4 > 0x1003 )
  {
    if ( a4 != 8210 )
      goto LABEL_8;
    v12 = a1 == 7;
    goto LABEL_57;
  }
  if ( a4 == 4099 )
  {
LABEL_11:
    v8 = a2;
    goto LABEL_36;
  }
  if ( a4 > 0x11 )
  {
    if ( a4 != 18 )
    {
      if ( a4 == 19 )
      {
        v12 = a1 == 3;
LABEL_57:
        if ( !v12 )
          goto LABEL_8;
        goto LABEL_11;
      }
      if ( a4 != 20 )
      {
        if ( a4 <= 0x15 )
          goto LABEL_8;
        if ( a4 <= 0x18 )
        {
LABEL_17:
          v12 = a1 == 4;
          goto LABEL_57;
        }
        if ( a4 != 25 )
          goto LABEL_8;
      }
    }
    if ( a1 - 1 > 1 )
      goto LABEL_8;
    goto LABEL_11;
  }
  if ( a4 != 17 )
  {
    if ( a4 > 9 )
    {
      if ( a4 == 13 )
      {
        if ( !a1 )
          goto LABEL_8;
        if ( a1 <= 2 )
        {
          if ( a2 != 78 )
            goto LABEL_8;
          v8 = 16;
          PoolWithTag = (GUID *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x63647050u);
          v9 = PoolWithTag;
          if ( PoolWithTag )
          {
            GuidString.Buffer = a3;
            *(_DWORD *)&GuidString.Length = 5111884;
            if ( RtlGUIDFromString(&GuidString, PoolWithTag) < 0 )
            {
              ExFreePoolWithTag(v9, 0);
              v9 = 0LL;
            }
            goto LABEL_8;
          }
          return (unsigned int)-1073741670;
        }
        if ( a1 != 3 || a2 != 16 )
          goto LABEL_8;
        v8 = 16;
      }
      else
      {
        if ( a4 != 16 || a1 != 3 && a1 != 11 || a2 != 8 )
          goto LABEL_8;
        v8 = 8;
      }
LABEL_36:
      v9 = a3;
      goto LABEL_8;
    }
    if ( a4 >= 8 )
    {
      if ( a1 == 4 )
      {
        v17 = *(unsigned int *)a3;
        v8 = 8;
        v18 = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x63647050u);
        v9 = v18;
        if ( v18 )
        {
          *v18 = v17;
          goto LABEL_8;
        }
        return (unsigned int)-1073741670;
      }
      v12 = a1 == 11;
      goto LABEL_57;
    }
    if ( a4 < 2 )
      goto LABEL_8;
    if ( a4 <= 3 )
    {
      if ( a1 != 4 )
        goto LABEL_8;
      v15 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0xFFu )
        goto LABEL_8;
      v8 = 1;
      v16 = ExAllocatePoolWithTag(PagedPool, 1uLL, 0x63647050u);
      v9 = v16;
      if ( v16 )
      {
        *v16 = v15;
        goto LABEL_8;
      }
      return (unsigned int)-1073741670;
    }
    if ( a4 <= 5 )
    {
      if ( a1 != 4 )
        goto LABEL_8;
      v13 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0xFFFFu )
        goto LABEL_8;
      v8 = 2;
      v14 = ExAllocatePoolWithTag(PagedPool, 2uLL, 0x63647050u);
      v9 = v14;
      if ( v14 )
      {
        *v14 = v13;
        goto LABEL_8;
      }
      return (unsigned int)-1073741670;
    }
    goto LABEL_17;
  }
  if ( a1 == 4 )
  {
    v10 = *(_DWORD *)a3;
    v8 = 1;
    v9 = ExAllocatePoolWithTag(PagedPool, 1uLL, 0x63647050u);
    if ( v9 )
    {
      *v9 = -(v10 != 0);
      goto LABEL_8;
    }
    return (unsigned int)-1073741670;
  }
LABEL_8:
  *a5 = v8;
  *a6 = v9;
  return v6;
}
