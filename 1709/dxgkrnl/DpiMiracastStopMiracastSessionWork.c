/*
 * XREFs of DpiMiracastStopMiracastSessionWork @ 0x1C01E2720
 * Callers:
 *     <none>
 * Callees:
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C002F8D0 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C002FAC0 (DpiMiracastStopMiracastSessionSync.c)
 */

void __fastcall DpiMiracastStopMiracastSessionWork(PVOID IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  size_t v4; // [rsp+28h] [rbp-10h]

  LODWORD(v4) = 0;
  DpiMiracastStopMiracastSessionSync(
    *(char **)Context,
    *((_BYTE *)Context + 8),
    (union _LARGE_INTEGER *)Context + 2,
    0LL,
    *((_DWORD *)Context + 6),
    v4);
  DpiMiracastReleaseMiracastDeviceContext(*(int **)Context, (unsigned int)DpiMiracastStopMiracastSessionAsync);
  ExFreePoolWithTag(Context, 0);
}
