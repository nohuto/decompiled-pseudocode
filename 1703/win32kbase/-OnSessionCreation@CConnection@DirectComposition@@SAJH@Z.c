/*
 * XREFs of ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1C008F56C
 * Callers:
 *     DCompositionSessionInitialize @ 0x1C008F460 (DCompositionSessionInitialize.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 *     ??0CConnection@DirectComposition@@AEAA@XZ @ 0x1C00147B4 (--0CConnection@DirectComposition@@AEAA@XZ.c)
 *     ?Initialize@CConnection@DirectComposition@@AEAAJXZ @ 0x1C0015818 (-Initialize@CConnection@DirectComposition@@AEAAJXZ.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C0054B50 (Win32AllocPoolNonPaged.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall DirectComposition::CConnection::OnSessionCreation(int a1)
{
  struct _ERESOURCE *v2; // rax
  struct _ERESOURCE *v3; // rdi
  NTSTATUS v4; // ebx
  union _SLIST_HEADER *v5; // rax
  DirectComposition::CConnection *v6; // rcx

  DirectComposition::CConnection::s_pSessionConnectionLock = 0LL;
  v2 = (struct _ERESOURCE *)Win32AllocPoolNonPaged(104LL, 0x73634344u);
  v3 = v2;
  if ( v2 )
    memset(v2, 0, sizeof(struct _ERESOURCE));
  else
    v3 = 0LL;
  if ( v3 )
  {
    v4 = ExInitializeResourceLite(v3);
    if ( v4 < 0 )
    {
      Win32FreePool((__int64)v3);
    }
    else
    {
      DirectComposition::CConnection::s_pSessionConnectionLock = v3;
      KeQueryPerformanceCounter(&DirectComposition::CConnection::s_qpcFrequency);
      if ( a1 || (unsigned int)PsGetCurrentProcessSessionId() )
      {
        v5 = (union _SLIST_HEADER *)Win32AllocPoolZInit(0x110uLL, 1667449668LL);
        if ( v5 )
          v5 = DirectComposition::CConnection::CConnection(v5);
        DirectComposition::CConnection::s_pSessionConnection = (struct DirectComposition::CConnection *)v5;
        if ( !v5 )
          v4 = -1073741801;
        if ( v4 >= 0 )
          return (unsigned int)DirectComposition::CConnection::Initialize(v6);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v4;
}
