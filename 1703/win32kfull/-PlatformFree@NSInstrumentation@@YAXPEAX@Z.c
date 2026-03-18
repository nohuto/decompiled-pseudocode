/*
 * XREFs of ?PlatformFree@NSInstrumentation@@YAXPEAX@Z @ 0x1C00D2960
 * Callers:
 *     PlaySoundPostMessage @ 0x1C0370070 (PlaySoundPostMessage.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::PlatformFree(PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0);
}
