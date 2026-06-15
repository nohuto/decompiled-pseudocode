/*
 * XREFs of ?GetNotificationDataSize@@YAJPEAV?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@PEA_K@Z @ 0x180024ACC
 * Callers:
 *     ?GenerateMediaManagerNotification@@YAJPEAV?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@PEAPEAUMEDIAMANAGER_NOTIFICATION_BLOCK@@@Z @ 0x180024EC0 (-GenerateMediaManagerNotification@@YAJPEAV-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCAp.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x18000F7F4 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001013C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetSmtcProcesses@CApplication@@QEAAJAEAV?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@@Z @ 0x180012B74 (-GetSmtcProcesses@CApplication@@QEAAJAEAV-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetNotificationDataSize(_QWORD *a1, unsigned __int64 *a2)
{
  signed int SmtcProcesses; // ebx
  unsigned __int64 v4; // rsi
  _QWORD *v5; // r14
  __int64 v6; // r13
  _QWORD *v7; // rdi
  _WORD *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rsi
  volatile signed __int32 *v15; // rbx
  unsigned __int64 v16; // rcx
  __int128 v18; // [rsp+28h] [rbp-38h] BYREF
  __int64 v19; // [rsp+38h] [rbp-28h]
  __int128 v20; // [rsp+40h] [rbp-20h]
  int v21; // [rsp+50h] [rbp-10h]

  SmtcProcesses = 0;
  v4 = 0LL;
  v5 = (_QWORD *)*a1;
  while ( v5 )
  {
    v6 = v5[2];
    v5 = (_QWORD *)*v5;
    v18 = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    v21 = 10;
    SmtcProcesses = CApplication::GetSmtcProcesses(v6, (__int64)&v18);
    if ( SmtcProcesses < 0 )
      goto LABEL_35;
    v7 = (_QWORD *)v18;
    if ( (_QWORD)v18 )
    {
      while ( 1 )
      {
        v8 = *(_WORD **)(v6 + 24);
        v9 = 0LL;
        if ( v8 )
        {
          v10 = 1024LL;
          do
          {
            if ( !*v8 )
              break;
            ++v8;
            --v10;
          }
          while ( v10 );
          SmtcProcesses = v10 == 0 ? 0x80070057 : 0;
          v9 = v10 ? 1024 - v10 : 0LL;
        }
        else
        {
          SmtcProcesses = -2147024809;
        }
        v11 = SmtcProcesses < 0 ? 0LL : 2 * v9;
        if ( SmtcProcesses < 0 )
          break;
        v12 = v4 + v11 + 2;
        v13 = -1LL;
        if ( v12 >= v4 )
          v13 = v12;
        SmtcProcesses = v12 < v4 ? 0x80070216 : 0;
        if ( v12 < v4 )
          break;
        v14 = -1LL;
        if ( v13 + 4 >= v13 )
          v14 = v13 + 4;
        SmtcProcesses = v13 + 4 < v13 ? 0x80070216 : 0;
        if ( v13 + 4 < v13 )
          break;
        if ( !v7 )
          ATL::AtlThrowImpl(-2147467259);
        v15 = (volatile signed __int32 *)v7[2];
        v7 = (_QWORD *)*v7;
        if ( v15 && _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 32LL))(v15);
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v15 + 24LL))(v15, 1LL);
        }
        v16 = -1LL;
        if ( v14 + 4 >= v14 )
          v16 = v14 + 4;
        SmtcProcesses = v14 + 4 < v14 ? 0x80070216 : 0;
        if ( v14 + 4 < v14 )
          break;
        v4 = -1LL;
        if ( v16 + 4 >= v16 )
          v4 = v16 + 4;
        SmtcProcesses = v16 + 4 < v16 ? 0x80070216 : 0;
        if ( v16 + 4 < v16 )
          break;
        if ( !v7 )
          goto LABEL_34;
      }
LABEL_35:
      ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)&v18);
      return (unsigned int)SmtcProcesses;
    }
LABEL_34:
    ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)&v18);
  }
  *a2 = v4;
  return (unsigned int)SmtcProcesses;
}
