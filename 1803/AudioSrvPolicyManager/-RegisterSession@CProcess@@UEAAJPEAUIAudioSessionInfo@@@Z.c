/*
 * XREFs of ?RegisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z @ 0x180014B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CProcess::RegisterSession(CProcess *this, struct IAudioSessionInfo *a2)
{
  if ( a2 )
    return CApplicationManager::RegisterSession(this, (CProcess *)((char *)this - 16), a2);
  else
    return -2147024809;
}
