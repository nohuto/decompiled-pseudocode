/*
 * XREFs of ?CaptureUsermodeParameters@EscapeRequest@@UEAAXPEAX@Z @ 0x1C02B9AE0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

void __fastcall EscapeRequest::CaptureUsermodeParameters(EscapeRequest *this, _QWORD *a2)
{
  const void *v3; // rax
  int v4; // edi
  void *v5; // rcx

  v3 = (const void *)a2[4];
  v4 = *((_DWORD *)a2 + 10);
  if ( a2[2] == *((_QWORD *)this + 9) && v3 == *((const void **)this + 10) )
  {
    v5 = (void *)*((_QWORD *)this + 7);
    if ( v5 )
      memmove(v5, v3, *((unsigned int *)this + 12));
    *((_DWORD *)this + 16) = v4;
  }
}
