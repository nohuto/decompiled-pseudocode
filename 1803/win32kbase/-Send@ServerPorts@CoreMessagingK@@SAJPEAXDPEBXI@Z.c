/*
 * XREFs of ?Send@ServerPorts@CoreMessagingK@@SAJPEAXDPEBXI@Z @ 0x1C0056B58
 * Callers:
 *     CoreMsgSend @ 0x1C0056AA8 (CoreMsgSend.c)
 * Callees:
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     ?Free@BufferCache@CoreMessagingK@@SAXPEAX@Z @ 0x1C0056D04 (-Free@BufferCache@CoreMessagingK@@SAXPEAX@Z.c)
 *     ??$AllocUninitialized@UAlpcBufferK@@@BufferCache@CoreMessagingK@@SAJGPEAPEAUAlpcBufferK@@@Z @ 0x1C0056D7C (--$AllocUninitialized@UAlpcBufferK@@@BufferCache@CoreMessagingK@@SAJGPEAPEAUAlpcBufferK@@@Z.c)
 *     ?ReferenceByHandle@CoreMsgObject@CoreMessagingK@@SAJPEAXW4ObjectType@2@DPEAPEAU12@@Z @ 0x1C0056E58 (-ReferenceByHandle@CoreMsgObject@CoreMessagingK@@SAJPEAXW4ObjectType@2@DPEAPEAU12@@Z.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

__int64 __fastcall CoreMessagingK::ServerPorts::Send(void *a1, __int64 a2, void *a3, unsigned int a4)
{
  size_t v4; // r13
  _QWORD *v5; // rsi
  _DWORD *v6; // rdi
  int v7; // eax
  const GUID *v8; // r9
  int v9; // ebx
  _QWORD *v10; // rcx
  __int64 v11; // r12
  unsigned __int16 v12; // r15
  char *v13; // rcx
  int v14; // eax
  void *v16; // [rsp+40h] [rbp-69h] BYREF
  PVOID Object; // [rsp+48h] [rbp-61h] BYREF
  void *Src; // [rsp+50h] [rbp-59h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-49h] BYREF
  char *v20; // [rsp+80h] [rbp-29h]
  __int64 v21; // [rsp+88h] [rbp-21h]
  _QWORD *v22; // [rsp+90h] [rbp-19h]
  __int64 v23; // [rsp+98h] [rbp-11h]
  _QWORD *v24; // [rsp+A0h] [rbp-9h]
  __int64 v25; // [rsp+A8h] [rbp-1h]
  char *v26; // [rsp+B0h] [rbp+7h]
  __int64 v27; // [rsp+B8h] [rbp+Fh]

  v4 = a4;
  Src = a3;
  v5 = 0LL;
  Object = 0LL;
  v6 = 0LL;
  v16 = 0LL;
  if ( a4 > 0xFF9F )
  {
    v9 = -1073741582;
  }
  else
  {
    v7 = CoreMessagingK::CoreMsgObject::ReferenceByHandle(a1, a2, a3, &Object);
    v5 = Object;
    v9 = v7;
    if ( v7 < 0 )
      goto LABEL_15;
    v10 = (_QWORD *)*((_QWORD *)Object + 3);
    if ( !*v10 )
      goto LABEL_19;
    if ( dword_1C019A350 > 5u )
    {
      v21 = 8LL;
      v20 = (char *)Object + 16;
      v24 = v10 + 1;
      v26 = (char *)v10 + 12;
      v22 = v10;
      v23 = 8LL;
      v25 = 4LL;
      v27 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C019A350, &unk_1C017A6CB, 0LL, v8, 6u, &pData);
    }
    v11 = 16LL;
    v12 = v4 + 16;
    v9 = CoreMessagingK::BufferCache::AllocUninitialized<AlpcBufferK>((unsigned __int16)(v4 + 96), &v16);
    if ( v9 < 0 )
    {
      v6 = v16;
      goto LABEL_15;
    }
    v6 = v16;
    memset(v16, 0, 0x50uLL);
    v6[14] = 1;
    v13 = (char *)(v6 + 20);
    *((_WORD *)v6 + 33) = 1;
    *((_WORD *)v6 + 1) = v4 + 96;
    *(_WORD *)v6 = v4 + 56;
    v6[18] = v12;
    if ( (_WORD)v4 == 0xFFF0 )
      v13 = 0LL;
    *((_DWORD *)v13 + 2) = v12;
    *(_QWORD *)v13 = v5[2];
    if ( v6[18] )
      v11 = (__int64)(v6 + 24);
    memmove((void *)v11, Src, v4);
    v14 = ZwAlpcSendWaitReceivePort(*(_QWORD *)v5[3], 0x10000LL, v6, 0LL, 0LL, 0LL, 0LL, 0LL);
    v9 = v14;
    if ( v14 == -1073741769 || v14 == -1073740032 || v14 == -1073740029 || v14 == -1073740025 )
LABEL_19:
      v9 = -1073741769;
  }
LABEL_15:
  CoreMessagingK::BufferCache::Free(v6);
  if ( v5 )
    ObfDereferenceObject(v5);
  return (unsigned int)v9;
}
