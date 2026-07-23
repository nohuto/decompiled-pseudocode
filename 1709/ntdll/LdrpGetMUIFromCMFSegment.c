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

__int64 __fastcall LdrpGetMUIFromCMFSegment(PVOID BaseOfImage, __int16 a2, int a3, char a4, _DWORD *a5, _QWORD *a6)
{
  __int64 ResourceData; // rbx
  int CultureID; // edi
  int v10; // r15d
  _QWORD *v11; // rax
  __int64 inited; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 RcConfig; // rax
  int v17; // ecx
  __int128 v18; // xmm6
  int v19; // ecx
  __int64 v20; // rcx
  unsigned int i; // ebx
  unsigned int v22; // [rsp+40h] [rbp-C0h] BYREF
  LONG Win32Error; // [rsp+44h] [rbp-BCh]
  _UNICODE_STRING LocaleName; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v25; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v26; // [rsp+70h] [rbp-90h] BYREF
  char v27; // [rsp+80h] [rbp-80h] BYREF

  ResourceData = 0LL;
  v22 = 0;
  LOWORD(CultureID) = a2;
  v10 = a4 & 0x80;
  Win32Error = NtCurrentTeb()->LastErrorValue;
  LdrpInitMuiCrits(&MuiLockInitCount, &MuiCriticalSection);
  v11 = ResRuntimeView;
  if ( !ResRuntimeView )
  {
    RtlEnterCriticalSection(&MuiCriticalSection);
    if ( !ResRuntimeView )
    {
      inited = ResCKeInitRuntimeViewEx();
      if ( !inited )
        inited = -1LL;
      ResRuntimeView = (PVOID)inited;
    }
    RtlLeaveCriticalSection(&MuiCriticalSection);
    v11 = ResRuntimeView;
  }
  if ( v11 != (_QWORD *)-1LL
    && (!v11 || (v14 = v11[2]) != 0 && (v15 = *(_QWORD *)(v14 + 24)) != 0 && (*(_DWORD *)(v15 + 48) & 0x100000) == 0) )
  {
    if ( (_WORD)CultureID == 1024 || (_WORD)CultureID == 2048 || (_WORD)CultureID == 3072 || (_WORD)CultureID == 5120 )
    {
      LocaleName.Buffer = (wchar_t *)&v27;
      LocaleName.MaximumLength = 170;
      if ( RtlLcidToLocaleName((unsigned __int16)CultureID, &LocaleName, 2u, 0) < 0 )
        goto LABEL_8;
      CultureID = ResCRuntimeGetCultureID(v20, LocaleName.Buffer);
      if ( !CultureID )
        goto LABEL_8;
    }
    else
    {
      CultureID = (unsigned __int16)CultureID;
    }
    RcConfig = LdrpGetRcConfig(BaseOfImage);
    if ( RcConfig && *(_DWORD *)RcConfig == -20054323 )
    {
      v18 = *(_OWORD *)(RcConfig + 28);
      v25 = v18;
      ResourceData = ResCRuntimeGetResourceDataEx(
                       v17,
                       (unsigned int)&v25,
                       CultureID,
                       a3,
                       16,
                       (__int64)&v22,
                       (__int64)a5);
      if ( ResourceData == -2 )
      {
        if ( v10
          || (RtlEnterCriticalSection(&MuiCriticalSection),
              v26 = v18,
              ResourceData = ResCRuntimeGetResourceDataEx(
                               v19,
                               (unsigned int)&v26,
                               CultureID,
                               a3,
                               0,
                               (__int64)&v22,
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
  RtlSetLastWin32Error(Win32Error);
  if ( ResourceData )
  {
    if ( a6 )
      *a6 = v22;
  }
  else if ( a5 )
  {
    *a5 = -1;
  }
  return ResourceData;
}
