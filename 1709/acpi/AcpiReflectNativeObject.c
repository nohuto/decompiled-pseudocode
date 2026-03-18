/*
 * XREFs of AcpiReflectNativeObject @ 0x1C0054A40
 * Callers:
 *     <none>
 * Callees:
 *     AMLIPauseInterpreter @ 0x1C005B7DC (AMLIPauseInterpreter.c)
 *     AMLIResumeInterpreter @ 0x1C005B900 (AMLIResumeInterpreter.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C005C51C (AMLICreateNativeNamespaceObject.c)
 */

__int64 __fastcall AcpiReflectNativeObject(__int64 a1)
{
  char v2; // r12
  char v3; // r13
  int v4; // ebx
  unsigned int i; // r14d
  unsigned int v6; // r15d
  int v7; // r12d
  int v8; // eax
  int v9; // r9d
  bool v10; // cf
  int v11; // edx
  struct _KEVENT Event; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v14[5]; // [rsp+48h] [rbp-28h] BYREF
  char v15; // [rsp+B0h] [rbp+40h] BYREF
  char v16; // [rsp+B8h] [rbp+48h]
  __int64 v17; // [rsp+C0h] [rbp+50h]

  v17 = *(_QWORD *)(a1 + 16);
  v2 = 0;
  v16 = 0;
  v3 = 0;
  v4 = 0;
  for ( i = 0; i < 2; ++i )
  {
    v6 = 0;
    if ( !*(_DWORD *)(a1 + 24) )
      goto LABEL_16;
    v7 = v17;
    do
    {
      v8 = *(_DWORD *)(a1 + 40LL * v6 + 48);
      if ( i )
      {
        if ( (v8 & 1) == 0 )
          goto LABEL_14;
        goto LABEL_10;
      }
      if ( *(_DWORD *)(a1 + 40LL * v6 + 44) <= 1u )
      {
        *(_DWORD *)(a1 + 40LL * v6 + 64) = -1073741823;
        if ( (v8 & 1) != 0 )
        {
          v3 = 1;
          goto LABEL_14;
        }
LABEL_10:
        v9 = *(_DWORD *)(a1 + 40LL * v6 + 52);
        v10 = *(_DWORD *)(a1 + 40LL * v6 + 44) != 0;
        v11 = *(_DWORD *)(a1 + 40LL * v6 + 40);
        v15 = 0;
        v4 = AMLICreateNativeNamespaceObject(v10 ? 6 : 8, v11, v7, v9, *(_DWORD *)(a1 + 40LL * v6 + 56), (__int64)&v15);
        if ( v4 < 0 && v15 )
          v4 = 0;
        goto LABEL_13;
      }
      v4 = -1073741637;
LABEL_13:
      *(_DWORD *)(a1 + 40LL * v6 + 64) = v4;
LABEL_14:
      ++v6;
    }
    while ( v6 < *(_DWORD *)(a1 + 24) );
    v2 = v16;
LABEL_16:
    if ( !v3 || i == 1 )
      break;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v14[2] = AcpiInterpreterPausedSignalEventCallback;
    v14[3] = &Event;
    v14[1] = v14;
    v14[0] = v14;
    v4 = AMLIPauseInterpreter(v14);
    if ( v4 == 259 )
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    if ( v4 < 0 )
      break;
    v2 = 1;
    v16 = 1;
  }
  if ( v2 )
    AMLIResumeInterpreter();
  return (unsigned int)v4;
}
