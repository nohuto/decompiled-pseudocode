/*
 * XREFs of LdrpLogLoadFailureEtwEvent @ 0x180081194
 * Callers:
 *     LdrpSnapModule @ 0x180027FC0 (LdrpSnapModule.c)
 *     LdrpProcessWork @ 0x18004B260 (LdrpProcessWork.c)
 * Callees:
 *     RtlGetThreadErrorMode @ 0x180081240 (RtlGetThreadErrorMode.c)
 *     EtwEventWriteNoRegistration @ 0x180087990 (EtwEventWriteNoRegistration.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtQueryInformationProcess @ 0x1800A03E0 (NtQueryInformationProcess.c)
 */

void __fastcall LdrpLogLoadFailureEtwEvent(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        int a3,
        const EVENT_DESCRIPTOR *a4,
        char a5)
{
  NTSTATUS v8; // eax
  int v9; // ecx
  int v10; // eax
  ULONG v11; // r8d
  int v12; // eax
  int ProcessInformation; // [rsp+30h] [rbp-40h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  __int64 v15; // [rsp+48h] [rbp-28h]
  int v16; // [rsp+50h] [rbp-20h]
  int v17; // [rsp+54h] [rbp-1Ch]
  __int64 v18; // [rsp+58h] [rbp-18h]
  int v19; // [rsp+60h] [rbp-10h]
  int v20; // [rsp+64h] [rbp-Ch]
  int v21; // [rsp+A0h] [rbp+30h] BYREF

  v21 = a3;
  ProcessInformation = 0;
  if ( (LdrpPolicyBits & 0x20) != 0 )
  {
    if ( a5 )
      goto LABEL_8;
    if ( (RtlGetThreadErrorMode() & 0x10) == 0 )
    {
      v8 = NtQueryInformationProcess(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             ProcessDefaultHardErrorMode,
             &ProcessInformation,
             4u,
             0LL);
      v9 = ProcessInformation;
      if ( v8 < 0 )
        v9 = 5;
      ProcessInformation = v9;
      if ( (v9 & 5) != 0 )
      {
LABEL_8:
        UserData.Reserved = 0;
        v17 = 0;
        UserData.Ptr = (unsigned __int64)&v21;
        v15 = *((_QWORD *)a1 + 1);
        v10 = *a1 + 2;
        UserData.Size = 4;
        v16 = v10;
        if ( a2 )
        {
          v11 = 3;
          v18 = *((_QWORD *)a2 + 1);
          v12 = *a2 + 2;
          v20 = 0;
          v19 = v12;
        }
        else
        {
          v11 = 2;
        }
        EtwEventWriteNoRegistration(&UserLoaderGuid, a4, v11, &UserData);
      }
    }
  }
}
