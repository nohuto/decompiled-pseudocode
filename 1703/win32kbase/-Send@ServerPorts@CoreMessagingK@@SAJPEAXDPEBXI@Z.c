/*
 * XREFs of ?Send@ServerPorts@CoreMessagingK@@SAJPEAXDPEBXI@Z @ 0x1C006C38C
 * Callers:
 *     CoreMsgSend @ 0x1C006C2DC (CoreMsgSend.c)
 * Callees:
 *     _TlgWrite @ 0x1C0052730 (_TlgWrite.c)
 *     ?Free@BufferCache@CoreMessagingK@@SAXPEAX@Z @ 0x1C006C528 (-Free@BufferCache@CoreMessagingK@@SAXPEAX@Z.c)
 *     ??$AllocUninitialized@UAlpcBufferK@@@BufferCache@CoreMessagingK@@SAJGPEAPEAUAlpcBufferK@@@Z @ 0x1C006C594 (--$AllocUninitialized@UAlpcBufferK@@@BufferCache@CoreMessagingK@@SAJGPEAPEAUAlpcBufferK@@@Z.c)
 *     ?ReferenceByHandle@CoreMsgObject@CoreMessagingK@@SAJPEAXW4ObjectType@2@DPEAPEAU12@@Z @ 0x1C006C6A8 (-ReferenceByHandle@CoreMsgObject@CoreMessagingK@@SAJPEAXW4ObjectType@2@DPEAPEAU12@@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall CoreMessagingK::ServerPorts::Send(void *a1, __int64 a2, const void *a3, unsigned int a4)
{
  size_t v4; // r12
  const void *v5; // r13
  _DWORD *v6; // rsi
  _DWORD *v7; // rdi
  int v8; // eax
  const GUID *v9; // r9
  int v10; // ebx
  _QWORD *v11; // rcx
  unsigned __int16 v12; // r15
  _DWORD *v13; // rcx
  char *v14; // rcx
  int v15; // eax
  void *v17; // [rsp+40h] [rbp-79h] BYREF
  PVOID Object; // [rsp+48h] [rbp-71h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-69h] BYREF
  char *v20; // [rsp+70h] [rbp-49h]
  __int64 v21; // [rsp+78h] [rbp-41h]
  _QWORD *v22; // [rsp+80h] [rbp-39h]
  __int64 v23; // [rsp+88h] [rbp-31h]
  _QWORD *v24; // [rsp+90h] [rbp-29h]
  __int64 v25; // [rsp+98h] [rbp-21h]
  char *v26; // [rsp+A0h] [rbp-19h]
  __int64 v27; // [rsp+A8h] [rbp-11h]

  v4 = a4;
  Object = 0LL;
  v5 = a3;
  v17 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( a4 > 0xFFA7 )
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
  if ( dword_1C0186C30 > 5u )
  {
    v21 = 4LL;
    v20 = (char *)Object + 16;
    v24 = v11 + 1;
    v26 = (char *)v11 + 12;
    v22 = v11;
    v23 = 8LL;
    v25 = 4LL;
    v27 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C0186C30, &unk_1C016BF9A, 0LL, v9, 6u, &pData);
  }
  v12 = v4 + 8;
  v10 = CoreMessagingK::BufferCache::AllocUninitialized<AlpcBufferK>((unsigned __int16)(v4 + 88), &v17);
  if ( v10 < 0 )
  {
    v7 = v17;
    goto LABEL_15;
  }
  v7 = v17;
  memset(v17, 0, 0x50uLL);
  v13 = v7 + 20;
  v7[14] = 1;
  *((_WORD *)v7 + 33) = 1;
  *((_WORD *)v7 + 1) = v4 + 88;
  *(_WORD *)v7 = v4 + 48;
  v7[18] = v12;
  if ( (_WORD)v4 == 0xFFF8 )
    v13 = 0LL;
  *v13 = v12;
  v13[1] = v6[4];
  v14 = (char *)(v7 + 20);
  if ( !v7[18] )
    v14 = 0LL;
  memmove(v14 + 8, v5, v4);
  v15 = ZwAlpcSendWaitReceivePort(**((_QWORD **)v6 + 3), 0x10000LL, v7, 0LL);
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
