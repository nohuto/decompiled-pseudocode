/*
 * XREFs of WinSqmAddToStream @ 0x1C00ECB60
 * Callers:
 *     <none>
 * Callees:
 *     WinSqmEventEnabled @ 0x1C0078440 (WinSqmEventEnabled.c)
 *     ?IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z @ 0x1C0078490 (-IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z.c)
 *     WinSqmEventWrite @ 0x1C0096900 (WinSqmEventWrite.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

unsigned int __fastcall WinSqmAddToStream(struct _GUID *a1, int a2, unsigned int a3, __int64 a4)
{
  unsigned int result; // eax
  struct _GUID *v7; // rdi
  unsigned int v8; // r11d
  unsigned int v9; // r10d
  int v10; // r8d
  __int64 v11; // rcx
  ULONGLONG v12; // rdx
  int v13; // ebx
  void *v14; // r9
  __int64 v15; // rcx
  const wchar_t *v16; // rcx
  const wchar_t *v17; // rdx
  __int64 v18; // rax
  ULONG v19; // r9d
  unsigned int v20; // eax
  __int64 v21; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData[31]; // [rsp+20h] [rbp-E0h] BYREF
  int v23; // [rsp+258h] [rbp+158h] BYREF
  unsigned int v24; // [rsp+260h] [rbp+160h] BYREF

  v24 = a3;
  v23 = a2;
  result = (unsigned int)memset(UserData, 0, sizeof(UserData));
  if ( a1 != (struct _GUID *)-1LL )
  {
    if ( (unsigned int)IsExtendedWinSqmHandle(a1) )
    {
      v7 = (struct _GUID *)((char *)a1 + 24);
    }
    else
    {
      v7 = (struct _GUID *)&unk_1C01617A0;
      if ( a1 )
        v7 = a1;
    }
    result = WinSqmEventEnabled(&SQM_ADD_LEGACYSTREAMROW, v7);
    if ( result )
    {
      v8 = v24;
      UserData[0].Ptr = (ULONGLONG)v7;
      *(_QWORD *)&UserData[0].Size = 16LL;
      v9 = 0;
      if ( v24 > 9 )
        v8 = 9;
      *(_QWORD *)&UserData[1].Size = 4LL;
      v24 = v8;
      UserData[1].Ptr = (ULONGLONG)&v23;
      UserData[2].Ptr = (ULONGLONG)&unk_1C0193798;
      UserData[3].Ptr = (ULONGLONG)&v24;
      *(_QWORD *)&UserData[2].Size = 4LL;
      *(_QWORD *)&UserData[3].Size = 4LL;
      if ( v8 )
      {
        while ( 1 )
        {
          v10 = 3 * v9;
          result = 3 * v9 + 6;
          if ( result >= 0x1F )
            break;
          v11 = (unsigned int)(v10 + 4);
          v12 = a4 + 16LL * v9;
          UserData[v11].Ptr = v12;
          v13 = *(_DWORD *)v12;
          v14 = (void *)(v12 + 8);
          *(_QWORD *)&UserData[v11].Size = 4LL;
          if ( v13 != 1 )
            v14 = &unk_1C016D934;
          v15 = (unsigned int)(v10 + 5);
          UserData[v15].Ptr = (ULONGLONG)v14;
          *(_QWORD *)&UserData[v15].Size = 4LL;
          if ( v13 == 2 )
          {
            v16 = *(const wchar_t **)(v12 + 8);
            v17 = v16;
          }
          else
          {
            v16 = L"0";
            v17 = L"0";
          }
          v18 = -1LL;
          do
            ++v18;
          while ( v16[v18] );
          v19 = 2 * v18 + 2;
          v20 = v9 + 2;
          ++v9;
          v21 = 3LL * v20;
          UserData[v21].Ptr = (ULONGLONG)v17;
          UserData[v21].Size = v19;
          *(&UserData[0].Reserved + 1 * v21) = 0;
          if ( v9 >= v8 )
            return WinSqmEventWrite(&SQM_ADD_LEGACYSTREAMROW, 0x1Fu, UserData);
        }
      }
      else
      {
        return WinSqmEventWrite(&SQM_ADD_LEGACYSTREAMROW, 0x1Fu, UserData);
      }
    }
  }
  return result;
}
