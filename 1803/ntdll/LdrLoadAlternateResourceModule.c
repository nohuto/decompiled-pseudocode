/*
 * XREFs of LdrLoadAlternateResourceModule @ 0x18007D9F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180033B60 @ 0x180033B60 (sub_180033B60.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180034390 (LdrLoadAlternateResourceModuleEx.c)
 *     sub_180034B2C @ 0x180034B2C (sub_180034B2C.c)
 *     sub_180034D90 @ 0x180034D90 (sub_180034D90.c)
 *     RtlCultureNameToLCID @ 0x1800367F0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     sub_18007DBEC @ 0x18007DBEC (sub_18007DBEC.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

NTSTATUS __cdecl LdrLoadAlternateResourceModule(
        PVOID DllHandle,
        PVOID *ResourceDllBase,
        ULONG_PTR *ResourceOffset,
        ULONG Flags)
{
  PVOID v6; // rbx
  NTSTATUS v7; // esi
  __int64 v8; // rdx
  _DWORD *v9; // rdi
  PVOID v10; // r12
  unsigned int v11; // ecx
  char v12; // al
  unsigned int v13; // r8d
  unsigned __int16 *MergedPrefLanguages; // rcx
  unsigned __int16 v15; // bx
  ULONG v16; // r14d
  unsigned int v17; // r8d
  unsigned int v18; // ecx
  LANGID v19; // dx
  NTSTATUS AlternateResourceModule; // eax
  _DWORD *v22; // rax
  BOOLEAN v23; // al
  _WORD *v24; // rax
  bool v25[4]; // [rsp+30h] [rbp-A9h] BYREF
  unsigned int v26; // [rsp+34h] [rbp-A5h]
  unsigned __int16 v27[2]; // [rsp+38h] [rbp-A1h] BYREF
  unsigned int v28; // [rsp+3Ch] [rbp-9Dh]
  __int64 v29; // [rsp+40h] [rbp-99h]
  ULONG v30; // [rsp+48h] [rbp-91h]
  unsigned int v31; // [rsp+4Ch] [rbp-8Dh]
  PVOID DllHandlea; // [rsp+50h] [rbp-89h]
  DWORD Lcid; // [rsp+58h] [rbp-81h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-79h] BYREF
  _WORD v35[64]; // [rsp+70h] [rbp-69h] BYREF

  v26 = 0;
  DllHandlea = DllHandle;
  v6 = DllHandle;
  v30 = Flags;
  memset(v35, 0, sizeof(v35));
  v7 = -1073020927;
  v31 = 0;
  v8 = 0LL;
  v29 = 0LL;
  v9 = 0LL;
  v28 = 0;
  v10 = 0LL;
  if ( !v6 || !ResourceDllBase )
    return -1073741811;
  v25[0] = 0;
  while ( 2 )
  {
    v11 = v26;
    do
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v26 = v11 + 1;
          if ( !v11 )
            break;
          if ( v11 != 1 )
            goto LABEL_19;
          v22 = sub_180033B60(v6, v8, 1, 1);
          v11 = v26;
          v8 = v29;
          v9 = v22;
          if ( v22 )
          {
            if ( *v22 == -20054323 && (v22[6] & 2) != 0 )
            {
              if ( v22[31] )
              {
                RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)v22 + (unsigned int)v22[31]));
                v23 = RtlCultureNameToLCID(&DestinationString, &Lcid);
                v11 = v26;
                v8 = v29;
                if ( v23 )
                {
                  v16 = v30;
                  v15 = Lcid;
                  v27[0] = Lcid;
                  if ( (v30 & 0x80u) == 0 && (v9[5] & 0x100) != 0 )
                  {
                    sub_180034D90(v26, (__int64)NtCurrentTeb()->MergedPrefLanguages, 0, v27, v25);
                    v11 = v26;
                    if ( v25[0] )
                      v15 = -4370;
                    else
                      v15 = v27[0];
                  }
                  goto LABEL_12;
                }
              }
            }
          }
        }
        v27[0] = 0;
        v12 = sub_180034B2C();
        v13 = v28;
        if ( v12
          && (MergedPrefLanguages = (unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages, v28 < MergedPrefLanguages[2]) )
        {
          sub_180034D90((__int64)MergedPrefLanguages, (__int64)NtCurrentTeb()->MergedPrefLanguages, v28, v27, v25);
          v13 = v28;
          v15 = v27[0];
        }
        else
        {
          v15 = 0;
        }
        v11 = v26;
        v8 = v29;
        if ( !v15 )
          goto LABEL_23;
        if ( (v30 & 0x80u) == 0 && v25[0] )
        {
          if ( (v9 || (v9 = sub_180033B60(DllHandlea, v29, 0, 1)) != 0LL) && *v9 == -20054323 )
          {
            v13 = v28;
            if ( (v9[5] & 0x100) != 0 )
              v15 = -4370;
          }
          else
          {
            v13 = v28;
          }
        }
        v11 = 0;
        v16 = v30;
        v28 = v13 + 1;
        v26 = 0;
LABEL_12:
        v8 = v29;
        if ( v15 == 0xEEEE )
          goto LABEL_23;
        v17 = v31;
        v18 = 0;
        if ( !v31 )
          break;
        v24 = v35;
        while ( 1 )
        {
          v8 = v29;
          if ( *v24 == v15 )
            break;
          ++v18;
          ++v24;
          if ( v18 >= v31 )
            goto LABEL_14;
        }
        v11 = v26;
LABEL_23:
        v6 = DllHandlea;
      }
LABEL_14:
      if ( v31 >= 0x40 )
        goto LABEL_18;
      v35[v31] = v15;
      v19 = v15;
      v6 = DllHandlea;
      v31 = v17 + 1;
      AlternateResourceModule = LdrLoadAlternateResourceModuleEx(DllHandlea, v19, ResourceDllBase, ResourceOffset, v16);
      v11 = v26;
      v8 = v29;
      v7 = AlternateResourceModule;
    }
    while ( AlternateResourceModule < 0 );
    if ( (v16 & 0x80u) == 0 )
      goto LABEL_19;
    if ( !(unsigned __int8)sub_18007DBEC(v6, *ResourceDllBase) )
    {
      if ( v10 )
      {
        v8 = v29;
      }
      else
      {
        v10 = *ResourceDllBase;
        if ( ResourceOffset )
          v8 = *ResourceOffset;
        else
          v8 = 0LL;
        v29 = v8;
      }
      v7 = -1073020927;
      continue;
    }
    break;
  }
LABEL_18:
  v8 = v29;
LABEL_19:
  if ( v7 < 0 && (v30 & 0x80u) != 0 && v10 )
  {
    *ResourceDllBase = v10;
    if ( ResourceOffset )
      *ResourceOffset = v8;
    return 0;
  }
  return v7;
}
