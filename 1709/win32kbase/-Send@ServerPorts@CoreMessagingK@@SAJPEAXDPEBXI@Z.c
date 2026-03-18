/*
 * XREFs of ?Send@ServerPorts@CoreMessagingK@@SAJPEAXDPEBXI@Z @ 0x1C00119B4
 * Callers:
 *     CoreMsgSend @ 0x1C0011904 (CoreMsgSend.c)
 * Callees:
 *     ?Free@BufferCache@CoreMessagingK@@SAXPEAX@Z @ 0x1C0011B50 (-Free@BufferCache@CoreMessagingK@@SAXPEAX@Z.c)
 *     ??$AllocUninitialized@UAlpcBufferK@@@BufferCache@CoreMessagingK@@SAJGPEAPEAUAlpcBufferK@@@Z @ 0x1C0011BC0 (--$AllocUninitialized@UAlpcBufferK@@@BufferCache@CoreMessagingK@@SAJGPEAPEAUAlpcBufferK@@@Z.c)
 *     ?ReferenceByHandle@CoreMsgObject@CoreMessagingK@@SAJPEAXW4ObjectType@2@DPEAPEAU12@@Z @ 0x1C0011CD4 (-ReferenceByHandle@CoreMsgObject@CoreMessagingK@@SAJPEAXW4ObjectType@2@DPEAPEAU12@@Z.c)
 *     _TlgWrite @ 0x1C001C674 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 __fastcall CoreMessagingK::ServerPorts::Send(void *a1, __int64 a2, const void *a3, unsigned int a4)
{
  size_t v4; // r12
  const void *v5; // r13
  _QWORD *v6; // rsi
  _DWORD *v7; // rdi
  int v8; // eax
  const GUID *v9; // r9
  int v10; // ebx
  _QWORD *v11; // rcx
  unsigned __int16 v12; // r15
  char *v13; // rcx
  char *v14; // rcx
  int v15; // eax
  void *v17; // [rsp+40h] [rbp-69h] BYREF
  PVOID Object; // [rsp+48h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-59h] BYREF
  char *v20; // [rsp+70h] [rbp-39h]
  __int64 v21; // [rsp+78h] [rbp-31h]
  _QWORD *v22; // [rsp+80h] [rbp-29h]
  __int64 v23; // [rsp+88h] [rbp-21h]
  _QWORD *v24; // [rsp+90h] [rbp-19h]
  __int64 v25; // [rsp+98h] [rbp-11h]
  char *v26; // [rsp+A0h] [rbp-9h]
  __int64 v27; // [rsp+A8h] [rbp-1h]

  v4 = a4;
  Object = 0LL;
  v5 = a3;
  v17 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( a4 > 0xFF9F )
  {
    v10 = -1073741582;
    goto LABEL_15;
  }
  LOBYTE(a3) = a2;
  v8 = CoreMessagingK::CoreMsgObject::ReferenceByHandle(a1, a2, a3, &Object);
  v6 = Object;
  v10 = v8;
  if ( v8 < 0 )
    goto LABEL_15;
  v11 = (_QWORD *)*((_QWORD *)Object + 3);
  if ( !*v11 )
    goto LABEL_18;
  if ( dword_1C0188C40 > 5u )
  {
    v21 = 8LL;
    v20 = (char *)Object + 16;
    v24 = v11 + 1;
    v26 = (char *)v11 + 12;
    v22 = v11;
    v23 = 8LL;
    v25 = 4LL;
    v27 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C0188C40, &unk_1C016C3AA, 0LL, v9, 6u, &pData);
  }
  v12 = v4 + 16;
  v10 = CoreMessagingK::BufferCache::AllocUninitialized<AlpcBufferK>((unsigned __int16)(v4 + 96), &v17);
  if ( v10 < 0 )
  {
    v7 = v17;
    goto LABEL_15;
  }
  v7 = v17;
  memset(v17, 0, 0x50uLL);
  v13 = (char *)(v7 + 20);
  v7[14] = 1;
  *((_WORD *)v7 + 33) = 1;
  *((_WORD *)v7 + 1) = v4 + 96;
  *(_WORD *)v7 = v4 + 56;
  v7[18] = v12;
  if ( (_WORD)v4 == 0xFFF0 )
    v13 = 0LL;
  *((_DWORD *)v13 + 2) = v12;
  *(_QWORD *)v13 = v6[2];
  v14 = (char *)(v7 + 20);
  if ( !v7[18] )
    v14 = 0LL;
  memmove(v14 + 16, v5, v4);
  v15 = ZwAlpcSendWaitReceivePort(*(_QWORD *)v6[3], 0x10000LL, v7, 0LL, 0LL, 0LL, 0LL, 0LL);
  v10 = v15;
  if ( v15 == -1073741769 || v15 == -1073740032 || v15 == -1073740029 || v15 == -1073740025 )
LABEL_18:
    v10 = -1073741769;
LABEL_15:
  CoreMessagingK::BufferCache::Free(v7);
  if ( v6 )
    ObfDereferenceObject(v6);
  return (unsigned int)v10;
}
