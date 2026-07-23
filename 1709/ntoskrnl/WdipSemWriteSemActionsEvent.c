/*
 * XREFs of WdipSemWriteSemActionsEvent @ 0x14073F9BC
 * Callers:
 *     WdipSemDisableScenario @ 0x1405AB6EC (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x1405AB884 (WdipSemEnableScenario.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     WdipSemFastAllocate @ 0x1405AAA04 (WdipSemFastAllocate.c)
 *     WdipSemFastFree @ 0x1405AAA94 (WdipSemFastFree.c)
 *     WdipSemWriteEvent @ 0x1405AB5BC (WdipSemWriteEvent.c)
 *     WmiQueryTraceInformation @ 0x1405EE200 (WmiQueryTraceInformation.c)
 */

__int64 __fastcall WdipSemWriteSemActionsEvent(const EVENT_DESCRIPTOR *a1, __int64 a2)
{
  __int64 v4; // rsi
  NTSTATUS v5; // ebx
  __int64 v6; // rcx
  int v7; // eax
  ULONGLONG v8; // rbx
  int v9; // r15d
  PSLIST_ENTRY v10; // rax
  ULONGLONG v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  _SLIST_ENTRY **v14; // rdi
  int v16; // [rsp+30h] [rbp-D0h] BYREF
  int TraceInformation; // [rsp+34h] [rbp-CCh] BYREF
  __int64 Buffer; // [rsp+38h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+40h] [rbp-C0h] BYREF
  ULONGLONG v20; // [rsp+50h] [rbp-B0h]
  __int64 v21; // [rsp+58h] [rbp-A8h]
  int *v22; // [rsp+60h] [rbp-A0h]
  __int64 v23; // [rsp+68h] [rbp-98h]
  ULONGLONG v24; // [rsp+70h] [rbp-90h]
  __int64 v25; // [rsp+78h] [rbp-88h]
  _QWORD v26[124]; // [rsp+840h] [rbp+740h] BYREF

  v16 = 0;
  v4 = 0LL;
  if ( a1
    && a2
    && (LODWORD(Buffer) = _InterlockedExchange(&WdipContextLoggerId, WdipContextLoggerId),
        TraceInformation = 0,
        (_DWORD)Buffer) )
  {
    v5 = WmiQueryTraceInformation(LoggerEventsLostClass, &TraceInformation, 4u, 0LL, &Buffer);
    v7 = v16;
    if ( v5 >= 0 )
      v7 = TraceInformation;
    v16 = v7;
    if ( v5 >= 0 )
    {
      v8 = *(_QWORD *)(a2 + 32);
      v9 = *(_DWORD *)(v8 + 48);
      v20 = v8 + 16;
      v22 = &v16;
      v19.Ptr = v8;
      *(_QWORD *)&v19.Size = 16LL;
      v21 = 2LL;
      v23 = 4LL;
      v24 = v8 + 48;
      v25 = 4LL;
      if ( *(_DWORD *)(v8 + 48) )
      {
        while ( 1 )
        {
          Buffer = *(_QWORD *)(v8 + 8 * v4 + 56);
          v10 = WdipSemFastAllocate(4, 0x28u);
          v11 = (ULONGLONG)v10;
          if ( !v10 )
            break;
          v12 = Buffer;
          v26[v4] = v10;
          *v10 = *(PSLIST_ENTRY)v12;
          LOBYTE(v10[1].Next) = *(_BYTE *)(v12 + 18);
          *((_QWORD *)&v10[1].Next + 1) = *(_QWORD *)(v12 + 24);
          LODWORD(v10[2].Next) = *(_DWORD *)(v12 + 36);
          v6 = 2LL * (unsigned int)(v4 + 4);
          v13 = *(_DWORD *)(a2 + 4 * v4 + 48);
          v4 = (unsigned int)(v4 + 1);
          *(_DWORD *)(v11 + 36) = v13;
          *(&v19.Reserved + 2 * v6) = 0;
          *(&v19.Ptr + v6) = v11;
          *(&v19.Size + 2 * v6) = 40;
          if ( (unsigned int)v4 >= *(_DWORD *)(v8 + 48) )
            goto LABEL_11;
        }
        v5 = -1073741670;
      }
      else
      {
LABEL_11:
        v5 = WdipSemWriteEvent(v6, a1, (const GUID *)(a2 + 16), v9 + 4, &v19);
      }
    }
    if ( (_DWORD)v4 )
    {
      v14 = (_SLIST_ENTRY **)v26;
      do
      {
        WdipSemFastFree(4, *v14++);
        --v4;
      }
      while ( v4 );
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}
