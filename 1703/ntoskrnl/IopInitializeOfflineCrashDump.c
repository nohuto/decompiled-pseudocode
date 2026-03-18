/*
 * XREFs of IopInitializeOfflineCrashDump @ 0x140159E68
 * Callers:
 *     IopInitCrashDumpDuringSysInit @ 0x1408137A4 (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     IopConstructInMemoryDumpHeader @ 0x1401F1D28 (IopConstructInMemoryDumpHeader.c)
 *     IopInitializeInMemoryDumpData @ 0x1401F232C (IopInitializeInMemoryDumpData.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IopOpenRegistryKey @ 0x14044DB84 (IopOpenRegistryKey.c)
 *     IopGetRegistryValue @ 0x1404D9A74 (IopGetRegistryValue.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 *     IoGetEnvironmentVariableEx @ 0x1406902FC (IoGetEnvironmentVariableEx.c)
 *     IoSetEnvironmentVariableEx @ 0x1406905FC (IoSetEnvironmentVariableEx.c)
 *     IopCachePreviousBootData @ 0x140832D48 (IopCachePreviousBootData.c)
 */

void __fastcall IopInitializeOfflineCrashDump(__int64 a1)
{
  int v1; // ebx
  int v2; // eax
  char v3; // al
  char v4; // [rsp+30h] [rbp-50h]
  HANDLE Handle; // [rsp+38h] [rbp-48h] BYREF
  int v6; // [rsp+40h] [rbp-40h]
  PVOID P; // [rsp+48h] [rbp-38h]
  int v8; // [rsp+50h] [rbp-30h] BYREF
  const wchar_t *v9; // [rsp+58h] [rbp-28h]
  int v10; // [rsp+60h] [rbp-20h]
  int v11; // [rsp+64h] [rbp-1Ch]
  int v12; // [rsp+68h] [rbp-18h]
  int v13; // [rsp+6Ch] [rbp-14h]

  v1 = 0;
  v10 = 2012912317;
  Handle = 0LL;
  dword_14036E500 = 0;
  v11 = 1295123289;
  v12 = -198680387;
  v13 = 1266192359;
  v8 = 8388734;
  v9 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl";
  v6 = 1;
  v4 = 0;
  if ( a1 )
  {
    if ( (unsigned int)(*(_DWORD *)(a1 + 2456) - 1) <= 1 )
    {
      PoOffCrashConfigTable = *(_OWORD *)(a1 + 2456);
      xmmword_14034C950 = *(_OWORD *)(a1 + 2472);
      v2 = IopOpenRegistryKey(&Handle, 0LL, &v8, 131097LL, 0);
      if ( v2 >= 0 )
      {
        if ( (int)IopGetRegistryValue(Handle) < 0 )
          goto LABEL_14;
        if ( *((_DWORD *)P + 3) )
          v1 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
        ExFreePoolWithTag(P, 0);
        if ( v1 == 1 )
        {
          OfflineDumpEnabled = 1;
          v4 = 1;
        }
        else
        {
LABEL_14:
          OfflineDumpEnabled = 0;
          if ( (unsigned int)PoOffCrashConfigTable >= 2 )
          {
            v3 = 0;
            if ( (BYTE8(PoOffCrashConfigTable) & 4) != 0 )
              v3 = 4;
            v4 = v3;
          }
        }
        if ( (int)IoGetEnvironmentVariableEx(L"OfflineMemoryDumpUseCapability", 0LL) < 0 || v4 )
          IoSetEnvironmentVariableEx(L"OfflineMemoryDumpUseCapability", 7);
        if ( OfflineDumpEnabled )
        {
          IopCachePreviousBootData(&Handle);
          IopInitializeInMemoryDumpData();
          IopConstructInMemoryDumpHeader();
          if ( (int)IopGetRegistryValue(Handle) >= 0 )
          {
            if ( *((_DWORD *)P + 3) )
              DumpPolicyAttemptOffline = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
            ExFreePoolWithTag(P, 0);
          }
        }
      }
      else
      {
        dword_14036E500 = v2;
      }
    }
    else
    {
      dword_14036E500 = -1073741736;
    }
    if ( Handle )
      ObCloseHandle(Handle, 0);
  }
  else
  {
    dword_14036E500 = -1073741275;
  }
}
