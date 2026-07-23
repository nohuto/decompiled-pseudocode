/*
 * XREFs of sub_1800D3F18 @ 0x1800D3F18
 * Callers:
 *     LdrAppxHandleIntegrityFailure @ 0x1800D3C90 (LdrAppxHandleIntegrityFailure.c)
 * Callees:
 *     EtwEventRegister @ 0x18001ADD0 (EtwEventRegister.c)
 *     EtwEventWrite @ 0x18005E0F0 (EtwEventWrite.c)
 *     EtwNotificationUnregister @ 0x18005FD10 (EtwNotificationUnregister.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 */

NTSTATUS __fastcall sub_1800D3F18(int a1, __int64 a2, __int64 a3)
{
  const EVENT_DESCRIPTOR *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  NTSTATUS result; // eax
  ULONGLONG RegHandle; // [rsp+20h] [rbp-50h] BYREF
  __int64 v8; // [rsp+28h] [rbp-48h] BYREF
  int v9; // [rsp+30h] [rbp-40h]
  int v10; // [rsp+34h] [rbp-3Ch]
  int *v11; // [rsp+38h] [rbp-38h]
  __int64 v12; // [rsp+40h] [rbp-30h]
  __int64 v13; // [rsp+48h] [rbp-28h]
  int v14; // [rsp+50h] [rbp-20h]
  int v15; // [rsp+54h] [rbp-1Ch]
  int v16; // [rsp+80h] [rbp+10h] BYREF

  v16 = a1;
  if ( a1 == -1073740673 )
  {
    v3 = &stru_180124670;
  }
  else
  {
    v3 = (const EVENT_DESCRIPTOR *)&unk_180124690;
    if ( a1 != -1073740674 )
      v3 = (const EVENT_DESCRIPTOR *)&unk_1801246F0;
  }
  v4 = -1LL;
  v8 = a2;
  v5 = -1LL;
  do
    ++v5;
  while ( *(_WORD *)(a2 + 2 * v5) );
  v10 = 0;
  v9 = 2 * v5 + 2;
  v11 = &v16;
  v12 = 4LL;
  v13 = a3;
  do
    ++v4;
  while ( *(_WORD *)(a3 + 2 * v4) );
  v15 = 0;
  v14 = 2 * v4 + 2;
  result = EtwEventRegister(&stru_180124720, 0LL, 0LL, &RegHandle);
  if ( !result )
  {
    EtwEventWrite(RegHandle, v3, 3u, (PEVENT_DATA_DESCRIPTOR)&v8);
    return EtwNotificationUnregister(RegHandle, 0LL);
  }
  return result;
}
