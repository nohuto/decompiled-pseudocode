/*
 * XREFs of ?CaptureUsermodeParameters@FontManagementRequest@@UEAAXPEAX@Z @ 0x1C02B9B50
 * Callers:
 *     <none>
 * Callees:
 *     ?CaptureUsermodeFontObj@FontDriverDdiRequest@@KA_NPEAU_FONTOBJ@@0@Z @ 0x1C0091F74 (-CaptureUsermodeFontObj@FontDriverDdiRequest@@KA_NPEAU_FONTOBJ@@0@Z.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

void __fastcall FontManagementRequest::CaptureUsermodeParameters(FontManagementRequest *this, _QWORD *a2)
{
  __int64 v4; // r14
  const void *v5; // rsi
  struct _FONTOBJ *v6; // rax
  struct _FONTOBJ *v7; // rcx
  void *v8; // rcx

  v4 = a2[3];
  v5 = (const void *)a2[5];
  v6 = (struct _FONTOBJ *)a2[1];
  v7 = (struct _FONTOBJ *)*((_QWORD *)this + 4);
  if ( v7 )
  {
    if ( v6 != *((struct _FONTOBJ **)this + 10) || !FontDriverDdiRequest::CaptureUsermodeFontObj(v7, v6) )
      return;
  }
  else if ( v6 )
  {
    return;
  }
  if ( v4 == *((_QWORD *)this + 11) && v5 == *((const void **)this + 12) )
  {
    v8 = (void *)*((_QWORD *)this + 8);
    if ( v8 )
      memmove(v8, v5, *((unsigned int *)this + 14));
    *((_DWORD *)this + 18) = *((_DWORD *)a2 + 12);
  }
}
