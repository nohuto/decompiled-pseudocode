/*
 * XREFs of PpmEventTraceProfiles @ 0x1405CCBA0
 * Callers:
 *     PpmRegisterProfiles @ 0x1405CC9BC (PpmRegisterProfiles.c)
 *     PpmEventTraceControlCallback @ 0x1405D6570 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     RtlStringCchLengthW @ 0x14004C7E8 (RtlStringCchLengthW.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PpmEndProfileAccumulation @ 0x1406D5BE8 (PpmEndProfileAccumulation.c)
 */

char __fastcall PpmEventTraceProfiles(char a1)
{
  _UNKNOWN **v1; // rax
  const EVENT_DESCRIPTOR *v3; // rdx
  __int64 *v4; // rdi
  unsigned __int8 v5; // bl
  STRSAFE_PCNZWCH *v6; // r11
  ULONGLONG *v7; // r11
  ULONGLONG v8; // r8
  ULONGLONG v9; // kr00_8
  const EVENT_DESCRIPTOR *v10; // rdx
  size_t pcchLength; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v14; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v15; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+58h] [rbp-B0h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-A0h] BYREF
  ULONGLONG *v18; // [rsp+78h] [rbp-90h]
  int v19; // [rsp+80h] [rbp-88h]
  int v20; // [rsp+84h] [rbp-84h]
  ULONGLONG *v21; // [rsp+88h] [rbp-80h]
  int v22; // [rsp+90h] [rbp-78h]
  int v23; // [rsp+94h] [rbp-74h]
  char *v24; // [rsp+98h] [rbp-70h]
  int v25; // [rsp+A0h] [rbp-68h]
  int v26; // [rsp+A4h] [rbp-64h]
  char *v27; // [rsp+A8h] [rbp-60h]
  int v28; // [rsp+B0h] [rbp-58h]
  int v29; // [rsp+B4h] [rbp-54h]
  ULONGLONG *v30; // [rsp+B8h] [rbp-50h]
  int v31; // [rsp+C0h] [rbp-48h]
  int v32; // [rsp+C4h] [rbp-44h]
  unsigned __int64 *v33; // [rsp+C8h] [rbp-40h]
  int v34; // [rsp+D0h] [rbp-38h]
  int v35; // [rsp+D4h] [rbp-34h]
  unsigned __int64 *v36; // [rsp+D8h] [rbp-30h]
  int v37; // [rsp+E0h] [rbp-28h]
  int v38; // [rsp+E4h] [rbp-24h]
  unsigned __int64 *v39; // [rsp+E8h] [rbp-20h]
  int v40; // [rsp+F0h] [rbp-18h]
  int v41; // [rsp+F4h] [rbp-14h]
  _UNKNOWN *retaddr; // [rsp+120h] [rbp+18h] BYREF

  v1 = &retaddr;
  if ( PpmEtwRegistered )
  {
    v3 = &PPM_ETW_PROCESSOR_PROFILE_REGISTERED;
    if ( a1 )
      v3 = &PPM_ETW_PROCESSOR_PROFILE_RUNDOWN;
    LOBYTE(v1) = EtwEventEnabled(PpmEtwHandle, v3);
    if ( (_BYTE)v1 )
    {
      v4 = PpmCurrentProfile;
      v5 = 0;
      v16 = MEMORY[0xFFFFF78000000008];
      PpmEndProfileAccumulation(PpmCurrentProfile, MEMORY[0xFFFFF78000000008]);
      while ( 1 )
      {
        RtlStringCchLengthW(*v6, 0x7FFFFFFFuLL, &pcchLength);
        v8 = *v7;
        UserData.Reserved = 0;
        v20 = 0;
        v23 = 0;
        v26 = 0;
        v29 = 0;
        UserData.Ptr = v8;
        v19 = 1;
        v22 = 1;
        v25 = 4;
        UserData.Size = 2 * pcchLength + 2;
        v18 = v7 + 1;
        v21 = v7 + 4;
        v24 = (char *)v7 + 28;
        v27 = (char *)v7 + 12;
        v28 = 16;
        v13 = v7[357] / 0xA;
        v14 = v7[358] / 0xA;
        v9 = v7[359];
        v32 = 0;
        v35 = 0;
        v38 = 0;
        v41 = 0;
        v30 = v7 + 356;
        v33 = &v13;
        v36 = &v14;
        v39 = &v15;
        v15 = v9 / 0xA;
        v10 = &PPM_ETW_PROCESSOR_PROFILE_RUNDOWN;
        v31 = 8;
        v34 = 8;
        v37 = 8;
        v40 = 8;
        if ( !a1 )
          v10 = &PPM_ETW_PROCESSOR_PROFILE_REGISTERED;
        LOBYTE(v1) = EtwWrite(PpmEtwHandle, v10, 0LL, 9u, &UserData);
        if ( v5 == PpmProfileCount )
          break;
        v6 = (STRSAFE_PCNZWCH *)(PpmProfiles + 2880LL * v5++);
      }
      v4[355] = v16;
    }
  }
  return (char)v1;
}
