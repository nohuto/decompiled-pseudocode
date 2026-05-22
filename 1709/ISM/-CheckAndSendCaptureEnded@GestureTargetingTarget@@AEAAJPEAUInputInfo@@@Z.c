/*
 * XREFs of ?CheckAndSendCaptureEnded@GestureTargetingTarget@@AEAAJPEAUInputInfo@@@Z @ 0x180015BAC
 * Callers:
 *     ?RouteNextInputToTarget@GestureTargetingTarget@@QEAAJ_KPEAX1AEBUtagMsgRoutingInfo@@@Z @ 0x18001529C (-RouteNextInputToTarget@GestureTargetingTarget@@QEAAJ_KPEAX1AEBUtagMsgRoutingInfo@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?GetPointersFromInput@@YAJPEAUInputInfo@@KPEAPEAUPointer@@PEAK@Z @ 0x180009424 (-GetPointersFromInput@@YAJPEAUInputInfo@@KPEAPEAUPointer@@PEAK@Z.c)
 *     ?InContactPointersPresent@GestureTargetingTarget@@AEAA_NPEAUInputInfo@@@Z @ 0x180015B14 (-InContactPointersPresent@GestureTargetingTarget@@AEAA_NPEAUInputInfo@@@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GestureTargetingTarget::CheckAndSendCaptureEnded(GestureTargetingTarget *this, struct InputInfo *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // r12d
  unsigned int v6; // r14d
  _QWORD *v7; // rsi
  int PointersFromInput; // eax
  __int64 v9; // rcx
  struct Pointer **v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  char v13; // al
  int v14; // r9d
  char v15; // al
  unsigned int v17; // [rsp+30h] [rbp-98h] BYREF
  __int64 v18; // [rsp+38h] [rbp-90h]
  struct Pointer *v19[10]; // [rsp+40h] [rbp-88h] BYREF

  v17 = 0;
  if ( !GestureTargetingTarget::InContactPointersPresent(this, a2) )
  {
    v5 = 0;
    v6 = *((_DWORD *)this + 21) - 1;
    if ( *((_DWORD *)this + 21) != 1 )
    {
      while ( 1 )
      {
        v18 = 0LL;
        if ( !*((_DWORD *)this + 21) )
          break;
        v7 = (_QWORD *)(*((_QWORD *)this + 8) + 2864LL * *((unsigned int *)this + 19));
        if ( *((_BYTE *)v7 + 2856) )
        {
          PointersFromInput = GetPointersFromInput((struct InputInfo *)(v7 + 1), v3, v19, &v17);
          if ( PointersFromInput < 0 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              McTemplateU0qqq(v9, &MinInput_Warning_CheckResult, 4, 578, PointersFromInput);
            goto LABEL_24;
          }
          if ( v17 )
          {
            v10 = v19;
            v11 = v17;
            do
            {
              v12 = (__int64)*v10++;
              *(_DWORD *)(v12 + 4) = 0;
              --v11;
            }
            while ( v11 );
          }
          *((_DWORD *)v7 + 137) = 4;
          (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*v7 + 24LL))(*v7, v7 + 1);
        }
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 16LL))(*v7);
        v4 = *((unsigned int *)this + 21);
        if ( !(_DWORD)v4 )
        {
          v13 = Microsoft_OneCore_MinInputEnableBits;
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            McTemplateU0qqq(v4, &MinInput_Warning_CheckResult, 4, 93, 5);
            v13 = Microsoft_OneCore_MinInputEnableBits;
          }
          if ( (v13 & 2) != 0 )
          {
            v14 = 593;
            goto LABEL_23;
          }
          goto LABEL_24;
        }
        v3 = (unsigned int)(*((_DWORD *)this + 19) + 1) % *((_DWORD *)this + 18);
        *((_DWORD *)this + 19) = v3;
        *((_DWORD *)this + 21) = v4 - 1;
        if ( ++v5 >= v6 )
          return 0LL;
      }
      v15 = Microsoft_OneCore_MinInputEnableBits;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        McTemplateU0qqq(v4, &MinInput_Warning_CheckResult, 4, 155, 5);
        v15 = Microsoft_OneCore_MinInputEnableBits;
      }
      if ( (v15 & 2) != 0 )
      {
        v14 = 570;
LABEL_23:
        McTemplateU0qqq(v4, &MinInput_Warning_CheckResult, 4, v14, 5);
      }
LABEL_24:
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
  }
  return 0LL;
}
