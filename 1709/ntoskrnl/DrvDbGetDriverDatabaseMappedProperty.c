/*
 * XREFs of DrvDbGetDriverDatabaseMappedProperty @ 0x140459A60
 * Callers:
 *     DrvDbDispatchDriverDatabase @ 0x140531320 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbLoadDatabaseNode @ 0x140533B00 (DrvDbLoadDatabaseNode.c)
 * Callees:
 *     _wcsicmp @ 0x14015EB30 (_wcsicmp.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140459BE0 (DrvDbOpenDriverDatabaseRegKey.c)
 *     DrvDbFindDatabaseNode @ 0x140459D40 (DrvDbFindDatabaseNode.c)
 *     DrvDbGetRegValueMappedProperty @ 0x140530A4C (DrvDbGetRegValueMappedProperty.c)
 *     DrvDbOpenObjectRegKey @ 0x14053360C (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbGetDriverDatabaseMappedProperty(
        __int64 a1,
        const wchar_t *a2,
        void *a3,
        __int64 a4,
        _DWORD *a5,
        _DWORD *a6,
        unsigned int a7,
        _DWORD *a8)
{
  __int64 v9; // rbx
  __int64 v12; // rcx
  int v13; // r10d
  __int64 **v14; // rdx
  unsigned int i; // r9d
  __int64 *v16; // r8
  _UNKNOWN **v17; // rsi
  __int64 v18; // rdx
  _UNKNOWN **v19; // r9
  _QWORD *v20; // r8
  HANDLE v21; // rdi
  int DatabaseNode; // ebx
  int v24; // eax
  int v25; // ecx
  __int64 v26; // rax
  _BYTE *v27; // rdx
  bool v28; // cf
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  _UNKNOWN **v34; // r8
  _QWORD *v35; // r9
  __int64 v36; // rcx
  __int64 v37; // [rsp+28h] [rbp-28h]
  __int64 v38; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-8h] BYREF

  Handle = 0LL;
  v9 = 0LL;
  v38 = 0LL;
  *a5 = 0;
  *a8 = 0;
  if ( !wcsicmp(a2, L"*") )
  {
    DatabaseNode = -1073741637;
    goto LABEL_19;
  }
  v13 = *(_DWORD *)(a4 + 16);
  v14 = off_1403549C0;
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
        DatabaseNode = DrvDbFindDatabaseNode(a1, a2, &v38);
        if ( DatabaseNode < 0 )
          goto LABEL_19;
        v25 = *(_DWORD *)(a4 + 16);
        if ( v25 != 5 )
          goto LABEL_42;
        v26 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Loaded;
        if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Loaded )
          v26 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
        if ( v26 )
        {
LABEL_42:
          if ( v25 != 6 )
            goto LABEL_49;
          v29 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Selected;
          if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Selected )
            v29 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
          if ( v29 )
          {
LABEL_49:
            if ( v25 != 7 )
              goto LABEL_57;
            v30 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Disabled;
            if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Disabled )
              v30 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
            if ( v30 )
            {
LABEL_57:
              if ( v25 != 11 )
                goto LABEL_64;
              v31 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_AccessMask;
              if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_AccessMask )
                v31 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
              if ( v31 )
              {
LABEL_64:
                if ( v25 != 15 )
                  goto LABEL_19;
                v32 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_LoadStatus;
                if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_LoadStatus )
                  v32 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
                if ( v32 )
                  goto LABEL_19;
                *a5 = 24;
                *a8 = 4;
                if ( a6 && a7 >= 4 )
                {
                  *a6 = *(_DWORD *)(v38 + 144);
                  goto LABEL_19;
                }
              }
              else
              {
                *a5 = 7;
                *a8 = 4;
                if ( a6 && a7 >= 4 )
                {
                  *a6 = *(_DWORD *)(a1 + 12);
                  goto LABEL_19;
                }
              }
            }
            else
            {
              v27 = a6;
              *a5 = 17;
              *a8 = 1;
              if ( a6 && a7 )
              {
                v28 = (*(_DWORD *)(v38 + 56) & 4) != 0;
                goto LABEL_53;
              }
            }
          }
          else
          {
            *a5 = 17;
            *a8 = 1;
            if ( a6 && a7 )
            {
              *(_BYTE *)a6 = (*(_QWORD *)(a1 + 40) != v38) - 1;
              goto LABEL_19;
            }
          }
        }
        else
        {
          v27 = a6;
          *a5 = 17;
          *a8 = 1;
          if ( a6 && a7 )
          {
            v28 = *(_QWORD *)(v38 + 80) != 0LL;
LABEL_53:
            *v27 = -v28;
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
  v18 = 0LL;
  v19 = &off_1402B5000;
  while ( 1 )
  {
    v20 = *v19;
    if ( *((_DWORD *)*v19 + 4) == v13 )
    {
      v12 = *v20 - *(_QWORD *)a4;
      if ( *v20 == *(_QWORD *)a4 )
        v12 = v20[1] - *(_QWORD *)(a4 + 8);
      if ( !v12 )
        break;
    }
    v18 = (unsigned int)(v18 + 1);
    v19 += 5;
    if ( (unsigned int)v18 >= 7 )
      goto LABEL_13;
  }
  v12 = 5 * v18;
  v17 = &off_1402B5000 + 5 * v18;
LABEL_13:
  if ( v17 )
  {
LABEL_14:
    v21 = a3;
    if ( a3 && (!v9 || (*(_DWORD *)(v9 + 56) & 0x10) == 0)
      || (!v9 || (*(_DWORD *)(v9 + 56) & 0x10) == 0
        ? (HIDWORD(v37) = 0, v24 = DrvDbOpenDriverDatabaseRegKey(a1, a2, 1LL))
        : (v24 = DrvDbOpenObjectRegKey(a1, *(_QWORD *)(a1 + 32), 1, (_DWORD)a2, 1, 0, (__int64)&Handle, 0LL)),
          DatabaseNode = v24,
          v24 >= 0) )
    {
      if ( Handle )
        v21 = Handle;
      LODWORD(v37) = a7;
      DatabaseNode = DrvDbGetRegValueMappedProperty(v12, v21, v17, a5, a6, v37, a8);
    }
  }
  else
  {
    v33 = 0LL;
    v34 = &off_1402BBE90;
    while ( 1 )
    {
      v35 = *v34;
      if ( *((_DWORD *)*v34 + 4) == v13 )
      {
        v36 = *v35 - *(_QWORD *)a4;
        if ( *v35 == *(_QWORD *)a4 )
          v36 = v35[1] - *(_QWORD *)(a4 + 8);
        if ( !v36 )
          break;
      }
      v33 = (unsigned int)(v33 + 1);
      v34 += 5;
      if ( (unsigned int)v33 >= 2 )
        goto LABEL_75;
    }
    v17 = &off_1402BBE90 + 5 * v33;
LABEL_75:
    if ( v17 )
    {
      DatabaseNode = DrvDbFindDatabaseNode(a1, a2, &v38);
      if ( DatabaseNode >= 0 )
      {
        v9 = v38;
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
