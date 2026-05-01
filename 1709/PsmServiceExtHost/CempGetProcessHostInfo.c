/*
 * XREFs of CempGetProcessHostInfo @ 0x180006500
 * Callers:
 *     ?RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x180006740 (-RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 * Callees:
 *     CempHostInfoInitialize @ 0x1800063B8 (CempHostInfoInitialize.c)
 *     CempGetHostIdFromProcessToken @ 0x18000647C (CempGetHostIdFromProcessToken.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180026AA5 (memcpy_0.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 */

__int64 __fastcall CempGetProcessHostInfo(HANDLE ProcessHandle, char *a2)
{
  void **Heap; // rdi
  int KeyFromToken; // ebx
  void *v6; // rbx
  ULONG v7; // eax
  ULONG TokenInformationLength; // [rsp+30h] [rbp-D0h] BYREF
  void *TokenHandle; // [rsp+38h] [rbp-C8h] BYREF
  int v11; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v12[3]; // [rsp+44h] [rbp-BCh] BYREF
  _BYTE v13[464]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v14[68]; // [rsp+220h] [rbp+120h] BYREF
  int TokenInformation; // [rsp+264h] [rbp+164h] BYREF
  int v16; // [rsp+268h] [rbp+168h]
  __int64 v17; // [rsp+270h] [rbp+170h] BYREF

  memset_0(v13, 0, 0x228uLL);
  TokenHandle = 0LL;
  Heap = 0LL;
  KeyFromToken = NtOpenProcessToken(ProcessHandle, 8u, &TokenHandle);
  if ( KeyFromToken >= 0 )
  {
    v11 = 464;
    KeyFromToken = PsmGetKeyFromToken(TokenHandle, v13, &v11, 0LL);
    if ( KeyFromToken >= 0 )
    {
      KeyFromToken = NtQueryInformationToken(TokenHandle, TokenUser, 0LL, 0, &TokenInformationLength);
      if ( (int)(KeyFromToken + 0x80000000) < 0 || KeyFromToken == -1073741789 )
      {
        Heap = (void **)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, TokenInformationLength);
        if ( Heap )
        {
          KeyFromToken = NtQueryInformationToken(
                           TokenHandle,
                           TokenUser,
                           Heap,
                           TokenInformationLength,
                           &TokenInformationLength);
          if ( KeyFromToken >= 0 )
          {
            v6 = *Heap;
            memset_0(v14, 0, sizeof(v14));
            v7 = RtlLengthSid(v6);
            memcpy_0(v14, v6, v7);
            KeyFromToken = NtQueryInformationToken(
                             TokenHandle,
                             TokenSessionId,
                             &TokenInformation,
                             4u,
                             &TokenInformationLength);
            if ( KeyFromToken >= 0 )
            {
              KeyFromToken = PsmQueryBackgroundActivationType(TokenHandle, v12);
              if ( KeyFromToken >= 0 )
              {
                v16 = 1 << SLOBYTE(v12[0]);
                KeyFromToken = CempGetHostIdFromProcessToken((__int64)TokenHandle, &v17);
                if ( KeyFromToken >= 0 )
                {
                  CempHostInfoInitialize((__int64)v13, v14, TokenInformation, v16, v17, a2);
                  KeyFromToken = 0;
                }
              }
            }
          }
        }
        else
        {
          KeyFromToken = -1073741801;
        }
      }
    }
  }
  if ( TokenHandle )
    NtClose(TokenHandle);
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return (unsigned int)KeyFromToken;
}
