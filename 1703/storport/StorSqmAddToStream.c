/*
 * XREFs of StorSqmAddToStream @ 0x1C0047EF4
 * Callers:
 *     RaSqmLogAdapterStatistics @ 0x1C0030CD4 (RaSqmLogAdapterStatistics.c)
 *     RaSqmLogScsiPassthroughStatistics @ 0x1C0030FA0 (RaSqmLogScsiPassthroughStatistics.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 *     memset @ 0x1C001F180 (memset.c)
 */

NTSTATUS __fastcall StorSqmAddToStream(__int64 a1, int a2, unsigned int a3, __int64 a4)
{
  NTSTATUS result; // eax
  unsigned int v7; // r8d
  int v8; // r9d
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  int v11; // r11d
  void *v12; // r10
  __int64 v13; // rcx
  const wchar_t *v14; // rcx
  const wchar_t *v15; // r9
  __int64 v16; // rax
  unsigned int v17; // edx
  unsigned int v18; // eax
  __int64 v19; // rax
  int v20; // [rsp+38h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[64]; // [rsp+48h] [rbp-C0h] BYREF
  int v22; // [rsp+480h] [rbp+378h] BYREF
  unsigned int v23; // [rsp+488h] [rbp+380h] BYREF

  v23 = a3;
  v22 = a2;
  v20 = 11;
  result = (unsigned int)memset(UserData, 0, sizeof(UserData));
  if ( byte_1C0055699 )
  {
    *(_QWORD *)&UserData[0].Size = 4LL;
    UserData[0].Ptr = (unsigned __int64)&v20;
    UserData[1].Ptr = (unsigned __int64)&unk_1C0055270;
    UserData[2].Ptr = (unsigned __int64)&v22;
    UserData[3].Ptr = (unsigned __int64)&v23;
    v7 = 0;
    *(_QWORD *)&UserData[1].Size = 16LL;
    *(_QWORD *)&UserData[2].Size = 4LL;
    for ( *(_QWORD *)&UserData[3].Size = 4LL; v7 < a3; UserData[v19].Reserved = 0 )
    {
      v8 = 3 * v7;
      if ( 3 * v7 + 6 >= 0x40 )
        break;
      v9 = (unsigned int)(v8 + 4);
      v10 = a4 + 16LL * v7;
      UserData[v9].Ptr = v10;
      v11 = *(_DWORD *)v10;
      v12 = (void *)(v10 + 8);
      *(_QWORD *)&UserData[v9].Size = 4LL;
      if ( v11 != 1 )
        v12 = &unk_1C004EFE0;
      v13 = (unsigned int)(v8 + 5);
      UserData[v13].Ptr = (unsigned __int64)v12;
      *(_QWORD *)&UserData[v13].Size = 4LL;
      if ( v11 == 2 )
      {
        v14 = *(const wchar_t **)(v10 + 8);
        v15 = v14;
      }
      else
      {
        v14 = L"0";
        v15 = L"0";
      }
      v16 = -1LL;
      do
        ++v16;
      while ( v14[v16] );
      v17 = 2 * v16 + 2;
      v18 = v7 + 2;
      ++v7;
      v19 = 3LL * v18;
      UserData[v19].Ptr = (unsigned __int64)v15;
      UserData[v19].Size = v17;
    }
    return EtwWrite(qword_1C00556C8, &SQM_ADD_STREAMROW, 0LL, 0x40u, UserData);
  }
  return result;
}
