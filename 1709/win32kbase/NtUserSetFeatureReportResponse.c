/*
 * XREFs of NtUserSetFeatureReportResponse @ 0x1C00E9F40
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C000D6B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     Win32AllocPoolWithQuota @ 0x1C0027000 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A6FB0 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C010828C (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDEResetPointerDeviceMaxCount @ 0x1C010A390 (RIMIDEResetPointerDeviceMaxCount.c)
 *     InputExtensibilityCalloutGuard @ 0x1C0129DB0 (InputExtensibilityCalloutGuard.c)
 */

__int64 __fastcall NtUserSetFeatureReportResponse(char *a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v7; // rsi
  int v8; // edi
  __int64 v9; // rcx
  int v10; // ecx
  void *v11; // rax
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  PVOID v17; // r15
  char *v18; // rsi
  unsigned int *v19; // rsi
  unsigned int v20; // r12d
  _DWORD *v21; // r14
  int v22; // edx
  unsigned int v23; // eax
  PVOID Object; // [rsp+30h] [rbp-48h] BYREF
  void *v26; // [rsp+38h] [rbp-40h]
  unsigned int v27; // [rsp+90h] [rbp+18h]
  __int64 v28; // [rsp+98h] [rbp+20h] BYREF

  v27 = a3;
  v4 = (unsigned int)a3;
  Object = 0LL;
  v26 = 0LL;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v28, (__int64)a2, a3, a4);
  InputExtensibilityCalloutGuard();
  if ( (unsigned int)(v4 - 1) > 6 || (v7 = 12 * v4, (unsigned __int64)(12 * v4) > 0xFFFFFFFF) )
  {
    v10 = 87;
    goto LABEL_64;
  }
  v8 = 1;
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(1LL) )
  {
    v10 = 5;
LABEL_64:
    v8 = 0;
    UserSetLastError(v10);
    goto LABEL_65;
  }
  if ( v7 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v9) == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&a2[v7] > MmUserProbeAddress || &a2[v7] < a2 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v11 = (void *)Win32AllocPoolWithQuota((unsigned int)v7, 0x74697355u);
  v12 = (__int64)v11;
  v26 = v11;
  if ( !v11 )
    ExRaiseStatus(-1073741801);
  memmove(v11, a2, (unsigned int)v7);
  if ( (int)RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object) < 0 )
  {
    v8 = 0;
    UserSetLastError(87);
    v17 = Object;
  }
  else
  {
    v17 = Object;
    if ( Object )
      v18 = (char *)Object + 64;
    else
      v18 = 0LL;
    v19 = (unsigned int *)*((_QWORD *)v18 + 59);
    if ( *(_DWORD *)(*((_QWORD *)Object + 55) + 16LL) || (v19[69] & 0x8000) == 0 )
    {
LABEL_57:
      v8 = 0;
      UserSetLastError(87);
    }
    else
    {
      v20 = 0;
      if ( v27 )
      {
        v21 = (_DWORD *)(v12 + 4);
        v13 = 65280LL;
        while ( 1 )
        {
          v14 = *((unsigned __int16 *)v21 - 2);
          if ( (_WORD)v14 != 13 )
            goto LABEL_36;
          if ( *((_WORD *)v21 - 1) != 85 )
            break;
          v22 = *v21;
          if ( (int)*v21 > 256 || (v15 = v19[6], v14 = (unsigned int)(v15 - 1) <= 3, (unsigned int)(v15 - 1) > 3) )
          {
            v15 = v19[6];
            if ( (_DWORD)v15 != 7 || v22 > 5 )
              goto LABEL_57;
          }
          v23 = v19[170];
          if ( (_DWORD)v15 == 7 )
          {
            v14 = 0xFFFFFFFFLL;
            --v23;
          }
          if ( v22 != v23 && !(unsigned int)RIMIDEResetPointerDeviceMaxCount(v19) )
            goto LABEL_57;
          v13 = 65280LL;
LABEL_55:
          ++v20;
          v21 += 3;
          if ( v20 >= v27 )
            goto LABEL_59;
        }
        if ( *((_WORD *)v21 - 1) == 89 && v19[6] == 7 && *v21 <= 1u )
        {
          v19[216] = *v21;
          goto LABEL_55;
        }
LABEL_36:
        if ( (unsigned __int16)v14 < 0xFF00u )
          goto LABEL_57;
        if ( *((_WORD *)v21 - 1) == 226 && v19[6] == 7 )
        {
          v19[66] = 1;
          v19[62] = *v21;
        }
        else if ( *((_WORD *)v21 - 1) == 227 && v19[6] == 7 )
        {
          v19[66] = 1;
          v19[63] = *v21;
        }
        else if ( *((_WORD *)v21 - 1) == 225 && v19[6] == 7 )
        {
          v19[68] = *v21 != 0;
        }
        else if ( *((_WORD *)v21 - 1) == 228 && v19[6] == 7 && (unsigned int)(*v21 - 1) <= 0x63 )
        {
          v19[67] = 1;
          v19[64] = *v21;
        }
        else
        {
          if ( *((_WORD *)v21 - 1) != 229 || v19[6] != 7 || (unsigned int)(*v21 - 1) > 0x63 )
            goto LABEL_57;
          v19[67] = 1;
          v19[65] = *v21;
        }
        goto LABEL_55;
      }
    }
  }
LABEL_59:
  if ( v17 )
    ObfDereferenceObject(v17);
  if ( v12 )
    Win32FreePool(v12);
LABEL_65:
  UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
  return v8;
}
