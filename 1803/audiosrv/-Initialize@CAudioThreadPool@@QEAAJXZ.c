/*
 * XREFs of ?Initialize@CAudioThreadPool@@QEAAJXZ @ 0x18005B99C
 * Callers:
 *     ?InitializeAudioThreadpool@@YAJXZ @ 0x18005B924 (-InitializeAudioThreadpool@@YAJXZ.c)
 * Callees:
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 */

__int64 __fastcall CAudioThreadPool::Initialize(CAudioThreadPool *this)
{
  CAudioThreadPool *v1; // rdi
  unsigned int v2; // ebx
  PTP_CLEANUP_GROUP ThreadpoolCleanupGroup; // rax
  signed int LastError; // eax

  v1 = ThreadPool;
  v2 = 0;
  if ( RtlDllShutdownInProgress() )
  {
    v2 = -2147023781;
LABEL_7:
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_b77572dd5afa3089b98c995db13dd032_Traceguids, v2);
    }
    return v2;
  }
  ThreadpoolCleanupGroup = CreateThreadpoolCleanupGroup();
  *((_QWORD *)v1 + 10) = ThreadpoolCleanupGroup;
  if ( ThreadpoolCleanupGroup )
  {
    *((_QWORD *)v1 + 4) = 0LL;
    *((_QWORD *)v1 + 3) = ThreadpoolCleanupGroup;
  }
  else
  {
    LastError = GetLastError();
    v2 = LastError;
    if ( LastError > 0 )
      v2 = (unsigned __int16)LastError | 0x80070000;
  }
  if ( (v2 & 0x80000000) != 0 )
    goto LABEL_7;
  return v2;
}
