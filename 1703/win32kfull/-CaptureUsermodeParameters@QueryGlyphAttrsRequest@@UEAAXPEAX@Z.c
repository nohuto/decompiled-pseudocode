/*
 * XREFs of ?CaptureUsermodeParameters@QueryGlyphAttrsRequest@@UEAAXPEAX@Z @ 0x1C02B9C50
 * Callers:
 *     <none>
 * Callees:
 *     ?CaptureUsermodeFontObj@FontDriverDdiRequest@@KA_NPEAU_FONTOBJ@@0@Z @ 0x1C0091F74 (-CaptureUsermodeFontObj@FontDriverDdiRequest@@KA_NPEAU_FONTOBJ@@0@Z.c)
 *     ?Win32ProbeForRead@@YAXPEAX_KK@Z @ 0x1C00D5920 (-Win32ProbeForRead@@YAXPEAX_KK@Z.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

void __fastcall QueryGlyphAttrsRequest::CaptureUsermodeParameters(QueryGlyphAttrsRequest *this, struct _FONTOBJ **a2)
{
  struct _FONTOBJ *v4; // rdx
  char *v5; // rdi
  size_t v6; // rsi
  _DWORD *v7; // rax
  _DWORD *v8; // rbx
  unsigned int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // r8d
  int v12; // eax

  v4 = *a2;
  v5 = (char *)a2[2];
  if ( v4 == *((struct _FONTOBJ **)this + 6) )
  {
    if ( FontDriverDdiRequest::CaptureUsermodeFontObj(*((struct _FONTOBJ **)this + 3), v4) )
    {
      if ( v5 )
      {
        Win32ProbeForRead(v5, 16LL, 8);
        v6 = *(unsigned int *)v5;
        if ( (unsigned int)v6 >= 0x10 )
        {
          Win32ProbeForRead(v5, v6, 8);
          v7 = EngAllocMem(0, v6, 0x74614446u);
          v8 = v7;
          if ( v7 )
          {
            memmove(v7, v5, v6);
            *v8 = v6;
            v9 = v8[1];
            if ( v9 + 7 >= v9
              && (v10 = v9 + 7, (v11 = v10 >> 3, v12 = (v10 >> 3) + 12, v11 < 0xFFFFFFF4) && v12 == (_DWORD)v6) )
            {
              *((_QWORD *)this + 5) = v8;
            }
            else
            {
              EngFreeMem(v8);
            }
          }
        }
      }
    }
  }
}
