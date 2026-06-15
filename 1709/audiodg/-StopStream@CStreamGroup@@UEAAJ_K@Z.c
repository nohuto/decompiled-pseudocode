/*
 * XREFs of ?StopStream@CStreamGroup@@UEAAJ_K@Z @ 0x140035C00
 * Callers:
 *     ?StopStream@CStreamGroup@@WBI@EAAJ_K@Z @ 0x14001E7D0 (-StopStream@CStreamGroup@@WBI@EAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamGroup::StopStream(CStreamGroup *this, __int64 a2)
{
  return CSubmixImpl::StopStream((CStreamGroup *)((char *)this + 24), a2);
}
