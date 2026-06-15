/*
 * XREFs of ?IsStreamCategoryDucked@CStreamClassPolicyManager@@UEAAHKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@H@Z @ 0x180023480
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@@@Z @ 0x1800245F0 (-GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x180025C38 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 */

__int64 __fastcall CStreamClassPolicyManager::IsStreamCategoryDucked(
        CStreamClassPolicyManager *this,
        unsigned int a2,
        const unsigned __int16 *a3,
        unsigned int a4,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a5,
        int a6)
{
  __int64 v7; // rsi
  unsigned int v9; // edi
  int v10; // ebx
  _QWORD *v11; // r8
  __int64 v12; // rax
  __int64 v13; // rcx
  struct CStreamClassPolicyGainsWrapper *v15; // [rsp+20h] [rbp-28h] BYREF
  TSSession *v16; // [rsp+28h] [rbp-20h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v18; // [rsp+38h] [rbp-10h]

  v7 = a4;
  v9 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  if ( !(unsigned int)TsSessionFromSessionId(a2, 1, 0LL, &v16)
    && (int)TSSession::GetStreamClassPolicyGainsForEndpoint(v16, a3, &v15) >= 0 )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)v15;
    v18 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    v10 = 0;
    if ( (unsigned int)v7 < 0x15 )
    {
      _mm_lfence();
      v11 = *(_QWORD **)((char *)v15 + 48 * v7 + (a6 != 0 ? 1048LL : 40LL));
      while ( v11 )
      {
        v12 = v11[2];
        v11 = (_QWORD *)*v11;
        v13 = *(_QWORD *)(v12 + 48);
        if ( *(float *)v13 != 0.0 && *(_BYTE *)(v13 + 4) )
        {
          v10 = 1;
          break;
        }
      }
    }
    if ( v18 )
      LeaveCriticalSection(lpCriticalSection);
    v9 = v10;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  return v9;
}
