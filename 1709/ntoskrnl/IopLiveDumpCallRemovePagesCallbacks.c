/*
 * XREFs of IopLiveDumpCallRemovePagesCallbacks @ 0x14042ACD0
 * Callers:
 *     IopLiveDumpEstimateMemoryPages @ 0x14042B67C (IopLiveDumpEstimateMemoryPages.c)
 * Callees:
 *     EtwWrite @ 0x140087CA0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     IoFreeDumpRange @ 0x1401F6200 (IoFreeDumpRange.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1401FBC50 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTraceRemovePagesCallbackFailure @ 0x1401FC1EC (IopLiveDumpTraceRemovePagesCallbackFailure.c)
 *     KeValidateBugCheckCallbackRecord @ 0x140206278 (KeValidateBugCheckCallbackRecord.c)
 *     MmIsAddressValid @ 0x140219970 (MmIsAddressValid.c)
 */

char __fastcall IopLiveDumpCallRemovePagesCallbacks(__int64 a1)
{
  _DWORD *v1; // r13
  ULONG v2; // edi
  __int64 *v3; // rsi
  bool IsTracingEnabled; // r12
  __int64 *v5; // r15
  __int64 *v6; // rax
  void *v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  _BYTE *v10; // rax
  signed int v11; // ecx
  char v12; // r12
  int v13; // ecx
  char *v14; // rdx
  int v15; // r9d
  int v16; // eax
  bool v18; // [rsp+31h] [rbp-D7h]
  _QWORD v20[2]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v21[4]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 *v22; // [rsp+80h] [rbp-88h]
  __int64 v23; // [rsp+88h] [rbp-80h]
  _QWORD v24[2]; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v25[6]; // [rsp+A0h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+D0h] [rbp-38h] BYREF

  v1 = (_DWORD *)a1;
  v23 = a1;
  memset(v21, 0, sizeof(v21));
  memset(v25, 0, sizeof(v25));
  v2 = 1;
  v3 = qword_140429230;
  IsTracingEnabled = IopLiveDumpIsTracingEnabled();
  v18 = IsTracingEnabled;
  if ( IsTracingEnabled )
    EtwWrite(IopLiveDumpEtwRegHandle, &LIVEDUMP_EVENT_SIZING_WORKFLOW_REMOVEPAGES_CALLBACKS_START, 0LL, 0, 0LL);
  v5 = (__int64 *)KeBugCheckAddRemovePagesCallbackListHead;
  v6 = &KeBugCheckAddRemovePagesCallbackListHead;
  v20[0] = &KeBugCheckAddRemovePagesCallbackListHead;
  while ( 1 )
  {
    v20[1] = v5;
    if ( v5 == &KeBugCheckAddRemovePagesCallbackListHead )
      break;
    v22 = v5;
    LOBYTE(v6) = KeValidateBugCheckCallbackRecord((__int64)v5, 6, v20);
    if ( (_BYTE)v6 )
    {
      if ( IsTracingEnabled )
      {
        v7 = (void *)v5[3];
        if ( !v7 || !MmIsAddressValid(v7) )
          goto LABEL_19;
        v3 = (__int64 *)v5[3];
        v8 = 0;
        if ( v3 )
        {
          v9 = 257LL;
          v10 = (_BYTE *)v5[3];
          do
          {
            if ( !*v10 )
              break;
            ++v10;
            --v9;
          }
          while ( v9 );
          v11 = v9 == 0 ? 0xC000000D : 0;
          v8 = v9 ? 257 - v9 : 0;
        }
        else
        {
          v11 = -1073741811;
        }
        if ( v11 >= 0 )
        {
          v2 = v8 + 1;
        }
        else
        {
LABEL_19:
          v2 = 1;
          v3 = qword_140429230;
        }
        UserData.Ptr = (ULONGLONG)v3;
        UserData.Size = v2;
        UserData.Reserved = 0;
        EtwWrite(
          IopLiveDumpEtwRegHandle,
          &LIVEDUMP_EVENT_SIZING_WORKFLOW_REMOVEPAGES_CALLBACK_START,
          0LL,
          1u,
          &UserData);
      }
      v21[0] = 0LL;
      HIDWORD(v21[1]) = *v1;
      do
      {
        v21[2] = 0LL;
        LODWORD(v21[1]) = 0;
        v21[3] = 0LL;
        v12 = 0;
        ((void (__fastcall *)(__int64, __int64 *, _QWORD *))v22[2])(6LL, v22, v21);
        if ( v21[3] )
        {
          v13 = v21[1];
          if ( (v21[1] & 0x80000003) != 0 )
          {
            if ( SLODWORD(v21[1]) >= 0 )
            {
              v12 = 0;
            }
            else
            {
              v12 = 1;
              v13 = v21[1] & 0x7FFFFFFF;
              LODWORD(v21[1]) &= ~0x80000000;
            }
            if ( ((v13 - 1) & v13) != 0 )
            {
              v16 = -1073741811;
            }
            else
            {
              v14 = (char *)v21[2];
              if ( (v13 & 1) != 0 )
              {
                v15 = 0;
              }
              else
              {
                v15 = 2;
                v14 = (char *)(v21[2] >> 12);
              }
              v24[0] = *(_QWORD *)(a1 + 400);
              v24[1] = *(_QWORD *)(a1 + 408);
              v25[2] = v24;
              v16 = IoFreeDumpRange((__int64)v25, v14, v21[3], v15);
            }
            if ( v16 < 0 )
            {
              v12 = 0;
              IopLiveDumpTraceRemovePagesCallbackFailure((__int64)v3, v2, v16);
            }
          }
        }
      }
      while ( v12 );
      IsTracingEnabled = v18;
      if ( v18 )
      {
        UserData.Ptr = (ULONGLONG)v3;
        UserData.Size = v2;
        UserData.Reserved = 0;
        EtwWrite(IopLiveDumpEtwRegHandle, &LIVEDUMP_EVENT_SIZING_WORKFLOW_REMOVEPAGES_CALLBACK_END, 0LL, 1u, &UserData);
      }
      v1 = (_DWORD *)a1;
    }
    else if ( !v20[0] )
    {
      break;
    }
    v5 = (__int64 *)*v5;
    v6 = &KeBugCheckAddRemovePagesCallbackListHead;
  }
  if ( IsTracingEnabled )
    LOBYTE(v6) = EtwWrite(
                   IopLiveDumpEtwRegHandle,
                   &LIVEDUMP_EVENT_SIZING_WORKFLOW_REMOVEPAGES_CALLBACKS_END,
                   0LL,
                   0,
                   0LL);
  return (char)v6;
}
