/*
 * XREFs of ?Initialize@CMuteSoftware@@UEAAJPEAUIMMDevice@@@Z @ 0x180066DF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Initialize@CMuteControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x180066D00 (-Initialize@CMuteControlBase@@UEAAJPEAUIMMDevice@@@Z.c)
 */

__int64 __fastcall CMuteSoftware::Initialize(CMuteSoftware *this, struct IMMDevice *a2)
{
  signed int v3; // ebx
  __int64 v4; // rax
  signed int LastError; // eax

  v3 = CMuteControlBase::Initialize(this, a2);
  if ( v3 < 0 )
    goto LABEL_7;
  if ( ThreadPool )
  {
    v4 = (*(__int64 (__fastcall **)(CAudioThreadPool *, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *), CMuteSoftware *))(*(_QWORD *)ThreadPool + 8LL))(
           ThreadPool,
           CMuteSoftware::OnPersistState,
           this);
    *((_QWORD *)this + 11) = v4;
    if ( !v4 )
    {
      LastError = GetLastError();
      v3 = LastError;
      if ( LastError > 0 )
        v3 = (unsigned __int16)LastError | 0x80070000;
    }
  }
  if ( v3 < 0 )
LABEL_7:
    AudSrvTraceLoggingErrorHelper("CMuteSoftware::Initialize", 818, v3);
  return (unsigned int)v3;
}
