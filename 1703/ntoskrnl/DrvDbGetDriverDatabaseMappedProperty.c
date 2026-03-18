/*
 * XREFs of DrvDbGetDriverDatabaseMappedProperty @ 0x14059E3E8
 * Callers:
 *     DrvDbLoadDatabaseNode @ 0x140489400 (DrvDbLoadDatabaseNode.c)
 *     DrvDbDispatchDriverDatabase @ 0x1404E8770 (DrvDbDispatchDriverDatabase.c)
 * Callees:
 *     _wcsicmp @ 0x14016A0F0 (_wcsicmp.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     DrvDbFindDatabaseNode @ 0x14044C7CC (DrvDbFindDatabaseNode.c)
 *     DrvDbOpenObjectRegKey @ 0x140486A00 (DrvDbOpenObjectRegKey.c)
 *     DrvDbGetRegValueMappedProperty @ 0x1404E8D50 (DrvDbGetRegValueMappedProperty.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x14059D9EC (DrvDbOpenDriverDatabaseRegKey.c)
 */

__int64 __fastcall DrvDbGetDriverDatabaseMappedProperty(
        __int64 a1,
        const wchar_t *a2,
        void *a3,
        __int64 a4,
        _DWORD *a5,
        _WORD *a6,
        unsigned int a7,
        _DWORD *a8)
{
  const UNICODE_STRING *v9; // rbx
  __int64 v12; // rcx
  int v13; // r11d
  __int64 **v14; // rdx
  unsigned int i; // r9d
  __int64 *v16; // r8
  _UNKNOWN **v17; // rsi
  _UNKNOWN **v18; // r8
  __int64 v19; // rdx
  _QWORD *v20; // r9
  HANDLE v21; // rdi
  int DatabaseNode; // ebx
  int v24; // ecx
  __int64 v25; // rax
  _BYTE *v26; // rdx
  bool v27; // cf
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  _UNKNOWN **v33; // r8
  _QWORD *v34; // r9
  __int64 v35; // rcx
  int v36; // eax
  const UNICODE_STRING *v37; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-8h] BYREF

  Handle = 0LL;
  v9 = 0LL;
  v37 = 0LL;
  *a5 = 0;
  *a8 = 0;
  if ( !wcsicmp(a2, L"*") )
  {
    DatabaseNode = -1073741637;
    goto LABEL_19;
  }
  v13 = *(_DWORD *)(a4 + 16);
  v14 = off_14033C598;
  for ( i = 0; i < 5; ++i )
  {
    v16 = *v14;
    if ( *((_DWORD *)*v14 + 4) == v13 )
    {
      v12 = *v16 - *(_QWORD *)a4;
      if ( *v16 == *(_QWORD *)a4 )
        v12 = v16[1] - *(_QWORD *)(a4 + 8);
      if ( !v12 )
      {
        DatabaseNode = DrvDbFindDatabaseNode(a1, a2, &v37);
        if ( DatabaseNode < 0 )
          goto LABEL_19;
        v24 = *(_DWORD *)(a4 + 16);
        if ( v24 != 5 )
          goto LABEL_38;
        v25 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Loaded;
        if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Loaded )
          v25 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
        if ( v25 )
        {
LABEL_38:
          if ( v24 != 6 )
            goto LABEL_45;
          v28 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Selected;
          if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Selected )
            v28 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
          if ( v28 )
          {
LABEL_45:
            if ( v24 != 7 )
              goto LABEL_53;
            v29 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Disabled;
            if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Disabled )
              v29 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
            if ( v29 )
            {
LABEL_53:
              if ( v24 != 11 )
                goto LABEL_60;
              v30 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_AccessMask;
              if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_AccessMask )
                v30 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
              if ( v30 )
              {
LABEL_60:
                if ( v24 != 15 )
                  goto LABEL_19;
                v31 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_LoadStatus;
                if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_LoadStatus )
                  v31 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
                if ( v31 )
                  goto LABEL_19;
                *a5 = 24;
                *a8 = 4;
                if ( a6 && a7 >= 4 )
                {
                  *(_DWORD *)a6 = *(_DWORD *)&v37[9].Length;
                  goto LABEL_19;
                }
              }
              else
              {
                *a5 = 7;
                *a8 = 4;
                if ( a6 && a7 >= 4 )
                {
                  *(_DWORD *)a6 = *(_DWORD *)(a1 + 12);
                  goto LABEL_19;
                }
              }
            }
            else
            {
              v26 = a6;
              *a5 = 17;
              *a8 = 1;
              if ( a6 && a7 )
              {
                v27 = ((__int64)v37[3].Buffer & 4) != 0;
                goto LABEL_49;
              }
            }
          }
          else
          {
            *a5 = 17;
            *a8 = 1;
            if ( a6 && a7 )
            {
              *(_BYTE *)a6 = (*(_QWORD *)(a1 + 40) != (_QWORD)v37) - 1;
              goto LABEL_19;
            }
          }
        }
        else
        {
          v26 = a6;
          *a5 = 17;
          *a8 = 1;
          if ( a6 && a7 )
          {
            v27 = *(_QWORD *)&v37[5].Length != 0LL;
LABEL_49:
            *v26 = -v27;
            goto LABEL_19;
          }
        }
        DatabaseNode = -1073741789;
        goto LABEL_19;
      }
    }
    ++v14;
  }
  v17 = 0LL;
  v18 = &off_140288000;
  v19 = 0LL;
  while ( 1 )
  {
    v20 = *v18;
    if ( *((_DWORD *)*v18 + 4) == v13 )
    {
      v12 = *v20 - *(_QWORD *)a4;
      if ( *v20 == *(_QWORD *)a4 )
        v12 = v20[1] - *(_QWORD *)(a4 + 8);
      if ( !v12 )
        break;
    }
    v19 = (unsigned int)(v19 + 1);
    v18 += 5;
    if ( (unsigned int)v19 >= 7 )
      goto LABEL_13;
  }
  v17 = &off_140288000 + 5 * v19;
