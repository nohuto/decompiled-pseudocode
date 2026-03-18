/*
 * XREFs of PopUnregisterPowerSettingCallback @ 0x140241124
 * Callers:
 *     PopDispatchPowerSettingCallbacks @ 0x1404E8230 (PopDispatchPowerSettingCallbacks.c)
 *     PoUnregisterPowerSettingCallback @ 0x1406FA220 (PoUnregisterPowerSettingCallback.c)
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall PopUnregisterPowerSettingCallback(_BYTE *a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rdx
  _QWORD *v3; // rdx

  v1 = *(_QWORD *)a1;
  if ( a1[33] )
  {
    if ( *(_BYTE **)(v1 + 8) != a1 || (v2 = (_QWORD *)*((_QWORD *)a1 + 1), (_BYTE *)*v2 != a1) )
      __fastfail(3u);
    *v2 = v1;
    *(_QWORD *)(v1 + 8) = v2;
    *((_QWORD *)a1 + 1) = a1;
    *(_QWORD *)a1 = a1;
    KeSetEvent(&PopPowerSettingCallbackReturned, 0, 0);
  }
  else
  {
    if ( *(_BYTE **)(v1 + 8) != a1 || (v3 = (_QWORD *)*((_QWORD *)a1 + 1), (_BYTE *)*v3 != a1) )
      __fastfail(3u);
    *v3 = v1;
    *(_QWORD *)(v1 + 8) = v3;
    *((_QWORD *)a1 + 1) = a1;
    *(_QWORD *)a1 = a1;
    *((_DWORD *)a1 + 4) = 0;
    ExFreePoolWithTag(a1, 0x74655350u);
  }
}
