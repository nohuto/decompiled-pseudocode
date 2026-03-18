/*
 * XREFs of HmgPrefetchAllObjt @ 0x1C007C440
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C00331B0 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall HmgPrefetchAllObjt(char a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  unsigned int v6; // edi
  GdiHandleManager *v7; // rsi
  __int64 result; // rax
  unsigned int v9; // eax
  __int64 v10; // r9
  unsigned __int64 v11; // rdx
  unsigned int v12; // r8d
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  struct _ENTRY *v16; // [rsp+28h] [rbp-E0h] BYREF
  _DWORD v17[2]; // [rsp+30h] [rbp-D8h] BYREF
  __int128 v18; // [rsp+38h] [rbp-D0h]
  _QWORD *v19; // [rsp+48h] [rbp-C0h]
  _QWORD v20[32]; // [rsp+58h] [rbp-B0h] BYREF

  v4 = 0;
  v16 = 0LL;
  memset(v20, 0, sizeof(v20));
  v17[0] = 1;
  v17[1] = 0;
  v6 = 0;
  v19 = v20;
  v18 = 0xFFFFFFFFFFFFFFFDuLL;
LABEL_2:
  v7 = gpHandleManager;
  while ( 1 )
  {
    result = GdiHandleManager::GetNextEntryIndex((GdiHandleManager *)v5, v6, &v16);
    v6 = result;
    if ( !(_DWORD)result )
      break;
    if ( *((_BYTE *)v16 + 14) == a1 )
    {
      v9 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v7, result);
      v10 = *((_QWORD *)v7 + 2);
      v11 = v9;
      v12 = *(_DWORD *)(v10 + 2056);
      v5 = v12 + ((*(unsigned __int16 *)(v10 + 2) + 0xFFFF) << 16);
      if ( v9 < (unsigned int)v5 )
      {
        if ( v9 < v12 )
        {
          v5 = 0LL;
LABEL_10:
          v13 = *(_QWORD *)(v10 + 8LL * (int)v5 + 8);
          if ( (_DWORD)v5 )
          {
            v5 = (unsigned int)((_DWORD)v5 << 16);
            v11 = (_DWORD)v11 - (_DWORD)v5 - v12 + 0x10000;
          }
          if ( (unsigned int)v11 >= *(_DWORD *)(v13 + 20) )
          {
            v14 = 0LL;
          }
          else
          {
            v5 = 2LL * (unsigned __int8)v11;
            v14 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v13 + 24) + 8 * (v11 >> 8)) + 16LL * (unsigned __int8)v11 + 8);
          }
          if ( v14 )
          {
            v15 = 2LL * v4++;
            v20[v15] = v14;
            v20[v15 + 1] = a2;
          }
          goto LABEL_5;
        }
        v5 = ((v9 - v12) >> 16) + 1;
        if ( (v9 - v12) >> 16 != -2 )
          goto LABEL_10;
      }
    }
LABEL_5:
    if ( v4 == 16 )
    {
      *((_QWORD *)&v18 + 1) = 16LL;
      MmPrefetchVirtualAddresses(v17);
      v4 = 0;
      goto LABEL_2;
    }
  }
  if ( v4 )
  {
    *((_QWORD *)&v18 + 1) = v4;
    return MmPrefetchVirtualAddresses(v17);
  }
  return result;
}