LABEL_13:
  if ( v17 )
  {
LABEL_14:
    v21 = a3;
    if ( a3 && (!v9 || ((__int64)v9[3].Buffer & 0x10) == 0)
      || (!v9 || ((__int64)v9[3].Buffer & 0x10) == 0
        ? (v36 = DrvDbOpenDriverDatabaseRegKey((__int64 **)a1, a2, 1u, 0, (__int64)&Handle, 0LL))
        : (v36 = DrvDbOpenObjectRegKey(a1, *(_QWORD **)(a1 + 32), 1u, a2, 1, 0, &Handle, 0LL)),
          DatabaseNode = v36,
          v36 >= 0) )
    {
      if ( Handle )
        v21 = Handle;
      DatabaseNode = DrvDbGetRegValueMappedProperty(v12, v21, (__int64)v17, a5, a6, a7, a8);
    }
  }
  else
  {
    v32 = 0LL;
    v33 = &off_14028EBD0;
    while ( 1 )
    {
      v34 = *v33;
      if ( *((_DWORD *)*v33 + 4) == v13 )
      {
        v35 = *v34 - *(_QWORD *)a4;
        if ( *v34 == *(_QWORD *)a4 )
          v35 = v34[1] - *(_QWORD *)(a4 + 8);
        if ( !v35 )
          break;
      }
      v32 = (unsigned int)(v32 + 1);
      v33 += 5;
      if ( (unsigned int)v32 >= 2 )
        goto LABEL_71;
    }
    v17 = &off_14028EBD0 + 5 * v32;
LABEL_71:
    if ( v17 )
    {
      DatabaseNode = DrvDbFindDatabaseNode(a1, a2, &v37);
      if ( DatabaseNode >= 0 )
      {
        v9 = v37;
        goto LABEL_14;
      }
    }
    else
    {
      DatabaseNode = -1073741802;
    }
  }
LABEL_19:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)DatabaseNode;
}
