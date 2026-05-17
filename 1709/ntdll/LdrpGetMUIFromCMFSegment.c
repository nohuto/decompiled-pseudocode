/*
 * XREFs of LdrpGetMUIFromCMFSegment @ 0x18001AA5C
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x18001D76C (LdrpResSearchResourceMappedFile.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18002AD00 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001ACF0 (RtlSetLastWin32Error.c)
 *     ResCKeInitRuntimeViewEx @ 0x18001AEC4 (ResCKeInitRuntimeViewEx.c)
 *     LdrpGetRcConfig @ 0x18002A8F0 (LdrpGetRcConfig.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     LdrpInitMuiCrits @ 0x180049210 (LdrpInitMuiCrits.c)
 *     RtlLcidToLocaleName @ 0x180051F50 (RtlLcidToLocaleName.c)
 *     ResCRuntimeGetResourceDataEx @ 0x18008DD70 (ResCRuntimeGetResourceDataEx.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     LdrpUnmapCMFSegment @ 0x1800E0E30 (LdrpUnmapCMFSegment.c)
 *     ResCRuntimeGetCultureID @ 0x18010C014 (ResCRuntimeGetCultureID.c)
 */

__int64 __fastcall LdrpGetMUIFromCMFSegment(__int64 a1, __int16 a2, int a3, char a4, _DWORD *a5, _QWORD *a6)
{
  __int64 ResourceData; // rbx
  int CultureID; // edi
  int v10; // r15d
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 inited; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 RcConfig; // rax
  int v19; // ecx
  __int128 v20; // xmm6
  int v21; // ecx
  __int64 v22; // rcx
  unsigned int i; // ebx
  unsigned int v24; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int LastErrorValue; // [rsp+44h] [rbp-BCh]
  char v26[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v27; // [rsp+4Ah] [rbp-B6h]
  char *v28; // [rsp+50h] [rbp-B0h]
  __int128 v29; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v30; // [rsp+70h] [rbp-90h] BYREF
  char v31; // [rsp+80h] [rbp-80h] BYREF

  ResourceData = 0LL;
  v24 = 0;
  LOWORD(CultureID) = a2;
  v10 = a4 & 0x80;
  LastErrorValue = NtCurrentTeb()->LastErrorValue;
  LdrpInitMuiCrits(&MuiLockInitCount, &MuiCriticalSection);
  v13 = ResRuntimeView;
  if ( !ResRuntimeView )
  {
    RtlEnterCriticalSection(&MuiCriticalSection);
    if ( !ResRuntimeView )
    {
      inited = ResCKeInitRuntimeViewEx();
      if ( !inited )
        inited = -1LL;
      ResRuntimeView = inited;
    }
    RtlLeaveCriticalSection(&MuiCriticalSection);
    v13 = ResRuntimeView;
  }
  if ( v13 != -1
    && (!v13
     || (v16 = *(_QWORD *)(v13 + 16)) != 0
     && (v17 = *(_QWORD *)(v16 + 24)) != 0
     && (*(_DWORD *)(v17 + 48) & 0x100000) == 0) )
  {
    if ( (_WORD)CultureID == 1024 || (_WORD)CultureID == 2048 || (_WORD)CultureID == 3072 || (_WORD)CultureID == 5120 )
    {
      v28 = &v31;
      v27 = 170;
      if ( (int)RtlLcidToLocaleName((unsigned __int16)CultureID, v26, 2LL) < 0 )
        goto LABEL_8;
      CultureID = ResCRuntimeGetCultureID(v22, v28);
      if ( !CultureID )
        goto LABEL_8;
    }
    else
    {
      CultureID = (unsigned __int16)CultureID;
    }
    LOBYTE(v12) = 1;
    RcConfig = LdrpGetRcConfig(a1, v11, 0LL, v12);
    if ( RcConfig && *(_DWORD *)RcConfig == -20054323 )
    {
      v20 = *(_OWORD *)(RcConfig + 28);
      v29 = v20;
      ResourceData = ResCRuntimeGetResourceDataEx(
                       v19,
                       (unsigned int)&v29,
                       CultureID,
                       a3,
                       16,
                       (__int64)&v24,
                       (__int64)a5);
      if ( ResourceData == -2 )
      {
        if ( v10
          || (RtlEnterCriticalSection(&MuiCriticalSection),
              v30 = v20,
              ResourceData = ResCRuntimeGetResourceDataEx(
                               v21,
                               (unsigned int)&v30,
                               CultureID,
                               a3,
                               0,
                               (__int64)&v24,
                               (__int64)a5),
              RtlLeaveCriticalSection(&MuiCriticalSection),
              ResourceData == -2) )
        {
          ResourceData = 0LL;
        }
      }
      if ( ((ResourceData + 3) & 0xFFFFFFFFFFFFFFFDuLL) == 0 )
      {
        if ( CMFQueueRear )
        {
          RtlEnterCriticalSection(&MuiCriticalSection);
          for ( i = 0; i < (unsigned __int16)CMFQueueRear; LdrpUnmapCMFSegment((unsigned int)CMFStandbyQueue[i++]) )
            ;
          CMFQueueRear = 0;
          RtlLeaveCriticalSection(&MuiCriticalSection);
        }
        ResourceData = 0LL;
      }
    }
  }
LABEL_8:
  RtlSetLastWin32Error(LastErrorValue);
  if ( ResourceData )
  {
    if ( a6 )
      *a6 = v24;
  }
  else if ( a5 )
  {
    *a5 = -1;
  }
  return ResourceData;
}
