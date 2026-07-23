/*
 * XREFs of sub_18003697C @ 0x18003697C
 * Callers:
 *     sub_180035838 @ 0x180035838 (sub_180035838.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180035838 @ 0x180035838 (sub_180035838.c)
 *     sub_18003660C @ 0x18003660C (sub_18003660C.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180036E50 (LdrLoadAlternateResourceModuleEx.c)
 *     sub_180037618 @ 0x180037618 (sub_180037618.c)
 *     sub_18003802C @ 0x18003802C (sub_18003802C.c)
 *     sub_180040BCC @ 0x180040BCC (sub_180040BCC.c)
 *     RtlCultureNameToLCID @ 0x180045FF0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     DbgPrintEx @ 0x18005FEB0 (DbgPrintEx.c)
 *     sub_180075EA0 @ 0x180075EA0 (sub_180075EA0.c)
 *     sub_180084574 @ 0x180084574 (sub_180084574.c)
 *     sub_180088CF8 @ 0x180088CF8 (sub_180088CF8.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     sub_1800E1D24 @ 0x1800E1D24 (sub_1800E1D24.c)
 */

__int64 __fastcall sub_18003697C(PVOID BaseOfImage, __int64 a2, DWORD a3, ULONG a4, __int64 a5)
{
  PVOID v5; // r10
  unsigned int v7; // eax
  int v9; // esi
  LANGID v10; // bx
  char v11; // r11
  int v12; // r12d
  __int64 v13; // rdx
  _DWORD *v14; // r13
  char v15; // r9
  __int64 v16; // r8
  int v17; // ecx
  int v18; // edi
  int v19; // r15d
  int v20; // ecx
  __int64 v21; // rcx
  char v22; // al
  unsigned int v23; // r8d
  unsigned __int16 *MergedPrefLanguages; // rcx
  unsigned int v25; // ecx
  NTSTATUS v26; // eax
  PVOID v27; // rdi
  __int64 v28; // rdx
  _QWORD *v29; // r15
  __int64 v30; // rcx
  _WORD *v32; // rax
  int v33; // ecx
  int v34; // eax
  char v35; // [rsp+30h] [rbp-D0h]
  char v36; // [rsp+31h] [rbp-CFh]
  _WORD v37[2]; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 v38; // [rsp+38h] [rbp-C8h]
  _BYTE v39[2]; // [rsp+3Ah] [rbp-C6h] BYREF
  unsigned int v40; // [rsp+3Ch] [rbp-C4h]
  PVOID DllHandle; // [rsp+40h] [rbp-C0h]
  unsigned int v42; // [rsp+48h] [rbp-B8h]
  DWORD Lcid[3]; // [rsp+4Ch] [rbp-B4h] BYREF
  PVOID ResourceDllBase; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v45; // [rsp+60h] [rbp-A0h]
  ULONG_PTR ResourceOffset; // [rsp+68h] [rbp-98h] BYREF
  __int64 v47; // [rsp+70h] [rbp-90h]
  _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  _WORD v49[64]; // [rsp+90h] [rbp-70h] BYREF

  v5 = BaseOfImage;
  DllHandle = BaseOfImage;
  v47 = a5;
  Lcid[1] = a3;
  v7 = a3 - 3;
  v45 = a2;
  ResourceDllBase = 0LL;
  v37[0] = 0;
  v9 = -1073020927;
  v35 = 0;
  v10 = 0;
  v40 = 0;
  v11 = 0;
  v42 = 0;
  v12 = 0;
  v36 = 0;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0;
  if ( v7 > 1 )
    return (unsigned int)-1073741583;
  v16 = *(unsigned __int16 *)(a2 + 16);
  v38 = v16;
  v39[0] = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        while ( 1 )
        {
          v17 = v12;
          v18 = v12;
          v19 = v12++;
          if ( !v17 )
            break;
          v20 = v17 - 1;
          if ( v20 )
          {
            v21 = (unsigned int)(v20 - 1);
            if ( !(_DWORD)v21 )
            {
              v37[0] = 0;
              v22 = sub_180040BCC(v21, v13, v16);
              v23 = v42;
              if ( v22
                && (MergedPrefLanguages = (unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages,
                    v42 < MergedPrefLanguages[2]) )
              {
                sub_180037618(
                  (_DWORD)MergedPrefLanguages,
                  NtCurrentTeb()->MergedPrefLanguages,
                  v42,
                  (unsigned int)v37,
                  (__int64)v39);
                v23 = v42;
                v10 = v37[0];
              }
              else
              {
                v10 = 0;
                v37[0] = 0;
              }
              if ( !v10 )
                goto LABEL_57;
              if ( v39[0] && (a4 & 0x100000) != 0 )
              {
                v10 = -4370;
                v37[0] = -4370;
              }
              v12 = v19;
              v42 = v23 + 1;
              goto LABEL_12;
            }
            if ( (_DWORD)v21 == 1 )
            {
              if ( !v14 )
              {
                v14 = sub_18003660C(v5, v13, 0, 1);
                if ( !v14 )
                  goto LABEL_57;
              }
              if ( *v14 != -20054323 || (v14[6] & 2) == 0 || !v14[31] )
                goto LABEL_57;
              RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)v14 + (unsigned int)v14[31]));
              if ( !RtlCultureNameToLCID(&DestinationString, Lcid) )
              {
                v9 = -1073020923;
LABEL_57:
                v10 = -4370;
                v37[0] = -4370;
LABEL_44:
                v13 = v40;
                v15 = v36;
                goto LABEL_45;
              }
              v10 = Lcid[0];
              v37[0] = Lcid[0];
              if ( (a4 & 0x100000) != 0 )
              {
                sub_180037618(v33, NtCurrentTeb()->MergedPrefLanguages, 0, (unsigned int)v37, (__int64)v39);
                v5 = DllHandle;
                v16 = v38;
                v15 = v36;
                v11 = v35;
                if ( v39[0] )
                {
                  v10 = -4370;
                  v37[0] = -4370;
                }
                else
                {
                  v10 = v37[0];
                }
                goto LABEL_13;
              }
LABEL_12:
              v11 = v35;
              v15 = v36;
              v16 = v38;
              v5 = DllHandle;
LABEL_13:
              v13 = v40;
              goto LABEL_18;
            }
            if ( v15 || v11 || (int)sub_180075EA0(v5) < 0 )
              return (unsigned int)v9;
            v13 = 0LL;
            v42 = 0;
            v15 = 1;
            v40 = 0;
            v36 = 1;
            a4 |= 0x400000u;
            v12 = 0;
LABEL_45:
            v16 = v38;
            v5 = DllHandle;
            v11 = v35;
          }
          else
          {
            if ( v10 == 0xEEEE )
              goto LABEL_36;
            if ( (a4 & 4) != 0 )
            {
              v10 = -4370;
              v37[0] = -4370;
              v12 = -2;
            }
            else
            {
              if ( (v16 & 0x3FF) == 0 )
                goto LABEL_36;
              v34 = sub_180088CF8(v10, v37, v16);
              v13 = v40;
              v5 = DllHandle;
              v16 = v38;
              v15 = v36;
              v11 = v35;
              if ( v34 >= 0 )
              {
                v10 = v37[0];
                if ( v37[0] )
                {
                  v12 = v18;
                  goto LABEL_18;
                }
              }
              v12 = -2;
LABEL_36:
              v10 = -4370;
              v37[0] = -4370;
            }
          }
        }
        if ( (v16 & 0xF3FF) != 0 || (_WORD)v16 == 3072 )
          v10 = v16;
        else
          v10 = -4370;
        v37[0] = v10;
