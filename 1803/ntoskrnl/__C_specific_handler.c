/*
 * XREFs of __C_specific_handler @ 0x140187440
 * Callers:
 *     __GSHandlerCheck_SEH @ 0x1401A7108 (__GSHandlerCheck_SEH.c)
 * Callees:
 *     RtlUnwindEx @ 0x14012DE70 (RtlUnwindEx.c)
 *     KeCheckStackAndTargetAddress @ 0x14012F7E0 (KeCheckStackAndTargetAddress.c)
 *     _NLG_Notify @ 0x140187F00 (_NLG_Notify.c)
 *     __NLG_Return2 @ 0x140187F30 (__NLG_Return2.c)
 */

EXCEPTION_DISPOSITION __cdecl _C_specific_handler(
        struct _EXCEPTION_RECORD *ExceptionRecord,
        void *EstablisherFrame,
        struct _CONTEXT *ContextRecord,
        struct _DISPATCHER_CONTEXT *DispatcherContext)
{
  DWORD64 ImageBase; // r15
  unsigned __int64 v9; // rbp
  DWORD *HandlerData; // rbx
  DWORD ScopeIndex; // esi
  __int64 v12; // rax
  int v13; // eax
  DWORD v15; // r9d
  unsigned __int64 v16; // rdi
  DWORD v17; // edx
  __int64 v18; // rcx
  DWORD i; // r10d
  __int64 v20; // rax
  _QWORD v21[2]; // [rsp+30h] [rbp-38h] BYREF

  KeCheckStackAndTargetAddress(ContextRecord->Rip, ContextRecord->Rsp);
  ImageBase = DispatcherContext->ImageBase;
  v9 = DispatcherContext->ControlPc - ImageBase;
  HandlerData = (DWORD *)DispatcherContext->HandlerData;
  ScopeIndex = DispatcherContext->ScopeIndex;
  if ( (ExceptionRecord->ExceptionFlags & 0x66) != 0 )
  {
    v15 = *HandlerData;
    v16 = DispatcherContext->TargetIp - ImageBase;
    if ( ScopeIndex < *HandlerData )
    {
      v17 = *HandlerData;
      do
      {
        v18 = v17;
        if ( v9 >= HandlerData[4 * ScopeIndex + 1] && v9 < HandlerData[4 * ScopeIndex + 2] )
        {
          if ( (ExceptionRecord->ExceptionFlags & 0x20) != 0 )
          {
            for ( i = 0; i < v17; ++i )
            {
              if ( v16 >= HandlerData[4 * i + 1]
                && v16 < HandlerData[4 * i + 2]
                && HandlerData[4 * i + 4] == HandlerData[4 * ScopeIndex + 4]
                && HandlerData[4 * i + 3] == HandlerData[4 * ScopeIndex + 3] )
              {
                break;
              }
            }
            v18 = v15;
            if ( i != v15 )
              return 1;
          }
          v20 = HandlerData[4 * ScopeIndex + 4];
          if ( (_DWORD)v20 )
          {
            if ( v16 == v20 )
              return 1;
          }
          else
          {
            DispatcherContext->ScopeIndex = ScopeIndex + 1;
            LOBYTE(v18) = 1;
            ((void (__fastcall *)(__int64, void *))(ImageBase + HandlerData[4 * ScopeIndex + 3]))(v18, EstablisherFrame);
            v15 = *HandlerData;
            LODWORD(v18) = *HandlerData;
          }
        }
        ++ScopeIndex;
        v17 = v18;
      }
      while ( ScopeIndex < (unsigned int)v18 );
    }
  }
  else
  {
    v21[0] = ExceptionRecord;
    v21[1] = ContextRecord;
    while ( ScopeIndex < *HandlerData )
    {
      if ( v9 >= HandlerData[4 * ScopeIndex + 1]
        && v9 < HandlerData[4 * ScopeIndex + 2]
        && HandlerData[4 * ScopeIndex + 4] )
      {
        v12 = HandlerData[4 * ScopeIndex + 3];
        if ( (_DWORD)v12 == 1 )
          goto LABEL_10;
        v13 = ((__int64 (__fastcall *)(_QWORD *, void *))(ImageBase + v12))(v21, EstablisherFrame);
        if ( v13 < 0 )
          return 0;
        if ( v13 > 0 )
        {
LABEL_10:
          NLG_Notify(ImageBase + HandlerData[4 * ScopeIndex + 4], EstablisherFrame, 1LL);
          RtlUnwindEx(
            EstablisherFrame,
            (PVOID)(ImageBase + HandlerData[4 * ScopeIndex + 4]),
            ExceptionRecord,
            (PVOID)ExceptionRecord->ExceptionCode,
            DispatcherContext->ContextRecord,
            DispatcherContext->HistoryTable);
          _NLG_Return2();
        }
      }
      ++ScopeIndex;
    }
  }
  return 1;
}
