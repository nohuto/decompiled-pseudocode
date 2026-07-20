/*
 * XREFs of SmscpLoadSubSystemsForMuSession @ 0x140002150
 * Callers:
 *     SmscMain @ 0x140002038 (SmscMain.c)
 * Callees:
 *     SmpExecuteCommand @ 0x1400025D8 (SmpExecuteCommand.c)
 *     SmpNtSerializeBoot @ 0x1400071F4 (SmpNtSerializeBoot.c)
 */

NTSTATUS __fastcall SmscpLoadSubSystemsForMuSession(int a1)
{
  char v2; // r15
  NTSTATUS result; // eax
  NTSTATUS v4; // ebx
  char *v5; // rcx
  int v6; // edi
  _DWORD *v7; // r14
  char *v8; // r12
  char *v9; // r8
  unsigned int v10; // edi
  unsigned int *v11; // r12
  char *v12; // r13
  _DWORD *v13; // r14
  char *v14; // r15
  int v15; // edi
  int v16; // eax
  signed __int32 v17[8]; // [rsp+0h] [rbp-50h] BYREF
  __int64 v18; // [rsp+20h] [rbp-30h]
  __int16 SystemInformation; // [rsp+30h] [rbp-20h] BYREF
  __int16 v20; // [rsp+32h] [rbp-1Eh]
  char *v21; // [rsp+38h] [rbp-18h]
  UNICODE_STRING String1; // [rsp+40h] [rbp-10h] BYREF
  PVOID ReturnedState; // [rsp+88h] [rbp+38h] BYREF

  v2 = 0;
  result = RtlAcquirePrivilege((PULONG)&SmpSessionCreatePrivilege, 1u, 2u, &ReturnedState);
  v4 = result;
  if ( result >= 0 )
  {
    if ( !a1 && SmpSerializeBoot == 1 )
    {
      v4 = SmpNtSerializeBoot();
      if ( v4 < 0 )
      {
        *(_DWORD *)SmscpSharedWindow = 1;
        _InterlockedOr(v17, 0);
        *((_DWORD *)SmscpSharedWindow + 2) = 847;
        *((_DWORD *)SmscpSharedWindow + 1) = v4;
        *((_QWORD *)SmscpSharedWindow + 2) = NtSerializeBoot;
      }
      else
      {
        v2 = 1;
      }
    }
    v5 = (char *)SmpMappedView;
    v6 = 0;
    v7 = (char *)SmpMappedView + 64;
    v8 = (char *)SmpMappedView + *((_QWORD *)SmpMappedView + 7);
    if ( *((_DWORD *)SmpMappedView + 16) )
    {
      while ( 1 )
      {
        v21 = &v5[*(_QWORD *)&v8[16 * v6]];
        v20 = *(_WORD *)&v8[16 * v6 + 8];
        SystemInformation = v20;
        v4 = NtSetSystemInformation(SystemExtendServiceTableInformation, &SystemInformation, 0x10u);
        if ( v4 < 0 )
          break;
        if ( (unsigned int)++v6 >= *v7 )
          break;
        v5 = (char *)SmpMappedView;
      }
    }
    RtlReleasePrivilege(ReturnedState);
    if ( v4 < 0 )
    {
      *(_DWORD *)SmscpSharedWindow = 1;
      _InterlockedOr(v17, 0);
      *((_DWORD *)SmscpSharedWindow + 2) = 893;
    }
    else
    {
      v9 = (char *)SmpMappedView;
      v10 = 0;
      v11 = (unsigned int *)((char *)SmpMappedView + 80);
      v12 = (char *)SmpMappedView + *((_QWORD *)SmpMappedView + 9);
      if ( !*((_DWORD *)SmpMappedView + 20) )
      {
LABEL_13:
        v13 = v9 + 96;
        v14 = &v9[*((_QWORD *)v9 + 11)];
        v15 = 0;
        if ( *((_DWORD *)v9 + 24) )
        {
          while ( 1 )
          {
            v18 = 0LL;
            v21 = &v9[*(_QWORD *)&v14[16 * v15]];
            v20 = *(_WORD *)&v14[16 * v15 + 8];
            SystemInformation = v20;
            SmpExecuteCommand((int)&SystemInformation, 0LL);
            if ( (unsigned int)++v15 >= *v13 )
              break;
            v9 = (char *)SmpMappedView;
          }
        }
        return v4;
      }
      while ( 1 )
      {
        String1.Buffer = (PWSTR)&v9[*(_QWORD *)&v12[16 * v10]];
        String1.MaximumLength = *(_WORD *)&v12[16 * v10 + 8];
        String1.Length = String1.MaximumLength;
        v21 = &v9[*(_QWORD *)&v12[16 * v10 + 16]];
        v20 = *(_WORD *)&v12[16 * v10 + 24];
        SystemInformation = v20;
        RtlEqualUnicodeString(&String1, &SmpDebugKeyword, 1u);
        if ( !v2 && a1 == 1 && SmpSerializeBoot == 2 )
        {
          v16 = SmpNtSerializeBoot();
          if ( v16 >= 0 )
          {
            v2 = 1;
          }
          else
          {
            *(_DWORD *)SmscpSharedWindow = 1;
            _InterlockedOr(v17, 0);
            *((_DWORD *)SmscpSharedWindow + 2) = 959;
            *((_DWORD *)SmscpSharedWindow + 1) = v16;
            *((_QWORD *)SmscpSharedWindow + 2) = NtSerializeBoot;
          }
        }
        v4 = SmpExecuteCommand((int)&SystemInformation, 0LL);
        if ( v4 < 0 )
          break;
        v9 = (char *)SmpMappedView;
        v10 += 2;
        if ( v10 >= *v11 )
          goto LABEL_13;
      }
      *(_DWORD *)SmscpSharedWindow = 1;
      _InterlockedOr(v17, 0);
      *((_DWORD *)SmscpSharedWindow + 2) = 975;
    }
    *((_DWORD *)SmscpSharedWindow + 1) = v4;
    *((_QWORD *)SmscpSharedWindow + 2) = SmscpLoadSubSystemsForMuSession;
    return v4;
  }
  *(_DWORD *)SmscpSharedWindow = 1;
  _InterlockedOr(v17, 0);
  *((_DWORD *)SmscpSharedWindow + 2) = 824;
  *((_DWORD *)SmscpSharedWindow + 1) = result;
  *((_QWORD *)SmscpSharedWindow + 2) = SmscpLoadSubSystemsForMuSession;
  return result;
}