LABEL_18:
        ;
      }
      while ( v10 == 0xEEEE );
      v25 = 0;
      if ( !(_DWORD)v13 )
        break;
      v32 = v49;
      while ( *v32 != v10 )
      {
        ++v25;
        ++v32;
        if ( v25 >= (unsigned int)v13 )
          goto LABEL_20;
      }
    }
LABEL_20:
    if ( (unsigned int)v13 >= 0x40 )
      return (unsigned int)v9;
    ResourceOffset = 0LL;
    v40 = v13 + 1;
    v49[(unsigned int)v13] = v10;
    v26 = LdrLoadAlternateResourceModuleEx(v5, v10, &ResourceDllBase, &ResourceOffset, a4);
    v9 = v26;
    if ( v26 >= 0 )
      break;
    if ( v26 != -1073741772 )
    {
      v13 = v40;
      v5 = DllHandle;
      v16 = v38;
      v15 = v36;
      v11 = v35;
      if ( v26 != -1073741766 )
        continue;
    }
    v9 = -1073020927;
    goto LABEL_44;
  }
  v27 = ResourceDllBase;
  v28 = v45;
  v29 = (_QWORD *)v47;
  *(_QWORD *)(v45 + 16) = v10;
  v35 = 1;
  v9 = sub_180035838(v27, v28, 3u, 0x30u, (__int64)v29);
  if ( (a4 & 0x40) == 0 )
    goto LABEL_37;
  if ( v9 < 0 )
    goto LABEL_38;
  v9 = sub_18003802C((_DWORD)v27, *v29, 0, *(_DWORD *)(v45 + 24), 0);
  if ( v9 < 0 )
  {
    *v29 = 0LL;
LABEL_37:
    if ( v9 >= 0 )
      goto LABEL_25;
LABEL_38:
    if ( (unsigned __int8)sub_180084574(DllHandle, v27) )
      return (unsigned int)v9;
    goto LABEL_44;
  }
LABEL_25:
  if ( *v29 <= (unsigned __int64)v27 || ResourceOffset && *v29 >= (unsigned __int64)v27 + ResourceOffset )
  {
    *v29 = 0LL;
    v9 = -1073741701;
    DbgPrintEx(0x55u, 2u, "'LDR: %s(), invalid image format of MUI file \n", "LdrpLoadResourceFromAlternativeModule");
    goto LABEL_44;
  }
  if ( RtlGetCurrentServiceSessionId() )
  {
    v27 = ResourceDllBase;
    v30 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
  }
  else
  {
    v30 = 2147353477LL;
  }
  if ( (*(_BYTE *)v30 & 2) != 0 )
    sub_1800E1D24(v27);
  if ( NtCurrentTeb()->ResourceRetValue )
    *(_QWORD *)NtCurrentTeb()->ResourceRetValue = DllHandle;
  return (unsigned int)v9;
}
