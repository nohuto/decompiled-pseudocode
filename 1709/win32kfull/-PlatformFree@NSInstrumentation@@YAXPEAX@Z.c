/*
 * XREFs of ?PlatformFree@NSInstrumentation@@YAXPEAX@Z @ 0x1C00C4940
 * Callers:
 *     PlaySoundPostMessage @ 0x1C036B008 (PlaySoundPostMessage.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::PlatformFree(PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0);
}
