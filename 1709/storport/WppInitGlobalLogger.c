/*
 * XREFs of WppInitGlobalLogger @ 0x1C0067E24
 * Callers:
 *     WppTraceCallback @ 0x1C00680D0 (WppTraceCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C001EEF0 (__report_rangecheckfailure.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F300 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001F340 (memmove.c)
 */

void __fastcall WppInitGlobalLogger(const GUID *Guid, _QWORD *a2, int *a3, _BYTE *a4)
{
  PVOID SystemRoutineAddress; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  unsigned int v11; // ebx
  PVOID v12; // rax
  int v13; // eax
  int v14; // [rsp+30h] [rbp-D0h] BYREF
  int v15; // [rsp+34h] [rbp-CCh] BYREF
  int v16; // [rsp+38h] [rbp-C8h] BYREF
  int v17; // [rsp+3Ch] [rbp-C4h] BYREF
  struct _UNICODE_STRING GuidString; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+60h] [rbp-A0h] BYREF
  int v21; // [rsp+68h] [rbp-98h]
  const wchar_t *v22; // [rsp+70h] [rbp-90h]
  int *v23; // [rsp+78h] [rbp-88h]
  int v24; // [rsp+80h] [rbp-80h]
  int *v25; // [rsp+88h] [rbp-78h]
  int v26; // [rsp+90h] [rbp-70h]
  __int64 v27; // [rsp+98h] [rbp-68h]
  int v28; // [rsp+A0h] [rbp-60h]
  const wchar_t *v29; // [rsp+A8h] [rbp-58h]
  int *v30; // [rsp+B0h] [rbp-50h]
  int v31; // [rsp+B8h] [rbp-48h]
  int *v32; // [rsp+C0h] [rbp-40h]
  int v33; // [rsp+C8h] [rbp-38h]
  __int64 v34; // [rsp+D0h] [rbp-30h]
  int v35; // [rsp+D8h] [rbp-28h]
  _OWORD v36[2]; // [rsp+110h] [rbp+10h] BYREF
  int v37; // [rsp+130h] [rbp+30h]

  v21 = 32;
  v16 = 0;
  v22 = L"Start";
  v17 = 0;
  v23 = &v15;
  v15 = 0;
  v25 = &v14;
  v14 = 0;
  v20 = 0LL;
  v24 = 4;
  v26 = 4;
  v27 = 0LL;
  v28 = 0;
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = RtlQueryRegistryValues;
  if ( ((int (__fastcall *)(__int64, const wchar_t *, __int64 *, _QWORD, _QWORD))SystemRoutineAddress)(
         2147483650LL,
         L"WMI\\GlobalLogger\\",
         &v20,
         0LL,
         0LL) >= 0 )
  {
    if ( v15 )
    {
      v24 = 4;
      v22 = L"Flags";
      v26 = 4;
      v23 = &v16;
      v31 = 4;
      v25 = &v14;
      v20 = 0LL;
      v29 = L"Level";
      v30 = &v17;
      v32 = &v14;
      v37 = *(_DWORD *)L"\\";
      v21 = 32;
      v27 = 0LL;
      v28 = 32;
      v33 = 1;
      v34 = 0LL;
      v35 = 0;
      v36[0] = *(_OWORD *)L"WMI\\GlobalLogger\\";
      v36[1] = *(_OWORD *)L"alLogger\\";
      if ( !RtlStringFromGUID(Guid, &GuidString) )
      {
        if ( GuidString.Length <= 0x4Cu )
        {
          v9 = -1LL;
          v10 = -1LL;
          do
            ++v10;
          while ( *((_WORD *)v36 + v10) );
          memmove((char *)v36 + 2 * (unsigned int)v10, GuidString.Buffer + 1, GuidString.Length);
          do
            ++v9;
          while ( *((_WORD *)v36 + v9) );
          v11 = v9 - 1;
          if ( 2 * (unsigned __int64)v11 >= 0x70 )
            _report_rangecheckfailure();
          *((_WORD *)v36 + v11) = 0;
          RtlFreeUnicodeString(&GuidString);
          RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
          v12 = MmGetSystemRoutineAddress(&DestinationString);
          if ( !v12 )
            v12 = RtlQueryRegistryValues;
          if ( ((int (__fastcall *)(__int64, _OWORD *, __int64 *, _QWORD, _QWORD))v12)(
                 2147483650LL,
                 v36,
                 &v20,
                 0LL,
                 0LL) >= 0
            && v15 == 1 )
          {
            v13 = v16 & 0x7FFFFFFF;
            *a2 = 1LL;
            *a3 = v13;
            *a4 = v17;
          }
        }
        else
        {
          RtlFreeUnicodeString(&GuidString);
        }
      }
    }
  }
}
